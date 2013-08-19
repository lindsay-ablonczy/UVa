#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;

int main(){
   string puzzle,line,game;
   while(getline(cin,game)){
      if(game != "-1"){
	 getline(cin,puzzle);
	 getline(cin,line);
	 istringstream qin(line);
	 int initsz = puzzle.length(),tries = 0,status = 0;
	 char guess;
	 string guessed = " ";
	 
	 while(tries < 7){
	    if(qin >> guess){
	       if(guessed.find(guess) == -1){
		  guessed+=guess;
		  int removed = count(puzzle.begin(),puzzle.end(),guess);
		  if(removed){
		     initsz -= removed;
		     if(initsz == 0){
			status = 1;
			break;}}
		  else
		     tries++;}}
	    else{
	       status = -1;
	       break;}}
	 
	 cout << "Round " << game << endl;
	 switch(status){
	    case -1:
	       cout << "You chickened out." << endl;
	       break;
	    case 1:
	       cout << "You win." << endl;
	       break;
	    case 0:
	       cout << "You lose." << endl;
	       break;}}
      else
	 break;}
   return 0;}
