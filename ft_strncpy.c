/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hschou <hschou@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 23:34:39 by hschou            #+#    #+#             */
/*   Updated: 2019/07/16 17:07:44 by hschou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	short int		end;

	i = 0;
	end = 0;
	while (i < n)
	{
		if (src[i] != '\0' && end == 0)
		{
			dest[i] = src[i];
		}
		else if (src[i] == '\0')
		{
			dest[i] = '\0';
			end = 1;
		}
		else if (end == 1)
		{
			dest[i] = '\0';
		}
		i++;
	}
	return (dest);
}
