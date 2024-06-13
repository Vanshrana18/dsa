#include<iostream>
using namespace std;
int printwave(int arr[][4],int rows,int columns){

  for( int col =0;col<columns;col++){
    if(columns&1){
for(int row=rows-1;row =0; row--){
    cout<<arr[row][col]<<" ";
}
    }
    else{
for(int row =0 ;row<rows;row++ )
cout<<arr[row][col]<<" ";
    }
}
return 0;
}
int main(){
    int arr[4][4];
     for(int row=0;row<4;row++){
        for(int col=0;col<4;col++){
            cin>>arr[row][col];
        }
    }
    
        
        cout<<endl;
    printwave(arr,4,4);
    return 0;
}
