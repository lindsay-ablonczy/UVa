#include <iostream>
using namespace std;

int main(){
   int len1,len2;
   while(cin >> len1 >> len2 && len1 != 0 && len2 != 0){
      int left [9] = {0};
      int right[9] = {0};
      int val;

      for(int i = 0;i < len1;i++){
	 cin >> val;
	 while(val > 0){
	    switch(val){
	       case 4:
		  left[1] += 2;
		  val--;
		  break;
	       case 6:
		  left[2]++;
		  left[1]++;
		  val--;
		  break;
	       case 8:
		  left[1] += 3;
		  val--;
		  break;
	       case 9:
		  left[2] += 2;
		  val--;
		  break;
	       default:
		  left[val-1]++;
		  val--;
	    }
	 }
      }

      for(int i = 0;i < len2;i++){
	 cin >> val;
	 while(val > 0){
	    switch(val){
	       case 4:
		  right[1] += 2;
		  val--;
		  break;
	       case 6:
		  right[2]++;
		  right[1]++;
		  val--;
		  break;
	       case 8:
		  right[1] += 3;
		  val--;
		  break;
	       case 9:
		  right[2] += 2;
		  val--;
		  break;
	       default:
		  right[val-1]++;
		  val--;
	    }
	 }
      }

      bool same = true;
      for(int j = 1;j < 9;j++){
	 if(left[j] != right[j])
	    same = false;
      }

      if(same)
	 cout << "YES" << endl;
      else
	 cout << "NO" << endl;
   }
}
