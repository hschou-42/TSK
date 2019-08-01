/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hschou <hschou@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 13:56:28 by hschou            #+#    #+#             */
/*   Updated: 2019/08/01 14:34:44 by hschou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_base(int n, unsigned int bs)
{
	char base[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz!?";

	if (bs < 2 || 64 < bs)
	{
		write(1, "base out of range", 17);
		return ;
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	if (bs <= n)
		ft_putnbr_base(n / bs, bs);
	write(1, &base[n % bs], 1);
}
