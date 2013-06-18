#include <iostream>
using namespace std;

long long exp(long long b,long long p,long long m){
   if(p == 0) return 1%m;
   if(p == 1) return b%m;
   if(p%2 == 0){
      int x = exp(b,p/2,m);
      return(x*x)%m;
   }
      return(exp(b,p-1,m)*b)%m;
   }

int main(){
   int B,P,M,temp;
   while(cin >> B >> P >> M){
      cout << exp(B,P,M) << endl;}
   return 0;}
