/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 19:51:03 by nquecedo          #+#    #+#             */
/*   Updated: 2024/06/27 09:38:04 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"
# include <limits.h>
# include <stdio.h>

typedef struct t_stack
{
	long			value;
	int				index;

	struct t_stack	*prev;
	struct t_stack	*next;
}	t_stack;

//check_args.c
int		ft_check_args(int argc, char **argv);
int		ft_is_all_num(char *str);
int		ft_is_repeat(int argc, char **argv, char *str, int list_position);
int		ft_is_order(t_stack *a);
int		ft_check_max_min_int(long nbr);

//free.c
void	ft_free_stack(t_stack *a);
void	ft_free_split(char **result);

//list_utils.c
int		ft_list_len(t_stack *a);
t_stack	*ft_get_last_node(t_stack *a);
t_stack	*ft_get_max_node(t_stack *a);
t_stack	*ft_get_min_node(t_stack *a);
void	ft_give_index(t_stack **a);

//movements_a.c
void	ft_sa(t_stack **a);
void	ft_ra(t_stack **a);
void	ft_rra(t_stack **a);
void	ft_pb(t_stack **a, t_stack **b);

//movements_b.c
void	ft_sb(t_stack **b);
void	ft_rrb(t_stack **b);
void	ft_rb(t_stack **b);
void	ft_pa(t_stack **a, t_stack **b);

//movements_comon.c
void	ft_sx(t_stack **stack);
void	ft_rx(t_stack **stack);
void	ft_rrx(t_stack **stack);
void	ft_rr(t_stack **a, t_stack **b);
void	ft_rrr(t_stack **a, t_stack **b);

//ez_short.c
void	ft_short_two(t_stack **a);
void	ft_short_three(t_stack **a);
int		ft_ez_short(t_stack **a, t_stack **b);
void	ft_short_four(t_stack **a, t_stack **b);

//radix.c
void	ft_radix(t_stack **a, t_stack **b);

#endif //PUSH_SWAP_H