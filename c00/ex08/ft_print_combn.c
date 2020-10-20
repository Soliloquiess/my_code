/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaceres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 19:05:51 by ecaceres          #+#    #+#             */
/*   Updated: 2019/07/31 19:05:54 by ecaceres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c)
{
	printf("%c", c);
}

void	ft_print(int n, int * array)
{
	int		index;	//배열 인덱스
	int	    check;	//0이면 거짓 1이면 참

	index = 0;
	while (index < n)		//숫자 출력
	{
		ft_putchar(48 + array[index]);
		index++;
	}
	index = n - 1;		//위에서 2가 되었으므로 다시 1로
	check = 1;			//체크가 1이면 참.
	while (index >= 0)
	{
		if (array[index] != 9 - (n - 1 - index))	
			//이 부분이 ,과 ''를 실행  시키게 만듬 . array[1]=9면 false, array[0] =8 이면 if부분 실행 안하고 index--줄임. 그럼 check도 안 바뀌고 ,와 공백 출력 안함.
		{
			check = 0;	//이러면 , . 실행
			break;
		}
		index--;
	}
	if (check == 0)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_combn_recursive(int n, int index_now, int *array, int st_index)
{
	int value;	 //index가 현재 배열상 현재 위치(인덱스0 인덱스 1 인덱스 2)
	int max;	//max 는 8

	if (index_now == n)	//n은 입력한 자리수고 curr이 입력한 자리수와 같을 떄 print 함수 실행.
	{
		ft_print(n, array);	//
	}
	else
	{
		max = 10 - (n - index_now);	//9
		value = st_index + 1;		//st_index에서 바뀜
		while (value <= max)
		{
			array[index_now] = value;
			ft_print_combn_recursive(n, index_now + 1, array, value);	//다음 인덱스에 현 value(앞의 자리)를 넣어서 재귀
			value++;
		}
	}
}

void	ft_print_combn(int n)
{
	int array[10];
	int index;	//배열 인덱스

	index = 0;
	while (index < n)
	{
		array[index] = 0;
		index++;
	}
	ft_print_combn_recursive(n, 0, array, -1);
}


int main()
{
	int n = 2;
	ft_print_combn(n);

	return 0;
}

