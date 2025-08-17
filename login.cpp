#include<iostream>
using namespace std;

string USER="pranav";
string PASS="123";

int maxAttempts=5;
int failedAttempts=0;

void loginAttempts();

void login()
{
    cout<<"\nLogin\n";
    cout<<"\nEnter your name: \n";
    string user;
    cin>>user;
    cout<<"\nEnter your password: \n";
    string pass;
    cin>>pass;
    cout<<"\nIs this a authorized account?\n";
    if(USER==user && PASS==pass)
    {
        cout<<"\nYes, this is a authorized account\n";
        cout<<"\nGrant access\n";
    }
    else
    {
        cout<<"\nNot an authorised account\n";
        ++failedAttempts;
        cout<<"\nTry again\n";
        loginAttempts();
    }
}

void lockAccount()
{
    cout<<"\nAccount has been locked\n";
    cout<<"\nAlerting the user";
}

void loginAttempts()
{
    cout<<"\nHas completed 5 failed attempts?\n";
    if(failedAttempts>=maxAttempts)
    {
        cout<<"\nYes, completed 5 failed attempts\n";
        lockAccount();
    }
    else
    {
        cout<<"\nNo,still " <<maxAttempts-failedAttempts<<" attempts left, continue to login in\n";
        login();
    }
}

int main()
{
    cout<<"-----Login Process-----\n";
    loginAttempts();
    cout<<"\n------Process Completed-----\n";
}