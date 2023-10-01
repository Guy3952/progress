#include <iostream>
#include <cmath> // i wanted to use sqrt
using namespace std;

int main()
{
int n=0;
cin >> n;

    for (int  i = 2; i <= n; i++)
    {
        bool prime = true; // for this line i learnt that bool is for true or false
        int sqrti = sqrt(i);// i remember that i need square root from when i did this code in python (efficiency)
    

        for(int j=2; j <= sqrti;j++ )
        {
        
        if(i % j == 0)
        {
            prime = false;
            break;
        }
        }  

    if (prime)
    { 
        cout << i << "\n";//i remember /n from my small experience of using c in college 
    }
        
        }
        return 0;

    }
// in the correction of this code 
// i have found that my use of {} was very poor
// and i will now reflect on that from now on



