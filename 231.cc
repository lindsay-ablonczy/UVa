#include <iostream>
#include <algorithm>
using namespace std;

int main(){
   int test = 1;
   while(true){
      int height[32767],caught[32767];
      int track = 0,temp,maxi;
      cin >> temp;
      if(temp == -1)
	 break;
      else{
	 height[0] = temp;
	 track++;
	 if(test != 1)
	    cout << endl;}
      while(temp != -1){
	 cin >> temp;
	 if(temp != -1){
	    height[track] = temp;
	    track++;}}
      for(int r = 0;r < track;r++)
	 caught[r] = 1;
      for(int i = 1;i < track;i++){
	 for(int j = i-1;j >= 0;j--){
	    if(height[j] >= height[i])
	       caught[i] = max(caught[i],caught[j]+1);}}
      maxi = caught[0];
      for(int k = 1;k < track;k++)
	 maxi = max(caught[k],maxi);

      cout << "Test #" << test << ':' << endl
	   << "  maximum possible interceptions: " << maxi << endl;
      test++;}
   return 0;}
