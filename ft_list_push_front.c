/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hschou <hschou@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 14:45:04 by hschou            #+#    #+#             */
/*   Updated: 2019/07/24 19:31:16 by hschou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*list;
	t_list	*head;

	head = ft_create_elem(data);
	list = *begin_list;
	head->data = data;
	head->next = list;
	*begin_list = head;
}
