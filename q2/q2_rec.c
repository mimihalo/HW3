#include "q2_iter.h"

char smallest_character(char str[], char c)
{
	char tmp;
	if(str[0]!='\0')
	{
		if(str[0]>c)
			return str[0];
		else
		{
			tmp=smallest_character(str+1,c);
			if(tmp<=c)
				return str[0];
			else
				return tmp;
		}
	}
	return 0;
}

