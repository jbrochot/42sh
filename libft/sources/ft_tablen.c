/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tablen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezonda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 12:26:05 by ezonda            #+#    #+#             */
/*   Updated: 2020/03/01 12:27:02 by ezonda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t		ft_tablen(char **tab)
{
	size_t len;

	len = 0;
	while (tab[len])
		len++;
	return (len);
}
