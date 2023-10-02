#include<iostream>
#include<cmath>
using namespace std;
int root(int u)
{
float num = sqrt(u);
cout << "the square root of the number is: " << num << "\n";

    return(num);

}

int  isprime(int a)
{

float num2 = sqrt(a);

for(int i=2;i<=a;i++)
{
bool prime = true; 
{
for(int j=2 ;j<=num2 ;j++)
if(i % j ==0)
{
prime=false;
break;
}
}
if(prime)
{

return(true);
}
}
}
int main()
{
int n = 0;
    cout << "enter a number";
    cin >> n;
    root(n);
    bool checkprime = isprime(n);
    if ( checkprime)
    {
        cout << " the number is a prime number \n";
    
    }
    else
    cout << "the number is not a prime number\n";
    
    return(0);
    

}



