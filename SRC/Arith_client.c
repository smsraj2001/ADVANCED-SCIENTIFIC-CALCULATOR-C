#include"Arith_header.h"
#define KEY "Enter the CALCULATOR OPERATION you want to do:-\n"

int main()
{
    //system("cls");
    FILE *f;
    printf("\n--------------------------------------------------------------------------------------\n");
    printf("---------------------------WELCOME TO ARITHMETIC CALCULATOR---------------------------- \n");
    printf("---------------------------------------------------------------------------------------\n");
        f=fopen("History.txt","a+");
        fprintf(f,"\n--------------------------------------------------------------------------------------\n");
        fprintf(f,"---------------------------WELCOME TO ARITHMETIC CALCULATOR---------------------------- \n");
        fprintf(f,"---------------------------------------------------------------------------------------\n");
        fclose(f);
    int ch=0;
    int X=1,Y=1;
    char Calc_oprn;
    menu();

    while(Y!=0)
    {
        Y=1;
        printf("\nEnter your CHOICE (MENU!):-\nENTER (2) to DISPLAY the MENU:-\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: 
                calculator_operations();
                break;
            case 2:
                menu();
                break;
            case 3:
                X=1;
                while(X!=0)
                {
                    X=1;
                    printf("Enter 'H' for CALCULATOR OPERATIONS AVAILABLE...\n");
                    printf("%s", KEY);
                    Calc_oprn=getche();
                    switch(Calc_oprn)
                    {
                        case '+': 
                        printf("``````````````````````````````````````````\n");
                        addition();
                        printf("``````````````````````````````````````````\n");
                        break;
 
                        case '-':
                        printf("``````````````````````````````````````````\n");
                        subtraction();
                        printf("``````````````````````````````````````````\n");
                        break;
 
                        case '*': 
                        printf("``````````````````````````````````````````\n");
                        multiplication();
                        printf("``````````````````````````````````````````\n");
                        break;
 
                        case '/': 
                        printf("``````````````````````````````````````````\n");
                        division();
                        printf("``````````````````````````````````````````\n");
                        break;
 
                        case '#': 
                        printf("``````````````````````````````````````````\n");
                        modulus();
                        printf("``````````````````````````````````````````\n");
                        break;
 
                        case '^': 
                        printf("``````````````````````````````````````````\n");
                        power();
                        printf("``````````````````````````````````````````\n");
                        break;

                        case '!': 
                        printf("``````````````````````````````````````````\n");
                        factorial();
                        printf("``````````````````````````````````````````\n");
                        break;

                        case '|': 
                        printf("``````````````````````````````````````````\n");
                        absolute();
                        printf("``````````````````````````````````````````\n");
                        break;

                        case ':': 
                        printf("``````````````````````````````````````````\n");
                        ratio();
                        printf("``````````````````````````````````````````\n");
                        break;
 
                        case '%': 
                        printf("``````````````````````````````````````````\n");
                        percent();
                        printf("``````````````````````````````````````````\n");
                        break;

                        case 'I':
                        printf("``````````````````````````````````````````\n");
                        INV();
                        printf("``````````````````````````````````````````\n");
                        break;
                        case 'i': 
                        printf("``````````````````````````````````````````\n");
                        INV();
                        printf("``````````````````````````````````````````\n");
                        break;

                        case '$': 
                        printf("``````````````````````````````````````````\n");
                        fflush(stdin);
                        expre();
                        fflush(stdin);
                        printf("``````````````````````````````````````````\n");
                        break;

                        case '~': 
                        printf("``````````````````````````````````````````\n");
                        root();
                        printf("``````````````````````````````````````````\n");
                        break;

                        case 'H':
                        printf("``````````````````````````````````````````\n");
                        calculator_operations();
                        printf("``````````````````````````````````````````\n");
                        break;
                        case 'h': 
                        printf("``````````````````````````````````````````\n");
                        calculator_operations();
                        printf("``````````````````````````````````````````\n");
                        break;
 
                        case 'Q': X=0;
                        break;
                        case 'q': X=0;
                        break;

                        case 'c': system("cls");
                        break;
                        case 'C': system("cls");
                        break;

                        default :
                        printf("\n******UNAVAILABLE OPTION******\n");
                        printf("***ENTER the RIGHT OPTION***:-\n");
                        //calculator_operations();
                        break;
                        
                    }
                }
            break;
            case 4: 
                system("cls");
            break;
            case 5: 
                printf("``````````````````````````````````````````````````````````````\n");
                printf("THANKS FOR VISITING THE ARITHMETIC CALCULATOR!!!VISIT AGAIN!!!\n");
                printf("``````````````````````````````````````````````````````````````\n");
                    f=fopen("History.txt","a+");
                    fprintf(f,"``````````````````````````````````````````````````````````````\n");
                    fprintf(f,"THANKS FOR VISITING THE ARITHMETIC CALCULATOR!!!VISIT AGAIN!!!\n");
                    fprintf(f,"``````````````````````````````````````````````````````````````\n");
                    fclose(f);
		sleep(1.5);
                Y=0;
            break;
            default:
            printf("Wrong choice...Please give the correct option!!!\n");
            break;
        }
    }
    return 0;
}