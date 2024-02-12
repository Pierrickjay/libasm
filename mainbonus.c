#include "include/libasm.h"

int main()
{
	int data = 42;

	t_list first;
	t_list second;
	t_list third;
	first.data = &data;
	second.data = &data;
	third.data = &data;
	first.next = &second;
	second.next = &third;
	third.next = NULL;

	printf("List size : %d\n", ft_list_size(&first));

	t_list head;
	head.next = &first;
	// ft_list_push_front(&head, &data);
	printf("size of the list after adding an element %d\n", ft_list_size(&head));

    return (0);
}
