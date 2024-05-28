/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 19:04:14 by nquecedo          #+#    #+#             */
/*   Updated: 2024/05/28 10:39:04 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

int	ft_init_stackt(t_stack **a ,char **argv)
{
	int	i;
	t_stack	*temp;
	t_stack	*last;

	i = 0;
	last = NULL;
	while (argv[i])
	{
		temp = malloc(1 * sizeof(t_stack));
		if (temp == NULL || !ft_is_allnum(argv[i]))
			return (ft_printf("Error\n"), -1);
		temp->value = ft_atol(argv[i]);
		temp->next = NULL;
		temp->prev = last;
		if (last != NULL)
			last->next = temp;
		else
			*a = temp; 
		last = temp;
		i++;
	}
	if (i == 1)
		return (-1); // Return -1 if is only onenumber on the list
	return 0; // Return 0 on success
}

int ft_check_list(t_stack *a)
{
	if (ft_is_shoted(a))	
		return(ft_printf("Esta ordebado") , -1);
	if (ft_is_repeat(a))
		return (ft_printf("Hay repetidos\n") , -1);

	ft_printf("No esta ordenado\n");
	return (0);
}

t_stack	*ft_get_smaller_node(t_stack *a)
{
	t_stack	*temp;
	t_stack	*smaller;

	temp = a;
	smaller = a;
	while (temp)
	{
		if (temp->value < smaller->value)
			smaller = temp;
		temp = temp->next;
	}
	return (smaller);
}


int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*smaller;

	if (argc < 2)
		return (0);
	if (argc == 2)
		argv = ft_split(argv[1], ' ');
	else
		argv++;
	a = (t_stack *)malloc(sizeof(t_stack) * 1);
	if (ft_init_stackt(&a, argv) == -1 || ft_check_list(a) == -1)
		return(ft_free_list(a),ft_printf("\nPrograma para \n") , -1);
	smaller = ft_get_smaller_node(a);
	if (ft_listlen(a) <= 5)
		ft_ez_case(a);
	ft_print_list(smaller);
	ft_free_list(a);
	return (0);
}
