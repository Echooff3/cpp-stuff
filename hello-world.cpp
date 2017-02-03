// C++ Programming
// https://www.youtube.com/watch?v=Rub-JsjMhWY

// Single line comment
/*
 * Multi-line comment
 */

//#include <cstdlib>  // Note: from Skib
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <time.h>

using namespace std;

int main() {
  // std::cout
  cout << "Hello, World!" << endl;

  const double PI = 3.1415926535;
  char myGrade = 'A';
  bool isHappy = false; // Remember to change this when you get happy.
  int myAge = 36;
  float favNum = 3.141592; // Accurate to 6 decimal places
  double otherfavNum = 1.6180339887; // Accurate to 15 decimal places

  cout << "Favorite Number: " << favNum << endl;

  // Other types include
  // short int : At least 16 bits
  // long int : At least 32 bits
  // long long int : At least 64 bits
  // unsigned int : Same size as the signed version
  // long double : Not less than double

  cout << "Size of int "
       << sizeof(myAge)
       << endl;

  int largestInt = 2147483647;

  // Arithmetic
  // +, -, *, /, %
  cout << "5 + 2 = " << 5+2 << endl;
  cout << "5 - 2 = " << 5-2 << endl;
  cout << "5 * 2 = " << 5*2 << endl;
  cout << "5 / 2 = " << 5/2 << endl;
  cout << "5 % 2 = " << 5%2 << endl;

  // Increment/Decrement
  int five = 5;
  cout << "five++ = " << five++ << endl;
  cout << "++five = " << ++five << endl;
  cout << "five-- = " << five-- << endl;
  cout << "--five = " << --five << endl;

  five += 6; /* is the same as */ five = five + 6;

  // Order of Operations rules apply
  // * and / before + and -
  cout << "1 + 2 - 3 * 2 = " << 1 + 2 - 3 * 2 << endl; // -3
  cout << "(1 + 2 - 3) * 2 = " << (1 + 2 - 3) * 2 << endl; // 0

  // Casting
  cout << "4 / 5 = " << 4/5 << endl; // 0 (no remainder)
  cout << "4 / 5 = " << (float) 4/5 << endl; // cast int to float

  // --------------------

  // If Statement
  // ==, !=, >, <, >=, <=
  // &&, ||, !
  int age = 70;
  int ageAtLastExam = 70;
  bool isNotIntoxicated = true;

  if ((age >= 1) && (age < 16)) {
    cout << "You can't drive" << endl;
  } else if (! isNotIntoxicated) {
    cout << "You can't drive" << endl;
  } else if (age >= 80 && ((age > 100) || ((age - ageAtLastExam) > 5))) {
    cout << "You can't drive" << endl;
  } else {
    cout << "You can drive" << endl;
  };

  // Switch Statement
  int greetingOption = 2;
  switch(greetingOption) {
    case 1 :
      cout << "Bonjour!" << endl;
      break;
    case 2 :
      cout << "Hola!" << endl;
      break;
    default :
      cout << "Hello!" << endl;
  };

  // Ternary Operator
  // variable = (condition) ? true : false;
  int largestNum = (5 > 2) ? 5 : 2;

  // Arrays
  int myFavNum[5];

  int badNums[5] = { 4, 13, 14, 24, 34 };

  cout << "Bad Number 1: " << badNums[0] << endl;

  // Multidimensional Arrays
  char myName[2][7] = {{'M', 'i', 'c', 'h', 'a', 'e', 'l'},
                      {'P', 'e', 'r', 'r', 'y'}};
  cout << "2nd letter in 2nd array: " << myName[1][1] << endl;

  myName[0][2] = 'k';

  cout << "New value: " << myName[0][2] << endl;

  // This prints hex value??
  // cout << "Full Value: " << myName << endl;

  // For Loop
  for (int i = 1; i <= 10; i++) {
    cout << i << endl;
  }

  for (int j = 0; j < 2; j++) {
    for (int k = 0; k < 7; j++) {
      cout << myName[j][k];
    }
    cout << endl;
  }

  // While Loop
  /* initialize random seed: */
  srand (time(NULL));
  int randNum = (rand() % 100) + 1;
  cout << randNum << endl;

  // while(randNum != 100) {
    //cout << randNum << ", ";
    //int randNum = (rand() % 100) + 1;
    // .\hello-world.cpp:18:23: error: 'rand' was not declared in this scope
    // Fixed with #include <cstdlib>
  //}
  //cout << endl;

  return 0;
}
