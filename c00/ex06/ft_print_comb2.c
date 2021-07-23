#include <unistd.h>

void	ft_putchar(char c);
void	print_digits(int num);
void	print_numbers(int x, int y);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_digits(int num)
{
	if (num <= 9)
	{
		ft_putchar('0');
		ft_putchar(num + '0');
	}
	else
	{
		ft_putchar(num / 10 + '0');
		ft_putchar(num % 10 + '0');
	}
}

void	print_numbers(int x, int y)
{
	print_digits(x);
	ft_putchar(' ');
	print_digits(y);
	if (x != 98 || y != 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 99)
	{
		b = a;
		while (b <= 99)
		{
			if (a != b)
			{
				print_numbers(a, b);
			}
			b++;
		}
		a++;
	}
}

