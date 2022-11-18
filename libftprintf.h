/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboonpro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 20:43:56 by pboonpro          #+#    #+#             */
/*   Updated: 2022/11/13 20:43:56 by pboonpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
#define LIBFTPRINTF_H

#include <unistd.h>

int	c(int a)
int	s(char *str);
int	u(unsigned int num);
int	upperx(int n);
int	x(int n);
int	d(int num);

#endif
