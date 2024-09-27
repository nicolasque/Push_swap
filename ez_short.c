/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ez_short.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 08:08:07 by nquecedo          #+#    #+#             */
/*   Updated: 2024/09/27 14:48:18 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_ez_short(t_stack **a, t_stack **b)
{
	int	list_len;

	list_len = ft_list_len(*a);
	if (list_len > 4)
		return (0);
	if (list_len == 2)
		ft_short_two(a);
	else if (list_len == 3)
		ft_short_three(a);
	else if (list_len == 4)
		ft_short_four(a, b);
	return (1);
}

void	ft_short_two(t_stack **a)
{
	ft_sa(a);
	// ft_free_stack(*a);
	// exit(0);
}

void	ft_short_three(t_stack **a)
{
	if ((*a)->value > (*a)->next->value)
	{
		if ((*a)->next->value > (*a)->next->next->value)
		{
			ft_sa(a);
			ft_rra(a);
		}
		else if ((*a)->value > (*a)->next->next->value)
			ft_ra(a);
		else
		{
			ft_rra(a);
			ft_sa(a);
			ft_rra(a);
		}
		return ;
	}
	if ((*a)->value > (*a)->next->next->value)
		ft_rra(a);
	else if ((*a)->next->value > (*a)->next->next->value)
	{
		ft_sa(a);
		ft_ra(a);
	}
}

void	ft_short_four(t_stack **a, t_stack **b)
{
	t_stack	*min_node;
	int		size;

	size = ft_list_len(*a);
	min_node = ft_get_min_node(*a);
	while ((*a)->value != min_node->value)
	{
		if (min_node->index < size / 2)
			ft_rra(a);
		else
			ft_ra(a);
	}
	ft_pb(a, b);
	ft_short_three(a);
	ft_pa(a, b);
}
