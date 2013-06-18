#include <iostream>
#include <vector>
using namespace std;
int main(){
     int n,shift,q,indx;

     cin >> n;
     while(n != 0){
	vector<int> regions,temp;
	shift = 0;
	q = 1;
	for(int i = 1;i <= n;i++)
	   regions.push_back(i);
	while(shift == 0){
	   indx = 0;
	   temp = regions;
	   while(temp.size() > 1){
	      temp.erase(temp.begin()+indx);
	      indx += q-1;
	      indx %= temp.size();}
	   if(temp[0] == 13)
	      shift = q;
	   else
	      q++;}
	cout << shift << endl;
	cin >> n;}
     return 0;}
