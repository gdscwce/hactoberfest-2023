/* Increasing Array Problem and solution from CSES */
/*https://cses.fi/problemset/task/1094/ */

#include<iostream>
using namespace std;
#define lli long long int
int main(){
    lli n;
    cin>>n;
    lli a[n] , moves=0;
    for(lli i=0;i<n;i++){
        cin>>a[i];
    }
    for(lli i=1;i<n;i++){
        if(a[i]<a[i-1]){
            moves+=a[i-1]-a[i];
            a[i]+=a[i-1]-a[i];
        }
    }
  cout<<moves;
}
