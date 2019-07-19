/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hschou <hschou@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 00:14:12 by hschou            #+#    #+#             */
/*   Updated: 2019/07/19 00:22:48 by hschou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb);

int		ft_str_is_numeric(char *str)
{
	int		i;
	short	numeric;

	i = 0;
	numeric = 1;
	while (str[i] != '\0')
	{
		if (('\0' < str[i] && str[i] < '0') || '9' < str[i])
		{
			numeric = 0;
			break ;
		}
		i++;
	}
	return (numeric);
}

int		main(void)
{
	char *str;

	ft_putnbr(ft_str_is_numeric(str));
	return (0);
}
