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
t_list	*ft_list_last(t_list *begin_list);

int		main(void)
{
	t_list	*elem;
	t_list	*last;
	char	c_a[] = "a";
	char	c_b[] = "b";

	elem = (void*)0;
	print_list(&elem);
	last = ft_list_last(elem);
	print_list(&last);

	elem = ft_create_elem(c_a);
	print_list(&elem);
	last = ft_list_last(elem);
	print_list(&last);
	
	elem -> next = ft_create_elem(c_b);
	print_list(&elem);
	last = ft_list_last(elem);
	print_list(&last);
}
