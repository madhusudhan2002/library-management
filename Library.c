#include <stdio.h>
struct library{
    char book_name[100];
    char author_name[100];
    int book_id;
    int return_period;
};
struct student_data{
  char student_name[100];
  char student_rollno[100];
  int year_of_study;
  char book[100];
};
int main() {
    char choice_book[100];
    struct library book1={"The lion","madhu",23,15};
    struct library book2={"The tiger","ravi",2,12};
    struct library book3={"the horror","mahendra",3,55};
    struct library book4={"The victory","Madhusudhanreddy",4,56};
    struct student_data student;
    printf("enter your name: \n");
    scanf("%s",student.student_name);
    printf("enter your roll number: \n");
    scanf("%s",student.student_rollno);
    printf("enter the year of studying: \n");
    scanf("%d",&student.year_of_study);
    printf("--PICK ONE OF THE BELOW BOOKS ,ONLY THESE BOOKS ARE AVAILABLE---\n");
    printf("1) %s \n   2) %s \n  3)  %s \n  4) %s \n ",book1.book_name,book2.book_name,book3.book_name,book4.book_name);
    printf("enter your choice: \n");
    scanf("%s",choice_book);
    if(choice_book=="Atomic habits"){
        printf("You have choosen the Atomic habits\n name :%s \n roll no : %s \n year of study :%d \n Book chosen : Atomic habits\n author name :%s \n  return period :%d\n book id : %d \n",student.student_name,student.student_rollno,student.year_of_study,book1.author_name,book1.return_period, book1.book_id);
    }
    else if (choice_book=="no way home"){
       printf("You have choosen the no way home \n name : %s \n roll no : %s \n year of study :%d \n Book chosen : no way home \n author name :%s \n  return period : %d \n book id : %d \n",student.student_name,student.student_rollno,student.year_of_study,book2.author_name,book2.return_period, book2.book_id);
    }else if (choice_book=="the influence"){
          printf("You have choosen the The influencer \n name : %s \n roll no : %s \n year of study :%d \n Book chosen : The influencer \n author name :%s \n  return period : %d \n book id : %d \n",student.student_name,student.student_rollno,student.year_of_study,book3.author_name,book3.return_period, book3.book_id);
    }else{
          printf("You have choosen the excellent work \n name : %s \n roll no : %s \n year of study :%d \n Book chosen : The work \n author name :%s \n  return period : %d \n book id : %d \n",student.student_name,student.student_rollno,student.year_of_study,book4.author_name,book4.return_period, book4.book_id);
    }
    return 0;
}
