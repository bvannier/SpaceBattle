/**
 * \file CaseStationOrbitale.h
 * \brief Classe CaseStationOrbitale
 * \author Vannier
 */
#ifndef CASE_STATION_ORBITALE_H
#define CASE_STATION_ORBITALE_H
#pragma once
#define WANTDLLEXP
#ifdef WANTDLLEXP		//exportation dll
#define DLL  __declspec( dllexport )
#define EXTERNC extern "C"
#else
#define DLL		//standard
#define EXTERNC
#endif
#include "Couleur.h"
#include "Case.h"
using namespace ModeleImplementation;
#include "Couleur.h"
using namespace ModeleImplementation;
#include<vector>

namespace ModeleImplementation
{
	class CaseStationOrbitale : public Case
	{
		private :
			Couleur _couleur;


		public :
			CaseStationOrbitale(Couleur couleur): _couleur(couleur) {};


	}; 
} 

#endif

