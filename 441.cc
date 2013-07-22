#include <iostream>
#include <algorithm>
using namespace std;

int main(){
   int from;
   bool first = 1;
   while(cin >> from){
      if(from == 0) break;
      else{
	 if(first == 0)
	    cout << endl;
	 int num[49];
	 for(int p = 0;p < from;p++){
	    cin >> num[p];}
	 sort(num,num+from);

	 int p[6];
	 for(p[0] = 0;p[0] < from;p[0]++){
	    for(p[1] = p[0]+1;p[1] < from;p[1]++){
	       for(p[2] = p[1]+1;p[2] < from;p[2]++){
		  for(p[3] = p[2]+1;p[3] < from;p[3]++){
		     for(p[4] = p[3]+1;p[4] < from;p[4]++){
			for(p[5] = p[4]+1;p[5] < from;p[5]++){
			   cout << num[p[0]];
			   for(int i = 1;i < 6;i++)
			      cout << ' ' << num[p[i]];
			   cout << endl;}}}}}}
	 first = 0;}}
	 
   return 0;}
