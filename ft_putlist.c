/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlist.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hschou <hschou@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 19:29:13 by hschou            #+#    #+#             */
/*   Updated: 2019/07/24 20:26:57 by hschou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putlist(t_list *list)
{
	t_list	*copy;

	copy = list;
	while (copy->next != NULL)
	{
		printf("%s\n", copy->data);
		copy = copy->next;
	}
	printf("%s\n", copy->data);
}

int		main(void)
{
	t_list	*hschou;
	char	pi[] = "3.1415926535\0";
	char	e[] = "2.7182818284\0";

	hschou = ft_create_elem(pi);
	ft_putlist(hschou);
	return (0);
}
