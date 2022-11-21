/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   d.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboonpro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 20:46:48 by pboonpro          #+#    #+#             */
/*   Updated: 2022/11/13 20:46:48 by pboonpro         ###   ########.fr       */
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
		i++;
		num /= 10;
	}
	return (i);
}

int	d(int num)
{
	int	len;

	len = 0;
	if (num == -2147483648)
	{
		len += s("-2");
		num = 147483648;
	}
	if (num < 0)
	{
		len += c('-');
		num = -num;
	}
	len += numlen(num);
	if (num > 9)
	{
		d(num / 10);
		num = num % 10;
	}
	if (num <= 9)
		c(num + 48);
	return (len);
}

/*int	main()
{
	int	a;

	a = d(2147483647);
	printf("\n%d\n", a);
	return (0);
}*/
