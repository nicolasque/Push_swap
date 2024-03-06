/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 19:04:14 by nquecedo          #+#    #+#             */
/*   Updated: 2024/03/06 19:42:43 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_init_stakt(t_stak **a ,char **argv)
{
    int	i;
    t_stak	*temp;
	t_stak	*last;

    i = 0;
    last = NULL;
    while (argv[i])
    {
        temp = malloc(sizeof(t_stak));
        if (temp == NULL) // Check if malloc failed
            return -1;
        temp->value = atoi(argv[i]); // Assuming the values are integers
		// ft_printf("Node value: %i\n", temp->value);
        temp->next = NULL;
        temp->prev = last; // Set the previous node
        if (last != NULL) // If this is not the first node
            last->next = temp;
        else
            *a = temp; // If this is the first node, set the head of the list
        last = temp;
        i++;
    }
    return 0; // Return 0 on success
}

int	main(int argc, char **argv)
{
	t_stak	*a;
	int		i;

	if (argc < 2)
		return (0);
	if (argc == 2)
		argv = ft_split(argv[1], ' ');
	else
		argv++;
	a = (t_stak *)malloc(sizeof(t_stak) * 1);
	if (ft_init_stakt(&a, argv) == -1)
		return(ft_free_list(a), -1);
	// printf("nnnnnnn");
	i = 0;
	while (a)
	{

		// ft_printf("Node next value: %i\n", a->next->value);
		
		// ft_printf("Node value: %s\n", argv[i]);
		ft_printf("Node value: %i\n", a->value);
		if (!a->next)
			break;
		a = a->next;
		
		i ++;
	}
	
	ft_printf("Cambop de orden\n");
	while (a)
	{
	ft_printf("Node value: %i\n", a->value);
		// ft_printf("Node value: %s\n", argv[i]);
		a = a->prev;
		i ++;
	}
	
	
}