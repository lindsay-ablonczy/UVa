#include <iostream>
#include <algorithm>
using namespace std;
int main(){
   int t,s,a,f;

   cin >> t;
   for(int i = 0;i < t;i++){
      cin >> s >> a >> f;
      int x[50000],y[50000];
      for(int j = 0;j < f;j++)
	 cin >> x[j] >> y[j];
      sort(x,x+f);
      sort(y,y+f);
      cout<<"(Street: "<<x[(f-1)/2]<<", Avenue: "<<y[(f-1)/2]<<')'<<endl;}
   return 0;}
