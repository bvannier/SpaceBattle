/**
 * \file Coordonne.h
 * \brief Classe représentant les coordonnées
 * \author Vannier
 */
#pragma once
#define WANTDLLEXP
#ifdef WANTDLLEXP		//exportation dll
#define DLL  __declspec( dllexport )
#define EXTERNC extern "C"
#else
#define DLL		//standard
#define EXTERNC
#endif
#include "float.h"
#include<vector>

namespace ModeleImplementation
{
	class Coordonnee
	{
		private :
			float _x;
			float _y;

		public :
			inline float getX() { return _x; }
			inline float getY() { return _y; }
			inline void setX(float x) { _x = x;}
			inline void setY(float y) { _y = y;}

	};

	EXTERNC DLL void COORDONNEE_getX(Coordonnee*);
	EXTERNC DLL void COORDONNEE_getY(Coordonnee*);
	EXTERNC DLL void COORDONNEE_setX(Coordonnee*);
	EXTERNC DLL void COORDONNEE_setY(Coordonnee*);
} 

