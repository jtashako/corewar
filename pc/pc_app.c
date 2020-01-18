/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pc_app.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 18:03:24 by jochang           #+#    #+#             */
/*   Updated: 2019/01/01 19:22:47 by smonroe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/corewar.h"

/*
void	pc_app(t_pc **lst, t_pc *node)
{
	if (lst && *lst)
	{
		t_pc *pos = *lst;
		while (pos->next)
			pos = pos->next;
		pos->next = node;
		node->prev = pos;
		//(pos->next)->prev = node;
	}
	else
		*lst = node;
}
*/

void	pc_app(t_pc **lst, t_pc *node)
{
	if (lst && *lst)
	{
		node->next = *lst;
		(*lst)->prev = node;
	}
	*lst = node;
}