/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 13:10:55 by lspohle           #+#    #+#             */
/*   Updated: 2022/12/21 15:46:19 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Note
//  Prototyped as t_list *ft_lstlast(t_list *lst)
//  -> lst: the beginning of the list
//  -> returns the last node of the list
//  -> external functs: none
//  -> return: last node of the list

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int	len;

	len = ft_lstsize(lst);
	while (len > 1)
	{
		lst = lst->next;
		len--;
	}
	return (lst);
}

// #include "libft.h"
// #include <stdio.h>

// void ft_print_names(t_list *lst)
// {
// 	t_list *tmp = lst;

// 	while (tmp != NULL)
// 	{
// 		printf("%s\n", tmp->content);
// 		tmp = tmp->next;
// 	}
// }

// int	main(void)
// {
// 	t_list name1;
// 	t_list name2;
// 	t_list name3;

// 	t_list *lst;

// 	name1.content = "Mama";
// 	name2.content = "Papa";
// 	name3.content = "Nils";

// 	lst = &name1;
// 	name1.next = &name2;
// 	name2.next = &name3;
// 	name3.next = NULL;

// 	ft_print_names(lst);
// 	printf("\nLength of list: %d\n", ft_lstsize(lst));
// 	printf("\nLastname: ");
// 	ft_print_names(ft_lstlast(lst));
// }
