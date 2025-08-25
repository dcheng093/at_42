/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcheng <dcheng@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 15:19:02 by dcheng            #+#    #+#             */
/*   Updated: 2025/08/18 14:53:13 by dcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int	check_col_top_to_bottom(int board[4][4], int col, int clue)
{
	int	row;
	int	max;
	int	visible;

	row = 0;
	visible = 0;
	max = board[row][col];
	while (row < 4)
	{
		if (board[row][col] > max)
		{
			max = board[row][col];
			visible++;
		}
		row++;
	}
	return (visible == clue);
}

int	check_col_bottom_to_top(int board[4][4], int col, int clue)
{
	int	row;
	int	max;
	int	visible;

	row = 3;
	visible = 0;
	max = board[row][col];
	while (row >= 0)
	{
		if (board[row][col] > max)
		{
			max = board[row][col];
			visible++;
		}
		row--;
	}
	return (visible == clue);
}

int	check_row_left_to_right(int board[4][4], int row, int clue)
{
	int	col;
	int	max;
	int	visible;

	col = 0;
	visible = 0;
	max = board[row][col];
	while (col < 4)
	{
		if (board[row][col] > max)
		{
			max = board[row][col];
			visible++;
		}
		col++;
	}
	return (visible == clue);
}

int	check_row_right_to_left(int board[4][4], int row, int clue)
{
	int	col;
	int	max;
	int	visible;

	col = 3;
	visible = 0;
	max = board[row][col];
	while (col >= 0)
	{
		if (board[row][col] > max)
		{
			max = board[row][col];
			visible++;
		}
		col--;
	}
	return (visible == clue);
}

int	check_board(int board[4][4], int *clues)
{
	int	i;

	i = 0;
	while (clues[i])
	{
		if (i >= 0 && i <= 3
			&& !check_col_top_to_bottom(board, i, clues[i] - 1))
			return (false);
		if (i >= 4 && i <= 7
			&& !check_col_bottom_to_top(board, i - 4, clues[i] - 1))
			return (false);
		if (i >= 8 && i <= 11
			&& !check_row_left_to_right(board, i - 8, clues[i] - 1))
			return (false);
		if (i >= 12 && i <= 15
			&& !check_row_right_to_left(board, i - 12, clues[i] - 1))
			return (false);
		i++;
	}
	return (true);
}