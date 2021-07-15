/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-andr <dde-andr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 03:51:05 by dde-andr          #+#    #+#             */
/*   Updated: 2021/07/11 03:51:13 by dde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_tools.h>

char	**ft_split_mod(char *str, char *charset)
{
	char	**split;
	int		i;
	int		compteur;
	int		size;

	compteur = 0;
	i = 0;
	if (!(split = malloc(sizeof(*split) * (ft_strlen(str) + 1))))
		return (0);
	while (i < ft_strlen(str))
	{
		if (ft_is_charset(str, i, charset) == 1)
		{
			size = ft_wrdlen(str, i, charset);
			split[compteur] = ft_strdup(str, i, size);
			i = i + size;
			compteur = compteur + 1;
			charset = "";
		}
		i++;
	}
	split[compteur] = 0;
	return (split);
}