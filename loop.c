#include<stdio.h>
int main(){
   /* int i=0, n;
    printf("enter the value of n \n");
    scanf("%d", &n);
    for(i=0; i<n; i++){
        printf("%d\n", i+1);
    }*/// from here another question 
   // int i=5;
   // for(i=5; i; i--)
   // printf("%d\n", i); from here n natural number in reverse order
 /*  int i;
   int n;
printf("enter the value of n \n");
scanf("%d", &n);
for(i=n; i; i--)
printf("%d\n", i);*/
//table of any natural number n
/*int n, i=0;
printf("enter the value of n whose table u want\n");
scanf("%d", &n);
for(i=0; i<=10;  i++){
    printf("%d\n", n*i);
}*/
//multiplication of 10 in reverse order
/*int i=0;
for(i=0; i<=10; i++){
    printf("%d\n",100-(10*i) );
}*/
//another method for above question
/*int i=10;
for(i=10;i;i--){
    printf("%d\n", 10*i);
}*/
// print sum of n natural no. using loop
/*int sum=0, i=0, n;
printf("enter the value of n\n");
scanf("%d", &n);
for(i=0; i<=n; i++){
    sum= sum + i; // this line can also be written as sum +=i
    printf("%d\n", sum);
}*/
//same above question with while loop
/*int i=0, n, sum=0;
printf("enter the value of n\n");
scanf("%d",&n);
while(i<=n){
  sum = sum+i;
  i++;  
}
printf("%d\n", sum);*/
//sum of the numbers occuring in the multiplication table of 8
/*int i=0, sum=0;
for(i=0; i<=10; i++){
    8*i
    sum= sum + 8*i;}
    printf("%d\n", sum); */
    // factorial of a number
    int a,b;
    printf("Enter two numbers :");
    scanf("%d",a);
    scanf("%d",b);
    
    
    printf("%d", a+b);

    return 0;

}
