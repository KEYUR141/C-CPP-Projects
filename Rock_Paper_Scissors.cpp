#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

class Game {
    private:
    string user_pick;
    string computer_pick;
    string result;

    public:
    string get_computer_pick() {
       
        // Generate random number
        srand(time(NULL));

        // Random number between 1 to 3
        int random_number=(rand()%3)+1;

        switch(random_number) {
            case 1:
             computer_pick="rock";
                break;

            case 2:
             computer_pick="scissors";
                break;

            case 3:
             computer_pick="paper";
                break;
        }
        return computer_pick;    
    }

    string get_user_pick() {
        char input;
        cout <<"Enter the Choice(r for rock, p for paper, s for scissors):";
        cin >> input;
        input = tolower(input);

        // Using while loop till the user enter the required choice
        while(1) {
        if(input=='r') {
            user_pick="rock";
            break;
        }

        else if(input=='p') {
            user_pick="paper";
            break;
        }

        else if(input=='s') {
            user_pick="scissors";
            break;
        }
       }
       return user_pick;
    }
       
     

    string get_result() {
       
        if(user_pick==computer_pick) {
            result="Draw";
        }
        else if(user_pick=="rock" && computer_pick=="paper") {
            result="Lose";
        }
        else if(user_pick=="scissors" && computer_pick=="rock") {
            result="Loss";
        }
        else if(user_pick=="paper" && computer_pick=="scissors") {
            result="Loss";
        }

        else {
            result="Win";
        }
        return result;
    }  
};


int main() {
    Game game;
   
  while(1) {  
    string user = game.get_user_pick();
    string computer = game.get_computer_pick();
    string result = game.get_result();

    cout<<"User Pick: "<< user<<endl;
    cout<<"Computer Pick: "<<computer <<endl;
    cout<<"Result: "<<result<<endl;

    string play_again;
    cout<<"Do you want to play again ? (y/n):";
    cin>>play_again;
   
    if(play_again == "n") {
        cout<<"Game End";
        break;
    }
    }

    return 0;
}
