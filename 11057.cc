#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;

int main(){
   int n;
   while(cin >> n){
      int prices[10000],dollars;
      for(int i = 0;i < n;i++)
	 cin >> prices[i];
      sort(prices,prices+n);
      cin >> dollars;
      int half = dollars/2;

      int temp = -1;
      for(int j = 0;j < n;j++){
	 if(prices[j] >= half){
	    temp = j;
	    break;}}
      
      int mid = temp;
      if(mid < n-1 && prices[mid] == half && prices[mid+1] == half && (half+half) == dollars){
	 cout << "Peter should buy books whose prices are " << half << " and "
	      << half << '.' << endl << endl;}
      else{
	 int b1=-1,b2=-1;
	 for(int p = mid-1;p >= 0;p--){
	    for(int q = mid;q < n;q++){
	       if(prices[p]+prices[q] == dollars){
		  b1 = prices[p];
		  b2 = prices[q];
		  break;}}
	    if(b1 != -1)
	       break;}
	 cout << "Peter should buy books whose prices are " << b1 << " and "
	      << b2 << '.' << endl << endl;}}
   return 0;}
