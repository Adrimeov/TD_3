/********************************************
* Titre:	Travail pratique #3 - Pion.cpp
* Date:		10 fevrier 2017
* Auteur:	FERRON Samuel, FONTAINE Jean-Frederic
*******************************************/

#include "Pion.h"
#include "constantes.h"


using namespace std;

/*********************************************
*Fonctions:     Pion()
*Descriptions:  Constructeur par default de
                l'objet Pion
*Parametre:     aucun
*Retour:        aucun
*********************************************/
Pion::Pion(): Piece() {
    //Rien
}

/*********************************************
*Fonctions:     Pion()
*Descriptions:  Constructeur par parametre de
                l'objet Pion
*Parametre:     -(string)id : l'identificateur de la piece
                -(string)couleur : la couleur de la piece
                -(int)positionX : la position en x de la piece
                -(int)positoinY : la position en y de la piece
*Retour:        aucun
*********************************************/
Pion::Pion(string id, string couleur, int positionX, int positionY)
    :Piece(id, couleur, positionX, positionY){
        //Rien
}

/*********************************************
*Fonctions:     ~Pion()
*Descriptions:  Destructeur de l'objet Pion
*Parametre:     aucun
*Retour:        aucun
*********************************************/
Pion::~Pion() {
    //Rien
}

/*********************************************
*Fonctions:     estMouvementValide()
*Descriptions:  verifi si le deplacement est possible
*Parametre:     -(int)toX : destination en x 
                -(int)tolY : destination en y 
*Retour:        -(bool)estValide : vrai ou faux si le deplacement est valide
*********************************************/
bool Pion::estMouvementValide(int toX, int toY) const {
    bool estValide = false;
    bool couleur = obtenirCouleur() == "blanc";
    int diffPosition = toY - obtenirPositionY();

    if (estMouvementValide(toX, toY) && toX == obtenirPositionX()) {
        if (estPositionInit_) {
            if (couleur) {
                estValide = (diffPosition <= DEUX && diffPosition >= 0);
            }
            else {
                estValide = (diffPosition >= -DEUX && diffPosition <= 0);
            }
         }
         else {
             if (couleur) {
                estValide = (diffPosition <= UN && diffPosition >= 0);
            }
            else {
                estValide = (diffPosition >= -UN && diffPosition <= 0);
            }
         }
    }
    return estValide;
}

/*********************************************
*Fonctions:     deplacer()
*Descriptions:  deplace le pion si le mouvement est valide
*Parametre:     -(int)toX : destination en x 
                -(int)toY : destination en y 
*Retour:        aucun
*********************************************/
void Pion::deplacer(int toX, int toY) {
    if (estMouvementValide(toX, toY)) {
        modifierPositionX(toX);
        modifierPositionY(toY);
    }
}