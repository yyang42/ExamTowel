/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juschaef <juschaef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/04 20:49:47 by juschaef          #+#    #+#             */
/*   Updated: 2015/01/04 20:50:00 by juschaef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strnequ(char *s1, char *s2, int n)
{
	while (n--)
		if (*s1++ != *s2++)
			return (0);
	return (1);
}