/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_in_sinus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/13 19:29:35 by tle-mign          #+#    #+#             */
/*   Updated: 2014/01/13 19:32:40 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtrigonometry.h"

float	ft_add_in_sinus(float a, float b)
{
	float	result;

	if (a == 0 || b == 0)
		return (0);
	result = sin(a) * cos(b) - cos(a) * sin(b);
	return (result);
}
