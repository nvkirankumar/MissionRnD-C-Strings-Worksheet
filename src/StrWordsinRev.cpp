/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include <Stdio.h>
#include <string.h>

void rev(char *str, int beg, int end)
{

	int i;
	char t;
	for (i = 0; beg <= end; i++)
	{
		t = str[beg];
		str[beg] = str[end];
		str[end] = t;
		beg++;
		end--;
	}
}
void str_words_in_rev(char *input, int len){
	int i, j;
	rev(input, 0, len - 1);
	for (i = 0, j = 0; i<len; i++)
	{
		if (input[i] == 32 || input[i] == ' ')
		{
			rev(input, j, i - 1);
			j = i + 1;
		}
	}
	rev(input, j, len - 1);
}