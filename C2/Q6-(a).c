// Create an enum for Days (Mon–Sun). Take a number from user and print the corresponding day name

#include <stdio.h>

int main() {
    
    enum Days {MON=1,TUE,WED,THU,FRI,SAT,SUN};
    char* days[] = {"MONDAY","TUESDAY","WEDNESDAY","THURSDAY","FRIDAY","SATURDAY","SUNDAY"};
    
    int n;
    printf("Enter a day number: ");
    scanf("%d",&n);
    
    
    if(n>=MON && n<=SUN)
        printf("The corresponding day is %s",days[n-1]);
    else
        printf("Invaild day number. Try again later");
    
    
}

/*
OUTPUT:
Enter a day number: 2
The corresponding day is TUESDAY
*/
