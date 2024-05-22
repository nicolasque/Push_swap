/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:24:16 by nquecedo          #+#    #+#             */
/*   Updated: 2024/05/22 12:08:53 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "push_swap.h"

int	ft_init_stack(int argc, char **argv, t_stak *a)
{
	int i;

	if (!a)
		return (-1);
	i = 1;
	a->prev = NULL;
	while (i < argc)
	{
		a->value = atol(argv[i]);
		// a->li_pos = i;
		if (i < argc - 1)
		{
			a->next = (t_stak *)malloc(1 * sizeof(t_stak));
			if (!a->next || ft_check_max_min_int(a->value))
				return (ft_free_stack(a) ,-1);
			a->next->prev = a;
			a = a->next;
		}
		i++;
	}
	a->next = NULL;
	return (0);
}

void	ft_print_stack(t_stak *a)
{
	if (a == NULL)
		return ;
	while (a)
	{
		printf("%i\n", a->value);
		a = a->next;
	}
}

void	ft_print_revese(t_stak *a)
{
	a = ft_get_last_node(a);
	while (a)
	{
		printf("El valor es: %i\n", a->value);
		a = a->prev;
	}
}

int main(int argc, char **argv)
{
	t_stak  *a;
	t_stak  *b;

	if (ft_check_args(argc, argv))
		return (ft_printf("Error\n"), -1);
	a = (t_stak *)malloc(1 * sizeof(t_stak));
	b = NULL;
	if (ft_init_stack(argc, argv, a))
		return (-1);
	if (!ft_is_order(a))
		return (ft_free_stack(a), 0); //If the stak is ordered you do nothing and return 0
	
	//  printf("Init a and b:\n");
	// ft_printf("Stack A\n");
    // ft_print_stack(a);
	// ft_printf("======\n");
	// ft_printf("Stack B\n");
    // ft_print_stack(b);

    // ft_sa(&a);
    // printf("Exec sa:\n");
	// ft_printf("Stack A\n");
    // ft_print_stack(a);
	// ft_printf("======\n");
	// ft_printf("Stack B\n");
    // ft_print_stack(b);

    // ft_pb(&a, &b);
    // ft_pb(&a, &b);
    // ft_pb(&a, &b);
    // printf("Exec pb pb pb:\n");
	// ft_printf("Stack A\n");
    // ft_print_stack(a);
	// ft_printf("======\n");
	// ft_printf("Stack B\n");
    // ft_print_stack(b);

    // ft_ra(&a);
    // ft_rb(&b);
    // printf("Exec ra rb (equiv. to rr):\n");
	// ft_printf("Stack A\n");
    // ft_print_stack(a);
	// ft_printf("======\n");
	// ft_printf("Stack B\n");
    // ft_print_stack(b);

    // ft_rra(&a);
    // ft_rrb(&b);
    // printf("Exec rra rrb (equiv. to rrr):\n");
	// ft_printf("Stack A\n");
    // ft_print_stack(a);
	// ft_printf("======\n");
	// ft_printf("Stack B\n");
    // ft_print_stack(b);

    // ft_sa(&a);
    // printf("Exec sa:\n");
	// ft_printf("Stack A\n");
    // ft_print_stack(a);
	// ft_printf("======\n");
	// ft_printf("Stack B\n");
    // ft_print_stack(b);

    // ft_pa(&a, &b);
    // ft_pa(&a, &b);
    // ft_pa(&a, &b);
    // printf("Exec pa pa pa:\n");
	// ft_printf("Stack A\n");
    // ft_print_stack(a);
	// ft_printf("======\n");
	// ft_printf("Stack B\n");
    // ft_print_stack(b);


// Move all to b
// Move all elements to b
ft_pb(&a, &b);  // b: 5
ft_pb(&a, &b);  // b: 3 5
ft_pb(&a, &b);  // b: 8 3 5
ft_pb(&a, &b);  // b: 1 8 3 5
ft_pb(&a, &b);  // b: 9 1 8 3 5

// Move the smallest element to a first
ft_pa(&a, &b); // Move 9 back to a
ft_pa(&a, &b); // Move 1 back to a
ft_sa(&a);     // Swap 9 and 1 so 1 is on top
ft_pa(&a, &b); // Move 8 to a
ft_pa(&a, &b); // Move 3 to a
ft_pa(&a, &b); // Move 5 to a

// Correctly adjust the order using rotations
ft_ra(&a); // Rotate to move 5 down
ft_ra(&a); // Continue rotating to get 3 below 5
ft_sa(&a); // Swap 8 and 3
ft_ra(&a); // Rotate to get 8 below 3
ft_sa(&a); // Swap 9 and 8


// Final rotations
ft_ra(&a); // Rotate all elements so the smallest is on top
ft_ra(&a); // Continue rotating until the largest is at the bottom
ft_ra(&a); // Complete the full rotation to order correctly
ft_ra(&a); // Make sure 1 is at the top


ft_sa(&a); // Swap 9 and 8
ft_ra(&a); // Rotate to get 8 below 3

	ft_printf("Result: \n");
	ft_print_stack(a);


	return (0);

}
