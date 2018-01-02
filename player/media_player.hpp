#ifndef SRC_PLAYER_MEDIAPLAYER_H_
#define SRC_PLAYER_MEDIAPLAYER_H_

class MediaPlayer 
{
	typedef std::shared_ptr<MediaPlayer> Ptr;

	MediaPlayer();
	virtual ~MediaPlayer();
	void play(const char* strUrl) ;					// ���Žӿ�
	void pause(bool bPause) ;
	void onLoop();									// ά��һ���������

	std::shared_ptr<AudioDec> _aacDec;////aac���������
};

#endif
