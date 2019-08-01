/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlist.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hschou <hschou@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 19:29:13 by hschou            #+#    #+#             */
/*   Updated: 2019/08/01 14:41:04 by hschou           ###   ########.fr       */
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
