# include <stdio.h>
/**
 * main -prints the size of various types on the compute
 * Return: Eachpoint 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
       float f;

printf("Size of a char: %zu byte(s)\n", (unsigned long)Sizeof(a));
printf("Size of a int: %zu bytes(s)\n", (unsigned long)Sizeof(b));
printf("Size of a long int: %zu bytes(s)\n", (unsigned long)Sizeof(c));
printf("Size of a long long int: %zu bytes(s)\n", (unsigned long)Sizeof(d));
printf("Size of a float: %zu bytes(s)\n", (unsigned long)Sizeof(f));
return (0);
}
