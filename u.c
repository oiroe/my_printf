/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboonpro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 18:22:50 by pboonpro          #+#    #+#             */
/*   Updated: 2022/11/15 18:22:50 by pboonpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ulen(unsigned int num)
{
	int	i;

	if (num == 0)
		return (1);
	i = 0;
	while (num > 0)
	{
		i++;
		num /= 10;
	}
	return (i);
}

int	u(unsigned int num)
{
	int	len;

	len = ulen(num);
	if (num > 9)
	{
		u(num / 10);
		num = num % 10;
	}
	if (num <= 9)
		c(num + 48);
	return (len);
}

/*int	main()
{
	int	a;
	int	b = 425654;
	int	c;

	a = u(b);
	printf("\n%d\n", a);
	c = printf("%i", b);
	printf("\n%d\n", c);
	return (0);
}*/
