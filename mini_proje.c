#include<stdio.h>

int main()
{
	char name[50];
	int phone_number;
	int student_id;
	
	int shampoo;
	int hair_cream;
	int hair_spray;
	int body_lotion;
	
	int sugar;
	int tea;
	int cofee;
	int rice;
	int wheat;
	
	int coke;
	int sprite;
	int pepsi;
	int thumbs_up;
	int mojitos;
	
	int total;
	int cosmetics_total;
	int grocery_total;
	int beverage_total;
	
	printf("---------------\n");
	printf("Billing system\n");
	printf("---------------\n");
	printf("Customer details\n\n");
	
	printf("Customer Name: ");
	scanf("%s",&name);
	printf("Student number: ");
	scanf("%d",&phone_number);
	printf("Student Id: ");
	scanf("%d",&student_id);
	
	printf("---------------\n");
	
	printf("COSMETICS\n\n");
	
	printf("Body lotion (RS 30) : ");
	scanf("%d",&body_lotion);
	printf("Hair cream (RS 100) : ");
	scanf("%d",&hair_cream);
	printf("Hair Spray (RS 50) : ");
	scanf("%d",&hair_spray);
	printf("Shampoo (RS 150) : ");
	scanf("%d",&shampoo);
	
	printf("---------------\n");
	
	printf("GROCERIES\n\n");
	
	printf("Sugar (RS 50) : ");
	scanf("%d",&sugar);
	printf("Tea (RS 30) : ");
	scanf("%d",&tea);
	printf("Cofee (RS 40) : ");
	scanf("%d",&cofee);
	printf("Rice (RS 60) : ");
	scanf("%d",&rice);
	printf("Wheat (RS 170) : ");
	scanf("%d",&wheat);
	
	printf("---------------\n");
	
	printf("BEVERAGES\n\n");
	
	printf("Coke (RS 40) : ");
	scanf("%d",&coke);
	printf("Sprite (RS 40) :");
	scanf("%d",&sprite);
	printf("Pepsi (RS 20) : ");
	scanf("%d",&pepsi);
	printf("Thumbs up (RS 20) : ");
	scanf("%d",&thumbs_up);
	printf("Mojitos (RS 50) : ");
	scanf("%d",&mojitos);
	
	printf("---------------\n");
	
	int boso;
	int hc;
	int hs;
	int bosp;
	
	boso = 30*body_lotion;
	hc = 100*hair_cream;
	hs = 50*hair_spray;
	bosp = 150*shampoo;
	cosmetics_total = boso+hc+hs+bosp;
	
	
	printf("Body Lotion : ");
	printf("%d RS\n",boso);
	printf("Hair Cream : ");
	printf("%d RS\n",hc);
	printf("Hair Spray : ");
	printf("%d RS\n",hs);
	printf("Shampoo : ");
	printf("%d RS\n",bosp);
	printf("Total Cosmetic Price : ");
	printf("%d RS\n",cosmetics_total);
	
	printf("---------------\n");
	
	int lobo; 
	int ph;
	int ub; 
	int tl; 
	int uv;
	
	lobo = 50*sugar;
	ph = 30*tea;
	ub = 40*cofee;
	tl = 60*rice;
	uv = 170*wheat;
	
	printf("Sugar : ");
	printf("%d RS\n",lobo);
	printf("Tea : ");
	printf("%d RS\n",ph);
	printf("Cofee : ");
	printf("%d RS\n",ub);
	printf("Rice : ");
	printf("%d RS\n",tl);
	printf("Wheat : ");
	printf("%d RS\n",uv);
	printf("Total Grocery Price : ");
	printf("%d RS\n",grocery_total);
	
	printf("---------------\n");
	
	int sobo;
	int lo;
	int uc;
	int tb;
	int ux;
	
	sobo = 40*coke;
	lo = 40*sprite;
	uc = 20*pepsi;
	tb = 20*thumbs_up;
	ux = 50*mojitos;
 	beverage_total = sobo+lo+uc+tb+ux;
 	 
	printf("Coke : ");
	printf("%d RS\n",sobo);
	printf("Sprite : ");
	printf("%d RS\n",lo);
	printf("Pepsi : ");
	printf("%d RS\n",uc);
	printf("Thumbs Up : ");
	printf("%d RS\n",tb);
	printf("mojitos : ");
	printf("%d RS\n",ux);
	printf("Total Beverage Price : ");
	printf("%d RS\n",beverage_total);
	
	printf("---------------\n");
	
	total = cosmetics_total+grocery_total+beverage_total;
	
	printf("Total Amount : ");
	printf("%d (RS)\n",total);
	
	printf("---------------\n");
	
	printf("-----------------------------------------------------------------------------------\n");
	
	printf("S.R.M Super Market\n\n");
    return 0;
	clrscr;
}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}