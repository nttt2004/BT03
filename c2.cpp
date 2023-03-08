#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int chan=0, le=0;
    int a[1000];
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]%2==0) chan+=a[i];
        else le++;
    }
    double max=a[0], min=a[0];
    for(int i=1; i<n; i++){
        if(a[i]>max) max=a[i];
        if(a[i]<min) min=a[i];
    }
    cout<<max<<endl<<min<<endl<<chan<<endl<<le;
    return 0;
}
