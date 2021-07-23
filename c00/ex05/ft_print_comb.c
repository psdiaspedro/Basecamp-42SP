#include <unistd.h>

void	ft_putchar(char c);
void	final_format(char a, char b, char c);

void	ft_print_comb(void)
{
	int	num1;
	int	num2;
	int	num3;

	num1 = 48;
	while (num1 <= 57)
	{
		num2 = num1 + 1;
		while (num2 <= 57)
		{
			num3 = num2 + 1;
			while (num3 <= 57)
			{
				final_format(num1, num2, num3);
				num3++;
			}
			num2++;
		}
		num1++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	final_format(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	if (a != 55 || b != 56 || c != 57)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}
