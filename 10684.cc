#include <iostream>
#include <algorithm>
using namespace std;
int main(){
   int bets;
   while(cin >> bets && bets != 0){
      int series[10000],sum[10000],highest;
      for(int i = 0;i < bets;i++){
	 cin >> series[i];
	 if(i == 0)
	    sum[i] = highest = series[i];
	 else{
	    sum[i] = max(series[i],series[i]+sum[i-1]);
	    highest = max(sum[i],highest);}}
      if(highest <= 0)
	 cout << "Losing streak." << endl;
      else
	 cout << "The maximum winning streak is " << highest << '.' << endl;}
   return 0;}
