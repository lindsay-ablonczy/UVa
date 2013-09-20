#include <iostream>
#include <sstream>
#include <map>
#include <cmath>
#include <cstdlib>
using namespace std;
int main(){
   int times;
   string junk2;
   map<string,double> diffs;
   cin >> times;
   
   diffs["UTC"] = 0;
   diffs["GMT"] = 0;
   diffs["BST"] = 1;
   diffs["IST"] = 1;
   diffs["WET"] = 0;
   diffs["WEST"] = 1;
   diffs["CET"] = 1;
   diffs["CEST"] = 2;
   diffs["EET"] = 2;
   diffs["EEST"] = 3;
   diffs["MSK"] = 3;
   diffs["MSD"] = 4;
   diffs["AST"] = -4;
   diffs["ADT"] = -3;
   diffs["NST"] = -3.5;
   diffs["NDT"] = -2.5;
   diffs["EST"] = -5;
   diffs["EDT"] = -4;
   diffs["CST"] = -6;
   diffs["CDT"] = -5;
   diffs["MST"] = -7;
   diffs["MDT"] = -6;
   diffs["PST"] = -8;
   diffs["PDT"] = -7;
   diffs["HST"] = -10;
   diffs["AKST"] = -9;
   diffs["AKDT"] = -8;
   diffs["AEST"] = 10;
   diffs["AEDT"] = 11;
   diffs["ACST"] = 9.5;
   diffs["ACDT"] = 10.5;
   diffs["AWST"] = 8;
   getline(cin,junk2);
   
   for(int i = 0;i < times;i++){
      int curh,curm,fh,fm,th,tm,ch,cm,lefth,leftm;
      bool am;
      char jun;
      string sit,junk,from,to;
      getline(cin,sit);
      istringstream line(sit);
      if(sit.find("noon") != string::npos){
	 curh = 12;
	 curm = 0;
	 am = false;
	 getline(line,junk,' ');
	 getline(line,from,' ');
	 line >> to;}
      else if(sit.find("midnight") != string::npos){
	 curh = 0;
	 curm = 0;
	 am = true;
      	 getline(line,junk,' ');
	 getline(line,from,' ');
	 line >> to;}
      else{
	 line >> curh >> jun >> curm;
	 if(sit.find("a.m.") != string::npos){
	    am = true;
	    if(curh == 12)
	       curh = 0;} 
	 else{
	    am = false;
	    if(curh != 12)
	       curh += 12;}
	 getline(line,junk,'.');
	 getline(line,junk,' ');
	 getline(line,from,' ');
	 line >> to;}
      
      fh = floor(diffs[from]);
      if(ceil(diffs[from]) != diffs[from])
	 fm = 30; else fm = 0;
      th = floor(diffs[to]);
      if(ceil(diffs[to]) != diffs[to])
	 tm = 30; else tm = 0;
      ch = th-fh;
      cm = tm-fm;

      curh += ch + 24;
      curm += cm;

      while(curm < 0) {
	 curh += 23;
	 curm += 60;}
      int changem = curm/60;
      leftm = curm%60;
      curh += changem;
      lefth = curh%24;
      int acth,actm;

      if(lefth == 0){
	 acth = 12;
	 actm = leftm;
	 am = true;}
      else if(lefth == 12){
	 acth = lefth;
	 actm = leftm;
	 am = false;}
      else if(lefth > 12){
	 acth = lefth - 12;
	 actm = leftm;
	 am = false;}
      else{
	 acth = lefth;
	 actm = leftm;
	 am = true;}
      
      if((acth == 12 || acth == 0) && actm == 0){
	 if(am)
	    cout << "midnight" << endl;
	 else
	    cout << "noon" << endl;}
      else{
	 cout << acth << ':';
	 if(actm < 10)
	    cout << 0;
	 cout << actm << ' ';
	 if(am)
	    cout << "a.m." << endl;
	 else
	    cout << "p.m." << endl;}}	 
      
   return 0;}
