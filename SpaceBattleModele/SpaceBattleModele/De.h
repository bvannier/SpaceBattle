/**
 * \file De.h
 * \brief Interface de la classe De
 * \author Vannier
 */
#ifndef DE_H
#define DE_H
#pragma once
#define WANTDLLEXP
#ifdef WANTDLLEXP		//exportation dll
#define DLL  __declspec( dllexport )
#define EXTERNC extern "C"
#else
#define DLL		//standard
#define EXTERNC
#endif

namespace ModeleInterfaces
{
	class De 
	{
		public:
		// Méthodes virtuelles pures
		virtual void lancerDe()=0;
		virtual void getValeur()=0;

	};

	EXTERNC DLL void DE_lancerDe(De*);
	EXTERNC DLL void DE_getValeur(De*);
}

#endif

