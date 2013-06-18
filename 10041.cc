#include <iostream>
#include <algorithm>
using namespace std;
int main(){
   int t,r,v,s;
   int rel[500];

   cin >> t;
   for(int i = 0;i < t;i++){
      cin >> r;
      for(int j = 0;j < r;j++)
	 cin >> rel[j];
      sort(rel,rel+r);
      s=0;
      //if (r%2 != 0){
	 v = rel[r/2];
	 for(int k = 0;k < r;k++){
	    if(rel[k] > v)
	       s+=(rel[k]-v);
	    else
	       s+=v-rel[k];}
      //    else{
      //v = (rel[r/2]+rel[(r/2)-1])/2;
      // for(int k = 0;k < r;k++){
      //    if(rel[k] > v)
      //       s+=(rel[k]-v);
      //    else
      //       s+=v-rel[k];}}

      cout << s << endl;}
   return 0;}
