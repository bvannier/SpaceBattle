/**
 * \file CaseArtefact.h
 * \brief Classe CaseArtefact
 * \author Vannier
 */
#ifndef CASE_ARTEFACT_H
#define CASE_ARTEFACT_H
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
	class CaseArtefact : public Case
	{
		private :
			int _nbArtefacts;

		public :

			CaseArtefact(): _nbArtefacts(3) {};

			inline int getNbArtefacts() { return _nbArtefacts; }

	}; 
	EXTERNC DLL void CASEARTEFACT_getNbArtefacts(CaseArtefact*);
}

#endif

