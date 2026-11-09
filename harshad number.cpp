#include <iostream>
using namespace std;

int main() {
	int n, p=0, sum=0, temp=0;
	cout<<"enter the number"<<endl;
	cin>>n;
	temp=n;
	while (n>0){
	    p=n%10;
	    sum=sum+p;
	    n/=10;
	    
	}
	if (temp%sum==0){
	    cout<<"the number is harshad number";
	}
	else {
	    cout<<"the number aint harshad number";
	}
return 0;
}
