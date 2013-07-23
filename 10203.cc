#include <iostream>
#include <sstream>
#include <cmath>
using namespace std;

double dist(int x1,int y1,int x2,int y2){
   return sqrt(pow((x1-x2),2)+pow((y1-y2),2));}

int main(){
   int tries;
   cin >> tries;

   for(int i = 0;i < tries;i++){
      int p1x,p1y,p2x,p2y,h,m;
      double distance = 0,temp;
      string line,junk;
      cin >> temp >> temp;
      getline(cin,junk);
      while(getline(cin,line) && line != ""){
	 istringstream strin(line);
	 strin >> p1x >> p1y >> p2x >> p2y;
	 distance += (2*dist(p1x,p1y,p2x,p2y));}
      distance /= 1000;
      temp = distance/20;
      h = temp;
      m = floor(((temp-h)*60)+0.5);
      if(m == 60){
	 h++;
	 m = 0;}
      cout << h << ':';
      if(m < 10)
	 cout << 0 << m << endl;
      else
	 cout << m << endl;
      if(i != tries-1)
	 cout << endl;}

   return 0;}
	 
