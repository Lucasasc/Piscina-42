/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-andr <dde-andr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 03:53:05 by dde-andr          #+#    #+#             */
/*   Updated: 2021/07/11 03:53:10 by dde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_tools.h>

int		ft_display_zero(int n, struct s_dict *dict)
{
	int		i;
	char	*tab;

	if (!(tab = malloc(sizeof(*tab) * (((n * 3) + 1) + 1))))
		return (0);
	tab[0] = '1';
	i = 0;
	while (++i < (n * 3) + 1)
		tab[i] = '0';
	tab[i] = '\0';
	i = 0;
	while (dict[i].value != 0)
	{
		if (ft_strcmp(tab, dict[i].value) == 0)
		{
			ft_putstr(" ");
			ft_putstr(dict[i].wrt);
			return (1);
		}
		i++;
	}
	free(tab);
	return (0);
}

void	ft_display_hundred_units(char *str, struct s_dict *dict, int *f)
{
	int i;

	i = 0;
	while (dict[i].value != 0 && str != 0)
	{
		if (ft_strcmp(str, dict[i].value) == 0)
		{
			if (*f != 0)
				ft_putstr(" ");
			*f = 1;
			ft_putstr(dict[i].wrt);
			return ;
		}
		i++;
	}
}

void	ft_display_hundred(char *str, struct s_dict *dict, int *f)
{
	int i;

	i = 0;
	while (dict[i].value != 0 && str != 0)
	{
		if (ft_strcmp(str, dict[i].value) == 0)
		{
			if (*f != 0)
				ft_putstr(" ");
			*f = 1;
			ft_putstr(dict[i].wrt);
			return ;
		}
		i++;
	}
}

void	ft_display_dozen(char *str, struct s_dict *dict, int *f)
{
	int i;

	i = 0;
	while (dict[i].value != 0 && str != 0)
	{
		if (ft_strcmp(str, dict[i].value) == 0)
		{
			if (*f != 0)
				ft_putstr(" ");
			*f = 1;
			ft_putstr(dict[i].wrt);
			return ;
		}
		i++;
	}
}

void	ft_display_unit(char *str, struct s_dict *dict, int *f)
{
	int i;

	i = 0;
	while (dict[i].value != 0 && str != 0)
	{
		if (ft_strcmp(str, dict[i].value) == 0)
		{
			if (*f != 0)
				ft_putstr(" ");
			*f = 1;
			ft_putstr(dict[i].wrt);
			return ;
		}
		i++;
	}
}