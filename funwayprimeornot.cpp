#include<bits/stdc++.h>
using namespace std;
int main(){
   
    int number , x1,x2;
    cout<<"enter number to find prime or not";
    cin>>number;
    if((number<=5) && ((number==2)||(number==3)||(number==5)))//to give primeno from 1-5
    cout<<"prime"<<endl;
    else if((number<5) && (number == 4 ||  1 ||  0))
    cout<<"not prime"<<endl;

    x1 = (number+1)/6;//fun way to find primeno formula x = 6*n -1 if x>5
    x2 = (number-1)/6;//fun way to find primeno formula x = 6*n +1 if x>5

    if((number>5) && (((6*x1-1)==number) || ((6*x2+1)==number)))//just manipulated formula to equate
    cout<<"prime"<<endl;
    else if (number > 5 && (((6*x1-1)!=number) || ((6*x2+1)!=number)))
    cout<<"not prime"<<endl;
}