/*============================================

Name: Xander Cherneski
Assignment:
Due date: Sept 20th
Description(I.P.O):
============================================*/
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
     int board() {

    cout<<"                      x                             x                          "<<endl;
    cout<<"                      x                             x                          "<<endl;
    cout<<"                      x                             x                          "<<endl;
    cout<<"           1          x               2             x           3              "<<endl;
    cout<<"                      x                             x                          "<<endl;
    cout<<"                      x                             x                          "<<endl;
    cout<<"                      x                             x                          "<<endl;
    cout<<"                      x                             x                          "<<endl;
    cout<<"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"<<endl;
    cout<<"                      x                             x                          "<<endl;
    cout<<"                      x                             x                          "<<endl;
    cout<<"                      x                             x                          "<<endl;
    cout<<"                      x                             x                          "<<endl;
    cout<<"            4         x              6              x           6              "<<endl;
    cout<<"                      x                             x                          "<<endl;
    cout<<"                      x                             x                          "<<endl;
    cout<<"                      x                             x                          "<<endl;
    cout<<"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"<<endl;
    cout<<"                      x                             x                          "<<endl;
    cout<<"                      x                             x                          "<<endl;
    cout<<"                      x                             x                          "<<endl;
    cout<<"            7         x              8              x             9            "<<endl;
    cout<<"                      x                             x                          "<<endl;
    cout<<"                      x                             x                          "<<endl;
    cout<<"                      x                             x                          "<<endl;
    cout<<"                      x                             x                          "<<endl;
     }
int main(){


    string play_one=" ";
    string play_two=" ";
    char playone_char=' ';
    char playtwo_char=' ';
    int player_move=0;


    cout<<"Enter player one's name: ";
    cin>>play_one;
    cout<<"Enter player two's name: ";
    cin>>play_two;

    cout<<"Choose whether "<<play_one<<" wishes to use x's or o's: ";
    cin>>playone_char;

    if(playone_char=='x'){
        cout<<play_two<<"'s character is o "<<endl;

    }else if(playone_char=='o'){
        cout<<play_two<<"'s character is x "<<endl;

    }else if(playone_char!='x' || 'o'){
        cout<<"ERROR. PLEASE SELECT EITHER X OR O: ";
        cin>>playone_char;
    }

    cout<<play_one<<" is going first"<<endl;
    board();
    cout<<"Please choose your first move based on the numbered positions: ";
    cin>>player_move;




     return 0;
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









/*================================Screen Dump================================


===========================================================================*/
