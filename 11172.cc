#include <iostream>
using namespace std;

int main(){
   int tries;
   cin >> tries;

   for(int i = 0;i < tries;i++){
      int v1,v2;
      cin >> v1 >> v2;

      if(v1 < v2)
	 cout << '<' << endl;
      else if(v1 > v2)
	 cout << '>' << endl;
      else
	 cout << '=' << endl;}

   return 0;}
