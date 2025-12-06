// Write a Program to classify a given number as Prime or Composite

// Same as C1 Q1-(b).c

#include<stdio.h>

int isprime(int n) {
    int c=0;
    for(int i=1; i<n+1; i++) {
        if(n%i==0)
            c++;
    }
    if(c==2)
        return 1;
    else
        return 0;
}

int main() {
    
    int number;
    printf("Enter number: ");
    scanf("%d",&number);
    if(number==0) {
      printf("0 is neither prime nor composite");
      return 0;
    }
    if(isprime(number)) {
        printf("\n%d is a prime number",number);
    }else{
        printf("\n%d is a composite number",number);
    }
    
    return 0;
}

/*
OUTPUT:
Enter number: 14
13 is a composite number
*/
