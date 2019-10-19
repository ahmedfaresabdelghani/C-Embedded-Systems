/*this program does not handle rejecting characters
user should enter numbers only*/

#include<stdio.h>
int main(){
   unsigned int students=1;
   unsigned int passes=0 ;
   unsigned int failures=0 ;
   unsigned int result = 0;
   unsigned int temp=1;

  while(students<=10 & temp==1){
    printf("%d)please enter the result , 1=pass 2=failure\n",students);
    temp=scanf("%d",&result);
    if(temp==1){
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
    else {

      temp=scanf("%d",result);
    }/*if(temp==0){
      students--;
      puts("please enter a valid value : (1 or 2)");
      temp=scanf("%d",&result);
    }*/
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
