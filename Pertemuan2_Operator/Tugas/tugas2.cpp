#include <bits/stdc++.h> 
using namespace std;

int main(){
  float x[2]; 
  int a, b, c;

  cout << "Input nilai A, B, dan C dari suatu persamaan kuadrat :\n";
  cin >> a >> b >> c; 

  x[0] = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a); 


  x[1] = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a); 
  
  cout << "Akar-akarnya yaitu : " << x[0] << " dan " << x[1] << endl;
  
  return 0;
}