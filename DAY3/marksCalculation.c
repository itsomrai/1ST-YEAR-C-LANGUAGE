#include <stdio.h>
int main()
{
float eng;
float maths;
float CS;
printf("Enter The marks");
scanf("%f %f %f",&eng,&maths,&CS);
float total=eng+maths+CS;
float avg=total/3;
printf("The total Marks =%f",total);
printf("\n80The avg Marks =%f",avg);
return 0;
}