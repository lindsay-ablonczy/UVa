#include <iostream>
using namespace std;
int main(){
   string line,codes[8];
   int numsym = 0,tries = 1;
   bool dec = true;
   while(getline(cin,line)){
      if(line != "9"){
	 codes[numsym] = line;
	 numsym++;}
      else{
	 for(int i = 0;i < numsym-1;i++){
	    for(int j = i+1;j < numsym;j++){
	       if(codes[i].length() < codes[j].length()){
		  if(!codes[j].find(codes[i])){
		     dec = false;}}
	       else if(codes[j].length() < codes[i].length()){
		  if(!codes[i].find(codes[j])){
		     dec = false;}}
	       if(!dec)
		  break;}
	    if(!dec)
	       break;}
	 cout << "Set " << tries << " is ";
	 if(!dec)
	    cout << "not ";
	 cout << "immediately decodable" << endl;
	 tries++;
	 numsym = 0;
	 dec = true;}}
   return 0;}
