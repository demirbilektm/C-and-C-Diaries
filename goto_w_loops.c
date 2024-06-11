//The following example exits an inner loop in one move with goto.
#include <stdio.h>
int main(void)
{
	int ch;
	for (int i = 0; i < 10; ++i) {
		for (int k = 0; k < 10; ++k) {
			printf("(%d,%d)\n", i, k);
			printf("press q to exit:");
			ch = getchar();
			if (ch == 'q') //press q to exit the loop or press any character to continue
				goto EXIT;
			if (ch != '\n')
				while (getchar() != '\n')
					;
		}
	}
EXIT:
	return 0;
}

/*
	The goto statement is generally not recommended because it can make the code difficult to read and maintain.
	Here, however, it is used to exit the loop quickly. In this type of usage, expressions like break or return
	may be preferred to make the exit from loops more readable.
*/

/*
#include <stdio.h>

int main(void) {
    int ch;
    for (int i = 0; i < 10; ++i) { // outer loop
        for (int k = 0; k < 10; ++k) { // Inner loop
            printf("(%d,%d)\n", i, k); // (i,k) 
            printf("press q to exit:");
            ch = getchar();
            if (ch == 'q') 
                return 0; // terminate the program
            if (ch != '\n') // If the character is not a newline
                while (getchar() != '\n') // Clean the buffer
                    ;
        }
    }
    return 0;
}
*/
