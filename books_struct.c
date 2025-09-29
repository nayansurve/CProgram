#include<stdio.h>
struct Books{
     char title[50];
     char author[50];
     int book_id;
     int publish_year;
};
 int main()
 {
     struct Books b1,b2;
     printf("\n\t <<<<Book 1 Details>>>>");
      strcpy(b1.title," Mindset:The New Psychology of Success");
      printf("\n\nBook Title:%s",b1.title);
      strcpy(b1.author," Carol S.Dweck");
      printf("\n\nAuthor of the book:%s",b1.author);
      b1.book_id=12345;
      printf("\n\nBook Id:%d",b1.book_id);
      b1.publish_year=1989;
      printf("\n\nPublish year of the book:%d",b1.publish_year);


      printf("\n\n\t <<<<Book 2 Details>>>>");
      strcpy(b2.title," The Pragmatic Programmer");
      printf("\n\nBook Title:%s",b2.title);
      strcpy(b2.author," Andrew Hunt and David Thomas");
      printf("\n\nAuthor of the book:%s",b2.author);
      b2.book_id=67890;
      printf("\n\nBook Id:%d",b2.book_id);
      b2.publish_year=1999;
      printf("\n\nPublish year of the book:%d",b2.publish_year);

      return 0;

 }

