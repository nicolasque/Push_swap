/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 19:51:03 by nquecedo          #+#    #+#             */
/*   Updated: 2024/05/28 10:39:04 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"
# include <stdio.h>

typedef struct t_stack
{
	int		value;
	int		li_pos;

	struct t_stack	*next;
	struct t_stack	*prev;
}	t_stack;


// free.c
int	ft_free_list(t_stack *a);

// list_utils.c
size_t ft_listlen(t_stack *a);
int ft_is_allnum(char *str);
int ft_is_shoted(t_stack *a);
int ft_is_repeat(t_stack *a);
void	ft_print_list(t_stack *a);



//movements.c
void    ft_sa(t_stack **a);
void    ft_sb(t_stack **b);
void    ft_ss(t_stack **a, t_stack **b);
void    ft_pa(t_stack **a, t_stack **b);
void    ft_pb(t_stack **a, t_stack **b);
void    ft_ra(t_stack **a);
void    ft_rb(t_stack **b);
void    ft_rr(t_stack **a, t_stack **b);
void    ft_rra(t_stack **a);
void    ft_rrb(t_stack **b);
void    ft_rrr(t_stack **a, t_stack **b);

// ez_cases.c
void ft_ez_case(t_stack *a);
void ft_case_two(t_stack *a);




#endif //PUSH_SWAP_H