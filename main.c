/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:24:16 by nquecedo          #+#    #+#             */
/*   Updated: 2024/06/04 08:22:42 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int	ft_init_stack(int argc, char **argv, t_stack *a)
{
    int i;

    if (!a)
        return (-1);
    i = 1;
    a->prev = NULL;
    while (i < argc)
    {
        a->value = atol(argv[i]);
        a->index = i - 1;
        if (i < argc - 1)
        {
            a->next = (t_stack *)malloc(1 * sizeof(t_stack));
            if (!a->next || ft_check_max_min_int(a->value))
                return (ft_free_stack(a) ,-1);
            a->next->prev = a;
            a = a->next;
        }
        else
            a->next = NULL;
        i++;
    }

    return (0);
}

void	ft_print_stack(t_stack *a)
{
	if (a == NULL)
		return ;
	while (a)
	{
		printf("valor: %li, inice: %i\n", a->value, a->index);
		a = a->next;
	}
}

void	ft_print_revese(t_stack *a)
{
	a = ft_get_last_node(a);
	while (a)
	{
		printf("El valor es: %li\n", a->value);
		a = a->prev;
	}
}

int main(int argc, char **argv)
{
	t_stack  *a;
	t_stack  *b;
	// int	i = 0;

	if (argc == 2 && ft_strchr(argv[1], ' '))
		argv = ft_split(argv[1], ' ');
	// while (argv[i])
	// {
	// 	ft_printf("QUE ay en argv: %s\n", argv[i]);
	// 	i++;
	// }
	if (ft_check_args(argc, argv))
		return (ft_printf("Error\n"), -1);
	a = (t_stack *)malloc(1 * sizeof(t_stack));
	b = NULL;
	if (ft_init_stack(argc, argv, a))
		return (-1);
	if (!ft_is_order(a))
		return (ft_free_stack(a), 0);
	ft_give_index(&a);
	// ft_print_stack(a);
	if (ft_list_len(a) <= 4)
		ft_ez_short(&a, &b);
	else
		ft_radix(&a, &b);
	ft_printf("=======\n");
	ft_print_stack(a);
	return (ft_free_stack(a), ft_free_stack(b), 0);
}
