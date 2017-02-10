/**********************************************
* Titre: Travail pratique #1 - Tour.h
* Date: 10 janvier 2017
* Auteur: FERRON Samuel, FONTAINE Jean-Frederic
*Description: Définition de la classe Tour
*********************************************/
#pragma once
#ifndef TOUR_H
#define TOUR_H
#include "Piece.h"
#include<string>
using namespace std; 
class Tour : public Piece{

public:
	//Constructeur par defaut 
	Tour(); 
	//Constructeur par parametre
	Tour(string id, string couleur, int positionX, int positionY);
	//Destructeur 
	~Tour(); 
	//Fonction verifiant la validite d'un mouvement 
	bool estMouvementValide(int toX, int toY) const;
	//Fontion pour effectuer un deplacement 
	void deplacer(int toX, int toY);



private:



};

#endif