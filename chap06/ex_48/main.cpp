#include <iostream>
#include <cstdlib>
#include<ctime>
using namespace std;
unsigned int rollDice();
void D()
{
    enum Status{CONTINUE,WON,LOST};
    srand( static_cast<unsigned int>(time(0)));
    unsigned int myPoint=0;
    Status gameStatus=CONTINUE;
    unsigned int sumOfDice=rollDice();
    switch(sumOfDice)
    {
        case7:
        case11:
        gameStatus=WON;
        case2:
        case3:
        case12:
        gameStatus=LOST;
        break;
        default:
        gameStatus=CONTINUE;
        myPoint=sumOfDice;
        cout<<"Point is"<<myPoint<<endl;
        break;
    }
                while(CONTINUE==gameStatus)
    {
        sumOfDice=rollDice();
        if(sumOfDice==myPoint)
            gameStatus=WON;
            else
                if(sumOfDice==7)
                    gameStatus=LOST;
    }

}
int main()
{
    int bankBalance=1000,wager;
    
    int a=1;
    enum Status{CONTINUE,WON,LOST};
    Status gameStatus=CONTINUE;
    while(a=1)
    {
            cout<<"Please enter the wager:";
    cin>>wager;
    while(wager<=bankBalance)
        {
        D();
      if(WON==gameStatus)
        {cout<<"Player wins"<<endl;
        bankBalance+=wager;
        cout<<bankBalance;}
        else{
            cout<<"Player loses"<<endl;
           bankBalance-=wager;
           cout<<bankBalance;}
           if(bankBalance=0)
               {
               cout<<"Sorry.You busted!";
               }
               a=5;
        
         }
    cout<<"Please enter the wager:";
    cin>>wager;
    a=1;
    }
    
    
}
unsigned int rollDice()
{
    unsigned int die1=1+rand()%6;
    unsigned int die2=!+rand()%6;
    unsigned int sum=die1+die2;
    cout<<"Player rolled"<<die1<<"+"<<die2<<"="<<sum<<endl;
    return sum;
}