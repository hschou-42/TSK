/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hschou <hschou@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 23:21:19 by hschou            #+#    #+#             */
/*   Updated: 2019/07/24 17:35:01 by hschou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

struct					s_list
{
	struct s_list		*next;
	void				*data;
};

typedef struct s_list	t_list;

t_list					*ft_create_elem(void *data);

#endif
