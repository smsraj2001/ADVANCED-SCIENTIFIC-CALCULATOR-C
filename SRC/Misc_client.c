#include"Misc_header.h"
#define KEY "Enter the CALCULATOR OPERATION you want to do:-\n"

int main()
{
    //system("cls");
    FILE *f;
    printf("\n--------------------------------------------------------------------------------------\n");
    printf("---------------------------WELCOME TO MISCELLANEOUS CALCULATOR---------------------------- \n");
    printf("---------------------------------------------------------------------------------------\n");
        f=fopen("History.txt","a+");
        fprintf(f,"\n--------------------------------------------------------------------------------------\n");
        fprintf(f,"---------------------------WELCOME TO MISCELLANEOUS CALCULATOR---------------------------- \n");
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
                    printf("%s\n", KEY);
                    Calc_oprn=getche();
                    switch(Calc_oprn)
                    {
                        case '1': 
                        printf("``````````````````````````````````````````\n");
                        BMI();
                        printf("``````````````````````````````````````````\n");
                        break;
 
                        case '2':
                        printf("``````````````````````````````````````````\n");
                        quadratic();
                        printf("``````````````````````````````````````````\n");
                        break;
 
                        case '3': 
                        printf("``````````````````````````````````````````\n");
                        Complex();
                        printf("``````````````````````````````````````````\n");
                        break;
 
                        case '4': 
                        printf("``````````````````````````````````````````\n");
                        G_L();
                        printf("``````````````````````````````````````````\n");
                        break;
 
                        case 'h':
                        calculator_operations();
                        break;

                        case 'H':
                        calculator_operations();
                        break;

                        case 'c':
                        system("cls");
                        break;

                        case 'C':
                        system("cls");
                        break;

                        case 'Q':
                        X=0;
                        break;

                        case 'q':
                        X=0;
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
                printf("THANKS FOR VISITING THE MISCELLANEOUS CALCULATOR!!!VISIT AGAIN!!!\n");
                printf("``````````````````````````````````````````````````````````````\n");
                    f=fopen("History.txt","a+");
                    fprintf(f,"``````````````````````````````````````````````````````````````\n");
                    fprintf(f,"THANKS FOR VISITING THE MISCELLANEOUS CALCULATOR!!!VISIT AGAIN!!!\n");
                    fprintf(f,"``````````````````````````````````````````````````````````````\n");
                    fclose(f);
                Y=0;
		sleep(1.5);
            break;
            default:
            printf("Wrong choice...Please give the correct option!!!\n");
            break;
        }
    }
    return 0;
}