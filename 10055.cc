#include <iostream>
#include <cmath>

using namespace std;
int main(){
   long long int x,y;

   //loop checking for EoF
   while (cin >> x >> y) {
      if (y >= x)
	 cout << (y-x) << endl;
      else
	 cout << (x-y) << endl;
   }
   return 0;
}
