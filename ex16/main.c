/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadhesiv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 12:49:32 by oadhesiv          #+#    #+#             */
/*   Updated: 2019/02/13 19:20:43 by oadhesiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <string.h>

void	print_list(t_list **start);
void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)());

int		ft_list_cmp(t_list *a, t_list *b)
{
	return (strcmp(a->data, b->data));
}

int		main(void)
{
	t_list	*elem_a;
	t_list	*elem_b;
	t_list	*elem_c;
	t_list	*elem_d;
	t_list	*elem_void;
	t_list	**void_void;
	char	c_a[] = "a";
	char	c_b[] = "b";
	char	c_c[] = "c";
	char	c_d[] = "d";

	elem_a = ft_create_elem(c_a);
	elem_c = ft_create_elem(c_c);
	elem_d = ft_create_elem(c_d);
	elem_a->next = elem_c;
	elem_c->next = elem_d;
	print_list(&elem_a);
	ft_sorted_list_insert(&elem_a, c_b, ft_list_cmp);
	print_list(&elem_a);

	elem_void = (void*)0;
	print_list(&elem_void);
	ft_sorted_list_insert(&elem_void, c_b, ft_list_cmp);
	print_list(&elem_void);

	elem_a = ft_create_elem(c_a);
	print_list(&elem_a);
	ft_sorted_list_insert(&elem_a, c_b, ft_list_cmp);
	print_list(&elem_a);

	elem_c = ft_create_elem(c_c);
	print_list(&elem_c);
	ft_sorted_list_insert(&elem_c, c_b, ft_list_cmp);
	print_list(&elem_c);

	elem_a = ft_create_elem(c_a);
	elem_b = ft_create_elem(c_b);
	elem_c = ft_create_elem(c_c);
	elem_a->next = elem_b;
	elem_b->next = elem_c;
	print_list(&elem_a);
	ft_sorted_list_insert(&elem_a, c_d, ft_list_cmp);
	print_list(&elem_a);

	void_void = (void*)0;
	ft_sorted_list_insert(&elem_a, c_d, ft_list_cmp);
	print_list(void_void);
}
