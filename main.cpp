#include <iostream>

using namespace std;

int Calculate_Power(int number,int power){
    if(power==0){
        return 1;
    }
    else{
        int First_Task = number;
        int Second_Task_Result =  Calculate_Power(number,power-1);
        int Calculate_Power = First_Task * Second_Task_Result;
        return Calculate_Power;
    }
}
int main()
{
    ///cout<< Calculate_Power(2,10)<<endl;
    return 0;
}
