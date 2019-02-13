/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadhesiv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 12:49:32 by oadhesiv          #+#    #+#             */
/*   Updated: 2019/02/12 22:50:02 by oadhesiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <string.h>

void	print_list(t_list **start);
t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)());

int		main(void)
{
	t_list	*elem_a;
	t_list	*elem_b;
	t_list	*elem_c;
	t_list	*found;
	char	c_a[] = "aa";
	char	c_b[] = "bb";
	char	c_c[] = "cc";
	char	c_a_cmp[] = "bb";

	elem_a = ft_create_elem(c_a);
	elem_b = ft_create_elem(c_b);
	elem_c = ft_create_elem(c_c);
	elem_a->next = elem_b;
	elem_b->next = elem_c;
	print_list(&elem_a);
	found = ft_list_find(elem_a, c_a_cmp, strcmp);
	print_list(&found);
}
