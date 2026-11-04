#include <iostream>
using namespace std;

int main() {
    int n, a=0, b=1, sum=0, m;
    cout<<"enter the number upto which you want the series"<<endl;
    cin>>n;
    cout<<a<<" "<<b;
    while (m<=(n-2)) {
        sum=a+b;
        cout<<" "<<sum;
        a=b;
        b=sum;
        m++;
}
return 0;
}


