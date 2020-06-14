void gcd () {
	int temp; // helping variable
	int x,y;

	scanf("%d",&x);
	scanf("%d",&y);

	while(y!=0){
		temp = y;
		y = x % y;
		x = temp;
	}
	printf("GCD is %d",x);
}