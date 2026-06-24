#include<iostream>
using namespace std;





void func1(int x){
    cout << "Value of x is : " << x << endl;
}

int func2(int y){
    int ans = 2 * y;
    return ans;
}
 
int main()
{
    // func1(10);
    // cout << func2(20);

    int a = 10;
    int &b = a;
     cout << &a << endl;
}