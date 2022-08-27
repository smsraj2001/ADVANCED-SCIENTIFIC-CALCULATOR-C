#include"Alge_header.h"

FILE *f;

void menu()
{
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("----------------------------MENU----------------------------\n");
    printf("Enter (1) to Display the ALGEBRAIC OPERATIONS\n");
    printf("Enter (2) to Display the MENU\n");
    printf("Enter (3) to Start CALCULATING\n");
    printf("Enter (4) to CLEAR SCREEN\n");
    printf("Enter (5) to EXIT ALGEBRAIC OPERATIONS\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
}
void calculator_operations()
{
    printf("\n-------------------------------------------------------\n");
            printf("*** Press 'Q' to quit the program ****\n");
            printf("*** Press 'H' to display below options ***\n");
            printf("Enter 'C' to clear the screen\n"); 
            printf("Enter 1 for MATRIX OPERATIONS \n");
            printf("Enter 2 for LOG and EXP  \n");
            printf("Enter 3 for SEQUENCE,SERIES AND SUMMATION\n");
            printf("Enter 4 for SIMULTANEOUS EQUATION \n");
            printf("Enter 5 for PERMUTATIONS AND COMBINATIONS \n");
    printf("-------------------------------------------------------\n");
}
void input(int m;int n;int a[m][n],int m,int n)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
}

void display(int m;int n;int a[m][n],int m,int n)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }
    f=fopen("History.txt","a+");
    fprintf(f,"\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            fprintf(f,"%d\t",a[i][j]);
        fprintf(f,"\n");
    }
    fprintf(f,"\n");
    fclose(f);
}

void matrix_add()
{
    
    int m1,n1,m2,n2,x=1;
    printf("Enter the order (m x n) of matrix 1:-\n");
    scanf("%d%d",&m1,&n1);
    printf("Enter the order (m x n) of matrix 2:-\n");
    scanf("%d%d",&m2,&n2);
    while(x)
    {
        if(m1==m2&&n1==n2)
            x=0;
        else
        {
            x=1;
            printf("Matrices incompatible!!!\n");
            printf("Enter the order (m x n) of matrix 1:-\n");
            scanf("%d%d",&m1,&n1);
            printf("Enter the order (m x n) of matrix 2:-\n");
            scanf("%d%d",&m2,&n2);
        }
    }
    int M1[m1][n1];
    int M2[m2][n2];
    printf("Enter %d values for MATRIX 1:-\n",(m1*n1));
    input(M1,m1,n1);
    printf("Enter %d values for MATRIX 2:-\n",(m2*n2));
    input(M2,m2,n2);
    printf("The entered matrices are:-\n");
    printf("MATRIX 1:-\n");
        f=fopen("History.txt","a+");
        fprintf(f,"MATRIX 1:-\n");
        fclose(f);
    display(M1,m1,n1);
    printf("MATRIX 2:-\n");
        f=fopen("History.txt","a+");
        fprintf(f,"MATRIX 2:-\n");
        fclose(f);
    display(M2,m2,n2);
   

    int M3[m1][n1];
    for(int i=0;i<m1;i++)
    {
        for(int j=0;j<n1;j++)
        {
            M3[i][j]=M1[i][j]+M2[i][j];
        }
    }
    printf("The SUM of 2 Matrices is :-\n");
        f=fopen("History.txt","a+");
        fprintf(f,"The SUM of 2 Matrices is :-\n");
        fclose(f);
    display(M3,m1,n1);
}

