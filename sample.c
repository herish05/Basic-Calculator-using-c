 #include<stdio.h>
 void calculator(float num1,float num2,char ch){
    switch(ch){
        case '+':
        printf("%.2f",num1+num2);
        break;
        case '-':
        
            printf("%.2f",num1-num2);
        
        break;
        case '*':
        printf("%.2f",num1*num2);
        break;
        case '/':
        if(num2==0){
            printf("error!");
        }
        printf("%.2f",num1/num2);
        break;
        default:
        pritnf("invalid inputs");
        break;
        
    }
 }
 int main(){
    float num1,num2;
    char ch;
    printf("enter first number\n");
    scanf("%f",&num1);
    printf("enter second number\n");
    scanf("%f",&num2);
    pritnf("select any operation +,-,*,/");
    scanf(" %s",&ch);
    calculator(num1,num2,ch);
 }
