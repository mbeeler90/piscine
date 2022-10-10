/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:11:11 by mbeeler           #+#    #+#             */
/*   Updated: 2021/08/31 13:53:15 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

int		main(void)
{
	t_list		*list;

	list = NULL;
	ft_list_push_back(&list, "string1");
	ft_list_push_back(&list, "");
	ft_list_push_back(&list, "string3");
	while(list)
	{
		printf("%s\n", (char*)list->data);
		list = list->next;
	}
	return (0);
}
