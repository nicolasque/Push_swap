/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 10:24:28 by nquecedo          #+#    #+#             */
/*   Updated: 2024/05/29 11:33:16 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_sa(t_stack **a)
{
	ft_sx(a);
	ft_printf("sa\n");
} 

void ft_ra(t_stack **a)
{
	ft_rx(a);
	ft_printf("ra\n");
}

void	ft_rra(t_stack **a)
{
	ft_rrx(a);
	ft_printf("rra\n");
}

// Move from stack a to stack b
void	ft_pb(t_stack **a, t_stack **b)
{
	t_stack  *temp;

	temp = *a;
	if (!*a)
		return ;
	*a = (*a)->next;
	if (*a)
	(*a)->prev = NULL;
	if (*b)
		(*b)->prev = temp;
	temp->next = *b;
	*b = temp;
	ft_printf("pb\n");
}