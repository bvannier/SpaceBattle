﻿//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     Changes to this file will be lost if the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
#pragma once
#define WANTDLLEXP
#ifdef WANTDLLEXP		//exportation dll
#define DLL  __declspec( dllexport )
#define EXTERNC extern "C"
#else
#define DLL		//standard
#define EXTERNC
#endif
#include "int.h"
#include "Couleur.h"
#include "Vaisseau.h"
using namespace ModeleInterfaces;
#include "Position.h"
using namespace ModeleImplementation;
#include "Couleur.h"
using namespace ModeleImplementation;
#include<vector>

namespace ModeleImplementation
{
	class VaisseauConcret : public Vaisseau
	{
		private :

			bool artefact;
			int nbCharges;
			Couleur couleurVaisseau;

		protected :

			Position positionVaisseau;
			Position positionStationOrbitale;
			Couleur Couleur;

		public :


		private :


		protected :


		public :

			virtual void rechargerVaisseau();
			virtual void detruireVaisseau();
			virtual void deplacerVaisseau();
			virtual void possedeArtefact();
			virtual void chargerArtefact();
			virtual void getNbCharges(object )();

	}; 
	EXTERNC DLL void VAISSEAUCONCRET_rechargerVaisseau(VaisseauConcret*);
	EXTERNC DLL void VAISSEAUCONCRET_detruireVaisseau(VaisseauConcret*);
	EXTERNC DLL void VAISSEAUCONCRET_deplacerVaisseau(VaisseauConcret*);
	EXTERNC DLL void VAISSEAUCONCRET_possedeArtefact(VaisseauConcret*);
	EXTERNC DLL void VAISSEAUCONCRET_chargerArtefact(VaisseauConcret*);
	EXTERNC DLL void VAISSEAUCONCRET_getNbCharges(VaisseauConcret*, object )();
} 

