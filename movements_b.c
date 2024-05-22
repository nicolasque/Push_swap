/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 08:00:44 by nquecedo          #+#    #+#             */
/*   Updated: 2024/05/22 08:25:25 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_sb(t_stak **b)
{
	t_stak *temp;

	if (*b == NULL || (*b)->next == NULL)
		return;

	temp = *b;
	*b = (*b)->next;
	temp->next = (*b)->next;
	(*b)->next = temp;
	(*b)->prev = NULL;
	if (temp->next != NULL)
		temp->next->prev = temp;
	temp->prev = *b;
	ft_printf("sb\n");
} 

void ft_rb(t_stak **b)
{
	t_stak  *temp;
	t_stak  *last;

	if (*b == NULL || (*b)->next == NULL)
		return ;
	last = ft_get_last_node(*b);
	temp = (*b);
	*b = (*b)->next;
	(*b)->prev = NULL;
	last->next = temp;
	temp->prev = last;
	temp->next = NULL;
	ft_printf("rb\n");
}

void	ft_rrb(t_stak **b)
{
	t_stak	*first;

	if (!*b|| !(*b)->next)
		return ;
	first = *b;
	first->prev = ft_get_last_node(*b);
	first->prev->next = first;
	*b = first->next;
	(*b)->prev = NULL;
	first->next = NULL;
	ft_printf("rrb\n");
}

