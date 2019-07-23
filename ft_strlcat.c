/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hschou <hschou@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 11:28:11 by hschou            #+#    #+#             */
/*   Updated: 2019/07/22 20:54:57 by hschou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	i;
	int	j;
	int	op;

	i = 0;
	j = 0;
	op = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
		j++;
	op = i + j;
	j = 0;
	while (src[j] != '\0' && j < size - i - 1)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (op);
}
