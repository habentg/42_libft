/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatesfam <hatesfam@student.abudhabi42.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 22:13:58 by hatesfam          #+#    #+#             */
/*   Updated: 2023/01/16 22:13:58 by hatesfam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*p;
	size_t	total;

	total = nitems * size;
	if (total >= SIZE_MAX || size >= SIZE_MAX)
		return (NULL);
	p = malloc(total);
	if (!p)
		return (NULL);
	ft_bzero(p, total);
	return (p);
}

// int main(void)
// {
// 	char *k = ft_calloc(10, sizeof(char));
// 	char *m = calloc(10, sizeof(char));
// 	for (int i = 0; i < 50; i++)
// 	{
// 		printf("%d - %d\n", k[i], m[i]);
// 	}
// }
