#include <iostream>
#include <iomanip>
using namespace std;

int main(){
   double cows,cars,open;
   while(cin >> cows >> cars >> open){
      double doors = cows+cars;
      double prob = ((cows/doors)*(cars/(doors-1-open)))+((cars/doors)*((cars-1)/(doors-1-open)));
      cout << fixed << setprecision(5) << showpoint << prob << endl;}

   return 0;}
