/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hschou <hschou@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 20:05:16 by hschou            #+#    #+#             */
/*   Updated: 2019/07/23 21:45:44 by hschou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// NOT FINISHED YET

void	ft_putchar(char c);

short	error(char *base)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (1);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] < 32 || 126 < base[i])
			return (1);
		i++;
	}
	i -= 1;
	j = i - 1;
	while (i > 0)
	{
		while (j > -1)
		{
			if (base[i] == base[j])
				return (1);
			j--;
		}
		i--;
		j = i - 1;
	}
	return (0);
}

char	*base_trnsfr(char *base)
{
	int		i;
	char	*arr;

	i = 0;
	while (base[i] != '\0')
	{
		arr[i] = base[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (error == 1)
		return ;



//	if (nb == -2147483648)
//	{
//		ft_putstr("-2147483648");
//		return ;
//	}
	if (nb < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (0 <= nbr && nbr < 10)
		ft_putchar('0' + nbr);
	else
	{
		ft_putnbr(nbr / 10);
		ft_putchar('0' + nbr % 10);
	}
}
