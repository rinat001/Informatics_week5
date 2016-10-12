#include <iostream>
using namespace std;
int main ()
{
int N,a=1;
cin>>N;
if ( N<=30) {
for (int i=1; i<=N; ++i)
a=a*2;
cout<<a<<endl;
}
return 0;
}
