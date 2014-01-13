/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minus_in_tan.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/13 19:34:11 by tle-mign          #+#    #+#             */
/*   Updated: 2014/01/13 19:49:55 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtrigonometry.h"

float	ft_minus_in_tan(float a, float b)
{
	float	result;

	if (a == 0 || b == 0)
		return (0);
	result = (tan(a) - tan(b)) / (1 - tan(a) * tan(b));
	return (result);
}
