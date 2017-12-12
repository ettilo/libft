/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhommee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 14:53:30 by edhommee          #+#    #+#             */
/*   Updated: 2017/10/12 14:57:51 by edhommee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <liblst.h>

void		ft_lstdelone(t_list **lst, void (*del)(void*))
{
	if (*lst)
	{
		del((*lst)->data);
		free(*lst);
		*lst = NULL;
	}
}
