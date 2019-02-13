/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadhesiv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 12:49:32 by oadhesiv          #+#    #+#             */
/*   Updated: 2019/02/13 19:05:06 by oadhesiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void	print_list(t_list **start);
void	ft_list_push_front(t_list **begin_list, void *data);

int		main(void)
{
	t_list	*first;
	t_list	*second;
	t_list	**void_void;
	char	c_a[] = "a";
	char	c_b[] = "b";

	printf("first (empty list):\n");
	first = (void*)0;
	ft_list_push_front(&first, c_a);
	print_list(&first);

	printf("second (list with elem):\n");
	second = ft_create_elem(c_a);
	ft_list_push_front(&second, c_b);
	print_list(&second);

	printf("third (fully void):\n");
	void_void = (void*)0;
	ft_list_push_front(void_void, c_a);
	print_list(void_void);
}
