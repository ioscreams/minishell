/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsabir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 13:28:25 by hsabir            #+#    #+#             */
/*   Updated: 2021/12/16 11:55:39 by hsabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/minishell.h"

void	init_shell(void)
{
	printf("%s⡆⣐⢕⢕⢕⢕⢕⢕⢕⢕⠅⢗⢕⢕⢕⢕⢕⢕⢕⠕⠕⢕⢕⢕⢕⢕⢕⢕⢕⢕\n", KCYN);
	printf("⢐⢕⢕⢕⢕⢕⣕⢕⢕⠕⠁⢕⢕⢕⢕⢕⢕⢕⢕⠅%s⡄%s⢕⢕⢕⢕⢕⢕⢕⢕⢕\n", KNRM, KCYN);
	printf("⢕⢕⢕⢕⢕⠅⢗⢕⠕%s⣠⠄%s⣗⢕⢕⠕⢕⢕⢕⠕%s⢠⣿%s⠐⢕⢕⢕⠑⢕⢕⠵⢕\n", KNRM, KCYN, KNRM, KCYN);
	printf("⢕⢕⢕⢕⠁⢜⠕%s⢁⣴⣿⡇%s⢓⢕⢵⢐⢕⢕⠕%s⢁⣾⢿⣧%s⠑⢕⢕⠄⢑⢕⠅⢕\n", KNRM, KCYN, KNRM, KCYN);
	printf("⢕⢕⠵⢁⠔%s⢁⣤⣤⣶⣶⣶%s⡐⣕⢽⠐⢕⠕%s⣡⣾⣶⣶⣶⣤⡁%s⢓⢕⠄⢑⢅⢑\n", KNRM, KCYN, KNRM, KCYN);
	printf("⠍⣧⠄%s⣶⣾⣿⣿⣿⣿⣿⣿⣷⣔%s⢕⢄⢡%s⣾⣿⣿⣿⣿⣿⣿⣿⣦⡑⢕⢤⠱%s⢐\n", KNRM, KCYN, KNRM, KCYN);
	printf("⢠⢕⠅%s⣾⣿⠋⢿⣿⣿⣿⠉⣿⣿⣷⣦⣶⣽⣿⣿⠈⣿⣿⣿⣿⠏⢹⣷⣷⡅%s⢐\n", KNRM, KCYN);
	printf("⣔⢕⢥%s⢻⣿⡀⠈⠛⠛⠁⢠⣿⣿⣿⣿⣿⣿⣿⣿⡀⠈⠛⠛⠁⠄⣼⣿⣿⡇%s⢔\n", KNRM, KCYN);
	printf("⢕⢕⢽%s⢸⢟⢟%s⢖⢖%s⢤⣶⡟⢻⣿⡿⠻⣿⣿⡟⢀⣿⣦%s⢤⢤⢔%s⢞⢿⢿⣿⠁%s⢕\n", KNRM, KMAG, KNRM, KMAG, KNRM, KCYN);
	printf("⢕⢕⠅%s⣐⢕⢕⢕⢕⢕%s⣿⣿⡄⠛⢀⣦⠈⠛⢁⣼⣿%s⢗⢕⢕⢕⢕⢕⢕⡏%s⣘⢕\n", KMAG, KNRM, KMAG, KCYN);
	printf("⢕⢕⠅%s⢓⣕⣕⣕⣕%s⣵⣿⣿⣿⣾⣿⣿⣿⣿⣿⣿⣿⣷%s⣕⢕⢕⢕⢕⡵%s⢀⢕⢕\n", KMAG, KNRM, KMAG, KCYN);
	printf("⢑⢕⠃%s⡈⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢃%s⢕⢕⢕\n", KNRM, KCYN);
	printf("⣆⢕⠄⢱⣄%s⠛⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⢁%s⢕⢕⠕⢁\n", KNRM, KCYN);
	printf("⣿⣦⡀⣿⣿⣷⣶⣬⣍%s⣛⣛⣛⡛⠿⠿⠿⠛⠛⢛⣛⣉⣭%s⣤⣂⢜⠕⢑⣡⣴⣿%s\n", KNRM, KCYN);
	printf("\n");
	printf("-----------------------------------------------------------------------\n");
	printf("\n");
	printf("\033[0;31m");
	printf("              $$\\           $$\\           $$\\                 $$\\ $$\\ \n");
	printf("              \\__|          \\__|          $$ |                $$ |$$ |\n");
	printf("$$$$$$\\$$$$\\  $$\\ $$$$$$$\\  $$\\  $$$$$$$\\ $$$$$$$\\   $$$$$$\\  $$ |$$ |\n");
	printf("$$  _$$  _$$\\ $$ |$$  __$$\\ $$ |$$  _____|$$  __$$\\ $$  __$$\\ $$ |$$ |\n");
	printf("$$ / $$ / $$ |$$ |$$ |  $$ |$$ |\\$$$$$$\\  $$ |  $$ |$$$$$$$$ |$$ |$$ |\n");
	printf("$$ | $$ | $$ |$$ |$$ |  $$ |$$ | \\____$$\\ $$ |  $$ |$$   ____|$$ |$$ |\n");
	printf("$$ / $$ / $$ |$$ |$$ |  $$ |$$ |\\$$$$$$\\  $$ |  $$ |$$$$$$$$ |$$ |$$ |\n");
	printf("$$ | $$ | $$ |$$ |$$ |  $$ |$$ |$$$$$$$  |$$ |  $$ |\\$$$$$$$\\ $$ |$$ |\n");
	printf("\\__| \\__| \\__|\\__|\\__|  \\__|\\__|\\_______/ \\__|  \\__| \\_______|\\__|\\__|\n");
	printf("\n");
	printf("\033[0m");
}

int	main(int argc, char **argv, char **env)
{
	t_shell	shell;
	
	(void)argc;
	(void)argv;
	if (argc > 1)
		printf("It is a shell, therefore it doesn't require any aargument");
	init_shell();
	while (1)
	{
		shell.prompt = init_prompt();
		shell.cmdline = readline(shell.prompt);
		if (!ft_strlen(shell.cmdline))
		{
			free(shell.prompt);
			free(shell.cmdline);
			continue ;
		}
		// We first take care about the pipes.
		tokenizing(&shell);
		parsing(&shell);
		if (shell.n_pipes)
			exec_pipe_cmd(&shell, env);
	}
	return (0);
}
