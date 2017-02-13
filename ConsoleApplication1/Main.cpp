/**********************************************
* Titre: Travail pratique #1 - Main.cpp
* Date: 22 fevrier 2017
* Auteur: FERRON Samuel, FONTAINE Jean-Frederic
*Description: Declaration de la classe Echiquier
*********************************************/

#include<iostream>
#include"Echiquier.h"
#include"Pion.h"
#include"Roi.h"
#include"Tour.h"


int main()
{
	//1-  Creez un objet de type Roi � l'aide du constructeur par d�faut.
	Roi roiBlanc;

	//2- Donnez l'id D1 au roi d�fini dans l'�tape 1
	roiBlanc.modifierId("D1");

	//3-  D�finissez la position (3,0) pour le roi d�fini dans l'�tape 1
	roiBlanc.modifierPositionX(3);
	roiBlanc.modifierPositionY(0);

	//4-  Creez un objet de type Roi Noir � la position (3,7) ayant comme id D8.
	Roi roiNoir("D8", "noir", 3, 7);

	//5-  Creez les huit pions blancs avec les coordonn�es (i,1) i : 0-->7 et les id A2-->H2
	Pion pB1("A2", "blanc", 0, 1);
	Pion pB2("B2", "blanc", 1, 1);
	Pion pB3("C2", "blanc", 2, 1);
	Pion pB4("D2", "blanc", 3, 1);
	Pion pB5("E2", "blanc", 4, 1);
	Pion pB6("F2", "blanc", 5, 1);
	Pion pB7("G2", "blanc", 6, 1);
	Pion pB8("H2", "blanc", 7, 1);

	//6-  Creez les huit pions noirs avec les coordonn�es (i,6) i : 0-->7 et les id A7-->H7
	
	Pion pN1("A7", "blanc", 0, 6);
	Pion pN2("B7", "blanc", 1, 6);
	Pion pN3("C7", "blanc", 2, 6);
	Pion pN4("D7", "blanc", 3, 6);
	Pion pN5("E7", "blanc", 4, 6);
	Pion pN6("F7", "blanc", 5, 6);
	Pion pN7("G7", "blanc", 6, 6);
	Pion pN8("H7", "blanc", 7, 6);

	//7-  Creez les deux tours blanches d'id "A1" et "H1" dans les positions respectives (0,0) et (7,0)
	Tour tB1("A1", "blanc", 0, 0);
	Tour tB2("H1", "blanc", 7, 0);

	//8-  Creez les deux tours noires  d'id "A8" et "H8" dans les positions respectives (0,7) et (7,7)
	Tour tN1("A8", "blanc", 0, 7);
	Tour tN2("H8", "blanc", 7, 7);

	//9-  Creez un Echiquier
	Echiquier echiquier;

	//10- Ajoutez toutes les pi�ces pr�cidament d�finies � l'echiquier
	echiquier.ajouterRoi(roiBlanc, 0);
	echiquier.ajouterRoi(roiNoir, 0);

	echiquier.ajouterPion(pB1);
	echiquier.ajouterPion(pB2);
	echiquier.ajouterPion(pB3);
	echiquier.ajouterPion(pB4);
	echiquier.ajouterPion(pB5);
	echiquier.ajouterPion(pB6);
	echiquier.ajouterPion(pB7);
	echiquier.ajouterPion(pB8);

	echiquier.ajouterPion(pN1);
	echiquier.ajouterPion(pN2);
	echiquier.ajouterPion(pN3);
	echiquier.ajouterPion(pN4);
	echiquier.ajouterPion(pN5);
	echiquier.ajouterPion(pN6);
	echiquier.ajouterPion(pN7);
	echiquier.ajouterPion(pN8);

	echiquier.ajouterTour(tB1);
	echiquier.ajouterTour(tB2);
	
	echiquier.ajouterTour(tN1);
	echiquier.ajouterTour(tN2);

	//11-  Deplacer la piece d'id A2 � la position (0,2)  --Deplacement de Pion
	echiquier.deplacerPiece("A2", 0, 2);

	//12-  Deplacer le piece d'id H7 � la position (7,4)  --Deplacement du Pion
	echiquier.deplacerPiece("H7", 7, 4);

	////13-  Deplacer la piece d'id A2 � la position (0,4)  --Deplacement du Pion
	echiquier.deplacerPiece("A2", 0, 4);

	//14-  Deplacer la piece d'id H8 � la position (7,6)  --Deplacement de la Tour
	echiquier.deplacerPiece("H8", 7, 6);

	//15-  Deplacer la piece d'id H8 � la position (7,6)  --Deplacement de la Tour
	echiquier.deplacerPiece("H8", 7, 6);

	//16-  Enlever la piece d'id A2
	echiquier.enleverPion("A2");

	
	return 0;
}

