/********************************************
* Titre:	Travail pratique #3 - Roi.h
* Date:		10 fevrier 2017
* Auteur:	FERRON Samuel, FONTAINE Jean-Frederic
*******************************************/

#pragma once

#ifndef ROI_H
#define ROI_H

#include "Piece.h"

using namespace std;

class Roi : public Piece {

public: 
    //Constructeurs
    Roi();
    Roi(string id, string couleur, int positionX, int positionY);
    
    //Destructeur
    ~Roi();

    //Verification des mouvements
    bool estMouvementValide(int toX, int toY) const;
    
    //Deplacement de la piece
    void deplacer(int toX, int toY);

//private: 
    //Memes attributs que Piece

};

#endif