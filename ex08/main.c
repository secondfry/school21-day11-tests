/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadhesiv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 12:49:32 by oadhesiv          #+#    #+#             */
/*   Updated: 2019/02/13 19:08:42 by oadhesiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void	print_list(t_list **start);
void	ft_list_reverse(t_list **begin_list);

int		main(void)
{
	t_list	*elem_a;
	t_list	*elem_b;
	t_list	*elem_c;
	t_list	**void_void;
	char	c_a[] = "a";
	char	c_b[] = "b";
	char	c_c[] = "c";

	printf("data:\n");
	elem_a = ft_create_elem(c_a);
	elem_b = ft_create_elem(c_b);
	elem_c = ft_create_elem(c_c);
	elem_a->next = elem_b;
	elem_b->next = elem_c;
	print_list(&elem_a);
	print_list(&elem_b);
	print_list(&elem_c);
	ft_list_reverse(&elem_a);
	print_list(&elem_a);
	print_list(&elem_b);
	print_list(&elem_c);

	printf("void void:\n");
	void_void = (void*)0;
	ft_list_reverse(void_void);
	print_list(void_void);
}
