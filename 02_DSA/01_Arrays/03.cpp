https://www.geeksforgeeks.org/problems/reverse-an-array/1

class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        int i = 0, j = arr.size() - 1;
        
        while(i < j){
            swap(arr[i++], arr[j--]);
            
        }
        
    }
};



https://www.geeksforgeeks.org/problems/check-if-an-array-is-sorted0701/1

class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        // code here
        for(int i = 0; i < arr.size() - 1; i++){
            if(arr[i] > arr[i+1]){
                return false;
            }
        }
        return true;
    }
};


https://www.geeksforgeeks.org/problems/second-largest3735/1

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int largest = INT_MIN, s_largest = INT_MIN;
        
        for(int i : arr){
            if(i > largest){
                s_largest = largest;
                largest = i;
            }
            else if(i > s_largest && i < largest){
                s_largest = i;
            }
        }
        
        return s_largest == INT_MIN ? -1 : s_largest;
    }
};


https://leetcode.com/problems/max-consecutive-ones/
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount = 0;
        int currCount = 0;

        for(int i : nums){
            if(i == 1){
                currCount++;
                maxCount = max(maxCount, currCount);
            }
            else{
                currCount = 0;
            }
        }
        return maxCount;
    }
};


// int arr[] = {12,32,55,1,26,53,78}, key=53
//find the key in array using linear search, 
// if key is found and value of key  > 20, 
// then return the double value of key 
// otherwise return the half value of key