void matrix_sub()
{
    int m1,n1,m2,n2,x=1;
    printf("Enter the order (m x n) of matrix 1:-\n");
    scanf("%d%d",&m1,&n1);
    printf("Enter the order (m x n) of matrix 2:-\n");
    scanf("%d%d",&m2,&n2);
    while(x)
    {
        if(m1==m2&&n1==n2)
            x=0;
        else
        {
            x=1;
            printf("Matrices INCOMPATIBLE!!!\n");
            printf("Enter the order (m x n) of matrix 1:-\n");
            scanf("%d%d",&m1,&n1);
            printf("Enter the order (m x n) of matrix 2:-\n");
            scanf("%d%d",&m2,&n2);
        }
    }
    int M1[m1][n1];
    int M2[m2][n2];
    printf("Enter %d values for MATRIX 1:-\n",(m1*n1));
    input(M1,m1,n1);
    printf("Enter %d values for MATRIX 2:-\n",(m2*n2));
    input(M2,m2,n2);
    printf("The entered matrices are:-\n");
    printf("MATRIX 1:-\n");
        f=fopen("History.txt","a+");
        fprintf(f,"MATRIX 1:-\n");
        fclose(f);
    display(M1,m1,n1);
    printf("MATRIX 2:-\n");
        f=fopen("History.txt","a+");
        fprintf(f,"MATRIX 2:-\n");
        fclose(f);
    display(M2,m2,n2);

    int M3[m1][n1];
    for(int i=0;i<m1;i++)
    {
        for(int j=0;j<n1;j++)
        {
            M3[i][j]=M1[i][j]-M2[i][j];
        }
    }
    printf("The DIFFERENCE of 2 Matrices is :-\n");
        f=fopen("History.txt","a+");
        fprintf(f,"The DIFFERENCE of 2 Matrices is :-\n");
        fclose(f);
    display(M3,m1,n1);
}
void matrix_mul()
{
    int r1,c1,r2,c2;
    printf("Enter the order (m x n) of matrix 1:-\n");
    scanf("%d%d",&r1,&c1);
    printf("Enter the order (m x n) of matrix 2:-\n");
    scanf("%d%d",&r2,&c2);
    int x=1;
    while(x)
    {
        if(c1==r2)
            x=0;
        else
        {
            x=1;
            printf("Matrices incompatible!!!\n");
            printf("Enter the order (m x n) of matrix 1:-\n");
            scanf("%d%d",&r1,&c1);
            printf("Enter the order (m x n) of matrix 2:-\n");
            scanf("%d%d",&r2,&c2);
        }
    }
        int a[r1][c1];
        int b[r2][c2];
        int c[r1][c2];
        printf("Enter %d values for MATRIX 1:-\n",(r1*c1));
        input(a,r1,c1);
        printf("Enter %d values for MATRIX 2:-\n",(r2*c2));
        input(b,r2,c2);
        printf("The entered matrices are:-\n");
        printf("MATRIX 1:-\n");
            f=fopen("History.txt","a+");
            fprintf(f,"MATRIX 1:-\n");
            fclose(f);
        display(a,r1,c1);
        printf("MATRIX 2:-\n");
            f=fopen("History.txt","a+");
            fprintf(f,"MATRIX 2:-\n");
            fclose(f);
        display(b,r2,c2);

	    int i,j,k;
	    int sum;
	    for(i = 0;i<r1;i++)
	    {
		    for(j = 0;j<c2;j++)
		    {
			    sum  = 0;
			    for(k = 0;k<c1;k++)
			    {
				    sum += a[i][k]*b[k][j];
			    }
			    c[i][j] = sum;
		    }
	    }	
        printf("The MULTIPLICATION of 2 Matrices is :-\n");
            f=fopen("History.txt","a+");
            fprintf(f,"The MULTIPLICATION of 2 Matrices is :-\n");
            fclose(f);
        display(c,r1,c2);
}
void matrix()
{
    printf("-------------WELCOME TO MATRIX OPERATION--------------\n");
    int Y=1;
    while(Y!=0)
    {
        Y=1;
        printf("\nEnter '+' for MATRIX ADDITION\nEnter '-' for MATRIX DIFFERENCE\nEnter '*' for MATRIX MULTIPLICATION\nEnter 0 to EXIT\n");
        printf("Enter your choice:-\n");
        char ch;
        ch=getche();
        switch(ch)
        {
            case '+': 
                printf("``````````````````````````````````````````\n");
                matrix_add();
                printf("``````````````````````````````````````````\n");
                break;
            case '-':
                printf("``````````````````````````````````````````\n");
                matrix_sub();
                printf("``````````````````````````````````````````\n");
                break;
            case '*':
                printf("``````````````````````````````````````````\n");
                matrix_mul();
                printf("``````````````````````````````````````````\n");
                break;

            case '0':
                printf("``````````````````````````````````````````\n");
                printf("You have exited MATRIX OPERATION!!\n");
                printf("``````````````````````````````````````````\n");
                Y=0;
                break;
            
            default:
                printf("\nEnter the CORRECT CHOICE!!!\n");
                break;
        }
    }
}
void log_exp()
{
    float num,lg, lg10,ex,n;
	printf("Enter the number to find LOG:-\n");
	scanf("%f", &num);
	lg = log(num);
	lg10 = log10(num);
    printf("Enter the number to find its EXPONENTIAL VALUE:-\n");
	scanf("%f", &n);
	ex = exp(n);
	printf("NATURAL LOG of %0.2f is: %0.2f\n", num, lg);
	printf("LOG TO BASE 10 of %0.2f is: %0.2f\n", num, lg10);
	printf("EXPONENTIAL VALUE of %0.2f is: %0.2f\n", n, ex);
    f=fopen("History.txt","a+");
    fprintf(f,"NATURAL LOG of %0.2f is: %0.2f\n", num, lg);
    fprintf(f,"LOG TO BASE 10 of %0.2f is: %0.2f\n", num, lg10);
    fprintf(f,"EXPONENTIAL VALUE of %0.2f is: %0.2f\n", n, ex);
    fprintf(f,"\n");
    fclose(f);
}
void AP()
{
    int a,d,sum=0,term=0,n;
    printf("Enter the FIRST term of AP:-\n");
    scanf("%d",&a);
    printf("Enter the COMMON DIFFERENCE of AP:-\n");
    scanf("%d",&d);
    printf("Enter the NUMBER OF TERMS:-\n");
    scanf("%d",&n);
    printf("The first %d terms are:-\n",n);
    for(int i=0;i<n;i++)
    {
        term=a+(i*d);
        printf("%d,",term);
        sum=sum+term;
    }
    printf("The SUM of the series is %d.\n",sum);
    printf("The sum to infinity of AP is undefined!!!\n");
    f=fopen("History.txt","a+");
    for(int i=0;i<n;i++)
    {
        term=a+(i*d);
        fprintf(f,"%d,",term);
        sum=sum+term;
    }
    fprintf(f,"The SUM of the series is %d.\n",sum);
    fprintf(f,"The sum to infinity of AP is undefined!!!\n");
    fprintf(f,"\n");
    fclose(f);

}
void GP()
{
    int a,r,n,sum=0,term=0;
    int inf_sum=0;
    printf("Enter the FIRST term of GP:-\n");
    scanf("%d",&a);
    printf("Enter the COMMON RATIO of GP:-\n");
    scanf("%d",&r);
    printf("Enter the NUMBER OF TERMS:-\n");
    scanf("%d",&n);
    printf("The first %d terms are:-\n",n);
    for(int i=0;i<n;i++)
    {
        term=a*pow(r,i);
        printf("%d,",term);
        sum=sum+term;
    }
    printf("\n");
    printf("The SUM of the series is %d.\n",sum);
    if(r!=1)
    {
        inf_sum=a/(1-r);
        printf("The INFINITE SUM of the series is %d.\n",inf_sum);
    }
    else
    printf("The INFINITE SUM of the series is not defined as R=1\n");
    f=fopen("History.txt","a+");
    for(int i=0;i<n;i++)
    {
        term=a*pow(r,i);
        fprintf(f,"%d,",term);
        sum=sum+term;
    }
    fprintf(f,"\n");
    fprintf(f,"The SUM of the series is %d.\n",sum);
    if(r!=1)
    {
        inf_sum=a/(1-r);
        fprintf(f,"The INFINITE SUM of the series is %d.\n",inf_sum);
    }
    else
        fprintf(f,"The INFINITE SUM of the series is not defined as R=1\n");
    fprintf(f,"\n");
    fclose(f);
}
void AGP()
{
    int a,r,n,d,sum=0,term=0;
    int sum_inf=0;
    printf("Enter the FIRST term of AGP:-\n");
    scanf("%d",&a);
    printf("Enter the COMMON RATIO of AGP:-\n");
    scanf("%d",&r);
    printf("Enter the COMMON DIFFERENCE of AGP:-\n");
    scanf("%d",&d);
    printf("Enter the NUMBER OF TERMS:-\n");
    scanf("%d",&n);
    printf("The first %d terms are:-\n",n);
    for(int i=1;i<=n;i++)
    {
        term=(a+(i-1)*d)*pow(r,i-1);
        printf("%d,",term);
        sum=sum+term;
    }
    printf("\n");
    printf("The SUM of the series is %d.\n",sum);
    sum_inf=(a/(1-r))+((d*r)/pow(1-r,2));
    printf("The INFINITE SUM of the series is %d\n.",sum_inf);

    f=fopen("History.txt","a+");
    for(int i=1;i<=n;i++)
    {
        term=(a+(i-1)*d)*pow(r,i-1);
        fprintf(f,"%d,",term);
        sum=sum+term;
    }
    fprintf(f,"\n");
    fprintf(f,"The SUM of the series is %d.\n",sum);
    fprintf(f,"The INFINITE SUM of the series is %d.\n",sum_inf);
    fprintf(f,"\n");
    fclose(f);
}

