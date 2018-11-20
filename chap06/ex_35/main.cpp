#include<iostream>
using namespace std;
void Guess(){
srand(time(NULL));
int n = rand() % 100 + 1;
int num,i;
cout << "I have a number between 1 and 1000."<<endl;
cout << "Can you guess my number ?" << endl;
cout << "Please type your first guess." << endl;
while (1){
cin >> num;
if (num == n)
break;
else if (num < n)
cout << "Too low. Try again." << endl;
else
cout << "Too high. Try again." << endl;
i+=1;
}
if(i<10)
    cout<<"Eihtern you know the secret or you can got luky!"<<endl;
 if(i==10)
cout<<"Ahah!You know the secret!"<<endl;
if(i>10)
cout<<"You should be able to do better!"<<endl;   
}
int main(){
int c='y';
while (c == 'y'){
Guess();
cout << "Excellent You guessed the number!" << endl;
cout << "Would you like to play again(y or n) ? " << endl;
cin >> c;
while (c != 'y' && c != 'n'){
cout << "Would you like to play again(y or n) ? " << endl;
cin >> c;
}
}
return 0;
}


