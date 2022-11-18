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

//#include "libftprintf.h"
#include <stdio.h>
#include <unistd.h>

int c(int a)
{
	write(1, &a, 1);
	return (1);
}

int	numlen(unsigned long num)
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

int	p(void *ptr)
{
	int	len;
	unsigned long *n;

	*n = (unsigned long)ptr;
	len = numlen((int)*n);
	if (*n > 15)
	{
		p((unsigned long)(*n / 16));
		*n = *n % 16;
	}
	if (*n <= 9)
		c(*n + 48);
	if (*n >= 10 && *n <= 15)
	{
		*n = *n % 10;
		c(*n + 65);
	}
	return (len);
}

int	main()
{
	int	a;
	int	b;
	int *c;

	a = p(&c);
	printf("\n%d\n", a);
	b = printf("%p", c);
	printf("\n%d\n",b);
	return (0);
}
