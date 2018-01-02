#ifndef SRC_PLAYER_PLAYER_H_
#define SRC_PLAYER_PLAYER_H_

#include <stdint.h>
#include <string>
using namespace std;

typedef struct {
	uint16_t sequence;
	uint32_t timeStamp;
	unsigned char type;
	string data;
} H264Frame;

//ADTS ͷ��������õ���Ϣ �����ʡ���������֡����
typedef struct {
	unsigned int syncword; //12 bslbf ͬ����The bit string ��1111 1111 1111����˵��һ��ADTS֡�Ŀ�ʼ
	unsigned int id;        //1 bslbf   MPEG ��ʾ��, ����Ϊ1
	unsigned int layer;    //2 uimsbf Indicates which layer is used. Set to ��00��
	unsigned int protection_absent;  //1 bslbf  ��ʾ�Ƿ�����У��
	unsigned int profile; //2 uimsbf  ��ʾʹ���ĸ������AAC����01 Low Complexity(LC)--- AACLC
	unsigned int sf_index;           //4 uimsbf  ��ʾʹ�õĲ������±�
	unsigned int private_bit;        //1 bslbf
	unsigned int channel_configuration;  //3 uimsbf  ��ʾ������
	unsigned int original;               //1 bslbf
	unsigned int home;                   //1 bslbf
										 //�����Ϊ�ı�Ĳ�����ÿһ֡����ͬ
	unsigned int copyright_identification_bit;   //1 bslbf
	unsigned int copyright_identification_start; //1 bslbf
	unsigned int aac_frame_length; // 13 bslbf  һ��ADTS֡�ĳ��Ȱ���ADTSͷ��raw data block
	unsigned int adts_buffer_fullness;           //11 bslbf     0x7FF ˵�������ʿɱ������
//no_raw_data_blocks_in_frame ��ʾADTS֡����number_of_raw_data_blocks_in_frame + 1��AACԭʼ֡.
//����˵number_of_raw_data_blocks_in_frame == 0
//��ʾ˵ADTS֡����һ��AAC���ݿ鲢����˵û�С�(һ��AACԭʼ֡����һ��ʱ����1024���������������)
	unsigned int no_raw_data_blocks_in_frame;    //2 uimsfb
	unsigned char data[2 * 1024 + 7];
	uint16_t sequence;
	uint32_t timeStamp;
} AdtsFrame;

void	makeAdtsHeader(const uint8_t *strAudioCfg,AdtsFrame &adts);
void 	writeAdtsHeader(const AdtsFrame &adts, uint8_t *pcAdts) ;
string 	makeAdtsConfig(const uint8_t *pcAdts);
void 	getAACInfo(const AdtsFrame &adts,int &iSampleRate,int &iChannel);
bool 	getAVCInfo(const string &strSps,int &iVideoWidth, int &iVideoHeight, float  &iVideoFps);

#endif /* SRC_PLAYER_PLAYER_H_ */

