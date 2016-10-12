#include <iostream>
using namespace std;
int main () {
double  a,n,d=1,f=1;
cin>>a>>n;
 
 
for ( int i=1 ; i<=n; ++i )
{
 
d= d*a;
 
f=f+d;
}
 
 
cout<<f<<endl;
return 0;
}
 