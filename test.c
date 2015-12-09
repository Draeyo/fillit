struct s_list{
    int     x1;
    int     y1;
    int     x2;
    int     y2;
    int     x3;
    int     y3;
    int     x4;
    int     y4;
    char    *forme;
    char    lettre'
    void    *next;
    void    *prev;
    }
}     t_list;

t_list  ft_carre(t_list new)
{
    new.x1 = 0;
    new.y1 = 0;
    new.x2 = 0;
    new.y2 = 1;
    new.x3 = 1;
    new.y3 = 0;
    new.x4 = 1;
    new.y4 = 1;
    new.forme = "##/n##"
    new->next = NULL;
    new->prev = NULL;
    return (new);
}

int     ft_nb_forme(int a)
{
    t_list      new;
    if (a = 1)
        new = ft_carre(new);


    return (new);
}
t_list  *ft_creation liste(char ***ret)
{
    t_list  *list;
    char    letter;
    int     i;

    letter = 'A' - 1;
    while (ret[i])
    {
        list = ft_nb_forme(ft_is_tetri(ret[i]));
    }
}
