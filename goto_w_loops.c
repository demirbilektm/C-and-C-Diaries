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