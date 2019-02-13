/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadhesiv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 12:49:32 by oadhesiv          #+#    #+#             */
/*   Updated: 2019/02/13 19:22:18 by oadhesiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void	print_list(t_list **start);
void	ft_list_clear(t_list **begin_list);

int		main(void)
{
	t_list	*elem_a;
	t_list	*elem_b;
	t_list	*elem_c;
	t_list	*elem_d;
	char	c_a[] = "a";
	char	c_b[] = "b";
	char	c_c[] = "c";

	elem_d = (void*)0;
	print_list(&elem_d);
	ft_list_clear(&elem_d);
	print_list(&elem_d);

	elem_a = ft_create_elem(c_a);
	elem_b = ft_create_elem(c_b);
	elem_c = ft_create_elem(c_c);
	elem_a->next = elem_b;
	elem_b->next = elem_c;
	print_list(&elem_a);
	print_list(&elem_b);
	print_list(&elem_c);
	ft_list_clear(&elem_a);
	print_list(&elem_a);
	printf("----- SHOULD SEGMENTATION FAULT ON NEXT PRINT ----\n");
	print_list(&elem_b);
	printf("----- ERROR THIS SHOULD NEVER BE ON SCREEN ----\n");
	print_list(&elem_c);
	printf("----- ERROR THIS SHOULD NEVER BE ON SCREEN ----\n");
}
