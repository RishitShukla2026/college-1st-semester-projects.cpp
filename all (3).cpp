#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a,i=0,p,sum=0,temp;
	cout<<"enter the number"<<endl;
	cin>>a;
	temp=a;
	do {
	    a=a/10;
	    i++;
	}while (a>0);
	a=temp;
	do {
	    p=a%10;
	    sum = pow(p,i)+sum;
	    a/=10;
	}while(a>0);
if (sum==temp){
    cout<<"the number is armstrong"<<endl;
}
else {
    cout<<"the number aint armstrong"<<endl;
}
return 0;
}
