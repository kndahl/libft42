/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdahl <kdahl@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 21:37:46 by kdahl             #+#    #+#             */
/*   Updated: 2020/05/11 00:10:28 by kdahl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int x;
	int sum;
	int minusorplus;
	int counter;

	sum = 0;
	minusorplus = 1;
	counter = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t' ||
		*str == '\v' || *str == '\f' || *str == '\r')
		str++;
	if (*str == '-')
		minusorplus = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		x = *str++ - 48;
		sum = sum * 10 + x;
		counter++;
	}
	if (counter >= 19)
		return (minusorplus == -1 ? 0 : -1);
	return (sum * minusorplus);
}
