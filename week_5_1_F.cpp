#include <iostream>
using namespace std;
int main () {
double  n,i,s=0;
cin>>n;
for ( i=1; i<=n; ++i) {
s=s+1/(i*i);
}
cout<<s<<endl;
return 0;
}