/**
 * \file Case.h
 * \brief Classe Case
 * \author Vannier
 */
#ifndef CASE_H
#define CASE_H
#pragma once
#define WANTDLLEXP
#ifdef WANTDLLEXP		//exportation dll
#define DLL  __declspec( dllexport )
#define EXTERNC extern "C"
#else
#define DLL		//standard
#define EXTERNC
#endif
#include<vector>

namespace ModeleImplementation
{
	class Case
	{
	protected :
		int _positionX;		/* Abscisse de la case sur le plateau */
		int _positionY;		/* Ordonnee de la case sur le plateau */
		bool _occupation;	/* Attribut qui rend vrai si un vaisseau se trouve déjà sur la case */

	public :

		/**
		 * \brief Constructeur
		 * Constructeur de la classe Case
		 */
		Case();

		/**
		 * \brief Constructeur
		 * Constructeur de la classe case
		 * \param x: Abscisse de la case.
		 * \param y: Ordonnee de la case.
		 */
		Case(int x, int y);

		/**
		 * \brief Retourne la position X de la Case
		 * \return _positionX, la position X de la case
		 */
		inline int getPositionX(){ return _positionX; }

		/**
		 * \brief Retourne la position Y de la Case
		 * \return _positionY, la position Y de la case
		 */
		inline int getPositionY(){ return _positionY; }

		/**
         * \brief Verifie si la case est occupée ou non.
         * \return Vrai si la case est occupée, faux sinon.
         */
        inline bool estOccupe(){ return _occupation; }
		
		/**
         * \brief Compare deux cases en comparant leurs position
         * \param c2, la case à comparer avec la case courante.
		 * \return Vrai si les cases sont egales, faux sinon
         */
         inline bool operator==(const Case& c2){ return ((_positionX == c2._positionX) && (_positionY == c2._positionY)); }



	}; 
} 

#endif
