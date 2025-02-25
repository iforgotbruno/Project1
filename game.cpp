#include <iostream>
#include <string> 
using namespace std; 

class Player{
    public: 
        string PlayerCreation(string name);       
};

string Player::PlayerCreation(string name){
    return name; 
}

int main(){

    Player test;
    cout << "Your name is: " << test.PlayerCreation("Bruno"); 

    return 0; 

}