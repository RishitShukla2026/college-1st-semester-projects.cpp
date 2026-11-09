#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int n, p=0, sum=0;
    cout<<"enter the number for checking its happiness"<<endl;
    cin>>n;
    if (n<=0){
        cout<<"invalid number";
    }
    
    while (true){
    while (n>0){
        p=n%10;
        sum = sum + pow(p,2);
        n/=10;
    }
    n=sum;
    sum=0;
    if (n==1) {
        cout<<"the number is happy"<<endl;
        break;
    }
    if (n==4){
        cout<<"the number is unhappy"<<endl;
        break;
    }
    }
    
    
return 0;
}
