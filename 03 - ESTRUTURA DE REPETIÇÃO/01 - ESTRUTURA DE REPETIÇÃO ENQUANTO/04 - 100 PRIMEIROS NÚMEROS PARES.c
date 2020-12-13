#include <stdio.h>
#include <stdlib.h>

main (){
	int i = 1;
	while (i <= 200){
		if (i % 2 == 0)
			printf("%i\n", i);
		i++;
	}
	system("pause");
	return 0;
}
