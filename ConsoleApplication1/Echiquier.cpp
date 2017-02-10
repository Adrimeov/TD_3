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

	if(abs(position) > 1)
		cout<<"Entrer invalide "


}