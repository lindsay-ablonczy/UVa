#include <iostream>
#include <vector>
using namespace std;
int main(){
   int blocks[25][25];
   int height[25];
   int length,par1,par2,count,locax,locay,locbx,locby;
   string key1,key2;
   
   cin >> length;
   
   for(int j =0;j<length;j++)
      height[j]=1;
   
   for(int i =0;i<length;i++)
      blocks[0][i] = i;
   int h = 0;
   while(key1 != "quit"){
      cin >> key1;
      
      if(key1 == "move"){
	 cin >> par1 >> key2 >> par2;
	 
	 for(int k=0;k < length;k++){
	    for(int l=0;l < height[k];l++){
	       if(blocks[l][k] == par1){
		  locax = k;
		  locay = l;}
	       if(blocks[l][k] == par2){
		  locbx = k;
		  locby = l;}}}
	 
	 if(locax != locbx){
	    
	    if(key2 == "onto"){
	       for(int m = height[locax]-1;m > locay;m--){
		  blocks[0][blocks[m][locax]] = blocks[m][locax];
		  height[locax]--;
		  height[blocks[m][locax]]++;
	       }
	       for(int n = height[locbx]-1;n > locby;n--){
		  blocks[0][blocks[n][locbx]] = blocks[n][locbx];
		  height[locbx]--;
		  height[blocks[n][locbx]]++;}
	       
	       blocks[locby+1][locbx] = blocks[locay][locax];
	       height[locbx]++;
	       height[locax]--;}
	    
	    else if(key2 == "over"){
	       for(int m = height[locax]-1;m > locay;m--){
		  blocks[0][blocks[m][locax]] = blocks[m][locax];
		  height[locax]--;
		  height[blocks[m][locax]]++;}
	       
	       blocks[height[locbx]][locbx] = blocks[locay][locax];
	       height[locbx]++;
	       height[locax]--;}}}
	 
	 else if(key1 == "pile"){
	    cin >> par1 >> key2 >> par2;
	    //cout << " " << par1 << " " << key2 << " " << par2 << endl;	 
	    
	    for(int k=0;k < length;k++){
	    for(int l=0;l < height[k];l++){
	       if(blocks[l][k] == par1){
		  locax = k;
		  locay = l;}
	       if(blocks[l][k] == par2){
		  locbx = k;
		  locby = l;}}}

	 if(locax != locbx){
	    //cout << "test4" << endl;
	    
	    if(key2 == "onto"){
	       count = 0;
	       for(int n = height[locbx]-1;n > locby;n--){
		  blocks[0][blocks[n][locbx]] = blocks[n][locbx];
		  height[locbx]--;
		  height[blocks[n][locbx]]++;}
	       
	       for(int p = locay;p < height[locax];p++){
		  blocks[height[locbx]][locbx] = blocks[p][locax];
		  height[locbx]++;
		  count++;}
	       
	       height[locax]-=count;}
	    
	    else if(key2 == "over"){
	       count = 0;
	       for(int p = locay;p < height[locax];p++){
		  blocks[height[locbx]][locbx] = blocks[p][locax];
		  height[locbx]++;
		  count++;}
	       
	       height[locax]-=count;}
	    
	    //cout << "test5" << endl;
	 }}
      
	 else if(key1 == "quit")
	    break;}

   for(int q = 0;q < length;q++){
      cout << q << ':';
      for(int r = 0;r < height[q];r++)
	 cout << ' ' << blocks[r][q];
      cout << endl;}
      
   return 0;}
