/**
 * \file CaseVide.h
 * \brief Classe CaseVide
 * \author Vannier
 */
#ifndef CASE_VIDE_H
#define CASE_VIDE_H
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
	class CaseVide : public Case
	{

		public :
			CaseVide();


	}; 
} 

#endif

