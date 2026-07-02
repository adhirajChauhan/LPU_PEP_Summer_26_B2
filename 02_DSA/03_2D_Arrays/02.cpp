#include<iostream>
using namespace std;

bool search(int arr[][3], int row, int col, int target){
    for(int i = 0; i < 3; i++){
        for(int j  = 0; j < 3; j++){
            if(arr[i][j] == target) return true;
        }
    }
    return false;
}

//calculate and print the sum of every row
void sum(int arr[][3], int row, int col){
    for(int i = 0; i < row; i++){
        int sum = 0;
        for(int j = 0; j < col; j++){
            sum += arr[i][j];
        }
        cout << sum  <<  endl;
    }
}
//print the value of max sum and also its row index
//if multiple rows have same max sum, return the index of last row
 
int main()
{
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
}