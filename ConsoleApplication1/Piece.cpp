/********************************************
* Titre:	Travail pratique #3 - Piece.cpp
* Date:		10 fevrier 2017
* Auteur:	FERRON Samuel, FONTAINE Jean-Frederic
*******************************************/

#include "Piece.h"
#include "constantes.h"

using namespace std;

/*********************************************
*Fonctions:     Piece()
*Descriptions:  Constructeur par default de
                l'objet piece
*Parametre:     aucun
*Retour:        aucun
*********************************************/
Piece::Piece() {
    positionX_ = 0;
    positionY_ = 0;
    id_ = "A0";
    couleur_ = "blanc";
}
/*********************************************
*Fonctions:     Piece()
*Descriptions:  Constructeur par parametre de
                l'objet piece
*Parametre:     -(string)id : l'identificateur de la piece
                -(string)couleur : la couleur de la piece
                -(int)positionX : la position en x de la piece
                -(int)positoinY : la position en y de la piece
*Retour:        aucun
*********************************************/
Piece::Piece(string id, string couleur, int positionX, int positionY)
    :positionX_(positionX), positionY_(positionY), id_(id), couleur_(couleur)
{
}

/*********************************************
*Fonctions:     ~Piece()
*Descriptions:  Destructeur de l'objet Piece
*Parametre:     aucun
*Retour:        aucun
*********************************************/
Piece::~Piece() {
    //rien
}

/*********************************************
*Fonctions:     obtenirId()
*Descriptions:  Retourne l'attribut id_
*Parametre:     aucun
*Retour:        -(string)id_ : l'identification de la piece
*********************************************/
string Piece::obtenirId() const {
    return id_;
}

/*********************************************
*Fonctions:     modifierId()
*Descriptions:  modifi l'attribut id_
*Parametre:     -(string)id : le nouvel identification de la piece
*Retour:        aucun
*********************************************/
void Piece::modifierId(string id) {
    id_ = id;
}

/*********************************************
*Fonctions:     obtenirCouleur()
*Descriptions:  Retourne l'attribut couleur_
*Parametre:     aucun
*Retour:        -(string)couleur_ : la couleur de la piece
*********************************************/
string Piece::obtenirCouleur() const {
    return couleur_;
}

/*********************************************
*Fonctions:     modifierCouleur()
*Descriptions:  modifi l'attribut couleur_
*Parametre:     -(string)couleur : la nouvelle couleur de la piece
*Retour:        aucun
*********************************************/
void Piece::modifierCouleur(string couleur) {
    couleur_ = couleur;
}

/*********************************************
*Fonctions:     obtenirPositionX()
*Descriptions:  Retourne l'attribut positionX_
*Parametre:     aucun
*Retour:        -(int)positionX_ : la position en x de la piece
*********************************************/
int Piece::obtenirPositionX() const{
    return positionX_;
}

/*********************************************
*Fonctions:     modifierPositionX()
*Descriptions:  modifi l'attribut positionX_
*Parametre:     -(int)positionX : la nouvelle position en x de la piece
*Retour:        aucun
*********************************************/
void Piece::modifierPositionX(int positionX) {
    positionX_ = positionX;
}

/*********************************************
*Fonctions:     obtenirPositionY()
*Descriptions:  Retourne l'attribut positionY_
*Parametre:     aucun
*Retour:        -(int)positionY_ : la position en y de la piece
*********************************************/
int Piece::obtenirPositionY() const {
    return positionY_;
}

/*********************************************
*Fonctions:     modifierPositionY()
*Descriptions:  modifi l'attribut positionY_
*Parametre:     -(int)positionY : la nouvelle position en y de la piece
*Retour:        aucun
*********************************************/
void Piece::modifierPositionY(int positionY) {
    positionY_ = positionY;
}

/*********************************************
*Fonctions:     estMouvementValide()
*Descriptions:  Indique si un mouvement est possible
*Parametre:     -(int)toX : le prochain x
                -(int)toY : le prochain y
*Retour:        -(bool) : booleen vrai ou faus si le mouvement est valide
*********************************************/
bool Piece::estMouvementValide(int toX, int toY) const {
	bool estValide = false;
    bool estValideX = (toX <= SEPT && toX >= ZERO);
    bool estValideY = (toY <= SEPT && toY >= ZERO);

	if (toX - obtenirPositionX() != 0 || toY - obtenirPositionY() != 0) {
		if (estValideX && estValideY)
			estValide = true;
	}

    if (!estValide)
        cout << "Deplacement de piece non autorise." << endl;

	return estValide;
}

