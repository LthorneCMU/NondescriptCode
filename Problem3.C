// Project Euler: Problem 3                                                     
// Title: Largest prime factor                                                 
// Prompt: The prime factors of 13195 are 5, 7, 13 and 29.
//         What is the largest prime factor of the number 600851475143?
// Date of first attempt: 2015-06-25                                          
// Date completed: 2015-07-01, 282531th person to complete.  

#include <iostream>
#include <vector>
#include <numeric>
#include <math.h>

using namespace std;

long Number=600851475143; // Number desire to have prime factorization of.
long OriginalNumber;
int SqrtNumber; // Square root of Number.
vector <int> PrimeFactors; // Vector containing prime factors of Number.

int main(){

  OriginalNumber = Number;
  SqrtNumber = sqrt(Number);

  for (int i=2; i <= SqrtNumber; i++){
      
      while (Number % i == 0){
	PrimeFactors.push_back(i);
	Number = Number / i;
      }

    }

  // Print prime factorization of Number:
  // for (int j=0; j <= PrimeFactors.size()-1; j++){
  //cout << PrimeFactors[j] << " ";
  //}

  cout << "Largest prime factor of " << OriginalNumber << " is: "  << PrimeFactors[PrimeFactors.size()-1] << endl;

  //Solution: 6857


}
