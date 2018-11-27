
 #include<stdio.h>
  #include<stdlib.h>
  #include<iostream>
  using namespace std;
  int main()
 {
      int num;
      int n;
     int a;
     int i=0;
     cout<<"输入十进制数："<<endl;
     cin>>num;
     cout<<" 输入要转换的几进制(2-16)："<<endl;
     cin>>n;
    int s[100];
    if(n>=2&&n<<16)
     {
        while(num!=0)
       {
            a=num%n;
            num=num/n;
            i++;
            s[i]=a;
 
        }
    for(int j=i;j>=1;j--)
       {
            if(s[j]>=10)
            {
                cout<<s[j]+55<<endl;
            }
            else{
             cout<<s[j]<<endl;
            }
        }
     }
     else{
 
         cout<<"error"<<endl;
     }
 }
