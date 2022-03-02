/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbonaldi <bbonaldi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 01:59:48 by bbonaldi          #+#    #+#             */
/*   Updated: 2022/02/14 03:06:23 by bbonaldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <checkers.h>
#include <debug.h>
#include <init_end_game.h>
#include <parsed_input.h>
#include <rules.h>

typedef struct	s_table_size
{
	int sides;
	int size;
} t_table_size;

typedef	struct	s_table_elements
{
	int	row;
	int	col;
} t_table_elements;

#endif