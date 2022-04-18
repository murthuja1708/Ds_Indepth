
#include "linked_list.h"

int main()
{

	struct node* _list = create_list();

	for(int i=1;i<10;i++)
	{
		push_back(_list,i);
	}
	

	struct node* temp;
	//reverse_list(_list);
	display_list();

	swap_adjacent2(_list);

	display_list();

	destroy_list(_list);


	return 0;
}
