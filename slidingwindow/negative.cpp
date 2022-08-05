// C++ implementation to find the first negative
// integer in every window of size k
#include <bits/stdc++.h>
using namespace std;

// function to find the first negative
// integer in every window of size k
void printFirstNegativeInteger(int arr[], int n, int k)
{ bool flag ; 

   for( int i =  0 ; i< n- k + 1 ; i ++){
    flag = false ; 
    for ( int j =  i ; j < i + k ; j++  )
    {
        if ( arr[j] < 0 ){
            flag = true ; 
            cout <<arr[j] ; 
             break ; 
        } 
   
        
         
   }
    if(!flag){
        cout << " 0 " ; 
    }
}
}
// Driver program to test above functions
int main()
{
    int arr[] = {12, -1, -7, 8, -15, 30, 16, 28};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    printFirstNegativeInteger(arr, n, k);
    return 0;
}
