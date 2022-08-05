#include<iostream>
using namespace std  ; 
bool isSafe( int** arr , int x , int y , int n ){
    // x an y for the block concerned 
    // sqaure matrix so onli n 
    // n is the size of square matrix 
    if( x<n && y<n && arr[x][y]== 1  ){
        return true ; 

    }
     return false ; 




}
bool Ratinmaze(int** arr , int x , int y , int n , int** solarr ){
     // base consdition 
     if(x == n-1 ; y==n-1 ){
       
            solarr[x][y]= 1; 
            return true ; 
        }
        else{
            return false ; 
        }
     

    if(isSafe(arr, x, y, n)){
        solarr[x][y]= 1 ; 
    
    if(Ratinmaze(arr, x+1, y, n ,solarr))
          solarr[x][y]=1 ; 
          if(Ratinmaze(arr,x,y+1,n,solarr))
          solarr[x][y]=1 ; 
          return true ; 
    
    solarr[x][y] = 0 ; // backtracking 
     return false ; 

    }
     return false ; 

}

int main (){
     int n ; 
     cin>>n ; 
     int **arr = new int*[n] ; 
     for( int i =0 ; i < n ; i ++ ){
        arr[i] = new int[n] ; 
     }
      for( int i =0 ; i < n ;i++){
        for ( int j =0 ; j<n ; j ++){
            cin>>arr[i][j] ; 
        }
      }

       int** solarr = new int*[n] ; 
       for( int i =0 ; i<n ; i++){
        solarr[i]= new int[n] ; 
        for( int j =0 ; j<n ; j++){
            solarr[i][j]= 0 ; 
        }
       }
       if(Ratinmaze(arr,0,0,n,solarr))
           for (int i = 0; i < n; i++)
           {
               for (int j = 0; j < n; j++)
               {
                   cout<< solarr[i][j]<< "  ";
               }
               cout<<endl; 
           }
}