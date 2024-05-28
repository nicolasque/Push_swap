/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements_comon.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 08:00:56 by nquecedo          #+#    #+#             */
/*   Updated: 2024/05/28 10:43:22 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"


void    ft_sx(t_stack **stack)
{
    if (*stack == NULL || (*stack)->next == NULL) {
        return; 
    }

    t_stack *temp = (*stack)->next; 
    (*stack)->next = temp->next;

    if (temp->next != NULL) {
        temp->next->prev = *stack;
    }

    temp->prev = NULL; 
    temp->next = *stack;
    (*stack)->prev = temp;
    *stack = temp; 
}


void ft_rx(t_stack **stack)
{
	t_stack  *temp;
	t_stack  *last;

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

void ft_rrx(t_stack **stack)
{
	t_stack *last;
	t_stack *first;

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


void	ft_pa(t_stack **a, t_stack **b)
{
	t_stack  *temp;

	temp = *b;
	if (!*b)
		return ;
	*b = (*b)->next;
	if (*b)
	(*b)->prev = NULL;
	if (*a)
		(*a)->prev = temp;
	temp->next = *a;
	*a = temp;
	ft_printf("pa\n");
}
