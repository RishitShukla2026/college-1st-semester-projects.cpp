#include <iostream>
using namespace std;

int main() {
	int x,p, sum=0;
	cout<<"enter the number to be reversed"<<endl;
	cin>>x;
	do {
	    p=x%10;
	    sum=sum*10+p;
	    x/=10;
	} while (x>0);
cout<<" this is the reversed number"<<sum;
return 0;

}
