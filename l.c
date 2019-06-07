include<stdio.h>

int main(){

    int num,i,count=0;
    printf(" ");
    scanf("%d",&num);
    for(i=2;i<=num/2;i++){
        if(num%i==0){
         count++;
            break;
        }
    }
   if(count==0 && num!= 1)
        printf("yes",num);
   else
      printf("no",num);
   return 0;
}
