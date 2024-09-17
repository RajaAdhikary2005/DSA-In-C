void display_in_reverse(node *p1)
{
    if(head==NULL)
    {
        printf("Empty List");
    }
    else
    {
    if (p1==NULL)
    {
        return ;
    }
    else
    {
        return display_in_reverse(p1->next);
        printf("%d -> ",p1->data);
    }
    }
    }