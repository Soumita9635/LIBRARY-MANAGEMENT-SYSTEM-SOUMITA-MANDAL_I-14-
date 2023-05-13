// LIBRARY MANAGEMENT SYSTEM
#include<stdio.h>
#include<conio.h>

//BOOK STRUCTURE

typedef struct Book
{
	   char title[20];
	   char author[20];
	   int page;
	   float price;
	   
}Book;

Book *book; // GLOBAL BOOK TYPE POINTER

int count=0; //GLOBAL COUNT VARIABLE
int size; //GLOBAL VARIABLE FOR DYNAMIC MEMORY ALLOCATION

// FUNCTION TO ADD NEW BOOK


void addBook()
{
	system("cls");
	system("color 41");
	printf("\n******** ADD NEW BOOK DETAIL *********");
	printf("\nEnter Book Title : ");
	gets(book[count].title);
	printf("\nEnter Book Author : ");
	fflush(stdin);
	gets(book[count].author);
	printf("\nEnter Book Price : ");
	scanf("%f",&book[count].price);
	printf("\nEnter Book Page : ");
	scanf("%d",&book[count].page);
	count++;
}

//FUNCTION TO SHOW ALL BOOKS RECORD
void showAllBook()
{
	int i;
	system("cls");
	system("color 71");
	printf("\n\n\t\t\t@@@@@@@@@@@@@@@ BOOKS DETAILS @@@@@@@@@@@@@@@");
	printf("\n\n\t\t--------------------------------------------------------------------");
	printf("\n\t\tBOOK TITLE\t\tBOOK AUTHOR\t\tBOOK PRICE\t\tBOOK PAGE");
	printf("\n\n\t\t--------------------------------------------------------------------");
	for(i=0;i<count;i++)
	 {
		  printf("\n\t\t%s",book[i].title);
		  printf("\t\t\t%s",book[i].author);
		  printf("\t\t\t%f",book[i].price);
		  printf(" \t\t%d",book[i].page);
	 }
}

// FUNCTION TO SEARCH BOOK BY TITLE

void searchBook()
{
	 char btitle[10];
	 int i;
	 printf("\nEnter Book title To be Search : ");
	 gets(btitle);
	 for(i=0;i<count;i++)
	 {
	 	 if(stricmp(book[i].title,btitle)==0)
	 	 {
	 	 	 system("cls");
	 	 	 
	 	 	 printf("\n\n\t\t########## BOOK DETAILS ##########");
	 	 	 printf("\n\n\t\tBOOK TITLE :  %s",book[i].title);
	 	 	 printf("\n\t\tBOOK AUTHOR  :  %s",book[i].author);
	 	 	 printf("\n\t\tBOOK PRICE   :  %f",book[i].price);
	 	 	 printf("\n\t\tBOOK PAGE    :  %d\n",book[i].page);
				}
		}
}
//FUNCTION TO REMOVE BOOK BY TITLE
void removeBook()
{
	 char btitle[10];
	 int i,j;
	 Book *temp;
	 printf("\nEnter Book Title To be Remove : ");
	 gets(btitle);
	 for(i=0;i<count;i++)
	 {
	 	 if(stricmp(book[i].title,btitle)==0)
	 	 {
	 	 	 system("cls");
	 	 	 
	 	 	 printf("\n\n\t\t########## REMOVE BOOK DETAILS ##########");
	 	 	 printf("\n\n\t\tBOOK TITLE :  %s",book[i].title);
	 	 	 printf("\n\t\tBOOK AUTHOR  :  %s",book[i].author);
	 	 	 printf("\n\t\tBOOK PRICE   :  %f",book[i].price);
	 	 	 printf("\n\t\tBOOK PAGE    :  %d\n",book[i].page);
	 	 	 for(j=1;j<count-1;j++)
	 	 	   book=book+1;
	 	 	   count--;
	 	 	   return;
				}
		}
}
//FUNCTION TO UPDATE BOOK BY TITLE
void updateBook()
{
	char btitle[10];
	int i,j;
	Book *temp;
	printf("\nEnter Book title To be Remove : ");
	gets(btitle);
	for(i=0;i<count;i++)
	{
		if(stricmp(book[i].title,btitle)==0)
		{
			  system("cls");
			  
			   printf("\n\n\t\t########## BOOK DETAILS ##########");
	 	 	 printf("\n\n\t\tBOOK TITLE :  %s",book[i].title);
	 	 	 printf("\n\t\tBOOK AUTHOR  :  %s",book[i].author);
	 	 	 printf("\n\t\tBOOK PRICE   :  %f",book[i].price);
	 	 	 printf("\n\t\tBOOK PAGE    :  %d\n",book[i].page);
	 	 	 
	 	 	 printf("\n**************** ADD NEW BOOK DETAIL ******************");
	 	 	 printf("\nEnter Book Title : ");
     	gets(book[i].title);
	     printf("\nEnter Book Author : ");
	     fflush(stdin);
	     gets(book[i].author);
	     printf("\nEnter Book Price : ");
	     scanf("%f",&book[i].price);
	     printf("\nEnter Book Page : ");
	     scanf("%d",&book[i].page);
		}
	}
}
void main()
{
	  int choice;
	  printf("\nEnter Total No. of Books You Want to Add in Library:\n");
	  scanf("%d",&size);
	  
//CREATE BOOK ARRAY DYNAMIC USING SIZE INPUT BY USER

   book=(Book*)malloc(sizeof(Book)*size);
			do
			{
				 system("cls");
				 printf("\n1.Add Book\n2.Show All Books\n3.Search Book\n4.Update\n5.Remove\n");
				 scanf("%d",&choice);
				 fflush(stdin);
				 switch(choice)
				 {
				 	 case 1:
				 	 	  addBook();
				 	 	  break;
				 	 case 2:
							   showAllBook();
										break;
							case 3:
							   searchBook();
										break;
							case 4:
							   updateBook();
										break;
							case 5:
							   removeBook();
										break;
							case 6:
							    return;													  
					}
					 getch();
					 
					}while(1);	  
}
