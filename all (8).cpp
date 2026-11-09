#include <iostream>
#include <cstdlib>
using namespace std;


int main() {
	int n, i=0;
	cout<<"enter the number"<<endl;
	cin>>n;
	while (n>0){
	   
	
	if (n==1){
	     break;
	     }
	if (n%2==0){
	    n=n/2;
	    i++;
	    cout<<n<<" ";
	    }
	  else {
	      n=3*n+1;
	      i++;
	      cout<<n<<" ";
	  }
	
	}
cout<<"the number of steps is"<<i<<endl;
return 0;
}
