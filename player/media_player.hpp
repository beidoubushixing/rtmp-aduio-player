#ifndef _MEDIA_PLAYER_H_
#define _MEDIA_PLAYER_H_

#include <iostream>
#include "player.h"
#include "thread.hpp"
#include "audio_dec.hpp"
#include "alsa_pcm.hpp"
//using namespace std;

class MediaPlayer: public Thread
{
public:
	//typedef std::shared_ptr<MediaPlayer> Ptr;
	MediaPlayer();
	~MediaPlayer();
	void play(const char* strUrl) ;					// ���Žӿ�
	void pause(bool bPause) ;
	void onLoop();									// ά��һ���������
	void onAAC(const AdtsFrame &data);
	//std::shared_ptr<AudioDec> _aacDec;////aac���������
	AudioDec *audioDec_;
	AlsaPcm *alsaPcm_;
};

#endif
