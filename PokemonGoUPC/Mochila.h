#pragma once
#include "stdafx.h"
#include "Elemento.h"
#include "Pokemon.h"

class CMochila
{
private:

	vector <CPokemon*> ArrPokemons;
	string Equipo;
	int Monedas;
	int Medallas;
	int PolvoEstelar;
	int NPokeball;
	int NPociones;
	int NSuperPociones;
	int NRevivir;
	int CarAbra;
	int CarBulbasur;
	int CarCharmander;
	int CarEvee;
	int CarEkans;
	int CarMachop;
	int CarMagikarp;
	int CarMeowth;
	int CarOnix;
	int CarPikachu;
	int CarSnorlax;
	int CarSquirtle;
	int CarPidgey;
	int NObjetos;
	int NPokemon;
	int NMaxObjetos;
	int NMaxPokemon;
	int Experiencia;

public:
	CMochila();
	~CMochila();

	vector <CPokemon*> Get_ArrPokemons();
	void Agregar_Pokemons(CPokemon *oNuevo);
	void Elimina_Pokemon(int pos);

	string Get_Equipo();
	int Get_Monedas();
	int Get_Medallas();
	int Get_PolvoEstelar();
	int Get_NPokeball();
	int Get_NPociones();
	int Get_NSuperPociones();
	int Get_NRevivir();
	int Get_CarAbra();
	int Get_CarBulbasur();
	int Get_CarCharmander();
	int Get_CarEvee();
	int Get_CarEkans();
	int Get_CarMachop();
	int Get_CarMagikarp();
	int Get_CarMeowth();
	int Get_CarOnix();
	int Get_CarPikachu();
	int Get_CarSnorlax();
	int Get_CarSquirtle();
	int Get_CarPidgey();
	int Get_NObjetos();
	int Get_NPokemon();
	int Get_NMaxObjetos();
	int Get_NMaxPokemon();
	int Get_Experiencia();

	void Set_Equipo(string value);
	void Set_Monedas(int value);
	void Set_Medallas(int value);
	void Set_PolvoEstelar(int value);
	void Set_NPokeball(int value);
	void Set_NPociones(int value);
	void Set_NSuperPociones(int value);
	void Set_NRevivir(int value);
	void Set_CarAbra(int value);
	void Set_CarBulbasur(int value);
	void Set_CarCharmander(int value);
	void Set_CarEvee(int value);
	void Set_CarEkans(int value);
	void Set_CarMachop(int value);
	void Set_CarMagikarp(int value);
	void Set_CarMeowth(int value);
	void Set_CarOnix(int value);
	void Set_CarPikachu(int value);
	void Set_CarSnorlax(int value);
	void Set_CarSquirtle(int value);
	void Set_CarPidgey(int value);
	void Set_NObjetos(int value);
	void Set_NPokemon(int value);
	void Set_Experiencia(int value);
};

