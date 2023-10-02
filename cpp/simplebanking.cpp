#include <iostream>
using namespace std;
int withdraw(int a, int b)
{
    int sum=0;
    sum = b - a;
    return(sum);
}
int deposit(int s, int d)
{
    int sum=0;
    sum = s + d;
    return(sum);

}

int main()
{
    int balance=0;
    int n=0;
    int amount = 0;

    while(n != 3)
    {
    cout << "please enter the action which you want to make\n" << " your options are: \nenter 1 to withdraw \nenter 2 to deposit \nenter 3 to stop\n ";

    cin >> n;

    if(n == 1)
    {
        cout << "enter the amount to withdraw\n\n";
        cin >> amount;
        balance= withdraw(amount, balance);
        cout << "\n your balance is now:" << balance << "\n\n\n\n\n";
        
    }
    else if (n == 2)
    {
      cout << "enter the amount to deposit\n\n";
        cin >> amount;
        balance= deposit(amount, balance);
        cout << "\n your balance is now:" << balance << "\n\n\n\n\n";        
        
    }
    


}
}
