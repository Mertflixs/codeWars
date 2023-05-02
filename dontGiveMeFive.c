#include <stdbool.h>

bool	kont(int i)
{
	int	tmp;

	tmp = 0;
	if (i > 0)
	{
		while (i > 0)
		{
			tmp = i % 10;
			if (tmp == 5)
				return (false);
			i /= 10;
		}
	}
	else
	{
		i *= -1;
		while (i > 0)
		{
			tmp = i % 10;
			if (tmp == 5)
				return (false);
			i /= 10;
		}
	}
	return (true);
}

int dontGiveMeFive(int start, int end)
{
	int	i;

	i = 0;
	
	while (start <= end)
	{
    if (kont(start))
			i++;
		start++;
	}
	return (i);
}