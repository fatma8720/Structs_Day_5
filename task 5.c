#include <stdio.h>
//definition of the first struct for each course on it there are its Credit Hours and Student Score 
struct Course_structure {
	int Credit_Hours  ;
	float Student_Score ;
};
//definition of the second struct for student has Array of Courses and GPA
struct Student_structure {
	struct Course_structure Array_of_Courses [10];
	float GPA;
};
//function declaration that calculate the GPA of the student and print the output
void Calcu_GPA (struct Student_structure student){
    int sum_credit=0;
	float sum_GPA=0; 
    for (int i=0;i<=1;i++){
      sum_GPA+=(student.Array_of_Courses[i].Credit_Hours*student.Array_of_Courses[i].Student_Score);
	  sum_credit+=student.Array_of_Courses[i].Credit_Hours;
	  }
	  student.GPA=sum_GPA/sum_credit;
	printf("Your GPA is %f",student.GPA);
}


int main() {
     //creation of struct student 
     struct Student_structure student ;
     //make him enrolled in two courses with 3 hours for math and 4 for programming
     student.Array_of_Courses[0].Credit_Hours =3;
     student.Array_of_Courses[1].Credit_Hours=4; 
     //Take from the student his score in both
    printf("Enter your score of in math (out of 4) \n");
   	scanf("%f", &student.Array_of_Courses[0].Student_Score);
   	printf("Enter your score of Programming (out of 4) \n");
   	scanf("%f", &student.Array_of_Courses[1].Student_Score);
   	//call function that calculate GPA
   	Calcu_GPA(student);
   	
   }
