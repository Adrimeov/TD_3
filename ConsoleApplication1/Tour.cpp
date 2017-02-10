/**********************************************
* Titre: Travail pratique #1 - Tour.cpp
* Date: 10 fevrier 2017
* Auteur: FERRON Samuel, FONTAINE Jean-Frederic
*Description: Implementation de la classe Tour.h
*********************************************/
#include "Tour.h"
#include <string>
using namespace std; 

/*********************************************
*Fonctions:		Tour() : Piece(
*Descriptions:	Constructeur par defaut qui fait 
				appel au constructeur par defaut de l'objet mere "Piece"
*Parametre:		Aucun 
*Retour:		Aucun
*********************************************/
Tour::Tour() : Piece() {}

/*********************************************
*Fonctions:		Tour() : Piece(
*Descriptions:	Constructeur par parametre de la piece tour 
*Parametre:		-(string)id		: L'id de la piece en question
-(string)coleur	: Couleur de la piece en question
-(int)positionX	: Postion de la piece selon laxe des X
-(int)postionY	: Position de la piece selon laxe des Y
*Retour:		Aucun
*********************************************/
Tour::Tour(string id, string couleur, int positionX, int positionY) : Piece(id, couleur, positionX, positionY) {}

/*********************************************
*Fonctions: Tour::~Tour()
*Descriptions: Destructeur de lobjet tour 
*Parametre: Aucun 
*Retour: Aucun 
*********************************************/
Tour::~Tour() {}

/*********************************************
*Fonctions: Tour::estMouvementValide()
*Descriptions: Destructeur de lobjet tour
*Parametre: -(int)PositionInitialeX		: Position initiale selon l'axe X (IN)
			-(int)PositionInitialeY		: Posiiton initiale selon l'axe Y (IN)
*Retour:	-(bool)						: retourne si le mouvement est valide
*********************************************/
bool Tour::estMouvementValide(int toX, int toY) const {
	int PositionInitialeX = obtenirPositionX();
	int PositionInitialeY = obtenirPositionY();
	bool estValide;
	if (PositionInitialeX != toX && estMouvementValide(toX, toY) && PositionInitialeY == toY)
		return estValide = true;
	else if (PositionInitialeY != toY && estMouvementValide(toX, toY) && PositionInitialeX == toX)
		return estValide = true;
	else if (PositionInitialeY != toY && PositionInitialeX != toX)
		return estValide = false;
}
/*********************************************
*Fonctions: Tour::Tour::deplacer()
*Descriptions:	Fonction qui modifie la position de la piece si estMouvementValide() retoune vraie
*Parametre:		-(int)toX	: Nouvelle position en X
				-(int)toY	: Nouvelle position en Y 
*Retour:		Aucun
*********************************************/
void Tour::deplacer(int toX, int toY) {
	if (estMouvementValide(toX, toY)) {
		modifierPositionX(toX);
		modifierPositionY(toY);
		cout << "Deplacement de la tour de la position X =" << obtenirPositionX() << " Y =" << 
		obtenirPositionY() << " vers la position X=" << toX << " Y=" << toY << endl;
		
	}
}






