/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hschou <hschou@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 10:56:01 by hschou            #+#    #+#             */
/*   Updated: 2019/07/24 19:23:39 by hschou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*list;
	t_list	*tail;

	list = *begin_list;
	tail = ft_create_elem(data);
	while (list->next)
		list = list->next;
	list->next = tail;
	*begin_list = list;
}
