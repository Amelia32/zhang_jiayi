#include <iostream>
#include<math.h>
using namespace std;
float roundToInteger(double number){
    int y=floor(number+0.5);
    return y;
}
double roundToTenths(double number){
    double y=floor(number*10+0.5)/10;
    return y;
}
double roundToHundredths(double number){
    double y=floor(number*100+0.5)/100;
    return y;
}
double roundToThousandths(double number){
    double y=floor(number*1000+0.5)/1000;
    return y;
}
int main()
{
    while(1){
    double a;
    cout<<"Please enter a number:";
    cin>>a;
    cout<<"原始值："<<a<<endl;
    cout<<"舍入最近整数后的值："<<roundToInteger(a)<<endl;
    cout<<"舍入到最近十分位后的值："<<roundToTenths(a)<<endl;
    cout<<"舍入到最近百分位后的值："<<roundToHundredths(a)<<endl;
    cout<<"舍入到最近千分位后的值："<<roundToThousandths(a)<<endl;
    }
}
