/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadhesiv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 12:49:32 by oadhesiv          #+#    #+#             */
/*   Updated: 2019/02/13 19:12:12 by oadhesiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <string.h>

void	print_list(t_list **start);
void	ft_list_merge(t_list **begin_list1, t_list *begin_list2);

int		main(void)
{
	t_list	*elem_a;
	t_list	*elem_b;
	t_list	*elem_c;
	t_list	*elem_d;
	t_list	*elem_e;
	t_list	*elem_f;
	t_list	*elem_void_a;
	t_list	*elem_void_b;
	t_list	**void_void;
	char	c_a[] = "aa";
	char	c_b[] = "bb";
	char	c_c[] = "cc";
	char	c_d[] = "dd";
	char	c_e[] = "ee";
	char	c_f[] = "ff";

	elem_a = ft_create_elem(c_a);
	elem_b = ft_create_elem(c_b);
	elem_c = ft_create_elem(c_c);
	elem_d = ft_create_elem(c_d);
	elem_e = ft_create_elem(c_e);
	elem_f = ft_create_elem(c_f);
	elem_void_a = (void*)0;
	elem_void_b = (void*)0;
	elem_a->next = elem_b;
	elem_b->next = elem_c;
	elem_d->next = elem_e;
	elem_e->next = elem_f;
	printf("First is void\n");
	print_list(&elem_void_a);
	print_list(&elem_a);
	ft_list_merge(&elem_void_a, elem_a);
	print_list(&elem_void_a);

	printf("Second is void\n");
	print_list(&elem_a);
	print_list(&elem_void_b);
	ft_list_merge(&elem_a, elem_void_b);
	print_list(&elem_a);

	printf("Neither is void\n");
	print_list(&elem_a);
	print_list(&elem_d);
	ft_list_merge(&elem_a, elem_d);
	print_list(&elem_a);

	printf("First is void void\n");
	void_void = (void*)0;
	ft_list_merge(void_void, elem_a);
	print_list(void_void);
}
