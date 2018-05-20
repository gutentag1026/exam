#include <stdlib.h>

typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*tmp;
	t_list	*prev;

	tmp = *begin_list;
	while (tmp && !cmp(data_ref, tmp->data))
	{
		prev = tmp;
		tmp = tmp->next;
		free(prev);
	}
	*begin_list = tmp;
	prev = NULL;
	while (tmp)
	{
		if (!cmp(data_ref, tmp->data))
		{
			if (prev)
				prev->next = tmp->next;
			free(tmp);
			tmp = prev->next;
		}
		else
		{
			prev = tmp;
			tmp = tmp->next;
		}
	}	
}
