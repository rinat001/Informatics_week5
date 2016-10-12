#include <iostream>
#include <iomanip>
using namespace std;
int main ()
 {
double N,c=1;
double s=1;
 
cin>>N;
 
for (int i=1; i<=N; i++)
{
c=c/i;
s=s+c;
}
cout<<setprecision(5)<<fixed<<s<<endl;
 
return 0;
}
