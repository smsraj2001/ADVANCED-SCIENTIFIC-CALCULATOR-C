#include"Misc_header.h"

FILE *f;

void menu()
{
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("----------------------------MENU----------------------------\n");
    printf("Enter (1) to Display the OPERATIONS AVAILABLE\n");
    printf("Enter (2) to Display the MENU\n");
    printf("Enter (3) to Start CALCULATING\n");
    printf("Enter (4) to CLEAR SCREEN\n");
    printf("Enter (5) to EXIT MISCELLANEOUS OPERATIONS\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
}
void calculator_operations()
{
    printf("\n-------------------------------------------------------\n");
            printf("*** Press 'Q' to quit the program ****\n");
            printf("*** Press 'H' to display below options ***\n");
            printf("Enter 'C' to clear the screen\n"); 
            printf("Enter 1 for BMI CALCULATOR \n");
            printf("Enter 2 for QUADRATIC EQUATIONS  \n");
            printf("Enter 3 for SUM AND DIFFERENCE OF COMPLEX NUMBERS\n");
            printf("Enter 4 for GCD & LCM OF 2 NUMBERS. \n");
    printf("-------------------------------------------------------\n");
}
void BMI()
{
    float weight,height,bmiIndex=0.0;
    printf("-------BMI INDEX CALCUATOR------- \n");
    printf("Enter your body WEIGHT in Kg:- \n");
    scanf("%f",&weight);
    printf("Enter your HEIGHT in meters: \n");
    scanf("%f",&height);
    bmiIndex = weight/(height*height);
    printf("WEIGHT : %f\n",weight);
    printf("HEIGHT : %f\n",height);
    f=fopen("History.txt","a+");
    fprintf(f,"WEIGHT : %f\n",weight);
    fprintf(f,"HEIGHT : %f\n",height);
    fprintf(f,"\n");
    fclose(f);


    if (bmiIndex <= 18.5)
    {
        printf("Your BMI Index is %f\nYou are UNDERWEIGHT :( \n",bmiIndex);
        f=fopen("History.txt","a+");
        fprintf(f,"Your BMI Index is %f\nYou are UNDERWEIGHT :( \n",bmiIndex);
        fprintf(f,"\n");
        fclose(f);
    }
    else if (bmiIndex>19.5 && bmiIndex<=24.9)
    {
        printf("Your BMI Index is %f\nYou have a NORMAL WEIGHT :) \n",bmiIndex);
        f=fopen("History.txt","a+");
        fprintf(f,"Your BMI Index is %f\nYou have a NORMAL WEIGHT :) \n",bmiIndex);
        fprintf(f,"\n");
        fclose(f);
    }
    else if (bmiIndex>24.9 && bmiIndex<=29.9)
    {
        printf("Your BMI Index is %f\nYou are OVERWEIGHT :( \n",bmiIndex);
        f=fopen("History.txt","a+");
        fprintf(f,"Your BMI Index is %f\nYou are OVERWEIGHT :( \n",bmiIndex);
        fprintf(f,"\n");
        fclose(f);
    }
    else if (bmiIndex>29.9)
    {
        printf("Your BMI Index is %f\nYou are OBESE :( \n",bmiIndex);
        f=fopen("History.txt","a+");
        fprintf(f,"Your BMI Index is %f\nYou are OBESE :( \n",bmiIndex);
        fprintf(f,"\n");
        fclose(f);
    }
    else
    {
        printf("Please RECHECK your inputs!!! :)\n");
    }    
}

void quadratic()
{
double a,b,c,D,root1,root2,imaginary;
printf("Enter the coefficients a,b and c respectively:-\n");
scanf("%lf%lf%lf",&a,&b,&c);
printf("%.3lfx^2 + %.3lfx + %.3lf = 0\n",a,b,c);
f=fopen("History.txt","a+");
fprintf(f,"%.3lfx^2 + %.3lfx + %.3lf = 0\n",a,b,c);
fprintf(f,"\n");
fclose(f);

D=(b*b)-(4*a*c);
if(D>0)
{
root1=(-b+sqrt(D))/(2*a);
root2=(-b-sqrt(D))/(2*a);
printf("Root 1 : %.2lf and Root 2 : %.2lf\n",root1,root2);
f=fopen("History.txt","a+");
fprintf(f,"Root 1 : %.2lf and Root 2 : %.2lf\n",root1,root2);
fprintf(f,"\n");
fclose(f);
}
else if(D==0)
{
root1=(-b+sqrt(D))/(2*a);
root2=(-b-sqrt(D))/(2*a);
printf("Root 1 : %.2lf = Root 2 : %.2lf\n",root1,root2);
f=fopen("History.txt","a+");
fprintf(f,"Root 1 : %.2lf = Root 2 : %.2lf\n",root1,root2);
fprintf(f,"\n");
fclose(f);
}
else if(D<0)
{
root1=-b/(2*a);
root2=-b/(2*a);
imaginary=sqrt(-D)/(2*a);
printf("Root 1 : %.2lf + i%.2lf and Root 2 : %.2lf -i%.2lf\n",root1,imaginary,root2,imaginary);
f=fopen("History.txt","a+");
fprintf(f,"Root 1 : %.2lf + i%.2lf and Root 2 : %.2lf -i%.2lf\n",root1,imaginary,root2,imaginary);
fprintf(f,"\n");
fclose(f);
}
}

COMP add(COMP* C1,COMP* C2)
{
COMP temp;
temp.real=C1->real+C2->real;
temp.imag=C1->imag+C2->imag;
return temp;
}
COMP sub(COMP* C1,COMP* C2)
{
COMP temp;
temp.real=C1->real-C2->real;
temp.imag=C1->imag-C2->imag;
return temp;
}

void Complex()
{
COMP C1,C2;
printf("For 1st complex number:\n");
printf("Enter the real and imaginary parts:-\n");
scanf("%f%f",&C1.real,&C1.imag);
printf("For 2nd complex number:\n");
printf("Enter the real and imaginary parts:-\n");
scanf("%f%f",&C2.real,&C2.imag);
COMP sum=add(&C1,&C2);
COMP diff=sub(&C1,&C2);
if(sum.imag<0&&diff.imag<0)
{
printf("Sum = %0.1f %0.1fi\n",sum.real,sum.imag);
printf("Sub = %0.1f %0.1fi\n",diff.real,diff.imag);
f=fopen("History.txt","a+");
fprintf(f,"Sum = %0.1f %0.1fi\n",sum.real,sum.imag);
fprintf(f,"Sub = %0.1f %0.1fi\n",diff.real,diff.imag);
fprintf(f,"\n");
fclose(f);
}
if(sum.imag<0)
{
printf("Sum = %0.1f %0.1fi\n",sum.real,sum.imag);
printf("Sub = %0.1f +%0.1fi\n",diff.real,diff.imag);
f=fopen("History.txt","a+");
fprintf(f,"Sum = %0.1f %0.1fi\n",sum.real,sum.imag);
fprintf(f,"Sub = %0.1f +%0.1fi\n",diff.real,diff.imag);
fprintf(f,"\n");
fclose(f);
}
if(diff.imag<0)
{
printf("Sum = %0.1f +%0.1fi\n",sum.real,sum.imag);
printf("Sub = %0.1f %0.1fi\n",diff.real,diff.imag);
f=fopen("History.txt","a+");
fprintf(f,"Sum = %0.1f +%0.1fi\n",sum.real,sum.imag);
fprintf(f,"Sub = %0.1f %0.1fi\n",diff.real,diff.imag);
fprintf(f,"\n");
fclose(f);
}
if(sum.imag>0 && diff.imag>0)
{
printf("Sum = %0.1f +%0.1fi\n",sum.real,sum.imag);
printf("Sub = %0.1f +%0.1fi\n",diff.real,diff.imag);
f=fopen("History.txt","a+");
fprintf(f,"Sum = %0.1f +%0.1fi\n",sum.real,sum.imag);
fprintf(f,"Sub = %0.1f +%0.1fi\n",diff.real,diff.imag);
fprintf(f,"\n");
fclose(f);
}
}

void G_L()
{
    int n1,n2,i,gcd,lcm;
    printf("Enter TWO POSITIVE integers:-\n");
    scanf("%d%d",&n1,&n2);
    for(i=1;i<=n1&&i<=n2;i++)
    {
        if(n1%i==0 && n2%i==0)
            gcd=i;
    }
    lcm=(n1*n2)/gcd;
    printf("GCD of %d and %d is %d.\n",n1,n2,gcd);
    printf("LCM of %d and %d is %d.\n",n1,n2,lcm);
    f=fopen("History.txt","a+");
    fprintf(f,"GCD of %d and %d is %d.\n",n1,n2,gcd);
    fprintf(f,"LCM of %d and %d is %d.\n",n1,n2,lcm);
    fprintf(f,"\n");
    fclose(f);
}