#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
   int cases;
   cin >> cases;
   for(int i = 0;i < cases;i++){
      int len,n,temp,mint,maxt,mid = 0;
      cin >> len >> n;
      vector<int> ants;
      for(int j = 0;j < n;j++){
	 cin >> temp;
	 ants.push_back(temp);
	 if(abs((len/2)-temp) < abs((len/2)-mid))
	    mid = temp;}
      sort(ants.begin(),ants.end());
      mint = min(len-mid,mid);
      maxt = max(len-ants[0],ants[0]);
      maxt = max(maxt,max(len-ants[n-1],ants[n-1]));
      cout << mint << ' ' << maxt << endl;}
   return 0;}
