#include <stdio.h>
void printDude();
int main()
{
 
    printDude();

    return 0;
}

void printDude() {
    char x[35] = {'(','*','*','*',')', 'n',' ', ' ', '|', 'n', '|', '-', '-', '-', '|', 'n',' ', '|','|', '|',
    'n', ' ', ' ', '|', 'n',' ', ' ',  '|', 'n', '-', '|', ' ', '|', '-', '\0'};
    
    for(int count = 0; count < 35; count++){
        if(x[count] == 'n'){
            printf("\n");
        } else {
            printf("%c", x[count]);
        }
    }
    
    
}
