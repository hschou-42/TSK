/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hschou <hschou@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 17:08:50 by hschou            #+#    #+#             */
/*   Updated: 2019/07/18 21:25:55 by hschou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int sign;
	int n;

	sign = 1;
	n = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n' ||
			*str == '\v' || *str == '\f' || *str == '\r')
		str++;
	if (*str == '-')
	{
		sign = -1;
		str += 1;
	}
	if (*str == '+')
		str += 1;
	while ('0' <= *str && *str <= '9')
	{
		n = 10 * n + *str - '0';
		str++;
	}
	return (sign * n);
}
