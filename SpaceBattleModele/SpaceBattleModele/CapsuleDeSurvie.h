/**
 * \file CapsuleDeSurvie.h
 * \brief Classe du Battlecruiser
 * \author Vannier
 */
#ifndef CAPSULEDESURVIE_H
#define CAPSULEDESURVIE_H
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
#include "FabriqueConcreteVaisseau.h"
using namespace ModeleImplementation;
#include<vector>

namespace ModeleImplementation
{
	class CapsuleDeSurvie : public FabriqueConcreteVaisseau
	{

		public :
			static int nbChargesMax = 1;
			static int nbDes = 1;
			static int nbRebonds = 3;

	}; 
}

#endif

