#include <iostream>
#include <queue>
#include <cmath>
using namespace std;
int main(){
   priority_queue<long int> left,right;
   int temp;
   cin >> temp;
   left.push(temp);
   cout << temp << endl;
   while(cin >> temp){
      //Inserting
      if(left.size() > right.size()){
	 if(temp >= left.top())
	    right.push(temp*-1);
	 else{
	    right.push(left.top()*-1);
	    left.pop();
	    left.push(temp);}}
      else if(right.size() > left.size()){
	 if(temp <= right.top()*-1)
	    left.push(temp);
	 else{
	    left.push(right.top()*-1);
	    right.pop();
	    right.push(temp*-1);}}
      else{
	 if(temp > left.top()){
	    if(temp <= right.top()*-1)
	       left.push(temp);
	    else
	       right.push(temp*-1);}
	 else
	    left.push(temp);}
      //Outputting
      if(left.size() < right.size())
	 cout << right.top()*-1 << endl;
      else if(left.size() > right.size())
	 cout << left.top() << endl;
      else
	 cout << (left.top()+(right.top()*-1))/2 << endl;}
   return 0;}
