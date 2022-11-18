/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   upperx.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboonpro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 19:09:11 by pboonpro          #+#    #+#             */
/*   Updated: 2022/11/17 19:09:11 by pboonpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	numlen(int num)
{
	int	i;

	if (num == 0)
		return (1);
	i = 0;
	while (num > 0)
	{
		num /= 16;
		i++;
	}
	return (i);
}

int	upperx(int n)
{
	int	len;

	len = numlen(n);
	if (n > 15)
	{
		upperx(n / 16);
		n = n % 16;
	}
	if (n <= 9)
		c(n + 48);
	if (n >= 10 && n <= 15)
	{
		n = n % 10;
		c(n + 65);
	}
	return (len);
}

/*int	main()
{
	int	a;
	int	b;

	a = upperx(16);
	printf("\n%d\n", a);
	b = printf("%X", 16);
	printf("\n%d\n",b);
	return (0);
}*/
