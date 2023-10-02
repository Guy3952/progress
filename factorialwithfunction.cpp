#include<iostream>
#include<cmath>
using namespace std;


int factorial(int a)
{
int sum =1;
 for(int j= 1; j <=a;j++)
 {
     sum *=j;
 }
return (sum);

}
int main()
{
    int n=0;
    int result=0;
    cout << "enter a number to calculate it's factorial";
    cin >> n;
    result = factorial(n);
    cout << result;
    
    




return(0);
}