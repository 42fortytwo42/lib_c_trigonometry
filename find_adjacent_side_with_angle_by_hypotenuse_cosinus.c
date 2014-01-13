/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_adjacent_side_with_angle_by_hypot...          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/13 18:47:33 by tle-mign          #+#    #+#             */
/*   Updated: 2014/01/13 18:52:22 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtrigonometry.h"

float	ft_find_adjacent_side_with_angle_by_hypo_cos(float angle,
												float hypotenuse)
{
	float		adjacent_side;

	if (angle == 0 || hypotenuse == 0)
		return (0);
	adjacent_side = cos(angle) * hypotenuse;
	return (adjacent_side);
}
