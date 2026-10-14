//done


#include<stdio.h>

int main(){
	float point, cart_value, discount, payable, new_point;
	printf("Enter cart value & point:");
	scanf("%f %f", &cart_value, &point);
	payable = cart_value;
	if(cart_value > 5000){
		discount = cart_value * 20 / 100;
		if(discount >= 1200){
			discount = 1200;
		}
	}
	else if(cart_value >= 2000 && cart_value <= 3000 && cart_value != 2027){
		discount = cart_value * 5 / 100;
	}
	else if(cart_value == 2027){
		discount = 270;
	}
	else if(cart_value > 3000 || cart_value >= 500){
		discount = 50;
	}

	float temp_value = cart_value - discount;
	float point_discount = point / 400;
	if(temp_value >= point_discount){
		cart_value = temp_value - point_discount;
		new_point = point - point_discount*400;
	}
	else{
		new_point = (point_discount - cart_value)*400;
		point_discount = cart_value;
		cart_value = 0;
	}
	float new_card = new_point + payable * 50;
	printf("Total value = %f", payable);
	printf("\nTotal discount = %f", point_discount + discount);
	printf("\nTotal payable = %f", cart_value);
	printf("\nNew card point = %f", new_card);
	return 0;
}