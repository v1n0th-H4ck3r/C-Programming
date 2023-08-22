#include <stdio.h>
int main(){
    const int x = 60;
    const float p = 3.14;
    // Once const variable is declared we can't change the value of it.
    // const int minutesPerHour;
    // minutesPerHour = 60; // error
    // We can't even assign value separately after creating the Const Variable.
    printf("%d\n", x);
    printf("%f\n", p);
    return 0;
}