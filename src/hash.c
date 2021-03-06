/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hash.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazar <anazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/01 13:19:45 by anazar            #+#    #+#             */
/*   Updated: 2018/01/30 17:57:06 by anazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lemin.h>

size_t	hash(t_lemin *lemin, char *str, int *flag)
{
	size_t	i;
	t_room	*room;

	i = 0;
	room = lemin->rooms;
	while (room && ft_strcmp(room->name, str))
	{
		room = room->next;
		++i;
	}
	if (!room)
		error("Input is invalid");
	*flag = room->flag;
	return (i);
}
