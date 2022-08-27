#include"Arith_header.h"

FILE *f;

void menu()
{
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("----------------------------MENU----------------------------\n");
    printf("Enter (1) to Display the ARITHMETIC OPERATIONS\n");
    printf("Enter (2) to Display the MENU\n");
    printf("Enter (3) to Start CALCULATING\n");
    printf("Enter (4) to CLEAR SCREEN\n");
    printf("Enter (5) to EXIT ARITHMETIC OPERATIONS\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
}
void calculator_operations()
{
    printf("-------------------------------------------------------\n");
            printf("*** Press 'Q' to quit the program ****\n");
            printf("*** Press 'H' to display below options ***\n");
            printf("Enter 'C' to clear the screen\n"); 
            printf("Enter + symbol for ADDITION \n");
            printf("Enter - symbol for SUBTRACTION \n");
            printf("Enter * symbol for MULTIPLICATION \n");
            printf("Enter / symbol for DIVISION \n");
            printf("Enter # symbol for MODULUS\n");
            printf("Enter ^ symbol for POWER \n");
            printf("Enter ! symbol for FACTORIAL \n");
            printf("Enter | symbol for ABSOLUTE of a number\n");
            printf("Enter : symbol for RATIO of the number in proportion\n");
            printf("Enter %c symbol for PERCENTAGE \n",'%');
            printf("Enter I symbol for INVERSE of a number\n");
            printf("Enter $ symbol for ANY EXPRESSION evaluation in BODMAS\n");
            printf("Enter ~ symbol for Nth ROOT of a given number.\n");
    printf("-------------------------------------------------------\n");
}
void addition()
{
    float total=0, number;
    int n,k=0;
    printf("Enter the number of elements you want to add:\n");
    scanf("%d",&n);
    printf("Please enter %d numbers one by one: \n",n);
    while(k<n)
    { 
        scanf("%f",&number);
        total=total+number;
        k=k+1;
    }
    printf("Sum of %d numbers = %f \n",n,total);
    f=fopen("History.txt","a+");
    fprintf(f,"\n");
    fprintf(f,"Sum of %d numbers = %f \n",n,total);
    fprintf(f,"\n");
    fclose(f);

}
 
void subtraction()
{ 
    int a, b, c = 0; 
    printf("Please enter first number  : \n"); 
    scanf("%d", &a); 
    printf("Please enter second number : \n"); 
    scanf("%d", &b); 
    c = a - b; 
    printf("%d - %d = %d\n", a, b, c); 
    f=fopen("History.txt","a+");
    fprintf(f,"\n");
    fprintf(f,"%d - %d = %f \n",a,b,c);
    fprintf(f,"\n");
    fclose(f);
}
 
void multiplication()
{
    float a, b, mul=0; 
    printf("Please enter first number   : \n"); 
    scanf("%f", &a); 
    printf("Please enter second number: \n"); 
    scanf("%f", &b);
    mul=a*b;
    printf("Multiplication of entered numbers = %f\n",mul);
    f=fopen("History.txt","a+");
    fprintf(f,"\n");
    fprintf(f,"%d X %d = %f \n",a,b,mul);
    fprintf(f,"\n");
    fclose(f);
}
 
void division()
{
    float a, b, d=0; 
    printf("Please enter first number  : \n"); 
    scanf("%f", &a); 
    printf("Please enter second number : \n"); 
    scanf("%f", &b);
    d=a/b;
    printf("Division of entered numbers=%f\n",d);
    f=fopen("History.txt","a+");
    fprintf(f,"\n");
    fprintf(f,"%.2f / %.2f = %.2f \n",a,b,d);
    fprintf(f,"\n");
    fclose(f);
}
 
void modulus()
{
    int a, b, d=0; 
    printf("Please enter first number   : \n"); 
    scanf("%d", &a); 
    printf("Please enter second number  : \n"); 
    scanf("%d", &b);
    d=a%b;
    printf("Modulus of entered numbers = %d\n",d);
    f=fopen("History.txt","a+");
    fprintf(f,"\n");
    fprintf(f,"%d %c %d = %d \n",a,'%',b,d);
    fprintf(f,"\n");
    fclose(f);
}
 
void power()
{
    double a,num, p;
    printf("Enter two numbers to find the power \n");
    printf("Number: ");
    scanf("%lf",&a);
 
    printf("\npower : ");
    scanf("%lf",&num);
 
    p=pow(a,num);
 
    printf("\n%lf to the power %lf = %lf \n",a,num,p);
    f=fopen("History.txt","a+");
    fprintf(f,"\n");
    fprintf(f,"%.2lf ^ %.2lf = %.2f \n",a,num,p);
    fprintf(f,"\n");
    fclose(f);
}
 
void factorial()
{
    int i,fact=1,num,s=1;
    printf("Enter a number to find factorial : \n");
    while(s)
    {
        scanf("%d",&num);
        if(num<0)
        {
            printf("Please enter a positive number to find factorial and try again. \n");
            printf("Factorial can't be found for negative values. It can be only positive or 0  \n");
            printf("Enter a number to find factorial : \n");
            scanf("%d",&num);
        }
        else 
            s=0;        
    }               
    for(i=1;i<=num;i++)
    fact=fact*i;
    printf("Factorial of entered number %d is:%d\n",num,fact);
    f=fopen("History.txt","a+");
    fprintf(f,"\n");
    fprintf(f,"%d! = %d",num,fact);
    fprintf(f,"\n");
    fclose(f);
}

void absolute()
{
    int n;
    printf("Enter the number to find its absolute value:-\n");
    scanf("%d",&n);
    printf("|%d| = %d\n",n,abs(n));
    f=fopen("History.txt","a+");
    fprintf(f,"\n");
    fprintf(f,"|%d| = %d\n",n,abs(n));
    fprintf(f,"\n");
    fclose(f);
}

void ratio()
{
    printf("FORMAT:- A:B=x:C\n");
    int A,B,C;
    float X=0.0;
    printf("Enter the value of A:-\n");
    scanf("%d",&A);
    printf("Enter the value of B:-\n");
    scanf("%d",&B);
    printf("Enter the value of C:-\n");
    scanf("%d",&C);
    X=A*C/B;
    printf("The value of X is %.1f\n",X);
    printf("%d : %d :: %.1f : %d\n",A,B,X,C);
    f=fopen("History.txt","a+");
    fprintf(f,"\n");
    fprintf(f,"%d : %d :: %.1f : %d\n",A,B,X,C);
    fprintf(f,"\n");
    fclose(f);
}

void percent()
{
    float n,tot,per=0.0;
    printf("Enter the number of quantities:-\n");
    scanf("%f",&n);
    printf("Enter the total number of quantities:-\n");
    scanf("%f",&tot);
    per=(n/tot)*100;
    printf("The percentage is %.3f %c\n",per,'%');
    f=fopen("History.txt","a+");
    fprintf(f,"\n");
    fprintf(f,"The percentage is %.3f %c\n",per,'%');
    fprintf(f,"\n");
    fclose(f);
}

void INV()
{
    float n;
    float i;
    printf("Enter the number to find its inverse:-\n");
    scanf("%f",&n);
    i=1.0/n;
    printf("The inverse of %.2f  is %.2f.\n",n,i);
    f=fopen("History.txt","a+");
    fprintf(f,"\n");
    fprintf(f,"The inverse of %.2f  is %.2f.\n",n,i);
    fprintf(f,"\n");
    fclose(f);
}

void root()
{
    printf("Enter a number to find its nth root:-\n");
    int num,n;
    double rt;
    scanf("%d",&num);
    printf("Enter its nth root:-\n");
    scanf("%d",&n);
    rt=pow(num,(1.0/n));
    printf("The answer is %.4lf\n",rt);
    f=fopen("History.txt","a+");
    fprintf(f,"\n");
    fprintf(f,"The answer is %.4lf\n",rt);
    fprintf(f,"\n");
    fclose(f);   
}

void expre()
{
    char expression[100];
    double result;

    printf("Enter the Expression: "); 
    scanf("%[^\n]", expression);

    result = evaluate(expression);
    printf("Result = %.3lf\n", result);
    f=fopen("History.txt","a+");
    fprintf(f,"\n");
    fprintf(f,"EXPRESSION: %s\n",expression);
    fprintf(f,"RESULT: %.3lf\n",result);
    fprintf(f,"\n");
    fclose(f);
}

double evaluate(char expr[])
{
    double numbers[5]; int nsi = 0;
    char operators[5]; int osi = 0;
    char numbuf[16]; int nbi = 0;
    char ch; int  i = 0;

    while ((ch = expr[i]) != 0) {
        if (checknumber(ch)) 
        {
            numbuf[nbi++] = ch;
            if (!checknumber(expr[i + 1])) 
            {
                numbuf[nbi] = 0; nbi = 0;
                sscanf(numbuf, "%lf", &numbers[nsi++]); 
            }
        }
        else
        {
            while ((osi > 0) && (precedence(ch) <= precedence(operators[osi - 1])))
            {
                numbers[nsi - 2] = calculate(operators[osi - 1], numbers[nsi - 2], numbers[nsi - 1]);
                osi--; nsi--;
            }
            operators[osi++] = ch;          
        }
        i++;
    }
    while (osi > 0) {
        numbers[nsi - 2] = calculate(operators[osi - 1], numbers[nsi - 2], numbers[nsi - 1]);
        osi--; nsi--;
    }
    return numbers[0];
}

char checknumber(char ch) 
{
    if ((ch >= '0' && ch <= '9') || ch == '.') return 1; else return 0;
}
int precedence(char ch)
{
    int precedence;
    switch (ch) 
    {
    case '+':
    case '-':
        precedence = 0;
        break;
    case '*':
    case '/':
        precedence = 1;
        break;
    case '^':
        precedence = 2;
    }
    return precedence;
}

double calculate(char moperator, double num1, double num2) 
{
    double result;
    switch (moperator)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    case '^':
        result = pow(num1, num2);
        break;
    default:
        printf("Invalid Operator\n");
        exit(-1);
    }
    return result;
}

