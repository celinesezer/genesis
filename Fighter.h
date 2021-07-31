#ifndef FIGHTER_H
#define FIGHTER_H
//lala
#include<iostream>

class Fighter{
private:
	int healthbar;
	bool lost;
	
public:
	Fighter(int fighterHealthbar){
		healthbar = fighterHealthbar;
		lost = false;
	}
	
	virtual void print(void) = 0;
	
	int getHealthbar() const{
		return healthbar;
	}
	
	void updateHealthBar(int decrementHealth){
		healthbar = healthbar-decrementHealth;
	}
	
	bool isLost() const{
		if (healthbar <= 0){
			return true;
		}
		
		return false;
	}
	
	virtual void whichFighter(void) = 0;
	
	int getHealthbar(){
		return healthbar;
	}
	
};

#endif

