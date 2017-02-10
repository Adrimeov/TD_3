/********************************************
* Titre:	Travail pratique #3 - Piece.cpp
* Date:		10 fevrier 2017
* Auteur:	FERRON Samuel, FONTAINE Jean-Frederic
*******************************************/

#include "Piece.h"

using namespace std;

/********************************************
* Titre:	Travail pratique #3 - Echiquier.h
* Date:		10 fevrier 2017
* Auteur:	FERRON Samuel, FONTAINE Jean-Frederic
*******************************************/
Piece::Piece() {
    positionX_ = 0;
    positionY_ = 0;
    id_ = "piece";
    couleur_ = "blanc";
}

Piece::Piece(string id, string couleur, int positionX, int positionY)
    :positionX_(positionX), positionY_(positionY), id_(id), couleur_(couleur)
{
}

Piece::~Piece() {
    //rien
}

string Piece::obtenirId() const {
    return id_;
}

void Piece::modifierId(string id) {
    id_ = id;
}

string Piece::obtenirCouleur() const {
    return couleur_;
}

void Piece::modifierCouleur(string couleur) {
    couleur_ = couleur;
}

int Piece::obtenirPositionX() const{
    return positionX_;
}

void Piece::modifierPositionX(int positionX) {
    positionX_ = positionX;
}

int Piece::obtenirPositionY() const {
    return positionY_;
}

void Piece::modifierPositionY(int positionY) {
    positionY_ = positionY;
}

bool estMouvementValide(int toX, int toY) const {

}

