/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   define_tan_by_side.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/13 19:04:21 by tle-mign          #+#    #+#             */
/*   Updated: 2014/01/13 19:06:56 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtrigonometry.h"

float	ft_define_tan_by_side(float opposite_side, float adjacent_side)
{
	float	tan_angle;

	if (opposite_side == 0 || adjacent_side == 0)
		return (0);
	tan_angle = opposite_side / adjacent_side;
	return (tan_angle);
}
