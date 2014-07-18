#include <iostream>
#include <string>
using namespace std;

int main(){
   string line1 [10] = {"\\ / "," o  ","    ","    ","_o_ ","\\o/ ","\\o_ ","\\o/ ","    "," o  "};
   string line2 [10] = {" |  ","/|\\ ","    ","    "," |  "," |  ","\\|  ","\\|/ "," __o","( ) "};
   string line3 [10] = {"/o\\ ","/ \\ ","__\\o","\\_\\o","/ \\ ","/ \\ "," |  ","    ","/  |","/ \\ "};

   int t;
   string junk;
   cin >> t;
   getline(cin,junk);
   for(int i = 0;i < t;i++){
      string movie;
      getline(cin,movie);
      
      for(int j = 0;j < movie.length();j++){
	 cout << line1[movie[j]-'0'];
	 if(j != (movie.length()-1))
	    cout << ' ';
	 else
	    cout << endl;
      }

      for(int j = 0;j < movie.length();j++){
	 cout << line2[movie[j]-'0'];
	 if(j != (movie.length()-1))
	    cout << ' ';
	 else
	    cout << endl;
      }

      for(int j = 0;j < movie.length();j++){
	 cout << line3[movie[j]-'0'];
	 if(j != (movie.length()-1))
	    cout << ' ';
	 else
	    cout << endl;
      }
      cout << endl;
   }
}
