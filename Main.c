#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL.h>
#include "fonction.h"
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_mixer.h>
int main ()
{
SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO );

ennemi e;

SDL_Surface *ecran = NULL;
SDL_Surface *image ;

SDL_Rect posimage;


int continuer = 1;
SDL_Event event;
SDL_Rect camera;
	camera.w = 800;
	camera.h = 600;
	camera.x = 0;
	camera.y = 0;

image=IMG_Load("m.jpg");
	posimage.x=0 ;
	posimage.y=0;
int j;
	
       

ecran = SDL_SetVideoMode(800,600,32,SDL_HWSURFACE|SDL_DOUBLEBUF|SDL_RESIZABLE);
SDL_BlitSurface(image,NULL,ecran,&posimage);


e =initialisation_ennemi(e);


afficher(e,camera);



while(continuer==1) 
{

if (j==1)






SDL_PollEvent(&event);




    	SDL_FreeSurface(image);
	
	SDL_Quit();
}
}




