/**
 * \file Vaisseau-mere.h
 * \brief Classe du Vaisseau-Mère
 * \author Vannier
 */
#ifndef VAISSEAU_MERE_H
#define VAISSEAU_MERE_H
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
	class Vaisseau-mere : public FabriqueConcreteVaisseau
	{

		public :
			static int nbChargesMax = 3;
			static int nbDes = 2;
			static int nbRebonds = 5;

	}; 
}

#endif

