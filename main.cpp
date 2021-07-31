/*
I read and accept the submission rules and the extra rules specified in each question. This is my
own work that is done by myself only
Celine Sezer - 2453538
*/

//---------------Edited---------------

#include"Fighter.h"
#include"Genjuro.h"
#include"Haohmaru.h"

using std::cout;
using std::cin;

int main(){
	
	Fighter *fighter[2];
	
	char cont = 'y';
	int gAttack, gHealth;
	int hAttack, hHealth;
	int first;
	int i;
	
	while (cont == 'y'){
		
		cout << "\nGenjuro's attack power: ";
		cin >> gAttack;
		cout << "Genjuro's max health (healthbar): ";
		cin >> gHealth;
		
		cout << "Haohmaru's attack power: ";
		cin >> hAttack;
		cout << "Haohmaru's max health (healthbar): ";
		cin >> hHealth;
		
		Genjuro genjuro(gHealth, gAttack);
		Haohmaru haohmaru(hHealth ,hAttack);
		
		fighter[0] = &genjuro;
		fighter[1] = &haohmaru; 
		
		cout << "\nWho goes first:\nGenjuro(1), Haohmaru(2): ";
		cin >> first;
		
		while (first == 1){
		
			fighter[1]->updateHealthBar(gAttack);
			fighter[0]->updateHealthBar(hAttack);
			
			for (i=1; i>=0; i--){
				
				if (fighter[0]->isLost()){
					fighter[1]->print();
					cout << "\nHaohmaru's attack!";
					break;
				}
				
				else if (fighter[1]->isLost()){
					cout << "\nGenjuro's attack!";
					break;
				}
				
				fighter[i]->print();
			}
			
			if (fighter[0]->isLost()){
				cout << "\n";
				fighter[0]->whichFighter();
				cout << "lost!";
				
				fighter[1]->whichFighter();
				cout << "win!";
				break;
			}
			
			if (fighter[1]->isLost()){
				cout << "\n";
				fighter[1]->whichFighter();
				cout << "lost!";
				
				fighter[0]->whichFighter();
				cout << "win!";
				break;
			}
		}
		
		while (first == 2){
			
			fighter[0]->updateHealthBar(hAttack);
			fighter[1]->updateHealthBar(gAttack);
			
			for (i=0; i<2; i++){
				
				if (fighter[1]->isLost()){
					fighter[0]->print();
					cout << "\nGenjuro's attack!";
					break;
				}
				
				else if (fighter[0]->isLost()){
					cout << "\nHaohmaru's attack!";
					break;
				}
				
				fighter[i]->print();
			}
		
			if(fighter[0]->isLost()){
				cout << "\n";
				fighter[0]->whichFighter();
				cout << "lost!";
				
				fighter[1]->whichFighter();
				cout << "win!";
				break;
			}
			
			if (fighter[1]->isLost()){
				cout << "\n";
				fighter[1]->whichFighter();
				cout << "lost!";
				
				fighter[0]->whichFighter();
				cout << "win!";
				break;
			}
		}
		
		cout << "\nWould you like to play again? (y/n): ";
		cin >> cont;
		
		if (cont == 'n'){
			cout << "Goodbye!\n";
		}
		
	}
	
	return 0;
}
