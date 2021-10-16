#include <bits/stdc++.h> 
using namespace std; 
void pushZerosToEnd(int arr[], int n) 
{ 

    int count = 0; 
  
    for (int i = 0; i < n; i++) 
        if (arr[i] != 0) 
         
            arr[count++] = arr[i]; 
  

    while (count < n) 
        arr[count++] = 0; 
} 
  void modifyAndRearrangeArr(int arr[], int n) 
{ 
    
    if (n == 1) 
        return; 
   
    for (int i = 0; i < n - 1; i++) { 
        if ((arr[i] != 0) && (arr[i] == arr[i + 1])) { 
            arr[i] = 2 * arr[i]; 
  arr[i + 1] = 0; 
            i++; 
        } 
    } 
  
    
    pushZerosToEnd(arr, n); 
} 

void printArray(int arr[], int n) 
{ 
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " "; 
} 
  

int main() 
{ 
    int arr[] = { 0, 2, 2, 2, 0, 6, 6, 0, 0, 8 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
  
    cout << "Original array:\n "; 
    printArray(arr, n); 
  
    modifyAndRearrangeArr(arr, n); 
  
    cout << "modifier array:\n "; 
    printArray(arr, n); 
  
    return 0; 
} 