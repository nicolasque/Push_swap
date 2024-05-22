/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 10:24:28 by nquecedo          #+#    #+#             */
/*   Updated: 2024/05/22 08:00:15 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_sa(t_stak **a)
{
	t_stak *temp;

	if (*a == NULL || (*a)->next == NULL)
		return;

	temp = *a;
	*a = (*a)->next;
	temp->next = (*a)->next;
	(*a)->next = temp;
	(*a)->prev = NULL;
	if (temp->next != NULL)
		temp->next->prev = temp;
	temp->prev = *a;
	ft_printf("sa\n");
} 

void ft_ra(t_stak **a)
{
	t_stak  *temp;
	t_stak  *last;

	if (*a == NULL || (*a)->next == NULL)
		return ;
	last = ft_get_last_node(*a);
	temp = (*a);
	*a = (*a)->next;
	(*a)->prev = NULL;
	last->next = temp;
	temp->prev = last;
	temp->next = NULL;
	ft_printf("ra\n");
}

void	ft_rra(t_stak **a)
{
	t_stak	*first;

	if (!*a|| !(*a)->next)
		return ;
	first = *a;
	first->prev = ft_get_last_node(*a);
	first->prev->next = first;
	*a = first->next;
	(*a)->prev = NULL;
	first->next = NULL;
	ft_printf("rra\n");
}


// Move from stack a to stack b
void	ft_pb(t_stak **a, t_stak **b)
{
    t_stak  *temp;

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
