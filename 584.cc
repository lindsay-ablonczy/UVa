#include <iostream>
#include <cstdlib>
#include <sstream>
using namespace std;
int main(){
   string line;
   int gnum = 1;
   
   while(getline(cin,line) && line != "Game Over"){
      istringstream stin(line);
      char r1;
      int game[10] = {0},total = 0,frame = 0,check[10] = {0};
      while(stin >> r1){
	 char r2,r3;
	 //frame 10
	 if(frame == 9){
	    if(r1 == 'X'){
	       stin >> r2 >> r3;
	       if(r2 == 'X'){
		  if(r3 == 'X')
		     game[9] = 30;
		  else
		     game[9] = 20+r3-'0';}
	       else if(r3 == '/')
		  game[9] = 20;
	       else
		  game[9] = 10+r2-2*'0'+r3;}
	    else{
	       stin >> r2;
	       if(r2 == '/'){
		  stin >> r3;
		  if(r3 == 'X')
		     game[9] = 20;
		  else
		     game[9] = 10+r3-'0';}
	       else
		  game[9] = r1-2*'0'+r2;}
	    frame++;}
	 //regular frame
	 else if(r1 == 'X'){
	    game[frame] = 10;
	    check[frame] = 2;
	    frame++;}
	 else{
	    stin >> r2;
	    if(r2 == '/'){
	       game[frame] = 10;
	       check[frame] = 1;
	       frame++;}
	    else{
	       game[frame] = r1-2*'0'+r2;
	       check[frame] = 0;
	       frame++;}}
	 //checking for past strikes/spares
	 if(frame-1 > 0){
	    if(frame-1 > 1){
	       if(check[frame-3] > 0){
		  if(r1 == 'X')
		     game[frame-3] += 10;
		  else
		     game[frame-3] += r1-'0';
		  check[frame-3]--;}}
	    if(check[frame-2] == 2){
	       if(r1 == 'X'){
		  game[frame-2] += 10;
		  check[frame-2]--;
		  if(frame == 10){
		     if(r2 == 'X')
			game[frame-2] += 10;
		     else
			game[frame-2] += r2-'0';
		     check[frame-2]--;}}
	       else{
		  if(r2 == '/')
		     game[frame-2] += 10;
		  else
		     game[frame-2] += (r1-2*'0'+r2);
		  check[frame-2] -= 2;}}
	    else if(check[frame-2] == 1){
	       if(r1 == 'X')
		  game[frame-2] += 10;
	       else
		  game[frame-2] += r1-'0';
	       check[frame-2] -= 1;}}}
      for(int j = 0;j < 10;j++)
	 total+=game[j];
      cout << total << endl;
      gnum++;}
   
   return 0;}
   
