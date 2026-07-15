#include<iostream>
#include<stack>
using namespace std;

void reverseString(string str){
    stack<string> st;

    for(int i = 0; i < str.length(); i++){
        string ans = "";
        while(str[i] != ' ' && i < str.length()){
            ans += str[i];
            i++;
        }
        st.push(ans);
    }
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}
 
int main()
{
    string s = "Hello World!";

    reverseString(s);
}


https://leetcode.com/problems/valid-parentheses/

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(char ch : s){
            if(ch == '(' || ch ==' {' || ch == '['){
                st.push(ch);
            }
            else{
                if(st.empty()) return false;

                char top = st.top();
                if(ch ==')' && top == '(' ||ch =='}' && top == '{' || ch ==']' && top == '['){
                    st.pop();
                }
                else{
                    return false;
                }

            }
            return st.empty();
        }
    }
};


https://www.geeksforgeeks.org/problems/stack-using-queue/1

class myStack {
    queue<int> q;

  public:

    void push(int x) {
        // Inserts an element x at the top of the stack
        q.push(x);
        int n = q.size();
        for(int i = 0; i < n -1; i++){
            q.push(q.front());
            q.pop();
        }
    }

    void pop() {
        // Removes an element from the top of the stack
        
        q.pop();
    }

    int top() {
        // Returns the top element of the stack
        // If stack is empty, return -1
    }

    int size() {
        // Returns the current size of the stack
    }
};



https://www.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1

class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        // code here
        stack<int> st;
        
        if(k > q.size()){
            return q;
        }
        //run a loop for k elements and push them in stack
        for(int i = 0; i < k ;i++){
            st.push(q.front());
            q.pop();
        }
        
        //then run a loop until stack is empty and push all elements back in queue
        while(!st.empty()){
            q.push(st.top());
            st.pop();
        }
        
        int n = q.size();
        for(int i = 0; i< n - k; i++){
            q.push(q.front());
            q.pop();
        }
        return q;
        
        
        
    }
};