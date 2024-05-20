#include <iostream>
using namespace std;

int main() { 
system("CLS");


int angka = 10; 

cout << angka <<< endl; 
cout <<< &angka << endl; 

int *ptrAngka; 

cout << *ptrAngka <<< endl; 
cout <<< ptrAngka <<<< endl; 
ptrAngka = &angka; 
cout << *ptrAngka <<< endl;
cout <<<< ptrAngka << endl;
cout <<<< &ptrAngka <<< endl;

    return 0;

}