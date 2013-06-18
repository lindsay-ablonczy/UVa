#include <iostream>
#include <algorithm>
using namespace std;

int main(){
   int trial = 1,n,m;
   while(cin >> n){
      if(n != 0){
	 cout << "Case " << trial << ':' << endl;
	 int init[1000],combs[499500],query[25],nc,mins;
	 
	 for(int i = 0;i < n;i++)
	    cin >> init[i];
	 
	 cin >> m;
	 
	 for(int j = 0;j < m;j++)
	    cin >> query[j];
	 
	 nc = 0;
	 for(int p = 0;p < n-1;p++){
	    for(int q = p+1;q < n;q++){
	       combs[nc] = init[p]+init[q];
	       nc++;}}
	 
	 for(int r = 0;r < m;r++){
	    mins = combs[0];
	    for(int t = 1;t < nc;t++){
	       if(abs(query[r]-combs[t]) < (abs(query[r]-mins)))
		  mins = combs[t];}
	    cout << "Closest sum to " << query[r] << " is " << mins
		 << '.' << endl;}}

      trial++;}

   return 0;}
