#include<bits/stdc++.h>
using namespace std;
void primeFactors(int n) {
    int cnt;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
             cnt =0;
   while(n%i==0){
       
       n=n/i;
       cnt++;
   }
   cout<<i<<"^"<<cnt<<"*";
        }
    }
  if(n!=1){
       cout<<n<<"^"<<1<<" ";
  }
}
int main(){
    int num;
    cin>>num;
    primeFactors(num);
    cout<<endl;
    return 0;
}
