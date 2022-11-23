/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboonpro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 01:17:33 by pboonpro          #+#    #+#             */
/*   Updated: 2022/11/13 01:17:33 by pboonpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check(va_list args, const char a)
{
	int	len;

	len = 0;
	if (a == 'c')
		len += c(va_arg(args, int));
	else if (a == 'd' || a == 'i')
		len += d(va_arg(args, int));
	else if (a == 'p')
		len += p(va_arg(args, unsigned long long));
	else if (a == 'x')
		len += x(va_arg(args, unsigned int));
	else if (a == 'X')
		len += upperx(va_arg(args, unsigned int));
	else if (a == 's')
		len += s(va_arg(args, char *));
	else if (a == '%')
		len += c('%');
	else if (a == 'u')
		len += u(va_arg(args, unsigned int));
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			len += check(args, str[i + 1]);
			i++;
		}
		else
			len += c(str[i]);
		i++;
	}
	va_end(args);
	return (len);
}
