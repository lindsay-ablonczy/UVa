#include <iostream>

using namespace std;
int main(){
   int x,y,n,temp;
   char field[100][100];
   n=1;
   
   while(cin>>y>>x){
      if ((y != 0) && (x != 0)){
	 for(int i = 0;i < y;i++){
	    for(int j = 0;j < x;j++){
	       cin >> field[i][j];}}

	 if (n > 1) {
	    cout << endl;}
	 cout << "Field #" << n << ':' << endl;
	 
	 for(int p = 0;p < y;p++){
	    for(int q = 0;q < x;q++){
	       temp=0;
	       if(field[p][q] == '*')
		  cout << '*';
	       else{
		  if(p-1 >= 0 && field[p-1][q] == '*')
		     temp++;
		  if(q-1 >= 0 && field[p][q-1] == '*')
		     temp++;
		  if(p-1 >= 0 && q-1 >= 0 && field[p-1][q-1] == '*')
		     temp++;
		  if(p+1 < y && field[p+1][q] == '*')
		     temp++;
		  if(q+1 < x && field[p][q+1] == '*')
		     temp++;
		  if(p+1 < y && q+1 < x && field[p+1][q+1] == '*')
		     temp++;
		  if(p+1 < y && q-1 >= 0 && field[p+1][q-1] == '*')
		     temp++;
		  if(p-1 >= 0 && q+1 < x && field[p-1][q+1] == '*')
		     temp++;
		  cout << temp;}}
	    cout << endl;}
      n++;}}
   
   return 0;}
