#include <iostream> 
using namespace std; 
void EvenSum(int arr[], int n) 
{ 
    int even = 0; 
    for (int i = 0; i < n; i++) { 
             cin>>arr[i];
	    if (i % 2 == 0) 
            even += arr[i];  
    } 
    cout << "Even index positions sum " << even; 
} 
int main() 
{ 
    int arr[] = { 0, 1, 2, 3, 4 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    EvenSum(arr, n); 
    return 0; 
} 

 
