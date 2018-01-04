
#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h>

SDL_Window * window;
SDL_Renderer * renderer;
SDL_Texture * texture;

SDL_Rect rectSrc;
SDL_Rect rectDest;

void test()
{
	SDL_RenderClear(renderer);//��մ���
	SDL_RenderPresent(renderer);	///*������Ļ*/
	//SDL_UpdateYUVTexture();
}

int main(int argc, char * argv[])
{

	if(SDL_Init(SDL_INIT_VIDEO|SDL_INIT_AUDIO)==-1)
	{
		fprintf(stderr, "SDL_Init() %s\n" , SDL_GetError());
		exit(-1);
	}
	atexit(SDL_Quit);
	
	/*�������ǻ��ƵĴ���ǰ�����������ƴ���λ�ã�Ȼ���Ǵ��ڴ�С ��Ȼ����λ�꣨falg��*/	
	window = SDL_CreateWindow("Window Title",
		SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
		1000, 480, SDL_WINDOW_OPENGL);			// ��Ҫ���ú��ʵĳ�������ͼ��ᱻ����

	if(NULL==window){
		fprintf(stderr, "SDL_CreateWindow() %s\n" , SDL_GetError());
		exit(-1);
	}
	/*��Ⱦ�� ��һ��λ���ʾ�Կ� -1��ʾ���Կ�����һ�� �ڶ�����ʾ����ʾ����ˢ������ˢ�»���*/
	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
	if(NULL==renderer){
		fprintf(stderr, "SDL_CreateRenderer() %s\n" , SDL_GetError());
		exit(-1);
	}


	SDL_Surface * tempSurface = SDL_LoadBMP("./car.bmp");
	if(tempSurface==NULL)
	{
		fprintf(stderr, "SDL_LoadBMP() failed: %s", SDL_GetError());
		exit(-1);
	}

	texture = SDL_CreateTextureFromSurface(renderer, tempSurface);
	SDL_FreeSurface(tempSurface);

	SDL_RenderCopy(renderer, texture, 0, 0);	//�����µ�ͼ�� ʵ����ʾ���� texture
	SDL_RenderPresent(renderer);				//ˢ����ʾ


	//press ESC for exit
	Uint32 exit = 0;
	SDL_Event event;
	while( !exit && SDL_WaitEvent(&event) )
	{
		switch(event.type)
		{
		case SDL_KEYDOWN:
			if(event.key.keysym.sym == SDLK_ESCAPE)
			{
				exit = 1;
			}
			break;

		default:
			break;
		}
	}

	SDL_DestroyRenderer(renderer);
	SDL_DestroyTexture(texture);
	SDL_DestroyWindow(window);
	window = NULL;


	return 0;
}
