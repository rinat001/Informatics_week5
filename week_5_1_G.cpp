#include <iostream>
using namespace std;
int main () {
int g=1;
double n,s=0,i;
cin>>n;
for (i=1; i<=(2*n+1); i=i+2) {
if (g%2==0)
s=s-1/i;
if ( g%2!=0)
s=s+1/i;
g++ ;
}
 
cout<<4*s<<endl;
return 0;
}