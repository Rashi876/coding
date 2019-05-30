#include<stdio.h>
struct book{
	char title[10],author[10],genre[10];
}b;
void display()
{
	printf("you just entered %s, %s,%s",b.title,b.author,b.genre);
}

main()
{   printf("Enter book title: ");
    gets(b.title);
    printf("Enter the author's name: ");
    gets(b.author);
    printf("Enter the genre: ");
    gets(b.genre);
	display();
}
