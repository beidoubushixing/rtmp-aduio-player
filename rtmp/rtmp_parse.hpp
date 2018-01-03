#ifndef _RTMP_PARSE_HPP_
#define _RTMP_PARSE_HPP_

#include "player.h"
#include "thread.hpp"
#include "audio_dec.hpp"

class MediaPlayer;
class RtmpParser:public Thread
{
public:
	// 
	RtmpParser(const char *url);
	bool init();
	bool inputData(const char *pcData, int iLen);	// ֻ�����ݽ���,���ڲ��߳���parse����
	// ���û���buffer
	void onGetAAC(const uint8_t *pcData, int iLen, uint32_t ui32TimeStamp);
	void onLoop();							//�ڲ��߳�

	int m_iSampleRate = 44100;
	int m_iSampleBit = 16;
	int m_iChannel = 2;
private:
	AdtsFrame m_adts;
	char rtmpUrl_[256];
	MediaPlayer *mediaPlayer_;
};
#endif