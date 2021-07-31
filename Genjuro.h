#ifndef GENJURO_H
#define GENJURO_H

#include"Fighter.h"

using std::cout;

class Genjuro : public Fighter{
private:	
	int attackValue;
	
public:
	Genjuro(int health, int attack) : Fighter(health){
		attackValue = attack;
	}
	
	void print(){
		cout << "\nHaohmaru's attack!";
		cout << "\nGenjuro's current stamina: " << getHealthbar();
	}
	
	void whichFighter(){
		cout << "\nGenjuro ";
	}
	
};


#endif
