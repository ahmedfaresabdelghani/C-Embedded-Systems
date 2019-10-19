/*this program does not handle rejecting characters
user should enter numbers only*/

#include<stdio.h>
int main(){
   unsigned int students=1;
   unsigned int passes=0 ;
   unsigned int failures=0 ;
   unsigned int result = 0;


  while(students<=10){
    printf("%d)please enter the result , 1=pass 2=failure\n",students);
    scanf("%d",&result);

    if(result == 1){
    passes=passes+1;
    }
    else if(result==2){
      failures=failures+1;
    }
    else{
      students=students-1;
      puts("please enter a valid value : (1 or 2)");
    }

    students++;
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
