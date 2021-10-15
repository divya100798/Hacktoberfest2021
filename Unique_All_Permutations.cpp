Question:
Given an array arr[] of length n. Find all possible unique permutations of the array.

soln:
vector<vector<int>> uniquePerms(vector<int> arr ,int n) {
        // code here
        
        vector<int> v = arr;
        vector< vector< int > > v1;
        sort( arr.begin(), arr.end() );
        sort( v.begin(), v.end(), reverseSort );
        v1.push_back(arr);
        
        while( arr != v )
        {
            (next_permutation( arr.begin(), arr.end() ) );
            v1.push_back(arr);
        }
        
        return v1;
    }

Input: 
n = 3
arr[] = {1, 2, 1}

Output: 
1 1 2
1 2 1
2 1 1
  
Explanation:
These are the only possible unique permutations
for the given array.
