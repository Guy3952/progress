#include<iostream>
 using namespace std;
int main()
{
int n =1;
int sum=0;
cout << "enter numbers to add up a sum to stop enter 0\n";

 while(n!=0)
 {
  cin >> n;
  sum += n;
  cout <<"added to sum\n";
 
 
 
 }
 cout << sum;
return 0;
} 