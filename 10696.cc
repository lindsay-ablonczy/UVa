#include <iostream>
using namespace std;
int f91(int N){
   if(N >= 101)
      return N-10;
   else
      return f91(f91(N+11));}
int main(){
   int n;
   while(cin >> n){
      if(n != 0)
	 cout << "f91(" << n << ") = " << f91(n) << endl;
      else
	 break;}
   return 0;}
