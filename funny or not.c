#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Funny or Not
//Ankit Sir makes questions for HackerRank funny so that students can understand questions better. This time most of the sections were misbehaving so Ankit Sir decide not to keep questions funny, but this is only because of few sections. So, he found a new way to decide whether to make funny questions or not. If at the end of the week, his anger level will be positive, then he will make simple questions otherwise he will make funny questions. There are total N sections out of which B sections are misbehaving due to which his anger level increases by I unit per section and G sections are behaving very well due to which his anger level falls down by D unit per section. Find out whether questions will be funny or not ? If questions will be funny print Funny Questions. If questions will not be funny, print Simple Questions. In case of confusion, print God Knows!.

int main() {
    int n,b,g,i,d;
    scanf("%d%d%d%d%d",&n,&b,&g,&i,&d);
    if(b*i-g*d>=0){
        printf("Simple Questions");
    }
    else{
        printf("Funny Questions");
    }
    return 0;
}
