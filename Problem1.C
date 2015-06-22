// Project Euler: Problem 1 
// Title: Multiples of 3 and 5 
// Prompt: If we list all the natural numbers below 10 that are multiples of 3
//         or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
//         Find the sum of all the multiples of 3 or 5 below 1000.
// Date of first attempt: 2015-06-10 
// Date completed: 2015-06-10, 467887th person to complete.
// Test. 

#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

//GLOBAL VARIABLES:
int Maximum; //max number
int FirstMultiplier; //multiple of Maximum
int SecondMultiplier; //multiple of Maximum

int main()
{

  //LOCAL VARIABLES:
  char DisplayMultiples;
  vector <int> MultiplesList;
  int MultiplesListSum = 0;

  cout << "Maximum Value:";
  cin >> Maximum;
  cout << "First Multiplier:";
  cin >> FirstMultiplier;
  cout << "Second Multiplier:";
  cin >> SecondMultiplier;
  cout << "Display all multiples? (y/n): ";
  cin >> DisplayMultiples;

  while (DisplayMultiples != 'y' && DisplayMultiples != 'n') {
    cout << "Display all multiples? (y/n): ";
    cin >> DisplayMultiples;
  }


  for (int i=1; i<Maximum;i++){
    if (i % FirstMultiplier ==0){
      MultiplesList.push_back(i);
    
    }
    else if (i % SecondMultiplier ==0){
      MultiplesList.push_back(i);
    }
    else {}
  }


  if (DisplayMultiples=='y'){
    for (int j=0; j<MultiplesList.size();j++){
      cout << MultiplesList[j] <<" ";
    }
  }
  else{}


  MultiplesListSum = std::accumulate(MultiplesList.begin(),MultiplesList.end(),0); //Use #include <numeric>


  cout << endl << "Sum of multiples " << FirstMultiplier << " and " <<  SecondMultiplier << " to a maximum value of " << Maximum << " is: " << MultiplesListSum <<endl;

  //Solution: 233168

}
