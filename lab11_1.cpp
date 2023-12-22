#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    string g;
    srand(time(0));
    int x = rand()%8;
    if(x==0){g ="A";}
    else if(x==1){g = "B+";}
    else if(x==2){g = "B";}
    else if(x==3){g = "C+";}
    else if(x==4){g = "C";}
    else if(x==5){g = "D+";}
    else if(x==6){g = "D";}
    else if(x==7){g = "F";}
    else{g = "W";}
    cout << "Press Enter 3 times to reveal your future.\n";
    cin.get();
    cin.get();
    cin.get();
    cout <<  "You will get " << g << " in this 261102.";
    return 0;
}