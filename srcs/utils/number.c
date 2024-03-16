/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:32:08 by csakamot          #+#    #+#             */
/*   Updated: 2024/02/05 16:06:44 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int	round_number(double number)
{
	int		result;
	double	surplus;

	result = 0;
	surplus = result % 1;
	if (surplus < 0.5)
		return ((int)(number / 1));
	else
		return ((int)(number / 1 + 1));
}

double	my_abs(double number)
{
	if (number < 0)
		return (-1 * number);
	return (number);
}

double	get_radian(int angle)
{
	double	radian;

	radian = ((double)angle / 360) * (2 * M_PI);
	return (radian);
}
