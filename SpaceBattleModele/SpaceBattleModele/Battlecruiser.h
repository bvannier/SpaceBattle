/**
 * \file Battlecruiser.h
 * \brief Classe du Battlecruiser
 * \author Vannier
 */
#ifndef BATTLECRUISER_H
#define BATTLECRUISER_H
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
	class Battlecruiser : public FabriqueConcreteVaisseau
	{

		public :
			static int nbChargesMax = 2 ;
			static int nbDes = 1 ;
			static int nbRebonds = 4;

	}; 
} 

#endif
