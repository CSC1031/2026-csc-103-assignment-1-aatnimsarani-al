#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m1,m2,m3;
    int total;
    float average;
    char grade;


    printf("Enter your mathematics mark:");
    scanf("%d",&m1);

    printf("Enter your Science mark:");
    scanf("%d",&m2);

    printf("Enter your English mark:");
    scanf("%d",&m3);

    total = m1+m2+m3;

    average = total /3.0;

    if (80<= average){
        grade='A';
    }
    else if (70 <= average ){
        grade='B';
    }
    else if (60 <= average ){
        grade='C';
    }
    else if (50 <= average ){
        grade='D';
    }
    else{
        grade='F';
    }

     printf("--------------------\n");
     printf("     RESULTS        \n");
     printf("--------------------\n");
     printf("Total: %d\n",total);
     printf("Average: %.2f\n",average);
     printf("Grade: %c",grade);
     printf("\n");
     if (m1>=40 & m2>=40 & m3>=40){
        printf("Result:PASS");
    }
    else{
        printf("Result:FAIL");
    }
    return 0;
}
