#include"stdio.h"
#include"stdlib.h"
#include<iostream>

using namespace std;

/*
   For example, the array {4, 3, 1, 8, 5, 1, 1, 1} is a Lebowski array because:
   a. 4 is even and 4 = 3 + 1 (3 and 1 are odd) 
   b. 8 is even and 8 = 5 + 1 + 1 + 1 (5 and 1 are odd) 
   */
int nextPerfectSquare(int n)
{
  return 0;
}
int main() 
{
  cout<<nextPerfectSquare(6)<<endl;//9
  cout<<nextPerfectSquare(36)<<endl;//49
  cout<<nextPerfectSquare(0)<<endl;//1
  cout<<nextPerfectSquare(-5)<<endl;//0
  return 0;
}
