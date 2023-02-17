#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
//Wish me
//You are given a time in format HH and MM. You have to print Good Morning,Good AfterNoon,Good Evening,Good Night according to time.Good Morning: 4:00AM to 11:59AMGood AfterNoon: 12:00PM to 15:59PMGood Evening: 16:00PM to 20:59PMGood Night: 22:00PM to 23:59AM and 1:00AM to 3:59 AMNOTE: Hour and Minutes are given in 24 Hour Format

int main() {
    int h,m;
    scanf("%d%d",&h,&m);
    if(h>=4 && h<12){
        printf("Good Morning");
    }
    if(h>=12 && h<16){
        printf("Good AfterNoon");
    }
    if(h>=16 && h<22){
        printf("Good Evening");
    }
    if((h>=16 && h<22) || (h>=1 && h>4)){
        printf("Good Night");
    }
    return 0;
}
