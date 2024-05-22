/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 10:24:28 by nquecedo          #+#    #+#             */
/*   Updated: 2024/05/22 11:06:23 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_sa(t_stak **a)
{
	ft_sx(a);
	ft_printf("sa\n");
} 

void ft_ra(t_stak **a)
{
	ft_rx(a);
	ft_printf("ra\n");
}

void	ft_rra(t_stak **a)
{
	ft_rrx(a);
	ft_printf("rra\n");
}

