#include"Trig_header.h"
FILE *f;

void menu()
{
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("----------------------------MENU----------------------------\n");
    printf("Enter (1) to Display the TRIGONOMETRIC OPERATIONS\n");
    printf("Enter (2) to Display the MENU\n");
    printf("Enter (3) to Start CALCULATING\n");
    printf("Enter (4) to CLEAR SCREEN\n");
    printf("Enter (5) to EXIT TRIGONOMETRIC OPERATIONS\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
}
void calculator_operations()
{
    printf("\n-------------------------------------------------------\n");
            printf("*** Press 'Q' to quit the program ****\n");
            printf("*** Press 'H' to display below options ***\n");
            printf("Enter 'C' to clear the screen\n"); 
            printf("Enter 1 for TRIGONOMETRIC OPERATIONS \n");
            printf("Enter 2 for INVERSE TRIGONOMETRIC OPERATIONS  \n");
            printf("Enter 3 for HYPERBOLIC TRIGONOMETRIC OPERATIONS\n");
    printf("-------------------------------------------------------\n");
}
void trig()
{
    float degree = 0.0;
    int n;
    printf("Enter the angle in DEGREES: ");
    scanf("%f",&degree);
    printf("Enter the operation of your choice:\n1) SIN\n2) COS\n3) TAN\n4) COSEC\n5) SEC\n6) COT\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            printf("Value of Sin(%lf)=%lf\n",degree,sin(degree*M_PI/180));
            f=fopen("History.txt","a+");
            fprintf(f,"Sin(%lf)=%lf\n",degree,sin(degree*M_PI/180));
            fclose(f);
            break;
        case 2:
            printf("Value of Cos(%lf)=%lf\n",degree,cos(degree*M_PI/180));
            f=fopen("History.txt","a+");
            fprintf(f,"Cos(%lf)=%lf\n",degree,sin(degree*M_PI/180));
            fclose(f);
            break;
        case 3:
            printf("Value of Tan(%lf)=%lf\n",degree,tan(degree*M_PI/180));
            f=fopen("History.txt","a+");
            fprintf(f,"Tan(%lf)=%lf\n",degree,sin(degree*M_PI/180));
            fclose(f);
            break;
        case 4:
            printf("Value of Cosec(%lf)=%lf\n",degree,1/sin(degree*M_PI/180));
            f=fopen("History.txt","a+");
            fprintf(f,"Cosec(%lf)=%lf\n",degree,sin(degree*M_PI/180));
            fclose(f);
            break;
        case 5:
            printf("Value of Sec(%lf)=%lf\n",degree,1/cos(degree*M_PI/180));
            f=fopen("History.txt","a+");
            fprintf(f,"Sec(%lf)=%lf\n",degree,sin(degree*M_PI/180));
            fclose(f);
            break;
        case 6:
            printf("Value of Cot(%lf)=%lf\n",degree,1/tan(degree*M_PI/180));
            f=fopen("History.txt","a+");
            fprintf(f,"Cot(%lf)=%lf\n",degree,sin(degree*M_PI/180));
            fclose(f);
            break;
        default:
            printf("You have entered an invalid operator.\nPlease try again.\n");
    }
}
void itrig()
{
    float num = 0.0;
    int n;
    printf("Enter the number to find its INVERSE TRIGONOMETRY: ");
    scanf("%f",&num);
    printf("Enter the operation of your choice:\n1) SIN-1\n2) COS-1\n3) TAN-1\n4) COSEC-1\n5) SEC-1\n6) COT-1\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            printf("Value of Sin-1(%.2lf)=%lf\n",num,asin(num)*(180/M_PI));
            f=fopen("History.txt","a+");
            fprintf(f,"Sin-1(%.2lf)=%lf\n",num,asin(num)*(180/M_PI));
            fclose(f);
            break;
        case 2:
            printf("Value of Cos-1(%.2lf)=%lf\n",num,acos(num)*(180/M_PI));
            f=fopen("History.txt","a+");
            fprintf(f,"Cos-1(%.2lf)=%lf\n",num,asin(num)*(180/M_PI));
            fclose(f);
            break;
        case 3:
            printf("Value of Tan-1(%.2lf)=%lf\n",num,atan(num)*(180/M_PI));
            f=fopen("History.txt","a+");
            fprintf(f,"Tan-1(%.2lf)=%lf\n",num,asin(num)*(180/M_PI));
            fclose(f);
            break;
        case 4:
            printf("Value of Cosec-1(%.2lf)=%lf\n",num,1/asin(num)*(180/M_PI));
            f=fopen("History.txt","a+");
            fprintf(f,"Cosec-1(%.2lf)=%lf\n",num,asin(num)*(180/M_PI));
            fclose(f);
            break;
        case 5:
            printf("Value of Sec-1(%.2lf)=%lf\n",num,1/acos(num)*(180/M_PI));
            f=fopen("History.txt","a+");
            fprintf(f,"Sec-1(%.2lf)=%lf\n",num,asin(num)*(180/M_PI));
            fclose(f);
            break;
        case 6:
            printf("Value of Cot-1(%.2lf)=%lf\n",num,1/atan(num)*(180/M_PI));
            f=fopen("History.txt","a+");
            fprintf(f,"Cot-1(%.2lf)=%lf\n",num,asin(num)*(180/M_PI));
            fclose(f);
            break;
        default:
            printf("You have entered an INVALID operator.\nPlease TRY AGAIN.\n");
    }
}
void trigh()
{
    float num = 0.0;
    int n;
    printf("Enter the number to find its HYPERBOLIC TRIGONOMETRY: ");
    scanf("%f",&num);
    printf("Enter the operation of your choice:\n1) SINH\n2) COSH\n3) TANH\n4) COSECH\n5) SECH\n6) COTH\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            printf("Value of Sinh(%lf)=%lf\n",num,sinh(num*M_PI/180));
            f=fopen("History.txt","a+");
            fprintf(f,"Sinh(%lf)=%lf\n",num,sinh(num*M_PI/180));
            fclose(f);
            break;
        case 2:
            printf("Value of Cosh(%lf)=%lf\n",num,cosh(num*M_PI/180));
            f=fopen("History.txt","a+");
            fprintf(f,"Cosh(%lf)=%lf\n",num,sinh(num*M_PI/180));
            fclose(f);
            break;
        case 3:
            printf("Value of Tanh(%lf)=%lf\n",num,tanh(num*M_PI/180));
            f=fopen("History.txt","a+");
            fprintf(f,"Tanh(%lf)=%lf\n",num,sinh(num*M_PI/180));
            fclose(f);
            break;
        case 4:
            printf("Value of Cosech(%lf)=%lf\n",num,1/sinh(num*M_PI/180));
            f=fopen("History.txt","a+");
            fprintf(f,"Cosech(%lf)=%lf\n",num,sinh(num*M_PI/180));
            fclose(f);
            break;
        case 5:
            printf("Value of Sech(%lf)=%lf\n",num,1/cosh(num*M_PI/180));
            f=fopen("History.txt","a+");
            fprintf(f,"Sech(%lf)=%lf\n",num,sinh(num*M_PI/180));
            fclose(f);
            break;
        case 6:
            printf("Value of Coth(%lf)=%lf\n",num,1/tanh(num*M_PI/180));
            f=fopen("History.txt","a+");
            fprintf(f,"Coth(%lf)=%lf\n",num,sinh(num*M_PI/180));
            fclose(f);
            break;
        default:
            printf("You have entered an INVALID operator.\nPlease TRY AGAIN.\n");
    }
}