#include <stdio.h>

int main() {
  int x = 5;
  int y = 6;
  int sum = x + y;
  //method 1
  printf("%d\n", sum);
  
  //method 2
  printf("%d\n", x + y);

  // we can give same value tooo
  x = y = 50;
  printf("%d\n", x + y);

  //Real Life Example

  // Student data
  int studentID = 15;
  int studentAge = 23;
  float studentFee = 75.25;
  char studentGrade = 'B';

  // Print variables
  printf("Student id: %d\n", studentID);
  printf("Student age: %d\n", studentAge);
  printf("Student fee: %f\n", studentFee);
  printf("Student grade: %c", studentGrade);
  return 0;
}