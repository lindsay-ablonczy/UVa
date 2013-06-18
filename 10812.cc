#include <iostream>
using namespace std;
int main(){
   int n,sum,dif,temp1,temp2;

   cin >> n;

   for(int i = 0;i < n;i++){
      cin >> sum >> dif;
      if (dif > sum)
	 cout << "impossible" << endl;
      else{
	 temp1 = (sum-dif)/2;
	 temp2 = (sum+dif)/2;
	 if ((temp1+temp2) == sum)
	    cout << temp2 << ' ' << temp1 << endl;
	 else
	    cout << "impossible" << endl;}}

   return 0;}