void seq_sum_ser()
{
    printf("-------------WELCOME TO SEQUENCE & SERIES--------------\n");
    int Y=1;
    while(Y!=0)
    {
        Y=1;
        printf("\nEnter '1' for AP\nEnter '2' for GP\nEnter '3' for AGP\nEnter 0 to EXIT\n");
        printf("Enter your choice:-\n");
        int ch;
        scanf("%d",&ch);
        switch(ch)
        {
            Y=1;
            case 1: 
                printf("``````````````````````````````````````````\n");
                AP();
                printf("``````````````````````````````````````````\n");
                break;
            case 2:
                printf("``````````````````````````````````````````\n");
                GP();
                printf("``````````````````````````````````````````\n");
                break;
            case 3:
                printf("``````````````````````````````````````````\n");
                AGP();
                printf("``````````````````````````````````````````\n");
                break;

            case 0:
                printf("``````````````````````````````````````````\n");
                printf("You have exited SEQUENCE AND SERIES!!\n");
                printf("``````````````````````````````````````````\n");
                Y=0;
                break;
            
            default:
                printf("Enter the CORRECT CHOICE!!!\n");
                break;
        }
    }
}
void SE()
{
    double a,b,c,p,q,r,x,y;
    printf("Enter the coefficents of the first equation of the form ax+by=c\n");
    scanf("%lf%lf%lf",&a,&b,&c);
    printf("Enter the coefficents of the second equation of the form px+qy=r\n");
    scanf("%lf%lf%lf",&p,&q,&r);
    if(((a*q-p*b)!=0)&&((b*p-q*a)!=0))
    {
            //UNIQUE SOLN OF X & Y
            printf("The solution to the equations is unique\n");
            x=(c*q-r*b)/(a*q-p*b);
            y=(c*p-r*a)/(b*p-q*a);
            printf("The value of x=%lf\n",x);
            printf("The value of y=%lf\n",y);
            f=fopen("History.txt","a+");
            fprintf(f,"\n");
            fprintf(f,"The solution to the equations is unique\n");
            fprintf(f,"The value of x=%lf\n",x);
            fprintf(f,"The value of y=%lf\n",y);
            fprintf(f,"\n");
            fclose(f);
    }
    else
        if(((a*q-p*b)==0)&&((b*p-q*a)==0)&&((c*q-r*b)==0)&&((c*p-r*a)==0))//INFINITE SOLNS.
        {//When we have such a condition than mathematically we can choose any one unknown as free and other unknown can be calculated using the free variables's value.
//So we choose x as free variable and then get y
                printf("Infinitely many solutions are possible\n");
                printf("The value of x can be varied and y can be calculated according to x's value using relation\n");
                printf("y=%lf+(%lf)x\n",(c/b),(-1*a/b));
                f=fopen("History.txt","a+");
                fprintf(f,"\n");
                fprintf(f,"Infinitely many solutions are possible\n");
                fprintf(f,"The value of x can be varied and y can be calculated according to x's value using relation\n");
                fprintf(f,"y=%lf+(%lf)x\n",(c/b),(-1*a/b));
                fprintf(f,"\n");
                fclose(f);
        }
    else
        if(((a*q-p*b)==0)&&((b*p-q*a)==0)&&((c*q-r*b)!=0)&&((c*p-r*a)!=0))
        {
            //In such condition no solutions are possible.
            printf("No solutions are possible\n");
            f=fopen("History.txt","a+");
            fprintf(f,"\n");
            fprintf(f,"No solutions are possible\n");
            fprintf(f,"\n");
            fclose(f);
        }
}
int fact(int n)
{
    int prod=1;
    for(int i=1;i<=n;i++)
    {
        prod*=i;
    }
    return prod;
}
void P_and_C()
{
    int n,r;
    float NCR=0.0,NPR=0.0;
    printf("Enter the value of n:-\n");
    scanf("%d",&n);
    printf("Enter the value of r:-\n");
    scanf("%d",&r);
    if(r>n)
    {
        printf("PERMUTATIONS AND COMBINATIONS are INVALID to this input\n");
        f=fopen("History.txt","a+");
        fprintf(f,"\n");
        fprintf(f,"PERMUTATIONS AND COMBINATIONS are INVALID to this input\n");
        fprintf(f,"\n");
        fclose(f);

    }
    else
    {
        NCR=fact(n)/(fact(r)*fact(n-r));
        NPR=fact(n)/(fact(n-r));
        printf("The total COMBINATIONS %dC%d = %.1f\n",n,r,NCR);
        printf("The total PERMUTATIONS %dP%d = %.1f\n",n,r,NPR);
        f=fopen("History.txt","a+");
        fprintf(f,"\n");
        fprintf(f,"The total COMBINATIONS %dC%d = %.1f\n",n,r,NCR);
        fprintf(f,"The total PERMUTATIONS %dP%d = %.1f\n",n,r,NPR);
        fprintf(f,"\n");
        fclose(f);
    }
}