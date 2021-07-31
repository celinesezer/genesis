#ifndef HAOHMARU_H
#define HAOHMARU_H

#include"Fighter.h"

using std::cout;

class Haohmaru : public Fighter{
private:
	int attackValue;	
	
public:
	Haohmaru(int health, int attack) : Fighter(health){
		attackValue = attack;
	}
	
	void print(){
		cout << "\nGenjuro's attack!";
		cout << "\nHaohmaru's current stamina: " << getHealthbar();
	}
	
	void whichFighter(){
		cout << "\nHaohmaru ";
	}
	
};

#endif
