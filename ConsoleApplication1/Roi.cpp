/********************************************
* Titre:	Travail pratique #3 - Roi.cpp
* Date:		10 fevrier 2017
* Auteur:	FERRON Samuel, FONTAINE Jean-Frederic
*******************************************/

#include "Roi.h"
#include <cmath>

using namespace std;

/*********************************************
*Fonctions:     Roi()
*Descriptions:  Constructeur par default de
                l'objet Roi
*Parametre:     aucun
*Retour:        aucun
*********************************************/
Roi::Roi():Piece()
{
    //Rien
}

/*********************************************
*Fonctions:     Roi()
*Descriptions:  Constructeur par parametre de
                l'objet Roi
*Parametre:     -(string)id : l'identificateur de la piece
                -(string)couleur : la couleur de la piece
                -(int)positionX : la position en x de la piece
                -(int)positoinY : la position en y de la piece
*Retour:        aucun
*********************************************/
Roi::Roi(string id, string couleur, int positionX, int positionY)
    :Piece(id, couleur, positionX, positionY)
{
    //Rien
}

/*********************************************
*Fonctions:     ~Roi()
*Descriptions:  Destructeur de l'objet Roi
*Parametre:     aucun
*Retour:        aucun
*********************************************/
Roi::~Roi()
{
    //Rien
}

/*********************************************
*Fonctions:     estMouvementValide()
*Descriptions:  verifi si le deplacement est possible
*Parametre:     -(int)toX : destination en x 
                -(int)toY : destination en y 
*Retour:        -(bool)estValide : vrai ou faux si le deplacement est valide
*********************************************/
bool Roi::estMouvementValide(int toX, int toY) const {
    bool estValide = false;

    if (estMouvementValide(toX, toY)) {
        bool estValideX = (abs(toX - obtenirPositionX()) == 1);
        bool estValideY = (abs(toY - obtenirPositionY()) == 1);
        if(estValideX && estValideY)
            estValide = true;
    }

    if (!estValide)
        cout << "Deplacement du roi non autorise." << endl;

    return estValide;
}

/*********************************************
*Fonctions:     deplacer()
*Descriptions:  deplace le roi si le mouvement est valide
*Parametre:     -(int)toX : destination en x 
                -(int)toY : destination en y 
*Retour:        aucun
*********************************************/
void Roi::deplacer(int toX, int toY) {
    if (estMouvementValide(toX, toY)) {
        modifierPositionX(toX);
        modifierPositionY(toY);
    }
}

