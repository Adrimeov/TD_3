
/********************************************
* Titre:	Travail pratique #3 - Echiquier.h
* Date:		10 fevrier 2017
* Auteur:	FERRON Samuel, FONTAINE Jean-Frederic
*******************************************/

#pragma once
#ifndef ECHIQUIER_H
#define ECHIQUIER_H

//#include "Piece.h"
#include "Pion.h"
#include "Roi.h"
#include "Tour.h"
#include "constantes.h"

#include <string>


class Echiquier {

public:
	//Constructeur par defaut
	Echiquier();
	//Destructeur
	~Echiquier();
	// Methodes publiques
	void ajouterRoi(const Roi &unRoi, const int position);
	void ajouterTour(const Tour& uneTour);
	void ajouterPion(const Pion& unPion);

	void enleverTour(const string id);
	void enleverPion(const string id);

	void deplacerPiece(const string id, int toX, int toY);

private:
	//Attribut privie 
	Pion*   tableauPions_ = new Pion[SEIZE];
	Tour*   tableauTours_ = new Tour[QUATRE];
	Roi     rois_[2];	

	unsigned int compteurPion_;
	unsigned int compteurTour_;

	unsigned int capaciteTableauPion_;
	unsigned int capaciteTableauTour_;

};
#endif