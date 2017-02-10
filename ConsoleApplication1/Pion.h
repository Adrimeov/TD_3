/********************************************
* Titre:	Travail pratique #3 - Pion.h
* Date:		10 fevrier 2017
* Auteur:	FERRON Samuel, FONTAINE Jean-Frederic
*******************************************/

#pragma once

#ifndef PION_H
#define PION_H

#include "Piece.h"

using namespace std;

class Pion : public Piece {

public:
    //Constructeurs
    Pion();
    Pion(string id, string couleur, int positionX, int positionY);
    //Destructeur
    ~Pion();
    //Verification des mouvements
    bool estMouvementValide(int toX, int toY) const;
    //Deplacement de la piece
    void deplacer(int toX, int toY);

private: 
    bool estPositionInit_;
};


#endif