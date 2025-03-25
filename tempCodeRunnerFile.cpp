#include<iostream>
using namespace std;
int main(){
    int n,sum=0,rev;
    cout<<"enter a number";
    cin>>n;
        while(n!=0)
        {
            rev=n%10;
            sum=sum+rev+10;
            n=n/10;
            

        }
    cout<<"reverse number is :"<<sum;
} 
        
        
    
    