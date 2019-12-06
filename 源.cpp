#include<stdio.h>
#include<string.h>
void fun(char s[],char c)
{
	int i, len;
	len = strlen(s);
	s[2 * len - 1] = '\0';
	for (i = len-1; i >0; i--)
	{
		s[2 * i] = s[i];
		s[2 * i - 1] = c;
	}
}
int main()
{
	char s[80];
	char c;
	gets_s(s);
	c = getchar();
	fun(s, c);
	puts(s);
	return 0;

}