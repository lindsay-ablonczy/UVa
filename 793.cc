#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

int fnd(vector<int>& parent,int key){
   if(parent[key-1] == key)
      return key;
   return parent[key-1] = fnd(parent,parent[key-1]);}

void mrg(vector<int>& parent,int key1,int key2){
   int id1 = fnd(parent,key1);
   int id2 = fnd(parent,key2);
   if(id1 != id2)
      parent[id1-1] = id2;}

int main(){
   int tries;
   cin >> tries;

   for(int i = 0;i < tries;i++){
      vector<int> ids;
      int nc,p1,p2,na = 0,nu = 0;
      char type;
      string line;
      cin >> nc;
      getline(cin,line);
      for(int j = 1;j <= nc;j++)
	 ids.push_back(j);

      while(getline(cin,line) && line != ""){
	 istringstream strin(line);
	 strin >> type >> p1 >> p2;
	 if(type == 'c')
	    mrg(ids,p1,p2);
	 else if(type == 'q'){
	    if(fnd(ids,p1) == fnd(ids,p2))
	       na++;
	    else
	       nu++;}}
      
      if(i != 0)
	 cout << endl;
      
      cout << na << ',' << nu << endl;}
   
   return 0;}

