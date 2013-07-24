#include <iostream>
#include <algorithm>
using namespace std;
int main(){
   int t;
   cin >> t;
   for(int i = 1;i <= t;i++){
      int sal[3];
      cin >> sal[0] >> sal[1] >> sal[2];
      sort(sal,sal+3);
      cout << "Case " << i << ": " << sal[1] << endl;}}
