#include <iostream>
using namespace std;
int main(){
   int v1,v2;
   while(cin >> v1 >> v2 && (v1 != 0 || v2 != 0)){
      int dig1,dig2,carry=0;
      bool car = false;
      while(true){
	 int dig1 = v1 % 10;
	 int dig2 = v2 % 10;
	 int total = dig1+dig2;
	 v1 /= 10;
	 v2 /= 10;
	 if(car){
	    total++;
	    car = false;}
	 if(total >= 10){
	    carry++;
	    car = true;}
	 if(v1 == 0 && v2 == 0)
	    break;}
      if(carry == 0)
	 cout << "No carry operation." << endl;
      else if(carry == 1)
	 cout << "1 carry operation." << endl;
      else
	 cout << carry << " carry operations." << endl;}
   return 0;}
