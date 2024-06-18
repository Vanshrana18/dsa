#include<bits/stdc++.h>
using namespace std;
int countPrimes(int n) {
        int count = 0;
        vector<bool> check (n+1, true);
        check[0]=check[1]=false;
        for(int i = 2 ; i < n ; i++){
            if(check[i]){
                count++;
                for(int j = 2*i ; j<n ; j = j+i){
                    check[j]=false;
                }
            }
        }
        return count;
    }

int main(){
    int n;
    cin>>n;  
    cout<<"total no of prime numbers before "<< n <<" : "<< countPrimes(n)<<endl;

return 0;
} 
