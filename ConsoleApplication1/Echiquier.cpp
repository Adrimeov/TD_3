/**********************************************
* Titre: Travail pratique #1 - Echiquier.cpp
* Date: 22 fevrier 2017
* Auteur: FERRON Samuel, FONTAINE Jean-Frederic
*Description: Implementation de classe Echiquier
*********************************************/
#include "Echiquier.h"
#include <string>
using namespace std; 
/*********************************************
*Fonctions:		Echiquier() 
*Descriptions:	Constructeur par defaut d'un echiquier 
*Parametre:		Aucun
*Retour:		Aucun
*********************************************/
Echiquier::Echiquier(): {
	Pion* tableauPions_ = new Pion[SEIZE];
	Tour* tableauTours_ = new Tour[QUATRE];
	compteurPion_ = ZERO; 
	compteurTour_ = ZERO;
	capaciteTableauPion_ = ZERO; 
	capaciteTableauTour_ = ZERO; 
}
/*********************************************
*Fonctions:		Medecin::~Medecin()
*Descriptions:	Destructeur de l'objet medecin
*Parametre:		Aucun
*Retour:		Aucun
*********************************************/
Echiquier::~Echiquier(){}

/*********************************************
*Fonctions:		Medecin::~Medecin()
*Descriptions:	Destructeur de l'objet medecin
*Parametre:		Aucun
*Retour:		Aucun
*********************************************/
void Echiquier::ajouterRoi(const Roi &unRoi, const int position) {

	if (abs(position) > 1)
		cout << "Impossible d'ajouter le roi !" << endl;
	else {
		unRoi[position] = unRoi;
		cout << "Roi ajoute !" << endl;
	}
	}

/*********************************************
*Fonctions:		Echiquier::ajouterPion
*Descriptions:	Ajoute un Pion	par reference dans un tableau ayant
*				une capacite pour 16 pions. 
*Parametre:		-(Pion&)unPion	: Pion a ajouter au tableau 
*Retour:		Aucun
*********************************************/
void Echiquier::ajouterPion (const Pion& unPion){
	if (compteurPion_ < capaciteTableauPion_) {
		tableauPions_[compteurPion_++] = unPion;
	}
	else
		cout << "Tableau de Pion plein !" << endl; 
}

/*********************************************
*Fonctions:		Echiquier::ajouterTour
*Descriptions:	Ajoute une tour	par reference dans un tableau ayant
*				une capacite pour quatre tours.
*Parametre:		-(Tour&)uneTour	: tour a ajouter au tableau
*Retour:		Aucun
*********************************************/
void Echiquier::ajouterTour(const Tour& uneTour) {
	if (compteurTour_ < capaciteTableauTour_) {
		tableauTours_[compteurTour_++] = uneTour;
	}
	else
		cout << "Tableau de tour plein !" << endl;
}



void Echiquier::deplacerPiece(const string id, int toX, int toY) {
	


}

////La méthode publique void deplacerPiece(string id, int toX, int toY) qui déplace la pièce 
////d'identifiant id  à la position de coordonnées (toX,toY). ? 
////
////
////
////
////La méthode publiquevoid enleverTour(const string id) qui permet d’enlever la tour d'identifiant 
////id de tableauTours_  ? 
////
////
////
////
////
////La méthode publique void enleverPion(const string id)
////qui permet d’enlever le pion d'identifiant id de tableauPions_ 

