#include <iostream>
using namespace std;
int main(){
   int t;
   while(cin >> t && t){
      int ox,oy,x,y;
      cin >> ox >> oy;
      for(int i = 0;i < t;i++){
	 cin >> x >> y;
	 if(x < ox && y < oy)
	    cout << "SO" << endl;
	 else if(x < ox && y > oy)
	    cout << "NO" << endl;
	 else if(x > ox && y < oy)
	    cout << "SE" << endl;
	 else if(x > ox && y > oy)
	    cout << "NE" << endl;
	 else
	    cout << "divisa" << endl;}}}
