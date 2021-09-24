/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoekim <hoekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 12:19:33 by hoekim            #+#    #+#             */
/*   Updated: 2021/09/22 12:19:48 by hoekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
int **grid;
	
int	double_check(int grid[][4], int i, int j)
{
	int cmp;
	cmp = 1;
	while (cmp <= i)
	{
		if (grid[i][j] == grid[i - cmp][j])
			return 1;
		cmp++;
	}
	cmp = 1;
	while (cmp <= j)
	{
		if (grid[i][j] == grid[i][j - cmp])
			return 1;
		cmp++;
	}
	return 0; //중복 있으면 리턴 1 없으면 0으로 변경
}
int ft_print_grid(int grid[][4])
{
	int i;
	int j;
	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
		    grid[i][j] = grid[i][j] + '0';
			write(1, &grid[i][j], 1);
			if (j != 3)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
		j = 0;
	}
	return (0);
}
int ft_dFS(int y, int x, int grid[][4], int input[][4])
{
	int i;
	int k;
	int q;
	int lPeek;
	int rPeek;
	int uPeek;
	int dPeek;
	int cnt;
	int p;
	int an;
	i = 0;
	int vec[4];
	k = 0;
	while (k <= 3) ///벡터값 초기화
	{
		vec[k] = k + 1;
		k++;
	}
	while (i <= 3) //진짜  while 구문
	{
		grid[y][x] = vec[i];
		if (double_check(grid, y, x))
		{
			i++;
			continue;
		}
		if (y == 3) //행의 마지막에 도달한 경우
		{
			q = 0;
			uPeek = 0;
			cnt = 0;
			while (q <= 3)
			{
				if (uPeek < grid[q][x]) //uPeek 구하기
				{
					uPeek = grid[q][x];
					cnt++;
				}
				q++;
			}
			//if(cnt == input[x][0]) //위로 흝었을 때 조건만족해서 계속 진행하는 경우
			if (cnt == input[0][x])
			{
				p = 0;
				dPeek = 0;
				cnt = 0;
				while (p <= 3)
				{
					if (dPeek < grid[3-p][x])
					{
						dPeek = grid[3-p][x];
						cnt++;
					}
					p++;
				}
				//if (cnt == input[x][3])
				if (cnt == input[1][x])
				{
					if (x != 3)  //** 그리드의 마지막 줄이 아니라면
					{
						ft_dFS(y, x+1, grid, input);
						if (an==0)
						{
							i++;
							continue;
						}
						else
						{
							return (1);
						}
					}
				}
				else /// 위에서 아래로 봤을 때 충족했으나 아래에서 위를 봤을떄 충족못하는 경우이다.
				{
					grid[y][x] = 0; //*****리턴 부
					return (0);
				}
			}
			else    //위로 흝었을 때 이미 나가리난 경우
			{
				grid[y][x] = 0; //*****리턴부
				return (0);
			}
		}
		if (x==3) //열의 마지막에 도달한 경우이다. >>> 이부분은 오늘까지 했었던 부분
		{
			lPeek=0;
			cnt=0;
			q=0;
			while(q<=3)
			{
				if(lPeek<grid[y][q])
				{
					lPeek=grid[y][q];
					cnt++;
				}
				q++;
			}
			if(cnt==input[2][y])
			{
				rPeek=0;
				cnt=0;
				p=0;
				while(p<=3)
				{
					if(rPeek<grid[y][3-p])
					{
						rPeek=grid[y][3-p];
						cnt++;
					}
					p++;
				}
				if(cnt==input[3][y])
				{
					if(y!=3) ///y가 3일때 증가하면 오류나고 뒤에 x를 봐야함
					{
						ft_dFS(y+1,0,grid,input); ////위의 3에서 왔을때랑 고려해보자
						if (an==0)
						{
							i++;
							continue;
						}
						else
						{
							return (1);
						}
					}
					else ////x=3 y=3인경우임
					{
						ft_print_grid(grid); //answer부 리턴을 어떻게 할지 생각좀...
						return (1);
					}
				}
				else
				{
					grid[y][x]=0;
					return (0);
				}
			}
			else ////return
			{
				grid[y][x]=0;
				return (0);
			}
		}
		else //x가 3이 아닌경우
		{
			if(y!=3)////y가 3이었으면 위에서 이미 걸렀을 거니까 다른 벡터를 줘야하기 때문에
			{
				ft_dFS(y,x+1,grid,input);
				if (an==0)
				{
					i++;
					continue;
				}
				else
				{
					return (1);					
				}
			}
		}
		i++;
	}
	if (x != 3 || y != 3)
	{
		if(x == 0 && y == 0)
	 	{
			 	write(1, "Error\n", 6); //////이부분도 고려해야함
	 			return (0);
	 	}
	 	else
	 	{
	 			grid[y][x] = 0; //******리턴부분
	 			return(0);
	 	}
	}
	return(1);
}
int main(int argc, char **argv)
{
	int input[4][4];
	int i;
	int j;
	int temp;
	int kk;
	int pp;
	grid = (int **)malloc(sizeof(int *) *4);
	pp=0;
	while(pp<4)
	{
		grid[pp]=(int*) malloc ( sizeof(int) *4);
		pp++;
	}
	// 인풋 에러체크 1. argc가 2가 아니면 에러
	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	// 인풋을 배열로 담기
	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			if (*argv[1] >= '1' && *argv[1] <= '4')
			{
				input[i][j] = *argv[1] - '0';
				j++;
			}
			argv[1]++;
		}
		j = 0;
		i++;
	}
	// 인풋 에러체크 2. 양쪽의 합이 5보다 크면 에러
	i = 0;
	j = 0;
	while (i == 0 || i == 2)
	{
		while (j < 4)
		{
			if (input[i][j] + input[i + 1][j] > 5)
			{
				write(1, "Error\n", 6);
				return (0);
			}
			j++;
		}
		i = i + 2;
		j = 0;
	}
 	// 인풋 에러체크 3. 같은 줄에 1이 두번 이상 나오면 에러
	i = 0;
	j = 0;
	temp = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			if (input[i][j] == temp)
			{
				write(1, "Error\n", 6);
				return (0);
			}
			if (input[i][j] == 1)
				temp = 1;
			j++;
		}
		temp = 0;
		i++;
	}
	// 그리드 만들기: 0으로 채우기
	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
		j = 0;
	}
	//dFs 함수로 넘겨주기
    ft_dFS(0, 0, grid, input);
	
	free(grid);
	
	return(0);
}
