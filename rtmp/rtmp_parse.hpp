#ifndef _RTMP_PARSE_HPP_
#define _RTMP_PARSE_HPP_

#include "player.h"
#include "thread.hpp"
#include "audio_dec.hpp"
class RtmpParser:public Thread
{
public:
	// 
	RtmpParser(const char *url);
	bool init();
	bool inputData(const char *pcData, int iLen);	// ֻ�����ݽ���,���ڲ��߳���parse����
	// ���û���buffer
	void onGetAAC(const char *pcData, int iLen, uint32_t ui32TimeStamp);
	void onLoop();							//�ڲ��߳�
private:
	int m_iSampleRate = 44100;
	int m_iSampleBit = 16;
	int m_iChannel = 1;
	AdtsFrame m_adts;
	char rtmpUrl_[256];
	//AudioDec audioDec_;
};
#endif