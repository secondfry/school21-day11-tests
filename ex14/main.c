/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadhesiv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 12:49:32 by oadhesiv          #+#    #+#             */
/*   Updated: 2019/02/13 19:16:27 by oadhesiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <string.h>

void	print_list(t_list **start);
void	ft_list_sort(t_list **begin_list, int (*cmp)());

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
	t_list	*elem_e;
	t_list	*elem_f;
	t_list	**void_void;
	char	c_a[] = "aa";
	char	c_b[] = "bb";
	char	c_c[] = "cc";
	char	c_d[] = "dd";
	char	c_e[] = "ee";
	char	c_f[] = "ff";

	elem_a = ft_create_elem(c_a);
	print_list(&elem_a);
	ft_list_sort(&elem_a, ft_list_cmp);
	print_list(&elem_a);

	elem_b = ft_create_elem(c_b);
	elem_b->next = elem_a;
	print_list(&elem_b);
	ft_list_sort(&elem_b, ft_list_cmp);
	print_list(&elem_b);
	
	elem_b = ft_create_elem(c_b);
	elem_c = ft_create_elem(c_c);
	elem_d = ft_create_elem(c_d);
	elem_e = ft_create_elem(c_e);
	elem_f = ft_create_elem(c_f);
	elem_a->next = elem_c;
	elem_c->next = elem_b;
	print_list(&elem_a);
	ft_list_sort(&elem_a, ft_list_cmp);
	print_list(&elem_a);
	elem_f->next = elem_e;
	elem_e->next = elem_d;
	print_list(&elem_f);
	ft_list_sort(&elem_f, ft_list_cmp);
	print_list(&elem_f);

	elem_a = ft_create_elem(c_a);
	elem_b = ft_create_elem(c_b);
	elem_c = ft_create_elem(c_c);
	elem_d = ft_create_elem(c_d);
	elem_e = ft_create_elem(c_e);
	elem_f = ft_create_elem(c_f);
	elem_f->next = elem_e;
	elem_e->next = elem_d;
	elem_d->next = elem_c;
	elem_c->next = elem_b;
	elem_b->next = elem_a;
	print_list(&elem_f);
	ft_list_sort(&elem_f, ft_list_cmp);
	print_list(&elem_f);

	void_void = (void*)0;
	print_list(void_void);
	ft_list_sort(void_void, ft_list_cmp);
	print_list(void_void);
}
