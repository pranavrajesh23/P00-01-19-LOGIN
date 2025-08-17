#include<iostream>
using namespace std;

string USER="pranav";
string password="123";

int maxAttempts=5;
int failedAttempts=0;

void lockAccount()
{
    cout<<"\nAccount has been locked\n";
    cout<<"\nAlerting the user";
}

void loginAttempts()
{
    if(failedAttempts>maxAttempts)
    {
        lockAccount();
    }
    else
    {
        login();
    }
}

int main()
{
    cout<<"-----Login Process-----\n";
    loginAttempts();
    cout<<"\n------Process Completed-----\n";
}