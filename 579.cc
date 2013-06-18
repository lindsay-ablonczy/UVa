#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
int main(){
   float M,H,angle;
   char temp;  

   while(cin>>H>>temp>>M){
      if(H != 0){
	 if(H == 12)
	    H = 0;

	 H += M/60;
	 H *= 5;

	 if(H>M)
	    angle = (H-M)*6;
	 else
	    angle = (M-H)*6;

	 if(angle > 180)
	    angle = 360-angle;

	 cout << fixed << showpoint << setprecision(3) << angle << endl;}}

   return 0;}
