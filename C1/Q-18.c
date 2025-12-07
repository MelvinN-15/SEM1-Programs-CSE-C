// Define a structure called book with book name, author name and price. Write a C program t o read the details obook

#include <stdio.h>

struct book {
    char name[50];
    char author[50];
    float price;
};

int main() {
    
  int n;
  printf("Enter number of books to read: ");
  scanf("%d",&n);
  
  struct book bk[n];
  
  for(int i=0; i<n; i++) {
      printf("Enter details for Book %d\n",i+1);
      printf("Enter name: ");
      scanf(" %[^\n]",&bk[i].name);
      printf("Enter author name: ");
      scanf(" %[^\n]",&bk[i].author);
      printf("Enter price: ");
      scanf("%f",&bk[i].price);
      printf("---------------------------\n");
  }
  
  int t;
  printf("Enter book number to display: ");
  scanf("%d",&t);
  
  printf("Details for Book %d",t);
  
  printf("\nEnter name: %s",bk[t-1].name);
  
  printf("\nEnter author name: %s",bk[t-1].author);
  
  printf("\nEnter price: %.2f",bk[t-1].price);
  
  printf("\n---------------------------\n");
}

/*
OUTPUT:
Enter number of books to read: 2
Enter details for Book 1
Enter name: b1
Enter author name: a1
Enter price: 100
---------------------------
Enter details for Book 2
Enter name: b2
Enter author name: a2
Enter price: 200
---------------------------
Enter book number to display: 2
Details for Book 2
Enter name: b2
Enter author name: a2
Enter price: 200.00
---------------------------

*/
