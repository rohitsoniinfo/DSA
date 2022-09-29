/*
Unique Number of Occurrences
Questoin: Given an array of integers arr, return true if the number of occurrences of each value in the array is unique, or false otherwise.
Input: arr = [1,2,2,1,1,3]
Output: true
Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.
*/

//code 
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> ans;
        int i=0;
        int size=arr.size();
        sort(arr.begin(),arr.end());
        
        while(i<size)
        {
            int count=1;
            for(int j=i+1;j<size;j++)
            {
                if(arr[i]==arr[j])
                {
                    count++;
                }
                else 
                    break;
            }
            ans.push_back(count);
            i=i+count;
        }
        size=ans.size();
        sort(ans.begin(),ans.end());
        for(int i=0;i<size-1;i++)
        {
            if(ans[i]==ans[i+1])
            {
                return false;
            }
            
        }
        return true;
    }
};
