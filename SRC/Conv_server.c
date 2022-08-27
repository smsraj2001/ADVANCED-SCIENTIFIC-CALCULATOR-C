#include"Conv_header.h"

int secondInput;
float first,second;
float weight,height,bmiIndex;
FILE *f;
void radians()
{
    printf("Choose the CONVERSION to be performed \n 1. Degrees to Radians \t 2. Radians to Degrees \n");
    scanf("%d",&secondInput);
    switch (secondInput)
    {
    case 1:
        printf("Enter the quantity in terms of FIRST unit \n");
        scanf("%f",&first);
        second = first * 0.01745;
        printf("%.3f Degrees is equal to %.3f Radians \n",first,second);
        f=fopen("History.txt","a+");
        fprintf(f,"%.3f Degrees is equal to %.3f Radians \n",first,second);
        fprintf(f,"\n");
        fclose(f);
        break;

    case 2:
        printf("Enter the quantity in terms of FIRST unit \n");
        scanf("%f",&first);
        second = first * 57.296;
        printf("%.3f Radians is equal to %.3f Degrees \n",first,second);
        f=fopen("History.txt","a+");
        fprintf(f,"%.3f Radians is equal to %.3f Degrees \n",first,second);
        fprintf(f,"\n");
        fclose(f);
        break;
    }
}
void length()
{
    printf("Choose the CONVERSION to be performed \n 1. Miles to Kms \t 2. Kms to Miles \t \n 3.Yards to Meter \t 4. Meter to Yards \t \n 5. Foot to Meter \t 6. Meter to Foot \t \n 7. Inches to Meter \t 8. Meter to Inches \t \n 9. Inches to Foot \t 10. Foot to Inches \t \n");
    scanf("%d",&secondInput);
    switch (secondInput)
    {
    case 1:
        printf("Enter the quantity in terms of FIRST unit \n");
        scanf("%f",&first);
        second = first * 1.609;
        printf("%.3f Miles is equal to %.3f Kms \n",first,second);
        f=fopen("History.txt","a+");
        fprintf(f,"%.3f Miles is equal to %.3f Kms \n",first,second);
        fprintf(f,"\n");
        fclose(f);
        break;
    case 2:
        printf("Enter the quantity in terms of FIRST unit \n");
        scanf("%f",&first);     
        second = first / 1.609;
        printf("%.3f Kms is equal to %.3f Miles \n",first,second);   
        f=fopen("History.txt","a+");
        fprintf(f,"%.3f Kms is equal to %.3f Miles \n",first,second);
        fprintf(f,"\n");
        fclose(f);
        break;
    case 3:
        printf("Enter the quantity in terms of FIRST unit \n");
        scanf("%f",&first);
        second = first / 1.094;
        printf("%.3f Yards is equal to %.3f Meters \n",first,second);
        f=fopen("History.txt","a+");
        fprintf(f,"%.3f Yards is equal to %.3f Meters \n",first,second);
        fprintf(f,"\n");
        fclose(f);
        break;
    case 4:
        printf("Enter the quantity in terms of FIRST unit \n");
        scanf("%f",&first);
        second = first * 1.094;
        printf("%.3f Meters is equal to %.3f Yards \n",first,second); 
        f=fopen("History.txt","a+");
        fprintf(f,"%.3f Meters is equal to %.3f Yards \n",first,second); 
        fprintf(f,"\n");
        fclose(f);
        break;
    case 5:
        printf("Enter the quantity in terms of FIRST unit \n");
        scanf("%f",&first);
        second = first / 3.281;
        printf("%.3f Foot is equal to %.3f Meters \n",first,second);   
        f=fopen("History.txt","a+");
        fprintf(f,"%.3f Foot is equal to %.3f Meters \n",first,second);   
        fprintf(f,"\n");
        fclose(f);
        break;
    case 6:
        printf("Enter the quantity in terms of FIRST unit \n");
        scanf("%f",&first);
        second = first * 3.281;
        printf("%.3f Meters is equal to %.3f Foot \n",first,second);   
        f=fopen("History.txt","a+");
        fprintf(f,"%.3f Meters is equal to %.3f Foot \n",first,second);
        fprintf(f,"\n");
        fclose(f);
        break;
    case 7:
        printf("Enter the quantity in terms of FIRST unit \n");
        scanf("%f",&first);
        second = first / 39.37;
        printf("%.3f Inches is equal to %.3f Meters \n",first,second); 
        f=fopen("History.txt","a+");
        fprintf(f,"%.3f Inches is equal to %.3f Meters \n",first,second);
        fprintf(f,"\n");
        fclose(f);
        break;
    case 8:
        printf("Enter the quantity in terms of FIRST unit \n");
        scanf("%f",&first);
        second = first * 39.37;
        printf("%.3f Meters is equal to %.3f Inches \n",first,second);   
        f=fopen("History.txt","a+");
        fprintf(f,"%.3f Meters is equal to %.3f Inches \n",first,second);
        fprintf(f,"\n");
        fclose(f);
        break;
    case 9:
        printf("Enter the quantity in terms of FIRST unit \n");
        scanf("%f",&first);
        second = first / 12;
        printf("%.3f Inches is equal to %.3f Foot \n",first,second);   
        f=fopen("History.txt","a+");
        fprintf(f,"%.3f Inches is equal to %.3f Foot \n",first,second);
        fprintf(f,"\n");
        fclose(f);
        break;
    case 10:
        printf("Enter the quantity in terms of FIRST unit \n");
        scanf("%f",&first);
        second = first * 12;
        printf("%.3f Foot is equal to %.3f Inches \n",first,second);
        f=fopen("History.txt","a+");
        fprintf(f,"%.3f Foot is equal to %.3f Inches \n",first,second);
        fprintf(f,"\n");
        fclose(f);
        break;
    
    
    }
}
void mass()
{
    printf("Choose the CONVERSION to be performed \n 1. Kg to Tonne \t 2. Tonne to Kg \t \n 3. Stone to Grams \t 4. Grams to Stone \t \n 5. Pound to Grams \t 6. Grams to Pound \t \n 7. Ounce to Grams \t 8. Grams to Ounce \t \n");
    scanf("%d",&secondInput);
    switch (secondInput)
    {
    case 1:
        printf("Enter the quantity in terms of FIRST unit \n");
        scanf("%.3f",&first);
        second = first/1000;
        printf("%.3f Kg is equal to %.3f Tonne \n",first,second);
        f=fopen("History.txt","a+");
        fprintf(f,"%.3f Kg is equal to %.3f Tonne \n",first,second);
        fprintf(f,"\n");
        fclose(f);
        break;
    case 2:
        printf("Enter the quantity in terms of FIRST unit \n");
        scanf("%f",&first);
        second = first*1000;
        printf("%.3f Tonne is equal to %.3f Kg \n",first,second);
        f=fopen("History.txt","a+");
        fprintf(f,"%.3f Tonne is equal to %.3f Kg \n",first,second);
        fprintf(f,"\n");
        fclose(f);
        break;
    case 3:
        printf("Enter the quantity in terms of FIRST unit \n");
        scanf("%f",&first);
        second = first*6350;
        printf("%.3f Stone is equal to %.3f Grams \n",first,second);
        f=fopen("History.txt","a+");
        fprintf(f,"%.3f Stone is equal to %.3f Grams \n",first,second);
        fprintf(f,"\n");
        fclose(f);
        break;
    case 4:
        printf("Enter the quantity in terms of FIRST unit \n");
        scanf("%f",&first);
        second = first / 6350;
        printf("%.3f Grams is equal to %.3f Stone \n",first,second);
        f=fopen("History.txt","a+");
        fprintf(f,"%.3f Grams is equal to %.3f Stone \n",first,second);
        fprintf(f,"\n");
        fclose(f);
        break;
    case 5:
        printf("Enter the quantity in terms of FIRST unit \n");
        scanf("%f",&first);
        second = first *454;
        printf("%.3f Pounds is equal to %.3f Grams \n",first,second);
        f=fopen("History.txt","a+");
        fprintf(f,"%.3f Pounds is equal to %.3f Grams \n",first,second);
        fprintf(f,"\n");
        fclose(f);
        break;
    case 6:
        printf("Enter the quantity in terms of FIRST unit \n");
        scanf("%f",&first);
        second = first / 454;
        printf("%.3f Grams is equal to %.3f Pounds \n",first,second);
        f=fopen("History.txt","a+");
        fprintf(f,"%.3f Grams is equal to %.3f Pounds \n",first,second);
        fprintf(f,"\n");
        fclose(f);
        break;
    case 7:
        printf("Enter the quantity in terms of FIRST unit \n");
        scanf("%f",&first);
        second = first * 28.35;
        printf("%.3f Ounces is equal to %.3f Grams \n",first,second);
        f=fopen("History.txt","a+");
        fprintf(f,"%.3f Ounces is equal to %.3f Grams \n",first,second);
        fprintf(f,"\n");
        fclose(f);
        break;
    case 8:
        printf("Enter the quantity in terms of FIRST unit \n");
        scanf("%f",&first);
        second = first / 28.35;
        printf("%.3f Grams is equal to %.3f Ounces \n",first,second);
        f=fopen("History.txt","a+");
        fprintf(f,"%.3f Grams is equal to %.3f Ounces \n",first,second);
        fprintf(f,"\n");
        fclose(f);
        break;
    }
}
void temperature()
{
    printf("Choose the CONVERSION to be performed \n1. Celsius to Fahrenheit 2. Fahrenheit to Celsius \t \n3. Kelvin to Celsius \t 4. Celsius to Kelvin \t\n5. Farenheit to Kelvin \t 6.Kelvin to Farenheit \t \n");
    scanf("%d",&secondInput);
    switch (secondInput)
    {
    case 1:
        printf("Enter the quantity in terms of FIRST unit \n");
        scanf("%f",&first);
        second = (first * 1.8)+32;
        printf("%.3f Celsius is equal to %.3f Fahrenheit \n",first,second);
        f=fopen("History.txt","a+");
        fprintf(f,"%.3f Celsius is equal to %.3f Fahrenheit \n",first,second);
        fprintf(f,"\n");
        fclose(f);
        break;
    case 2:
        printf("Enter the quantity in terms of FIRST unit \n");
        scanf("%f",&first);
        second = (first - 32) * 0.5555;
        printf("%.3f Fahrenheit is equal to %.3f Celsius \n",first,second);
        f=fopen("History.txt","a+");
        fprintf(f,"%.3f Fahrenheit is equal to %.3f Celsius \n",first,second);
        fprintf(f,"\n");
        fclose(f);
        break;
    case 3:
        printf("Enter the quantity in terms of FIRST unit \n");
        scanf("%f",&first);
        second = first - 273.15;
        printf("%.3f Kelvin is equal to %.3f Celsius \n",first,second);
        f=fopen("History.txt","a+");
        fprintf(f,"%.3f Kelvin is equal to %.3f Celsius \n",first,second);
        fprintf(f,"\n");
        fclose(f);
        break;
    case 4:
        printf("Enter the quantity in terms of FIRST unit \n");
        scanf("%f",&first);
        second = first + 273.15 ;
        printf("%.3f Celsius is equal to %.3f Kelvin \n",first,second);
        f=fopen("History.txt","a+");
        fprintf(f,"%.3f Celsius is equal to %.3f Kelvin \n",first,second);
        fprintf(f,"\n");
        fclose(f);
        break;
    case 5:
        printf("Enter the quantity in terms of FIRST unit \n");
        scanf("%f",&first);
        second = (first - 32) * 0.55555 + 273.15 ;
        printf("%.3f Fahrenheit is equal to %.3f Kelvin \n",first,second);
        f=fopen("History.txt","a+");
        fprintf(f,"%.3f Fahrenheit is equal to %.3f Kelvin \n",first,second);
        fprintf(f,"\n");
        fclose(f);
        break;
    case 6:
        printf("Enter the quantity in terms of FIRST unit \n");
        scanf("%f",&first);
        second = (first - 273.15) * 1.8 + 32 ;
        printf("%.3f Kelvin is equal to %.3f Fahrenheit \n",first,second);
        f=fopen("History.txt","a+");
        fprintf(f,"%.3f Kelvin is equal to %.3f Fahrenheit \n",first,second);
        fprintf(f,"\n");
        fclose(f);
        break;
    }
}