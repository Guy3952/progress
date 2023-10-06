#include<iostream>
#include<vector>
#include<string>
using std::vector;
using namespace std;

int withdraw(int a, int b)
{
    return(a-b);
}
int deposit(int a ,int b)
{
    return(a+b);
}
int main()
{
int n;
int counter=0;//i will use it to count the number of transactions made
//and to access them
int amount=0;
int balance=0;
int rh=9696969;//readhistory
vector<int> th;
cout << "\nenter 1 to withdraw\nenter 2 to deposit\nenter 3 to end session\nenter 4 to view transaction history\n\n";
while(true)
{
    cin >> n;
    if (n==1)
    {
      cout << "\nenter amount\n";
            cin >> amount;
            balance=withdraw(balance,amount);
            cout <<"\ntransaction successful!\n withdrawn " << amount<<"from your account"<<"\nyour balance is now: " << balance<< endl;
            th.push_back(-amount);
            counter++;
    }
    if(n==2)
    {
        cout <<"\n\n\nenter amount\n";
             cin >> amount;
             balance=deposit(balance,amount);
            cout <<"\ntransaction successful!\n deposited " << amount<<"from your account"<<"\nyour balance is now: " << balance<< endl;
            th.push_back(amount);
            counter++;
    }
    if(n==3)
    {
        
        cout << "\nsession finished\n";
            break;
           
    }
    if(n==4)
    {
       for (int i=0; i<counter;i++)
          {
            rh=th[i];
            
            if(rh>0)
            cout << "\ndeposit "<<endl<<rh;
            else
            cout << "\nwithdraw "<<endl<<rh;
          }
    }
    if(n>4)
    {
      cout << "\ninvalid number try again\n";
    }
    if(n<1)
    {
      cout << "\ninvalid number try again\n";
    }
    
}



    return 0;
    
}