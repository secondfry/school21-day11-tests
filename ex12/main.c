/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadhesiv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 12:49:32 by oadhesiv          #+#    #+#             */
/*   Updated: 2019/02/13 21:57:49 by oadhesiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <string.h>

void	print_list(t_list **start);
void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());

int		main(void)
{
	t_list	*elem_a;
	t_list	*elem_b;
	t_list	*elem_c;
	t_list	*elem_d;
	t_list	*elem_e;
	t_list	*elem_f;
	t_list	**void_void;
	char	c_a[] = "aa";
	char	c_b[] = "bb";
	char	c_c[] = "aa";
	char	c_d[] = "cc";
	char	c_e[] = "dd";
	char	c_f[] = "aa";
	char	c_a_cmp[] = "aa";
	char	c_g_cmp[] = "gg";

	printf("data:\n");
	elem_a = ft_create_elem(c_a);
	elem_b = ft_create_elem(c_b);
	elem_c = ft_create_elem(c_c);
	elem_d = ft_create_elem(c_d);
	elem_e = ft_create_elem(c_e);
	elem_f = ft_create_elem(c_f);
	elem_a->next = elem_b;
	elem_b->next = elem_c;
	elem_c->next = elem_d;
	elem_d->next = elem_e;
	elem_e->next = elem_f;
	print_list(&elem_a);
	ft_list_remove_if(&elem_a, c_a_cmp, strcmp);
	ft_list_remove_if(&elem_a, c_g_cmp, strcmp);
	print_list(&elem_a);

	printf("void void:\n");
	void_void = (void*)0;
	ft_list_remove_if(void_void, c_a_cmp, strcmp);
	print_list(void_void);
}
