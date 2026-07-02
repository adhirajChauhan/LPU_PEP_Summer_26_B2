#include<iostream>
using namespace std;

string reverse(string s){
    int i = 0, j =  s.length() - 1;

    while(i < j){
        swap(s[i++], s[j--]);
    }
    return s;
}
 
int main()
{
  string str = "Hello";
  
}



