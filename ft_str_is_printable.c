/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hschou <hschou@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 00:49:52 by hschou            #+#    #+#             */
/*   Updated: 2019/07/19 00:59:58 by hschou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb);

int		ft_str_is_printable(char *str)
{
	int		i;
	short	prtb;

	i = 0;
	prtb = 1;
	while (str[i] != '\0')
	{
		if (('\0' <= str[i] && str[i] <= 32) || 126 <= str[i])
		{
			prtb = 0;
			break ;
		}
		i++;
	}
	return (prtb);
}

int		main(void)
{
	char *str;

	ft_putnbr(ft_str_is_printable(str));
	return (0);
}
