#include <iostream>
#include <sstream>
#include <cstdlib>
using namespace std;
int main(){
   string line;
   while(getline(cin,line)){
      int t1,t2,num;
      bool j = true,diffs[3000] = {0};
      istringstream qin(line);
      qin >> num >> t1;
      while(qin >> t2){
	 diffs[abs(t2-t1)-1] = true;
	 t1 = t2;}
      if(num != 1){
	 for(int i = 0;i < num-1;i++){
	    if(!diffs[i]){
	       j = false;
	       break;}}}
      switch(j){
	 case true:
	    cout << "Jolly" << endl;
	    break;
	 case false:
	    cout << "Not jolly" << endl;
	    break;}}
   return 0;}
