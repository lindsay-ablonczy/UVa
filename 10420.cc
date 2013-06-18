#include <iostream>
#include <string>
#include <map>
#include <iterator>

using namespace std;
int main(){
   int n;
   string temp;
   map<string,int> nations;
   cin >> n;
   getline(cin,temp);

   for (int i = 0;i < n;i++){
      getline(cin,temp,' ');
      nations[temp]++;
      getline(cin,temp);}

   for(map<string,int>::iterator it=nations.begin();it != nations.end();it++)
      cout << it->first << ' ' << it->second << endl;

   return 0;}
