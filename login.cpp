#include<iostream>
using namespace std;

string USER="pranav";
string password="123";

int maxAttempts=5;
int failedAttempts=0;

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

}