#include <iostream>
#include <algorithm>
using namespace std;

int main(){
   int tries;
   cin >> tries;

   for(int i = 0;i < tries;i++){
      int len,order[50],swaps = 0;
      cin >> len;
      
      for(int j = 0; j < len;j++)
	 cin >> order[j];
      
      bool check = 0;
      
      while(!check){
	 int count = 0;
	 for(int k = 0;k < len;k++){
	    if(k == len-1){
	       if(order[k] == k+1)
		  count++;}
	    else{
	       if(order[k] > order[k+1]){
		  swap(order[k],order[k+1]);
		  swaps++;}
	       if(order[k] == k+1)
		  count++;}}
	 if(count == len)
	    check = 1;}

      cout << "Optimal train swapping takes " << swaps << " swaps." << endl;}

   return 0;}
