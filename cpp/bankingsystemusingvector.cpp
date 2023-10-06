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
int rh=0;//readhistory
vector<int> th;
while(true)
{
    cout << "\nenter 1 to withdraw\nenter 2 to deposit\nenter 3 to end session\nenter 4 to view transaction history\n\n";
    cin >> n;
    switch(n){
        case 1:
            cout << "\nenter amount\n";
            cin >> amount;
            balance=withdraw(balance,amount);
            cout <<"transaction successful! \nyour balance is now: " << balance;
            th.push_back(-amount);
            counter++;
    
        case 2:
             cout <<"\nenter amount\n";
             cin >> amount;
             balance=deposit(balance,amount);
            cout <<"transaction successful! \nyour balance is now: " << balance;
            th.push_back(amount);
            counter++;
            
        case 3:
            cout << "\nsession finished\n";
            break;
            
        case 4:
            for (int i=0; i<counter;i++)
            {
                rh=th[i];
                cout << "\ntransaction"<<i<<endl<<rh;
            }
            
            }
            
}



    return 0;
    
}