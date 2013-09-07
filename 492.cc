#include <iostream>
#include <string>
#include <cctype>
#include <utility>
#include <vector>
using namespace std;

bool isVowel(char x){
   switch(x){
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':
      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'U':
	 return true;
      default:
	 return false;}}

string pigLatin(string x){
   if(isVowel(x[0]) || x.length() == 1)
      return x+"ay";
   else
      return x.substr(1,x.length()-1)+x[0]+"ay";}

int main(){
   string line;
   while(getline(cin,line)){
      bool inword = false;
      int temp;
      for(int pos = 0;pos < line.length();pos++){
	 bool vowel = false;
	 if(isalpha(line[pos]) && !inword){
	    temp = pos;
	    inword = true;}
	 else if(!isalpha(line[pos]) && inword){
	    cout << pigLatin(line.substr(temp,pos-temp)) << line[pos];
	    inword = false;}
	 else if(!isalpha(line[pos]))
	    cout << line[pos];
	 if(isalpha(line[pos]) && pos == line.length()-1){
	    if(inword)
	       cout << pigLatin(line.substr(temp,pos+1-temp));
	    else{
	       string junk;
	       junk += line[pos];
	       cout << pigLatin(junk);}}}
	 cout << endl;}
      return 0;}
