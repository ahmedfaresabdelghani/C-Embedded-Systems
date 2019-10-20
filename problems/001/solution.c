#include<stdio.h>
int main(){
    unsigned int students=1;
    unsigned int passes=0 ;
    unsigned int failures=0 ;
    unsigned int result = 0;
    unsigned int temp=1;
    char c[100];

    while(students<=10){
        printf("%d)please enter the result , 1=pass 2=failure\n",students);
        temp = scanf("%d",&result);
        if(!temp){
            scanf("%s", c);
            continue;
        }
        if(result == 1){
            passes=passes+1;
            students++;
        }
        else if(result==2){
            failures=failures+1;
            students++;
        }
        else{
            puts("please enter a number [1 , 2]");
        }

    }


    printf("number of passes is: %u\n", passes);
    printf("number of failures is:  %u\n", failures);
    if(passes>=8){
        puts("bouns to instructor");
    }
    else {
        puts("no bonus");
    }
}
