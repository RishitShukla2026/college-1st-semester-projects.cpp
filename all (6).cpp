#include <iostream>
using namespace std;

int main() {
    int n, a=0, b=1, sum=0, m;
    cout<<"enter the number upto which you want the series"<<endl;
    cin>>n;
    cout<<a<<" "<<b;
    for (int m=1; m<=(n-2); m++) {
        sum=a+b;
        cout<<" "<<sum;
        a=b;
        b=sum;
}
return 0;
}