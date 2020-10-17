#include"childlabourer.h"
int main()
{

	Childlabourer chi;
	chi.set_name("fasdf");
	Worker &p = chi;
	cout << p.get_name() << endl;
	return 0;
}