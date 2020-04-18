#ifndef _FONCTIONS_H_
#define _FONCTIONS_H_




typedef struct ennemi
{

SDL_Surface *sprite ;

SDL_Rect posSprite [2][6];

SDL_Rect posScreen ;


int direction ;


}ennemi;
  
               



ennemi initialisation_ennemi(ennemi e);
//no input //




void afficher(ennemi e,SDL_Rect camera);

//m à j ennemi (en )
//free ennemi








#endif

