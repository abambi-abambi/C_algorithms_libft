/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abambi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 14:13:39 by abambi            #+#    #+#             */
/*   Updated: 2020/11/26 17:46:13 by abambi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list		*ft_listnew(void *content)
{
	t_list	*list;

	if (!(list = malloc(1 * sizeof(t_list))))
		return (NULL);
	list->content = content;
	list->next = NULL;
	return (list);
}

static void			ft_listadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!*lst)
		*lst = new;
	else
	{
		tmp = *lst;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}
}

static void			ft_listdel(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*ptr;

	ptr = *lst;
	if (!ptr)
		return ;
	while (ptr)
	{
		tmp = (ptr)->next;
		del(ptr->content);
		free(ptr);
		ptr = tmp;
	}
}

t_list				*ft_lstmap(t_list *lst, void *(*f)(void*),
					void (*del)(void *))
{
	t_list	*lstptr;
	t_list	*newlst;

	if (!f || !lst)
		return (NULL);
	lstptr = NULL;
	while (lst)
	{
		newlst = ft_listnew((*f)(lst->content));
		if (!newlst)
		{
			ft_listdel(&lstptr, del);
			return (NULL);
		}
		ft_listadd_back(&lstptr, newlst);
		lst = lst->next;
	}
	return (lstptr);
}
