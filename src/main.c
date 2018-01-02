
/**
 * rtmp��Ƶ������
 *
 * ���츻
 * leixiaohua1020@126.com
 * zhanghuicuc@gmail.com
 * �й���ý��ѧ/���ֵ��Ӽ���
 * Communication University of China / Digital TV Technology
 * http://blog.csdn.net/leixiaohua1020
 *
 * ���������ڽ���RTMP��ý�岢�ڱ��ر����FLV��ʽ���ļ���
 * This program can receive rtmp live stream and save it as local flv file.
 * �������� 
 * (1)librtmp
 * (2)flaac
 * (3)x264
 * (4)sdl2
 */
#include <iostream>
#include <cstring>
     

#include <librtmp/rtmp.h>
#include <librtmp/log.h>
using namespace std;

int InitSockets()
{
	
	return 1;
}

void CleanupSockets()
{
	
}

int main(int argc, char* argv[])
{
	InitSockets();
	
	double duration=-1;
	int nRead;
	//is live stream ?
	bool bLiveStream=true;				
	char rtmpUrl[256];
	
	int bufsize=1024*1024*10;			
	char *buf =  new char[bufsize];
	memset(buf,0,bufsize);
	long countbufsize=0;
	
	FILE *fp=fopen("receive.flv","wb");
	if (!fp){
		RTMP_LogPrintf("Open File Error.\n");
		CleanupSockets();
		return -1;
	}

	if(argc < 2)
	{
        RTMP_LogPrintf("please use rtmp-save-flv  rtmp_url\n");
        strcpy(rtmpUrl, "rtmp://live.hkstv.hk.lxdns.com/live/hks");
        RTMP_LogPrintf("used default url = %s\n", rtmpUrl);
	}
	else
	{
        strcpy(rtmpUrl,argv[1]);
        RTMP_LogPrintf("user url = %s\n", rtmpUrl);
	}
	
	
	/* set log level */
	//RTMP_LogLevel loglvl=RTMP_LOGDEBUG;
	//RTMP_LogSetLevel(loglvl);

	RTMP *rtmp=RTMP_Alloc();                // Ϊ�ṹ�塰RTMP�������ڴ档
	RTMP_Init(rtmp);                        // ��ʼ���ṹ�塰RTMP���еĳ�Ա������
	//set connection timeout,default 30s
	rtmp->Link.timeout=10;	                // �������ӳ�ʱ
	// HKS's live URL
	if(!RTMP_SetupURL(rtmp, rtmpUrl))       // ���������RTMP���ӵ�URL��
	{
		RTMP_Log(RTMP_LOGERROR,"SetupURL Err\n");
		RTMP_Free(rtmp);                    // �ͷŽṹ�塰RTMP��
		CleanupSockets();
		return -1;
	}
	if (bLiveStream)
	{
		rtmp->Link.lFlags|=RTMP_LF_LIVE;
	}
	
	//1hour
	RTMP_SetBufferMS(rtmp, 3600*1000);		
	
	if(!RTMP_Connect(rtmp,NULL)){
		RTMP_Log(RTMP_LOGERROR,"Connect Err\n");
		RTMP_Free(rtmp);
		CleanupSockets();
		return -1;
	}

	if(!RTMP_ConnectStream(rtmp,0)){
		RTMP_Log(RTMP_LOGERROR,"ConnectStream Err\n");
		RTMP_Close(rtmp);
		RTMP_Free(rtmp);
		CleanupSockets();
		return -1;
	}

	while(nRead=RTMP_Read(rtmp,buf,bufsize)){
		fwrite(buf,1,nRead,fp);
        
		countbufsize+=nRead;
		RTMP_LogPrintf("Receive: %5dByte, Total: %5.2fkB\n",nRead,countbufsize*1.0/1024);
		if (!bLiveStream&&duration<0)                   // �㲥��ʱ��ʹ��
		{
			 duration = RTMP_GetDuration(rtmp);
			 RTMP_LogPrintf("duration:%f\n",duration);
		}
	}

	if(fp)
		fclose(fp);

	if(buf){
		delete [] buf;
	}

	if(rtmp){
		RTMP_Close(rtmp);
		RTMP_Free(rtmp);
		CleanupSockets();
		rtmp=NULL;
	}	
	return 0;
}

