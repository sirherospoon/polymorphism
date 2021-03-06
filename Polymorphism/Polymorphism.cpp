// **************
// - 
// **************


#include "stdafx.h"
#include <iostream>
using namespace std;


// *************** CREATURE ***************

class Creature
{
public:
	Creature(int health = 100);
	virtual void Greet() const = 0;
	virtual void GetHealth() const;

protected:
	int mHealth;
};

Creature::Creature(int health):
	mHealth(health)
{}

void Creature::GetHealth() const
{
	cout << "Health: " << mHealth << endl;
}


// *************** ORC ***************

class Orc : public Creature
{
public:
	Orc(int health = 200);
	virtual void Greet() const;
};

Orc::Orc(int health):
	Creature(health)
{}

void Orc::Greet() const
{
	cout << "The orc grunts hello." << endl;
}


// *************** GABE NEWELL ***************

class GabeN : public Creature
{
public:
	GabeN(int health = 75);
	virtual void Greet() const;
};

GabeN::GabeN(int health):
	Creature(health)
{}

void GabeN::Greet() const
{
	cout << "Hi I'm Gabe Newell, the founder of Valve; you can call me Gabe N." << endl;
}


// *************** AJIT PAI *****************

class AjitPai : public Creature
{
public:
	AjitPai(int health = 75);
	virtual void Greet() const;
};

AjitPai::AjitPai(int health):
	Creature(health)
{}

void AjitPai::Greet() const
{
	cout << "I like money..." << endl;
}


// *************** GOBLIN ***************

class Goblin : public Creature
{
public:
	Goblin(int health = 100);
	virtual void Greet() const;
};

Goblin::Goblin(int health):
	Creature(health)
{}

void Goblin::Greet() const
{
	cout << "hi i is goblin." << endl;
}


// *************** MAIN() ***************

int main()
{

	// ORC
	Creature* pOrc = new Orc();
	cout << "\nOrc:" << endl;
	pOrc->Greet();
	pOrc->GetHealth();

	// GABE NEWELL
	Creature* pGabeN = new GabeN();
	cout << "\nGabe Newell:" << endl;
	pGabeN->Greet();
	pGabeN->GetHealth();

	// AJIT PAI
	Creature* pAjitPai = new AjitPai();
	cout << "\nAjit Pai:" << endl;
	pAjitPai->Greet();
	pAjitPai->GetHealth();

	// GOBLIN
	Creature* pGoblin = new Goblin();
	cout << "\nGoblin:" << endl;
	pGoblin->Greet();
	pGoblin->GetHealth();

    return 0;
}