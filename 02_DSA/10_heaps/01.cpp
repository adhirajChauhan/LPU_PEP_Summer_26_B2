#include<iostream>
using namespace std;
 






class MaxHeap{
    public:
    vector<int> heap;

    void bubbleUp(int index){
        while(index > 0){
            int parent = (index -1)/2;

            if(heap[index] > heap[parent]){
                swap(heap[index], heap[parent]);
                index = parent;
            }
            else{
                break;
            }
        }

    }

    void insert(int value){
        heap.push_back(value);
        bubbleUp(heap.size()-1);
    }
};
int main()
{
 
}