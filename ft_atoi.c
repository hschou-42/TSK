/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hschou <hschou@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 17:08:50 by hschou            #+#    #+#             */
/*   Updated: 2019/07/16 22:58:23 by hschou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int n;
	int sign;

	i = 0;
	n = 0;
	sign = 1;
	while (str[i] != '\0')
	{
		if (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' ||
			str[i] == '\f' || str[i] == '\r' ||
			str[i] == ' ' || str[i] == '+')
			;
		else if (sign == 1 && str[i] == '-')
			sign = -1;
		else if ('0' <= str[i] && str[i] <= '9')
			n = 10 * n + str[i] - '0';
		else
			break ;
		i++;
	}
	return (n * sign);
}
