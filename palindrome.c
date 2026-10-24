#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
bool isPalindrome(int num){
    int cp,rev=0,d;
    //checking if num we recieved is negative and filtering it out
    if(num<0){
        return false;
    }
    cp=num;
    //finding the reverse of the num
    while (cp!=0){
        d = cp%10;
        if(rev>(INT_MAX - d)/10){
            return false;
        }
        rev = rev*10 + d;
        cp = cp/10;
    }

    //assigning actual work to the function we created
    if(num==rev){
        return true;
    }else {
        return false;
    }
}
