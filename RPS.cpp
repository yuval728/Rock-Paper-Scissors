#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    int n,x;
    char a;
    game:
    cout<<"Press:\n 1.rock \n 2.paper  \n 3.scissors\n";
    cin>>x;
    if(x>0 && x<4)
    {
     if(x==1)
    {
    srand(time(NULL));
    n=rand()%2+1;
        if(n==1)
        {
            cout<<"Comp : rock\n";
            cout<<"tie\n";
        }
        if(n==2)
        {
           cout<<"Comp : paper\n";
            cout<<"loose\n";
        }
        if(n==3)
        {
            cout<<"Comp : scissors\n";
            cout<<"win\n";
        }
    }
    if(x==2)
    {
    srand(time(NULL));
    n=rand()%2+1;
        if(n==2)
        {
            cout<<"Comp : paper\n";
            cout<<"tie\n";
        }
        if(n==3)
        {
            cout<<"Comp : scissors\n";
            cout<<"loose\n";
        }
        if(n==1)
        {
            cout<<"Comp : rock\n";
            cout<<"win\n";
        }
    }
    if(x==3)
    {
     srand(time(NULL));
    n=rand()%2+1;
        if(n==3)
        {
            cout<<"Comp : scissors\n";
            cout<<"tie\n";
        }
        if(n==1)
        {
            cout<<"Comp : rock\n";
            cout<<"loose\n";
        }
        if(n==2)
        {
            cout<<"Comp : paper\n";
            cout<<"win\n";
        }

    }
    option:
        cout<<"want to play again?\n (y/n)\n";
        cin>>a;
        if(a=='y')
        {
            cin.clear();
            goto game;
        }
        if(a=='n')
        {
            exit(0);
        }
        else
        {
            cout<<"worng input\n";
            cin.clear();
            goto option;
        }
    }
    else
    {
        cout<<"worng input\n";
        cin.clear();
        goto game;
    }

}
