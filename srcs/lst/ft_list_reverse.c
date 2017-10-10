/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhommee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/10 15:16:34 by edhommee          #+#    #+#             */
/*   Updated: 2017/10/10 17:20:19 by edhommee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		ft_list_reverse(t_list **begin_list)
{
	int			size;
	int			i;

	i = 1;
	size = ft_list_size(*begin_list) + 1;
	while (i <= size / 2)
	{
		ft_swap_star(&(ft_list_at(*begin_list, i)->data),
				&(ft_list_at(*begin_list, size - i)->data));
		i++;
	}
}
