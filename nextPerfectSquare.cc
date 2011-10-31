#include"stdio.h"
#include"stdlib.h"
#include<iostream>

using namespace std;

int nextPerfectSquare(int n)
{
  int result=n+1;
  while (1)
  {
    for (int i=0;i<=result;i++)
    {
      if (result==i*i)
        return result;
    }
    result++;
  }
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
