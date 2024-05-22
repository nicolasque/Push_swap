/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:24:16 by nquecedo          #+#    #+#             */
/*   Updated: 2024/05/22 07:57:00 by nquecedo         ###   ########.fr       */
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
		printf("El valor es: %i\n", a->value);
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
	
	ft_printf("Stak A:\n");
	ft_print_stack(a);
	
	ft_printf("Stak B:\n");
	ft_print_stack(b);
	
	ft_pb(&a, &b);
	ft_pb(&a, &b);
	ft_pb(&a, &b);
	ft_pb(&a, &b);
	ft_pb(&a, &b);
	ft_pb(&a, &b);
	ft_printf("\n=============\n");
	ft_printf("Stak A:\n");
	ft_print_stack(a);
	
	ft_printf("Stak B:\n");
	ft_print_stack(b);
	
	return (0);

}
