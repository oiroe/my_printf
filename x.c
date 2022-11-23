/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   x.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboonpro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 18:53:14 by pboonpro          #+#    #+#             */
/*   Updated: 2022/11/17 18:53:14 by pboonpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	xlen(unsigned int num)
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

int	x(unsigned int n)
{
	int	len;

	len = xlen(n);
	if (n > 15)
	{
		x(n / 16);
		n = n % 16;
	}
	if (n <= 9)
		c(n + 48);
	if (n >= 10 && n <= 15)
	{
		n = n % 10;
		c(n + 97);
	}
	return (len);
}

/*int	main()
{
	int	a;
	int	b;

	a = x(16);
	printf("\n%d\n", a);
	b = printf("%x", 16);
	printf("\n%d\n",b);
	return (0);
}*/
