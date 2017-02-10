/********************************************
* Titre:	Travail pratique #3 - Piece.h
* Date:		10 fevrier 2017
* Auteur:	FERRON Samuel, FONTAINE Jean-Frederic
*******************************************/

#pragma once

#ifndef PIECE_H
#define PIECE_H

#include <iostream>
#include <string>

using namespace std;

class Piece {


public :
	// constructeurs
	Piece();
	Piece(string id, string couleur, int positionX, int positionY); 

	// destructeur
	~Piece();

	//Accesseur et modificateurs respectif
	string obtenirId() const;
	void modifierId(string id);

	string obtenirCouleur() const;
	void modifierCouleur(string id);

	int obtenirPositionX() const;	
	void modifierPositionX(int x);

	int obtenirPositionY() const;
	void modifierPositionY(int y);

	//Verification des mouvements
	bool estMouvementValide(int toX, int toY) const; 


private:
	//Attributs
	string id_;
	string couleur_;
	int positionX_;
	int positionY_;

};
#endif