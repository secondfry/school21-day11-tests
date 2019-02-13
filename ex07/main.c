/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadhesiv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 12:49:32 by oadhesiv          #+#    #+#             */
/*   Updated: 2019/02/12 12:49:33 by oadhesiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void	print_list(t_list **start);
t_list	*ft_list_at(t_list *begin_list, unsigned int nbr);

int		main(void)
{
	t_list	*elem_a;
	t_list	*elem_b;
	t_list	*elem_c;
	t_list	*elem_d;
	t_list	*found;
	char	c_a[] = "a";
	char	c_b[] = "b";
	char	c_c[] = "c";

	elem_a = ft_create_elem(c_a);
	elem_b = ft_create_elem(c_b);
	elem_c = ft_create_elem(c_c);
	elem_a->next = elem_b;
	elem_b->next = elem_c;
	print_list(&elem_a);
	found = ft_list_at(elem_a, 0);
	print_list(&found);
	found = ft_list_at(elem_a, 1);
	print_list(&found);
	found = ft_list_at(elem_a, 2);
	print_list(&found);
	found = ft_list_at(elem_a, 3);
	print_list(&found);
	found = ft_list_at(elem_a, 4);
	print_list(&found);

	elem_d = (void*)0;
	found = ft_list_at(elem_d, 4);
	print_list(&found);
}
