#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <iterator>
#include <queue>
using namespace std;

bool connect(map<int,vector<int> > list,int start){
   bool vis[50] = {0};
   int v = 0;
   queue<int> steps;
   steps.push(start);
   while(!steps.empty()){
      if(v == list.size())
	 return true;
      else if(!vis[steps.front()-1]){
	 vis[steps.front()-1] = true;
	 v++;
	 for(int x = 0;x < list[steps.front()].size();x++)
	    steps.push(list[steps.front()][x]);}
      steps.pop();}
   return false;}
   

void cycle(map<int,vector<int> >& lst,vector<int>& circ,int u){
      while(lst[u].size() > 0){
	 int temp = lst[u][0];
	 lst[u].erase(lst[u].begin());
	 lst[temp].erase(find(lst[temp].begin(),lst[temp].end(),u));
	 cycle(lst,circ,temp);}
      circ.push_back(u);}
	 
int main(){
   int t;
   cin >> t;
   for(int i = 1;i <= t;i++){
      int nb,p1,p2;
      bool path = true,con;
      map<int,vector<int> > vals;
      cin >> nb;
      for(int j = 0;j < nb;j++){
	 cin >> p1 >> p2;
	 vals[p1].push_back(p2);
	 vals[p2].push_back(p1);}

      for(map<int,vector<int> >::iterator it=vals.begin();it != vals.end();it++){
	 if((it->second.size() % 2) == 1){
	    path = false;
	    break;}}
      map<int,vector<int> >::iterator iter = vals.begin();
      int starter = iter->first;
      con = connect(vals,starter);
      if(path && con){
	 vector<int> circuit;
	 cycle(vals,circuit,starter);
	 if(i > 1)
	    cout << endl;
	 cout << "Case #" << i << endl;
	 for(int y = 0;y < circuit.size()-1;y++)
	    cout << circuit[y] << ' ' << circuit[y+1] << endl;}
      else{
	 if(i > 1)
	    cout << endl;
	    cout << "Case #" << i << endl << "some beads may be lost" << endl;}}
   return 0;}
