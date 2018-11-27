#include <iostream>
using namespace std;
int main()
{
    int side1,side2,hypotenuse;
    cout<<"第一条边"<<"\t"<<"第二条边"<<"\t"<<"斜边"<<endl;
    for(side1=1;side1<=500;side1++)
    {
        for(side2=1;side2<=500;side2++)
        {
            for(hypotenuse=1;hypotenuse<=500;hypotenuse++)
            {
                if(hypotenuse*hypotenuse==side1*side1+side2*side2)
                {
                    cout<<side1<<"\t"<<side2<<"\t"<<hypotenuse<<endl;
                }
            }
        }
    }
}
