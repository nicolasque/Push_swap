/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements_comon.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 08:00:56 by nquecedo          #+#    #+#             */
/*   Updated: 2024/06/27 09:30:40 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sx(t_stack **stack)
{
	t_stack	*temp;

	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	temp = (*stack)->next;
	(*stack)->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = *stack;
	temp->prev = NULL;
	temp->next = *stack;
	(*stack)->prev = temp;
	*stack = temp;
}

void	ft_rx(t_stack **stack)
{
	t_stack	*temp;
	t_stack	*last;

	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	last = ft_get_last_node(*stack);
	temp = (*stack);
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	last->next = temp;
	temp->prev = last;
	temp->next = NULL;
}

void	ft_rrx(t_stack **stack)
{
	t_stack	*last;
	t_stack	*first;

	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	last = ft_get_last_node(*stack);
	first = *stack;
	last->prev->next = NULL;
	last->next = first;
	last->prev = NULL;
	first->prev = last;
	*stack = last;
}

void	ft_rr(t_stack **a, t_stack **b)
{
	ft_rx(a);
	ft_rx(b);
	printf("rr\n");
}

void	ft_rrr(t_stack **a, t_stack **b)
{
	ft_rrx(a);
	ft_rrx(b);
	printf("rrr\n");
}
