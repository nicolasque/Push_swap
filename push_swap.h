/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 19:51:03 by nquecedo          #+#    #+#             */
/*   Updated: 2024/05/24 08:34:35 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"
#include <limits.h>
# include <stdio.h>

typedef struct t_stak
{
	int		value;
	// int		li_pos;

	struct t_stak	*prev;
	struct t_stak	*next;
}	t_stak;


//check_args.c
int	ft_check_args(int argc, char **argv);
int ft_is_all_num(char *str);
int ft_is_repeat(int argc, char** argv, char *str, int list_position);
int ft_is_order(t_stak *a);
int	ft_check_max_min_int(long nbr);


//free.c
void    ft_free_stack(t_stak *a);

//list_utils.c
int ft_list_len(t_stak *a);
t_stak  *ft_get_last_node(t_stak *a);


//movements_a.c
void    ft_sa(t_stak **a);
void	ft_ra(t_stak **a);
void	ft_rra(t_stak **a);


//movements_b.c
void    ft_sb(t_stak **b);
void	ft_rrb(t_stak **b);
void ft_rb(t_stak **b);



//movements_comon.c
void    ft_sx(t_stak **stak);
void    ft_rx(t_stak **stak);
void	ft_rrx(t_stak **stak);
void	ft_pb(t_stak **a, t_stak **b);
void	ft_pa(t_stak **a, t_stak **b);

//ez_short.c
void    ft_short_two(t_stak **a);
void    ft_short_three(t_stak **a);
t_stak	*ft_ez_short(t_stak *a);



#endif //PUSH_SWAP_H