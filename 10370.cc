#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;
int main(){
   int classes;
   cin >> classes;
   for(int i = 0;i < classes;i++){
      int students,grades[1000],count = 0;
      double avg = 0,abavg = 0;
      cin >> students;
      for(int j = 0;j < students;j++){
	 cin >> grades[j];
	 avg += grades[j];}
      avg /= students;
      sort(grades,grades+students);
      for(int k = students-1;k >= 0;k--){
	 if(grades[k] > avg)
	    count++;
	 else
	    break;}
      abavg = (double)count/students*100;
      cout << fixed << setprecision(3) << showpoint << abavg << '%' << endl;}
   return 0;}
