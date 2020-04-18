#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include "fonction.h"



ennemi initialisation_ennemi(ennemi e)
{

e.sprite=IMG_Load("sprite.jpg");	
	e.posScreen.x=7 ;
	e.posScreen.y=1 ;
e.direction=1;

      e.posSprite[0][0].x =0 ;
      e.posSprite[0][0].y =0 ;
      e.posSprite[0][0].w =1344/6 ; 
      e.posSprite[0][0].h =507/2  ;

      e.posSprite[0][1].x =0 ;
      e.posSprite[0][1].y =0 ;
      e.posSprite[0][1].w =1344/6 ; 
      e.posSprite[0][1].h =507/2  ; 


      e.posSprite[0][2].x =0 ;
      e.posSprite[0][2].y =0 ;
      e.posSprite[0][2].w =1344/6 ; 
      e.posSprite[0][2].h =507/2  ;

      e.posSprite[0][3].x =0 ;
      e.posSprite[0][3].y =0 ;
      e.posSprite[0][3].w =1344/6 ; 
      e.posSprite[0][3].h =507/2  ;

      e.posSprite[0][4].x =0 ;
      e.posSprite[0][4].y =0 ;
      e.posSprite[0][4].w =1344/6 ; 
      e.posSprite[0][4].h =507/2  ;

      e.posSprite[0][5].x =0 ;
      e.posSprite[0][5].y =0 ;
      e.posSprite[0][5].w =1344/6 ; 
      e.posSprite[0][5].h =507/2  ;

      e.posSprite[1][0].x =0 ;
      e.posSprite[1][0].y =0 ;
      e.posSprite[1][0].w =1344/6 ; 
      e.posSprite[1][0].h =507/2  ;

      e.posSprite[1][1].x =0 ;
      e.posSprite[1][1].y =0 ;
      e.posSprite[1][1].w =1344/6 ; 
      e.posSprite[1][1].h =507/2  ; 


      e.posSprite[1][2].x =0 ;
      e.posSprite[1][2].y =0 ;
      e.posSprite[1][2].w =1344/6 ; 
      e.posSprite[1][2].h =507/2  ;

      e.posSprite[1][3].x =0 ;
      e.posSprite[1][3].y =0 ;
      e.posSprite[1][3].w =1344/6 ; 
      e.posSprite[1][3].h =507/2  ;

      e.posSprite[1][4].x =0 ;
      e.posSprite[1][4].y =0 ;
      e.posSprite[1][4].w =1344/6 ; 
      e.posSprite[1][4].h =507/2  ;

      e.posSprite[1][5].x =0 ;
      e.posSprite[1][5].y =0 ;
      e.posSprite[1][5].w =1344/6 ; 
      e.posSprite[1][5].h =507/2  ;	
return e;
}

void afficher(ennemi e ,SDL_Surface *ecran)
{
	


	SDL_BlitSurface(e.posSprite[0][5],NULL,ecran,&e.posScreen);

	SDL_FreeSurface(e.posSprite[0][5]);
}






