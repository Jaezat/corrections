#include <unistd.h> 


void ft_putchar(char a)
{
	write(1, &a, 1);
}


void put_positive(int p)
{
	
	if (p >= 0 && p < 10)
	{	
		ft_putchar(p + '0');
	}

	else if (p > 10)
	{
		ft_putchar(p / 10);
		ft_putchar(p % 10);		
	} 


}

/*void put_negative(int n)

	if (n > -10 && n < 0)
	{
		ft_putchar('-');
		ft_putchar(n * (-1));
	}
	
	else if (n < -10)
	{
		ft_putchat('-');
		ft_putchar((n / 10) * -1);
		ft_putchar((n % 10) * -1);
	}  */


void ft_putnbr(int nbr)
{
	if (nbr > 0)
	{
		put_positive(nbr);
	}

/*	else if(nbr < 0)
	{
		put_negative(nbr);
	}  */

}


int main (void)
{
	ft_putnbr(8);

	return 0;
} 
