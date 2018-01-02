#ifndef _MEDIA_PLAYER_H_
#define _MEDIA_PLAYER_H_

#include <iostream>
#include "player.h"
#include "thread.hpp"
//using namespace std;

class MediaPlayer: public Thread
{
	//typedef std::shared_ptr<MediaPlayer> Ptr;
	MediaPlayer();
	~MediaPlayer();
	void play(const char* strUrl) ;					// ���Žӿ�
	void pause(bool bPause) ;
	void onLoop();									// ά��һ���������
	void onAAC(const AdtsFrame &data);
	//std::shared_ptr<AudioDec> _aacDec;////aac���������
};

#endif
