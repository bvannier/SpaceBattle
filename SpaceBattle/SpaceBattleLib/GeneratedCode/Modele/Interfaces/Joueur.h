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

namespace ModeleInterfaces
{
	class Joueur 
	{
		public:
		virtual void deplacer()=0;

		virtual void initialiserJoueur()=0;

		virtual void lancerDe()=0;

		virtual void tirer(object float angle)=0;

		virtual void deposerArtefact()=0;

	};
	EXTERNC DLL void JOUEUR_deplacer(Joueur*);
	EXTERNC DLL void JOUEUR_initialiserJoueur(Joueur*);
	EXTERNC DLL void JOUEUR_lancerDe(Joueur*);
	EXTERNC DLL void JOUEUR_tirer(Joueur*, object float angle);
	EXTERNC DLL void JOUEUR_deposerArtefact(Joueur*);
}

