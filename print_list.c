#include <stdio.h>
#include "ft_list.h"

void	print_list(t_list **start)
{
	t_list *cur;

	printf("Printing list at %p\n", start);
	if (!start)
	{
		printf("void void list! It is overfucked!!!\n\n");
		return;
	}
	cur = *start;
	if (!cur)
	{
		printf("void list!\n\n");
		return;
	}
	while (cur)
	{
		printf("%p -> data: %s, %p -> next: %p\n", cur, (char*)cur->data, cur, cur -> next);
		cur = cur -> next;
	}
	printf("\n");
}