/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainfuck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hschou <hschou@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 04:36:07 by hschou            #+#    #+#             */
/*   Updated: 2019/07/31 05:23:10 by hschou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	brainfuck(char	*str)
{
	char	*ptr;

	ptr = (char*)malloc(sizeof(*ptr) * (4096 + 1));
	while (*str)
	{
		if (*str == '>')
			ptr++;
		else if (*str == '<')
			ptr--;
		else if (*str == '+')
			(*ptr)++;
		else if (*str == '-')
			(*ptr)--;
		else if (*str == '.')
			write(1, ptr, 1);
		else if (*str == '[' && !(*ptr))
		{
			while (*str != ']')
				str++;
		}
		else if (*str == ']' && *ptr)
		{
			while (*str != '[')
				str--;
		}
		str++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		brainfuck(argv[1]);
	return (0);
}
