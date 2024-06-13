/*
In C, there is a feature called “fall through” in the switch statement. 
After the flow is transferred to a case section, if there is no break at 
the end of that case section, it continues to flow downwards.
When the first break is seen, the switch is exited.

*/

#include <stdio.h>
int main(void)
{
	int val;
	printf("Please enter a value: ");
	scanf("%d", &val);
	switch (val) {
	case 1:
		printf("one\n"); // fallthrough
	case 2:
		printf("two\n");
		break;
	case 3:
		printf("three\n"); // fallthrough
	case 4:
		printf("four\n");
		break;
	case 5:
		printf("five\n");
		break;
	default:printf("six\n");
		break;
	}
	return 0;
}


/*
If you want to do the same thing for different case values
The most practical method is as follows:

case 1:
case 2:
...
break;

There is no more practical way. Here, if the switch statement is 1, 
the same code as 2 will be executed anyway due to fallthrouh. 
In the following example the command line implementation is done 
with the swithc statement.

*/

/*

#include <stdio.h>

int get_command(void)
{
int ch;
while ((ch = getchar()) == ' ' || ch == '\t')
;
if (ch != '\n')
while (getchar() != '\n')
;
return ch;
}

int main(void)
{

int ch;
	for (;;)
	{

	printf("TMD>");
	ch = get_command();
	if (ch == '\n')
	continue;if (ch == 'q')
	break;

	switch (ch) 
		{
	case 'e':
	case 'r':
	printf("remove command executes...\n");
	break;
	case 'c':
	printf("copy command executes...\n");
	break;
	case 'd':
	printf("dir command executes...\n");
	break;
	case 'm':
	printf("move command executes...\n");
	break;
	default:
	printf("invalid command: %c\n", ch);
	break;
		}
	}
	return 0;
}
*/

/*
In switch statements, when case sections are too long
breaks readability. For this reason, if long operations
are to be performed in case sections, functions that perform 
those operations should be defined and these functions should 
be called in case sections.
*/

/*
void erase_command(void)
{
	printf("erase command executes...\n");
}
void copy_command(void)
{
	printf("copy command executes...\n");
}
void dir_command(void)
{
	printf("dir command executes...\n");
}
void move_command(void)
{
	printf("move command executes...\n");
}


switch (ch
	{
case 'e':
case 'r':
	erase_command();
	break;
case 'c':
	copy_command();
	break;
case 'd':
	dir_command();
	break;
case 'm':
	move_command();
	break;
default:
	printf("invalid command: %c\n", ch);
	break;
	}
*/
