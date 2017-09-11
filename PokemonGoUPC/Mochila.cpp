#include "Mochila.h"


CMochila::CMochila()
{
	Equipo = "";
	Monedas = 0;
	Medallas = 0;
	PolvoEstelar = 0;
	NPokeball = 0;
	NPociones = 0;
	NSuperPociones = 0;
	NRevivir = 0;
	CarAbra = 0;
	CarBulbasur = 0;
	CarCharmander = 0;
	CarEvee = 0;
	CarEkans = 0;
	CarMachop = 0;
	CarMagikarp = 0;
	CarMeowth = 0;
	CarOnix = 0;
	CarPikachu = 0;
	CarSnorlax = 0;
	CarSquirtle = 0;
	CarPidgey = 0;
	NPokemon = 0;
	NObjetos = 0;
	NMaxObjetos = 250;
	NMaxPokemon = 150;
	Experiencia = 0;
}


CMochila::~CMochila()
{
}


vector <CPokemon*> CMochila::Get_ArrPokemons()
{
	return ArrPokemons;
}

void CMochila::Agregar_Pokemons(CPokemon *oNuevo)
{
	ArrPokemons.push_back(oNuevo);
}

void CMochila::Elimina_Pokemon(int pos)
{
	ArrPokemons.erase(ArrPokemons.begin() + pos);
}

string CMochila::Get_Equipo(){ return Equipo; }
int CMochila::Get_Monedas(){ return Monedas; }
int CMochila::Get_Medallas(){ return Medallas; }
int CMochila::Get_PolvoEstelar(){ return PolvoEstelar; }
int CMochila::Get_NPokeball(){ return NPokeball; }
int CMochila::Get_NPociones(){ return NPociones; }
int CMochila::Get_NSuperPociones(){ return NSuperPociones; }
int CMochila::Get_NRevivir(){ return NRevivir; }
int CMochila::Get_CarAbra(){ return CarAbra; }
int CMochila::Get_CarBulbasur(){ return CarBulbasur; }
int CMochila::Get_CarCharmander(){ return CarCharmander; }
int CMochila::Get_CarEvee(){ return CarEvee; }
int CMochila::Get_CarEkans(){ return CarEkans; }
int CMochila::Get_CarMachop(){ return CarMachop; }
int CMochila::Get_CarMagikarp(){ return CarMagikarp; }
int CMochila::Get_CarMeowth(){ return CarMeowth; }
int CMochila::Get_CarOnix(){ return CarOnix; }
int CMochila::Get_CarPikachu(){ return CarPikachu; }
int CMochila::Get_CarSnorlax(){ return CarSnorlax; }
int CMochila::Get_CarSquirtle(){ return CarSquirtle; }
int CMochila::Get_CarPidgey(){ return CarPidgey; }
int CMochila::Get_NObjetos(){ return NObjetos; }
int CMochila::Get_NPokemon(){ return NPokemon; }
int CMochila::Get_NMaxObjetos(){ return NMaxObjetos; }
int CMochila::Get_NMaxPokemon(){ return NMaxPokemon; }
int CMochila::Get_Experiencia(){ return Experiencia; }

void CMochila::Set_Equipo(string value){ Equipo = value; }
void CMochila::Set_Monedas(int value){ Monedas = value; }
void CMochila::Set_Medallas(int value){ Medallas = value; }
void CMochila::Set_PolvoEstelar(int value){ PolvoEstelar = value; }
void CMochila::Set_NPokeball(int value){ NPokeball = value; }
void CMochila::Set_NPociones(int value){ NPociones = value; }
void CMochila::Set_NSuperPociones(int value){ NSuperPociones = value; }
void CMochila::Set_NRevivir(int value){ NRevivir = value; }
void CMochila::Set_CarAbra(int value){ CarAbra = value; }
void CMochila::Set_CarBulbasur(int value){ CarBulbasur = value; }
void CMochila::Set_CarCharmander(int value){ CarCharmander = value; }
void CMochila::Set_CarEvee(int value){ CarEvee = value; }
void CMochila::Set_CarEkans(int value){ CarEkans = value; }
void CMochila::Set_CarMachop(int value){ CarMachop = value; }
void CMochila::Set_CarMagikarp(int value){ CarMagikarp = value; }
void CMochila::Set_CarMeowth(int value){ CarMeowth = value; }
void CMochila::Set_CarOnix(int value){ CarOnix = value; }
void CMochila::Set_CarPikachu(int value){ CarPikachu = value; }
void CMochila::Set_CarSnorlax(int value){ CarSnorlax = value; }
void CMochila::Set_CarSquirtle(int value){ CarSquirtle = value; }
void CMochila::Set_CarPidgey(int value){ CarPidgey = value; }
void CMochila::Set_NObjetos(int value){ NObjetos = value; }
void CMochila::Set_NPokemon(int value){ NPokemon = value; }
void CMochila::Set_Experiencia(int value){ Experiencia = value; }