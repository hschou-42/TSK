/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hschou <hschou@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 23:58:12 by hschou            #+#    #+#             */
/*   Updated: 2019/07/19 00:11:53 by hschou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb);

int		ft_str_is_alpha(char *str)
{
	int		i;
	short	alpha;

	i = 0;
	alpha = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || ('Z' < str[i] && str[i] < 'a') || 'z' < str[i])
		{
			alpha = 0;
			break ;
		}
		i++;
	}
	return (alpha);
}

int		main(void)
{
	char str[] = "ThereIsNoSuchThingAsTree";

	ft_putnbr(ft_str_is_alpha(str));
	return (0);
}
