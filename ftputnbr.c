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

	else if (p >= 10) // no lo se rick
	{
		ft_putchar((p = p / 10) + '0'); // el tema con esto es que no imprime numero mas de dos digitos
		ft_putchar((p = p % 10) + '0'); // al ser mas de dos digitos imprime por ejemplo 3235/10= 323 + '0' = que no tiene que ver con un numero en ASCII necesariameente
	} 


}

void put_negative(int n)
{
	if (n > -10 && n < 0)
	{
		ft_putchar('-');
		ft_putchar((n * (-1)) + '0');
	}
	
	else if (n <= -10) // same here du coup 
	{
		ft_putchar('-');
		ft_putchar(((n / 10) * -1) + '0');
		ft_putchar(((n % 10) * -1) + '0');
	}  
}

void ft_putnbr(int nbr)
{
	if (nbr >= 0)
	{
		put_positive(nbr);
	}

	else if(nbr < 0)
	{
		put_negative(nbr);
	}  

}


int main (void)
{
	ft_putnbr(8902);

	return 0;
} 
