/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadhesiv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 12:49:32 by oadhesiv          #+#    #+#             */
/*   Updated: 2019/02/13 19:20:34 by oadhesiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	print_list(t_list **start);
t_list	*ft_create_elem(void *data);

int		main(void)
{
	t_list	*elem;
	char	c_a[] = "a";
	char	c_b[] = "b";

	elem = ft_create_elem(c_a);
	elem -> next = ft_create_elem(c_b);
	print_list(&elem);
}
