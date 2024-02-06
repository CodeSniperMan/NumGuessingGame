#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;

int main(){
    cout << "\n\t\t\t # Number Guessing Game #" <<endl;
    cout << "\n\t\t\t Welcome to mnmth's game!!"<<endl;
    cout << "You have to guess a number between 1 and 100." << endl <<
            "You'll have limited choices based on the " << endl <<
            "level you choose. Good Luck!" << endl;
    while(true){
        cout << "choose the game difficulty level" << endl;
        cout << "1 for easy" << endl << 
            "2 for medium" << endl << 
            "3 for difficult" << endl << 
            "0 for exit the game!" << endl;
        int difficultyChoice;
        cin >> difficultyChoice;

        srand(time(0));
        int secretNum = 1 + (rand()%100);
        int playerChoice;
        
        if(difficultyChoice == 1){
            cout << "\n You have 10 choices for finding the " << endl <<
                    "secret number between 1 and 100." << endl;
            int choices = 10;
            for(int i=1; i<=10; i++){
                cout << "Guess the Number : ";
                cin >> playerChoice;
                if(playerChoice == secretNum){
                    cout << "\n\t\t\tCongrats!! You won the game!" << endl <<
                    "\t\tYou identified secreate number and that number was " << playerChoice << endl;
                    cout << "\n Play again end enjoy it :>" << endl;
                    break;
                }
                else{
                    cout << "\n Nope, you can't identify that secrete number!!" << endl;
                    if(playerChoice < secretNum){
                        cout << " your choice " << playerChoice << " is too low" << endl;
                    }
                    else{
                        cout << " your choice " << playerChoice << "  is too high" << endl;
                    }
                }
                choices--;
                cout << "\n you have now only " << choices << " attempts!" << endl;
                if(choices == 0){
                    cout << "You couldn't find the "
                            "secret number, it was "
                            << secretNum
                            << ", You lose!!\n\n" << endl;
                    cout << "Play again end enjoy the game!!!!!!" << endl;
                }
            }
        }
        // game level : MEDIUM
        else if(difficultyChoice == 2){
            cout << "\n You have 5 choices for finding the " << endl <<
                    "secret number between 1 and 100." << endl;
            int choices = 5;
            for(int i=1; i<=5; i++){
                cout << "Guess the Number : ";
                cin >> playerChoice;
                if(playerChoice == secretNum){
                    cout << "\n\t\t\t Congrats!! You won the game!" << endl <<
                    "\t\t You identified secreate number and that number was " << playerChoice << endl;
                    cout << "\n Play again end enjoy it :>" << endl;
                    break;
                }
                else{
                    cout << "\n Nope, you can't identify that secrete number!!" << endl;
                    if(playerChoice < secretNum){
                        cout << " your choice " << playerChoice << " is too low" << endl;
                    }
                    else{
                        cout << " your choice " << playerChoice << "  is too high" << endl;
                    }
                }
                choices--;
                cout << "\n you have now only " << choices << " attempts!" << endl;
                if(choices == 0){
                    cout << "You couldn't find the "
                            "secret number, it was "
                            << secretNum
                            << ", You lose!!\n\n" << endl;
                    cout << "Play again end enjoy the game!!!!!!" << endl;
                }
            }
        }
        // game level : DIFFICULT
        else if(difficultyChoice == 3){
            cout << "\nYou have 3 choices for finding the " << endl <<
                    "secret number between 1 and 100." << endl;
            int choices = 3;
            for(int i=1; i<=3; i++){
                cout << "Guess the Number : ";
                cin >> playerChoice;
                if(playerChoice == secretNum){
                    cout << "\n\t\t\tCongrats!! You won the game!" << endl <<
                    "\t\tYou identified secreate number and that number was " << playerChoice << endl;
                    cout << "\nPlay again end enjoy it :>" << endl;
                    break;
                }
                else{
                    cout << "\nNope, you can't identify that secrete number!!" << endl;
                    if(playerChoice < secretNum){
                        cout << " your choice " << playerChoice << " is too low" << endl;
                    }
                    else{
                        cout << " your choice " << playerChoice << "  is too high" << endl;
                    }
                }
                choices--;
                cout << "\nyou have now only " << choices << " attempts!" << endl;
                if(choices == 0){
                    cout << "You couldn't find the "
                            "secret number, it was "
                            << secretNum
                            << ", You lose!!\n\n" << endl;
                    cout << "Play again end enjoy the game!!!!!!" << endl;
                }
            }
        }
        
        // exit the game
        else if(difficultyChoice == 0){
            cout << "\n\t\t\tYou are existing, visit again!!" << endl << 
            "\t\t\t\tThanks :)" << endl << 
            "\t\t\t\t\t~mnmth";
            exit(0);
        }
        else{
            cout << "\n\tYou have chosen wrong number!!" << endl << 
            "\tchoose from (1,2,3)" << endl <<
            "\tTry Again and enjoy the game" << endl;
        }

    }
    
    return 0;
}