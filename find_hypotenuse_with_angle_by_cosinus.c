/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_hypotenuse_with_angle_by_cosinus.c            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/13 18:31:53 by tle-mign          #+#    #+#             */
/*   Updated: 2014/01/13 19:48:44 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtrigonometry.h"

float	ft_find_hypotenuse_with_angle_by_cosinus(float angle,
						float adjacent_side)
{
	float	hypotenuse;

	if (angle == 0 || adjacent_side == 0)
		return (0);
	hypotenuse = adjacent_side / cos(angle);
	return (hypotenuse);
}
