#include<iostream>
using namespace std;
 
int main()
{
 
    // int age = 10;

    // int -> 4 Byte
    // long long -> 8 byte
    //float -> 4  byte
    //double -> 8 byte

    //char -> 1 byte
    //bool -> 1 byte


    // cout << age << endl;




    //-----------------

    //conditional statements
    // if(cond..){
    //     //this will be executed
    // }
    // else{
    //     this wil be executed
    // }

    // int marks = 60;
    // int leave = 5;

    // if(marks > 50 && leave < 3){
    //     cout << "1" << endl;
    // }
    // else if(leave < 10 && marks > 10){
    //     cout << "2" << endl;
    // }
    // else{
    //     cout << "3" << endl;
    // }



    //switch case
    // char grade = 'A';

    // switch(grade){
    //     case 'A':
    //         cout << "Excellent" << endl;
    //         break;
    //     case 'B':
    //         cout << "Good" << endl;
    //         break;
    //     case 'C':
    //         cout << "Average" << endl;
    //         break;
    //     default:
    //         cout << "Invalid" << endl;
    // }



    // int x = 10, y = 20;

    // int ans = (x > y) ? x : y;
    // cout << ans << endl;


    //--------------------------------


    // loops

    // for(init ; termination ; inc/dec){

    // }

    int i = 0;

    // for(i = 0; i < 5; i++){
    //     cout << i << " ";
    // }

    // while(i < 5){
    //     cout << i << " ";
    //     i++;
    // }

    do{
        cout << i << " ";
        i++;
    }
    while(i < 5);
}