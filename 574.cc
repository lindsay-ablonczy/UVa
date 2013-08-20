#include <iostream>
#include <vector>
using namespace std;

bool startSum(int total,vector<int> chosen,int dat[],int index,int sz,int prev){
   if(total < 0)
      return false;
   if(index >= sz){
      if(total == 0){
	 for(int j = 0;j < chosen.size();j++){
	    cout << chosen[j];
	    if(j < chosen.size()-1)
	       cout << '+';}
	 cout << endl;
	 return true;}
      else
	 return false;}
   else{
      bool ch = false,unch = false;
      if(dat[index] != prev){
	 chosen.push_back(dat[index]);
	 ch = startSum(total-dat[index],chosen,dat,index+1,sz,-1);
	 chosen.pop_back();}
      unch = startSum(total,chosen,dat,index+1,sz,dat[index]);
      return ch||unch;}}
		       
int main(){
   int t,n;
   while(cin >> t >> n && n != 0){
      int data[12];
      vector<int> junk;
      for(int i =0;i < n;i++)
	 cin >> data[i];
      cout << "Sums of " << t << ':' << endl;
      if(!startSum(t,junk,data,0,n,-1))
	 cout << "NONE" << endl;}
   return 0;}
