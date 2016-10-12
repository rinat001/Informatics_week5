#include <iostream>
using namespace std;
int main ()
{
int N,s=1,i;
cin>>N;
if ( N<=12) {
for  (i=1 ; i<=N; ++i) {
 
s=s*i;
 }
cout<<s<<endl;
 
return 0;
}
}