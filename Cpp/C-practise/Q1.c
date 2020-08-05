
#include<stdio.h>


typedef struct
{
  char rollno[15];
  int marks[5];
  char grades[5];
  float sgpa[5];
  float gpa;
  char name[15];

}stu;

stu Student[66];

void addstudent();
void ViewStudent(stu);
void viewstudent();
void editstudent();
void AddStudent();

int fill_max = 0;

int main()
{
  char choice = 'y';
  int option = 0;
  while(choice=='y'||choice=='Y')
  {
    printf("Student Academic Database");
    printf("\n\nChoose desired operation: ");
    printf("\n1. Add student record");
    printf("\n2. View student record");
    printf("\n3. Edit student record");


    printf("\n\nEnter choice: ");
    scanf("%d",&option);

    switch(option)
    {
      case 1: addstudent();
      case 2: viewstudent();
      case 3: editstudent();
    }
  }
  return 0;
}


void addstudent()
{

    fill_max++;
        AddStudent(Student[fill_max]);
}

void ViewStudent(stu Student)
{
  printf("Student name: %s\n",Student.name);
  printf("Student roll number: %s\n",Student.rollno);
  printf("Student Grades: ");
  for(int i=0;i<5;i++)
  {
    printf("Subject %d: %c\n",i,Student.grades[i]);
  }

  printf("Student CGPA: %d\n",Student.gpa);
}

void viewstudent()
{
  int input = 0;
  printf("Enter student roll number: \n");
  scanf("%d",&input);

  if((input>fill_max)||(input<0))
  printf("Error, number does not exist\n");

  else
  {
    ViewStudent(Student[input]);
  }
}

void editstudent()
{
  int rollno=0;
  printf("Enter roll number to edit: ");
  scanf("%d",&rollno);

  if((rollno<fill_max)||(rollno>0))
  AddStudent(Student[rollno]);
}

void AddStudent(stu Student)
{
      printf("Enter student name: ");

      scanf("%s",Student.name);
      printf("Enter student roll number: ");
      scanf("%s",Student.rollno);
      printf("Enter marks out of 100: ");
      for(int i=0;i<5;i++)
      {
        Student.gpa = 0;
        char gr;
        printf("Enter %dth mark: ",i+1);
        scanf("%d",&Student.marks[i]);
        int cur_mark = Student.marks[i];

          if((cur_mark>90)||(cur_mark<100)) gr = 'O';
          if((cur_mark>90)||(cur_mark<100)) gr = 'A+';
          if((cur_mark>90)||(cur_mark<100)) gr = 'A';
          if((cur_mark>90)||(cur_mark<100)) gr = 'B+';
          if((cur_mark>90)||(cur_mark<100)) gr = 'B';
          if((cur_mark>90)||(cur_mark<100)) gr = 'C';
          Student.sgpa[i] = cur_mark/100;
          if((cur_mark>90)||(cur_mark<100)) gr = 'P';
          if((cur_mark>90)||(cur_mark<100)) gr = 'F';
          Student.grades[i] = gr;
          Student.gpa+=Student.sgpa[i];
        }

ViewStudent(Student);

}
