/**********************************************
* Titre: Travail pratique #1 - Echiquier.cpp
* Date: 22 fevrier 2017
* Auteur: FERRON Samuel, FONTAINE Jean-Frederic
*Description: Implementation de classe Echiquier
*********************************************/
#include "Echiquier.h"
#include "constantes.h"
#include <string>
using namespace std; 
/*********************************************
*Fonctions:		Echiquier() 
*Descriptions:	Constructeur par defaut d'un echiquier 
*Parametre:		Aucun
*Retour:		Aucun
*********************************************/
Echiquier::Echiquier() {
	Pion* tableauPions_ = new Pion[SEIZE];
	Tour* tableauTours_ = new Tour[QUATRE];
	compteurPion_ = ZERO; 
	compteurTour_ = ZERO;
	capaciteTableauPion_ = SEIZE; 
	capaciteTableauTour_ = QUATRE; 
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


/*********************************************
*Fonctions:		Echiquier::deplacerPiece()
*Descriptions:	Fonction qui permet de modifier les coordonne d'une 
*				piece, c'est-a-dire effectuer un deplacement. 
*Parametre:		-(const string)id	: Id de la piece a deplacer
*				-(int)toX			: Nouvel coordone en X
*				-(int)toY			: Nouvel coordonne en Y
*Retour:		Aucun
*********************************************/
void Echiquier::deplacerPiece(const string id, int toX, int toY) {
	bool trouveEtModifier = false; 
	//Parcour tableau pion
	for (int i = 0; i < compteurPion_; i++) {
		if (tableauPions_[i].obtenirId() == id) {
			tableauPions_[i].deplacer(toX, toY);
			trouveEtModifier = true; 
			}
		}
	//Parcour tableau tour
	for (int i = 0; i < compteurTour_ && trouveEtModifier == false; i++) {
		if (tableauTours_[i].obtenirId() == id) {
			tableauTours_[i].deplacer(toX, toY);
			trouveEtModifier = true; 
		}
	}
	//Parcour tableau roi
	for (int i = 0; i < DEUX && trouveEtModifier == false; i++) {
		if (rois_[i].obtenirId() == id) {
			rois_[i].deplacer(toX, toY);
			trouveEtModifier = true; 
		}
	}
	if (trouveEtModifier == false)
		cout << "Deplacement non effectue, piece(id) non existante" << endl; 

}

////La m�thode publique void deplacerPiece(string id, int toX, int toY) qui d�place la pi�ce 
////d'identifiant id  � la position de coordonn�es (toX,toY). ? 
////
////
////
////
////La m�thode publiquevoid enleverTour(const string id) qui permet d�enlever la tour d'identifiant 
////id de tableauTours_  ? 
////
////
////
////
////
////La m�thode publique void enleverPion(const string id)
////qui permet d�enlever le pion d'identifiant id de tableauPions_ 

/*********************************************
*Fonctions:		Echiquier::EnleverTour
*Descriptions:	Enleve une tour	par reference dans un tableau ayant
*				une capacite pour quatre tours.
*Parametre:		-(string)id	: l'ID de la tour
*Retour:		Aucun
*********************************************/
void Echiquier::enleverTour(const string/*&*/ id) {
	int index = 0;
	bool estPresent = false;
	for (unsigned i = 0; i < compteurTour_; i++) {
		if (id == tableauTours_[i].obtenirId()) {
			index = i;
			estPresent = true;
		}
	}
	if (estPresent)
	{
		for (unsigned int i = index; i < compteurTour_ - 1; i++) {
			tableauTours_[i] = tableauTours_[i + 1];
		}
		compteurTour_--;
	}
	else {
		cout << "L'id que vous avez entre est invalide." << endl;
	}
}

/*********************************************
*Fonctions:		Echiquier::EnleverPion
*Descriptions:	Enleve une tour	par reference dans un tableau ayant
*				une capacite pour seize Pions.
*Parametre:		-(string)id	: l'ID de la pion
*Retour:		Aucun
*********************************************/
void Echiquier::enleverPion(const string/*&*/ id) {
	int index = 0;
	bool estPresent = false;
	for (unsigned i = 0; i < compteurPion_; i++) {
		if (id == tableauPions_[i].obtenirId()) {
			index = i;
			estPresent = true;
		}
	}
	if (estPresent)
	{
		for (unsigned int i = index; i < compteurPion_ - 1; i++) {
			tableauPions_[i] = tableauPions_[i + 1];
		}
		compteurPion_--;
	}
	else {
		cout << "L'id que vous avez entre est invalide." << endl;
	}
}
