#include <iostream>
#include <iomanip>
using namespace std;

int main(){
 int n;
 cin>>n;
 double a[100];
 double sum1=0, sum2=0;
 for(int i=0; i<n; i++){
    cin>>a[i];
    sum1+=a[i];
 }
 double tb=sum1/n;
 for(int i=0; i<n; i++){
    sum2+=((a[i]-tb)*(a[i]-tb));
 }
 cout<<fixed<<setprecision(2)<<tb<<' '<<sum2/n;
 return 0;
}
