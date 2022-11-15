/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboonpro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 01:20:50 by pboonpro          #+#    #+#             */
/*   Updated: 2022/11/13 01:20:50 by pboonpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	s(char *str)
{
	int	i;

	if (!str)
		return (s("(NULL)"));
	i = 0;
	while (str[i])
	{
		c(str[i]);
		i++;
	}
	return (i);
}

/*int	main()
{
	int	a;

	a = s(0);
	printf("\n%d\n", a);
	return (0);
}*/
