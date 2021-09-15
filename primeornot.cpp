#include<bits/stdc++.h>
using namespace std;
int main(){
    int flagprime = 0,flagnotprime = 0;
    int n;
    cout<<"enter no from 1 to 100 to know prime or not (-1 to exit)";
    cin>>n;
    if(n==1){ 
            cout<<"not prime";
        }
    for(int i = 2;i<=n;i++){
        if(n == -1){
            break;
        }
        else if(n%i==0&&i==n){
            flagprime = 1;
            break;
        }
        else if(n%i==0 && i<n){
        flagnotprime = 1;
        break;
        }
    }
    if (flagnotprime == 1){
        cout<<"not prime";
    }
    else if (flagprime == 1)
    cout<<"prime";
}