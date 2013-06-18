#include <iostream>
using namespace std;
int main(){
   int sheets,pages;

   while(cin>>pages){
      if(pages != 0){
	 sheets = (pages+3)/4;
	 int lf[25];
	 int lb[25];
	 int rf[25];
	 int rb[25];
	 int temp;
	 
	 for(int i = 0;i < sheets;i++){
	    rf[i] = (2*i)+1;
	    lb[i] = (i+1)*2;}
	 
	 temp = lb[sheets-1];
	 if(lb[sheets-1] > pages)
	    lb[sheets-1] = -1;
	 
	 for(int j = sheets-1;j > -1;j--){
	    if(temp+1 <= pages)
	       rb[j] = temp+1;
	    else
	       rb[j] = -1;
	    if(temp+2 <= pages)
	       lf[j] = temp+2;
	    else
	       lf[j] = -1;
	    temp+=2;}
	 
	 cout << "Printing order for " << pages << " pages:" << endl;
	 
	 for(int k = 0;k < sheets;k++){
	    cout << "Sheet " << k+1 << ", front: ";
	    if(lf[k] == -1)
	    cout << "Blank, ";
	    else
	       cout << lf[k] << ", ";
	    if(rf[k] == -1)
	       cout << "Blank" << endl;
	    else
	       cout << rf[k] << endl;
	    if(lb[k] != -1 || rb[k] != -1){
	       cout << "Sheet " << k+1 << ", back : ";
	       if(lb[k] == -1)
		  cout << "Blank, ";
	       else
		  cout << lb[k] << ", ";
	       if(rb[k] == -1)
		  cout << "Blank" << endl;
	       else
		  cout << rb[k] << endl;}}}}
   return 0;}
