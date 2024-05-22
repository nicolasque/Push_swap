/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 08:00:44 by nquecedo          #+#    #+#             */
/*   Updated: 2024/05/22 11:06:35 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_sb(t_stak **b)
{
	ft_sx(b);
	ft_printf("sb\n");
} 

void ft_rb(t_stak **b)
{
	ft_rx(b);
	ft_printf("rb\n");
}

void	ft_rrb(t_stak **b)
{
	ft_rrx(b);
	ft_printf("rrb\n");
}

