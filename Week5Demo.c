#include <stdio.h>
int main(){
    int i = 0;

    // while loop to print numbers from 1 to 10: 
    while (i <= 10) {
        printf("%d\n", i);
        i++; // increment i by 1
    }

    for (int i = 1; i <= 10; i += 1){
        if (i == 3){
            continue;// skip when i is 3(skips that iteration)
        }
        printf("%d\n", i);
    }

    return 0;
}
