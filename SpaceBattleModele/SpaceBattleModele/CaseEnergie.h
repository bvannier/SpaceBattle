/**
 * \file CaseEnergie.h
 * \brief Classe CaseEnergie
 * \author Vannier
 */
#ifndef CASE_ENERGIE_H
#define CASE_ENERGIE_H
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
	class CaseEnergie : public Case
	{
		private :

		public :
			CaseEnergie();

	}; 
}

#endif

