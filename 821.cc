#include <iostream>
#include <map>
#include <vector>
#include <sstream>
#include <iterator>
#include <iomanip>
#include <queue>
using namespace std;

int onedist(map<int,vector<int> >& arr,const int from){
   bool vis[100] = {0};
   int tdist=0,v=0,lvl=0,count=0,temp=0,sz=1;
   queue<int> list;
   list.push(from);
   while(!list.empty()){
      if(v == arr.size())
	 break;
      else if(!vis[list.front()-1]){
	 tdist+=lvl;
	 for(int i = 0;i < arr[list.front()].size();i++)
	    list.push(arr[list.front()][i]);
	 temp += arr[list.front()].size();
	 vis[list.front()-1] = true;
	 v++;}
      count++;
      if(count == sz){
	 sz = temp;
	 count = temp = 0;
	 lvl++;}
      list.pop();}
   return tdist;} 
      
int main(){
   string line;
   int trial = 1;
   cout << fixed;
   while(getline(cin,line) && line != "0 0"){
      istringstream ins(line);
      int p1,p2,pairs=0,total=0;
      double avg;
      map<int,vector<int> > relate;
      while(ins >> p1 >> p2){
	 if(p1 != 0 && p2 != 0)
	    relate[p1].push_back(p2);}
      for(map<int,vector<int> >::iterator it=relate.begin();it != relate.end();it++){
	 int temp = onedist(relate,it->first);
	 total+=temp;}
      pairs = relate.size()*(relate.size()-1);
      avg = total*1.0/pairs;
      cout << "Case " << trial << ": average length between pages = "
	   << setprecision(3) << avg  << " clicks" << endl;
      trial++;}}
