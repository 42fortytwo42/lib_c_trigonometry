/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_opposite_side_with_angle_by_hypot...          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/13 18:47:33 by tle-mign          #+#    #+#             */
/*   Updated: 2014/01/13 18:55:56 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtrigonometry.h"

float	ft_find_opposite_side_with_angle_by_hypo_sin(float angle,
												float hypotenuse)
{
	float		opposite_side;

	if (angle == 0 || hypotenuse == 0)
		return (0);
	opposite_side = sin(angle) * hypotenuse;
	return (opposite_side);
}
