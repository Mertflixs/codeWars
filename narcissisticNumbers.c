#include <stdbool.h>

bool is_narcissistic(long long unsigned x)
{
	long long unsigned	toplam;
	long long unsigned	t_toplam;
	long long unsigned	i;
	long long unsigned	i_tt;
	long long unsigned	temp;
	long long unsigned	tt;

	temp = x;
	i = 0;
	while (x > 0)
	{
		i++;
		x /= 10;
	}
	x = temp;
	toplam = 0;
	t_toplam = 1;
	while (x > 0)
	{
		tt = x % 10;
		i_tt = i;
		t_toplam = 1;
		while (i_tt > 0)
		{
			t_toplam *= tt;
			i_tt--;
		}
		toplam += t_toplam;
		x /= 10;
	}
	x = temp;
	if (x == toplam)
		return (true);
	else
		return (false);
}