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
#include "Case.h"
using namespace ModeleImplementation;
#include<vector>

namespace ModeleImplementation
{
	/// <remarks>
	/// Patron de Conception "POIDS-MOUCHE"
	/// Uniquement pour les cases de type Energie et Vide
	/// </remarks>
	class FabriqueCase
	{
		private :


		protected :

			Case Case;

		public :


		private :


		protected :


		public :

			virtual void obtenirCase(object cle);
			virtual void creerCaseArtefact();
			virtual void creerCaseEnergie();
			virtual void creerCaseStationOrbitale();
			virtual void creerCaseVide();
			virtual void creerCaseAsteroide();

	}; 
	EXTERNC DLL void FABRIQUECASE_obtenirCase(FabriqueCase*, object cle);
	EXTERNC DLL void FABRIQUECASE_creerCaseArtefact(FabriqueCase*);
	EXTERNC DLL void FABRIQUECASE_creerCaseEnergie(FabriqueCase*);
	EXTERNC DLL void FABRIQUECASE_creerCaseStationOrbitale(FabriqueCase*);
	EXTERNC DLL void FABRIQUECASE_creerCaseVide(FabriqueCase*);
	EXTERNC DLL void FABRIQUECASE_creerCaseAsteroide(FabriqueCase*);
} 
