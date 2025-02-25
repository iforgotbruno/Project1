#include <iostream>
#include <string> 
using namespace std; 

class Player{
    public: 
        string PlayerCreation(string name); // Enter in the name of the player 
        void playerSubclass(); // Function to help choose what the class the player wants       
        void DisplayInfo(); 

    private: 
        string playerName;

};

string Player::PlayerCreation(string name) {
    playerName = name;
    return playerName;
}

void Player::DisplayInfo(){ 
    cout << playerName; 
}

int main(){

    string name; 
    cout << "Please enter in your name: ";
    getline(cin, name);  // Allows full name input
    Player test; 
    test.PlayerCreation(name); 
    test.DisplayInfo(); 

    return 0; 

}
