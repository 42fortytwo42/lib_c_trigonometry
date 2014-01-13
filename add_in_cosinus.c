/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_in_cosinus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/13 19:29:35 by tle-mign          #+#    #+#             */
/*   Updated: 2014/01/13 19:31:37 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtrigonometry.h"

float	ft_add_in_cosinus(float a, float b)
{
	float	result;

	if (a == 0 || b == 0)
		return (0);
	result = cos(a) * cos(b) - sin(a) * sin(b);
	return (result);
}
