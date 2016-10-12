#include <iostream>
using namespace std;
int main () {
int k,n,c=1,d=1,f=1,h,b;
cin>>n>>k;
b=n-k;
for ( int i=1 ; i<=n; ++i ) {
c=c*i;
}
for ( int i=1 ; i<=k; ++i ) {
 
d=d*i;
}
for ( int i=1 ; i<=b; ++i ) {
 
f=f*i;
}
 
h=c/(d*f);
cout<<h<<endl;
return 0;
}