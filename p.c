/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboonpro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 23:51:00 by pboonpro          #+#    #+#             */
/*   Updated: 2022/11/17 23:51:00 by pboonpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	plen(unsigned long long num)
{
	int	i;

	if (num == 0)
		return (1);
	i = 0;
	while (num > 0)
	{
		i++;
		num /= 16;
	}
	return (i);
}

void	putp(unsigned long long n)
{
	if (n > 15)
	{
		putp(n / 16);
		n = n % 16;
	}
	if (n <= 9)
		c(n + 48);
	if (n >= 10 && n <= 15)
	{
		n = n % 10;
		c(n + 97);
	}
}

int	p(unsigned long long n)
{
	int	len;

	len = 0;
	len += s("0x");
	len += plen(n);
	putp(n);
	return (len);
}

/*int	main()
{
	int	a;
	int	b;
	int *c;

	a = p(&c);
	printf("\n%d\n", a);
	b = printf("%p", c);
	printf("\n%d\n",b);
	return (0);
}*/
