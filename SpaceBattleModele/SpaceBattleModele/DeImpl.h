/**
 * \file DeImpl.h
 * \brief Implementation de la classe De représentant un dé
 * \author Vannier
 */
#ifndef DEIMPL_H
#define DEIMPL_H
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
#include "De.h"
using namespace ModeleInterfaces;
#include<vector>
#include <ctime>
#include <cstdlib> 

namespace ModeleImplementation
{
	class DeImpl : public De
	{
		private :
			int _valeur;	/* Valeur d'un dé */

		public :
			/**
			 * \brief Constructeur
			 * Constructeur de la classe De
			 */
			De()
			{
				srand(time(NULL)); 
				_valeur = -1;
			}

		/**
		 * \brief Lance le de et lui attribue une valeur entre 1 et 6
		 */
		virtual inline void lancerDe() { _valeur = (rand() % 6) + 1; }

		/**
		 * \brief Retourne la valeur du De
		 * \return _valeur, la valeur du De
		 */
		virtual inline int getValeur() { return _valeur; }

	};

	EXTERNC DLL void DEIMPL_lancerDe(DeImpl*);
	EXTERNC DLL void DEIMPL_getValeur(DeImpl*);
}  

#endif