// write your code here
#include <iostream>
#include <cmath>

using namespace std;

int main()

{
  int numb;
  int x;
  int count;

 count == 0;
cout << "Kindly enter a number between 1 and 1000 to check if it is a prime  number or not : " << endl;
  
cin >> numb;

if (numb <= 1000)
{
  if ( numb == 0)
  {
  cout << "\n" << numb << " This number is not prime";
  exit(1);
  }
  else   {
  for ( x=2; x < numb; x++)
  if ( numb % x == 0)
  count++;
  }
  if ( count > 1)
   cout << "\n" << numb << " This number is not prime.";
  else
   cout << "\n" << numb << " This is a prime number."; 
}
else 
  cout << "this number is greater than 1000." << endl;

if (numb%2==0)
{
 cout << endl << numb << " is divisible by " << 2;
}
 else
   cout << endl << numb << " is not divisible by " << 2;

if (numb%3==0)
{
 cout << endl << numb << " is divisible by " << 3;
}
 else
   cout << endl << numb << " is not divisible by " << 3;

if (numb%5==0)
{
 cout << endl << numb << " is divisible by " << 5;
}
 else
   cout << endl << numb << " is not divisible by " << 5;

if (numb%7==0)
{
 cout << endl << numb << " is divisible by " << 7;
}
 else
   cout << endl << numb << " is not divisible by " << 7;

if (numb%11==0)
{
 cout << endl << numb << " is divisible by " << 11;
}
 else
   cout << endl << numb << " is not divisible by " << 11;

if (numb%13==0)
{
 cout << endl << numb << " is divisible by " << 13;
}
 else
   cout << endl << numb << " is not divisible by " << 13;

if (numb%17==0)
{
 cout << endl << numb << " is divisible by " << 17;
}
 else
   cout << endl << numb << " is not divisible by " << 17;

if (numb%19==0)
{
 cout << endl << numb << " is divisible by " << 19;
}
 else
   cout << endl << numb << " is not divisible by " << 19;

if (numb%23==0)
{
 cout << endl << numb << " is divisible by " << 23;
}
 else
   cout << endl << numb << " is not divisible by " << 23;

if (numb%29==0)
{
 cout << endl << numb << " is divisible by " << 29;
}
 else
   cout << endl << numb << " is not divisible by " << 29;
  
if (numb%31==0)
{
 cout << endl << numb << " is divisible by " << 31;
}
 else
   cout << endl << numb << " is not divisible by " << 31;
 
return 0;
}
