#include<iostream>
using namespace std;
 
 void wavePrint(int arr[][3], int row, int col){
    for(int c = 0 ; c < col; c++){
        if(c%2==0){
            for(int r = 0; r < row; r++){
                cout << arr[r][c] << " ";
            }
        }
        else{
            for(int r = row - 1; r >= 0; r--){
                cout << arr[r][c] << " ";
            }
        }
    }
 }

 void spiralPrint(int arr[][4], int row, int col){
    int topRow = 0;
    int bottomRow = row -1;
    int leftCol = 0;
    int rightCol = col -1;

    while(topRow <= bottomRow && leftCol <= rightCol){
        //print the top row
        for(int i = leftCol; i <= rightCol; i++){
            cout << arr[topRow][i] << " ";
        }
        topRow++;

        //print right col
        for(int i = topRow; i <= bottomRow; i++){
            cout << arr[i][rightCol] << " ";
        }
        rightCol--;
        //print bottom row
        for(int i = rightCol; i >= leftCol; i--){
            cout << arr[bottomRow][i] << " ";
        }
        bottomRow--;

        //print left col
        for(int i = bottomRow; i >= topRow; i--){
            cout << arr[i][leftCol] << " ";
        }
        leftCol++;
    }
 }

int main()
{
    int arr[][3] = {1,2,3,4,5,6,7,8,9};
}