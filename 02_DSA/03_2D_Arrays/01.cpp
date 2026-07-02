#include<iostream>
using namespace std;

// void printEvenColumn(int arr[][], int row, int col){

// }
 
int main()
{
    // int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    // int arr[3][3] = {{1,2,3},
    //                  {4,5,6},
    //                  {7,8,9}
    //                 };

    int arr[3][4];
    //user input row wise
    // for(int i = 0; i < 3; i++){
    //     for(int j = 0; j < 4; j++){
    //         cin >> arr[i][j];
    //     }
    // }
    //user input column wise

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 3; j++){
            cin >> arr[j][i];
        }
    }
 
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}