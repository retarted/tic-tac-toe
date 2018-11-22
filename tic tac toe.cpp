/*============================================

Name: Xander Cherneski
Assignment:
Due date: Sept 20th
Description(I.P.O):
============================================*/
#include <iostream>
#include <iomanip>
#include <string>

    cout<<"                      x                             x                          "<<endl;
    cout<<"                      x                             x                          "<<endl;
    cout<<"                      x                             x                          "<<endl;
    cout<<"                      x               2             x         3                "<<endl;
    cout<<"                      x                             x                          "<<endl;
    cout<<"                      x                             x                          "<<endl;
    cout<<"                      x                             x                          "<<endl;
    cout<<"                      x                             x                          "<<endl;
    cout<<"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"<<endl;
    cout<<"                      x                             x                          "<<endl;
    cout<<"                      x                             x                          "<<endl;
    cout<<"                      x                             x                          "<<endl;
    cout<<"                      x                             x                          "<<endl;
    cout<<"         4            x              6              x           6              "<<endl;
    cout<<"                      x                             x                          "<<endl;
    cout<<"                      x                             x                          "<<endl;
    cout<<"                      x                             x                          "<<endl;
    cout<<"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"<<endl;
    cout<<"                      x                             x                          "<<endl;
    cout<<"                      x                             x                          "<<endl;
    cout<<"                      x                             x                          "<<endl;
    cout<<"        7             x         8                   x             9            "<<endl;
    cout<<"                      x                             x                          "<<endl;
    cout<<"                      x                             x                          "<<endl;
    cout<<"                      x                             x                          "<<endl;
    cout<<"                      x                             x                          "<<endl;
    }




     int o(){
     cout<<" O O O ";
     cout<<"O     O";
     cout<<"O     O";
     cout<<"O     O";
     cout<<" O O O ";
     }

     int X(){
     cout<<" X    X";
     cout<<"  X X  ";
     cout<<"   X   ";
     cout<<"  X X  ";
     cout<<"X    X ";
     }

using namespace std;
     int board() {

    string play_one     ="";
    string play_two     ="";
    char playOne_char   =' ';
    char playTwo_char   =' ';
    int player_move     = 0;
    int firstPlay       = 0;


    cout<<"Enter player one's name: ";
    cin>>play_one;
    cout<<"Enter player two's name: ";
    cin>>play_two;

    cout<<"Choose whether "<<play_one<<" wishes to use x's or o's: ";
    cin>>playOne_char;

    playOne_char = tolower(playOne_char);

    while (playOne_char != 'x' || playOne_char != 'o') {
        cout << "Error invalid entry, the only playable characters are x and o, please re-enter: ";
        cin  >> playOne_char;
        playOne_char = tolower(playOne_char);

    }

    if(playOne_char=='x'){
        cout<<play_two<<"'s character is o "<<endl;
        playTwo_char = 'o';

    }
    else if(playOne_char=='o'){
        cout<<play_two<<"'s character is x "<<endl;
         playTwo_char = 'x';

    }


    cout << "Who is going first, " << play_one << "(1) or " << play_two << "(2)?";
    cin  >> firstPlay;

    while (firstPlay != 1 || firstPlay != 2) {
    cout << "ERROR numbers 1 or 2 expected you entered: " << firstPlay << " please re-enter: ";
    cin  >> firstPlay;
    }


    if ()
    cout<<play_one<<" is going first"<<endl;
    board();
    cout<<"Please choose your first move based on the numbered positions: ";
    cin>>player_move;

}









/*================================Screen Dump================================


===========================================================================*/
