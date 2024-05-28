/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 08:00:44 by nquecedo          #+#    #+#             */
/*   Updated: 2024/05/28 10:39:04 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_sb(t_stack **b)
{
	ft_sx(b);
	ft_printf("sb\n");
} 

void ft_rb(t_stack **b)
{
	ft_rx(b);
	ft_printf("rb\n");
}

void	ft_rrb(t_stack **b)
{
	ft_rrx(b);
	ft_printf("rrb\n");
}

