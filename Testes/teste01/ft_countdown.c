/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-andr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 22:20:34 by dde-andr          #+#    #+#             */
/*   Updated: 2021/07/15 22:25:00 by dde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main (void)
{
	char c;
	
	c = '9';
	while( c >= '0')
	{
		write (1, &c, 1);
		c--;
	}
	write (1, "\n", 1);
	return (0);
}