/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hschou <hschou@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 11:28:11 by hschou            #+#    #+#             */
/*   Updated: 2019/07/20 11:50:55 by hschou           ###   ########.fr       */
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

int				main(void)
{
	char	dest[] = "There ";
	char	src[] = "is a tree. Tree is good.";
	unsigned int	size;

	size = 31;
	printf("%d\n", ft_strlcat(dest, src, size));
	printf("%s\n", dest);
	return (0);
}
/*
strlcat() appends string src to the end of dst.
It will append at most dstsize - strlen(dst) - 1 characters.
It will then NUL-terminate, unless dstsize is 0 or the original dst string
was longer than dstsize (in practice this should not happen
as it means that either dstsize is incorrect or that dst is not a proper string).

strlcat() return the total length of the string they tried to create.
For strlcat() that means the initial length of dst plus the length of src.
*/
