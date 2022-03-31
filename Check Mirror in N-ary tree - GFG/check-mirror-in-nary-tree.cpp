// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int checkMirrorTree(int n, int e, int A[], int B[]) {
        unordered_map<int, stack<int>> map;
        
        for(int i=0; i<(2*e); i+=2)
        {
            map[A[i]].push(A[i+1]);
        }
        
        for(int i=0; i<(2*e); i+=2)
        {
            int t=map[B[i]].top();
            map[B[i]].pop();
            
            if(t != B[i+1])
                return 0;
        }
        
        return 1;
        // code here
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,e;
        
        cin>>n>>e;
        int A[2*e], B[2*e];
        
        for(int i=0; i<2*e; i++)
            cin>>A[i];
            
        for(int i=0; i<2*e; i++)
            cin>>B[i];

        Solution ob;
        cout << ob.checkMirrorTree(n,e,A,B) << endl;
    }
    return 0;
}  // } Driver Code Ends