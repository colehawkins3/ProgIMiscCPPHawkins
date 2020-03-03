//Stephen Hawkins 3/2/20
//Misc. Concepts
//Useful for Prog2
#include <iostream>
#include <algorithm>
#include <vector>//to understand c++, understand the vector
#include <fstream>
#include <string>

using namespace std;

//function definition
void populateVector(vector<int> &vect)
{
  int n = 0;
  vect.push_back(255);
  cout << "\nType a number: ";
  cin >> n;
  //add to the list the number that the user typed
  vect.push_back(n); 
  //print the vector to the screen
  cout << "\nVector New Output: ";
  for (int v : vect)
  {
    cout << v << endl;
  }
}
int main() 
{
  //The array vs. the vector
  int numbers[7] = {1, 55, 12, 57, 1000};//7 chunks of memory, 5 integers stored. inefficient
  numbers[5] = 0;
  numbers[6] = 1005;
  //print current values in array
  //foreach or for in C++
  for(int n : numbers)
  {
    cout << n << endl;
  }
  sort(numbers, numbers+7 ); //asc
  reverse(numbers, numbers+7);   
  cout << endl;     //reverse desc
  for(int n : numbers)
  {
    cout << n << endl;
  }        //print the list
  //vector in C++
  vector<int> v = {1, 55, 12, 57, 1000};
  v.push_back(0);// place value to the end of the vector list
  v.push_back(1005);
  cout << "\nVector Output\n\n";
  //use for (for each) to print current values in the vector
  for(int a : v)
  {
    cout << a << endl;
  }
  sort(v.begin(), v.end()); //sort the vector asc
  reverse(v.begin(), v.end());  //reverse
  cout <<endl;
  for (int a : v)
  {
    cout << a << endl;
  }        //reprint
 
 //passing a vector to a function by reference
  populateVector(v); //put new values in the vector

 //writing to (output to) a text file in c++
ofstream outFile("vector.txt"); // "path"
if(!outFile.good())
{
  cout << "\nError in file creation" << endl;
  return 1;
}
// put data into the file
outFile << "Vector Contents\n";

outFile.close(); //close file when done writing

return 0;
}