#include <bits/stdc++.h> 
using namespace std; 
        bool isMonotonic(vector<int>& A) {
        bool isincr = true;
        bool isdec = true;
        int n=A.size();
        for (int i = 0; i < n- 1; ++i) {
            if (A[i] > A[i+1])
                isincr = false;
            if (A[i] < A[i+1])
               isdec = false;
        }
        return isincr || isdec;   
    }
int main() 
{ 
 vector<int> arr = {1,2,4,5}; 
 cout <<boolalpha;
 cout<<isMonotonic(arr)<<endl; 
 return 0;
}