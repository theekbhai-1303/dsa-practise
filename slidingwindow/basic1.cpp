#include <iostream>
#include <climits>
using namespace std;

int maxSum(int arr[], int n, int k)
{
    if ( n < k ){
        return 0 ; 
    }
    int max_sum = 0 ; 
    for(int i = 0 ; i<k ; i++){
        max_sum  += arr[i] ; 
        int temp_Sum = max_sum ; 
        for ( int i = k ; i<n ; i++ ){
            temp_Sum  = temp_Sum + arr[i] + arr[i-k] ; 
            max_sum = max(temp_Sum, max_sum) ;
        }
         return max_sum  ; 
    }  
}

int main()
{
    int arr[] = {1, 4, 2, 10, 2, 3, 1, 0, 20};
    int k = 4;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << maxSum(arr, n, k);
    return 0;
}