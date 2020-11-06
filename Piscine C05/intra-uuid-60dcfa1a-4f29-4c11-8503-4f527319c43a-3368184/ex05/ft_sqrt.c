/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalvemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 15:01:27 by asalvemi          #+#    #+#             */
/*   Updated: 2020/11/04 15:01:29 by asalvemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int i;

	i = 0;
	if (nb == 1)
		return (1);
	while (i <= (nb / 2) && i <= 46431)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}