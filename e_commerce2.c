// revise deya hoy nai



#include<stdio.h>
int main(){
    int k, i;
    float sum1=0,sum2=0,sum3=0;
    printf("Do you want to use cart point?(YES=1 / NO=0):");
    scanf("%d", &k);
    
    if(k==1){
            float point, cart_value, discount, payable, new_point;
	        printf("\nEnter cart value & point:");
	        scanf("%f %f", &cart_value, &point);
	        if(cart_value==-1){
	            printf("\nTotal purchase = 0 tk");
                printf("\nTotal discount = 0 tk");
                printf("\nTotal card point = 0 tk");
	        }
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
	        float total_value = payable;
	        float total_discount = point_discount + discount;
	        float total_cardpoint = new_card;
	        sum1=sum1+total_value;
	        sum2=sum2+total_discount;
	        sum3=sum3+total_cardpoint;
        	printf("Total value = %f", payable);
        	printf("\nTotal discount = %f", point_discount + discount);
	        printf("\nTotal payable = %f", cart_value);
        	printf("\nNew card point = %f", new_card);
        
       
        float point1 = total_cardpoint;
        for(i=1; ;i++){
           
           
	        printf("\nEnter cart value :");
	        scanf("%f", &cart_value);
	       
	        if(cart_value==-1){
	            break;
	        }
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
	        float point_discount = point1 / 400;
	        if(temp_value >= point_discount){
	        	cart_value = temp_value - point_discount;
		        new_point = point1 - point_discount*400;
	        }
	        else{
                point_discount = temp_value;
                cart_value = 0;

                new_point = point1 - point_discount * 400;
            }
	        float new_card = new_point + payable * 50;
	      
	        float total_value = payable;
	        float total_discount = point_discount + discount;
	        float total_cardpoint = new_card;
	        point1 = new_card;
	        
	        sum1=sum1+total_value;
	        sum2=sum2+total_discount;
	        sum3=sum3+total_cardpoint;
        	printf("Total value = %f", payable);
        	printf("\nTotal discount = %f", point_discount + discount);
	        printf("\nTotal payable = %f", cart_value);
        	printf("\nNew card point = %f", new_card);
        }
        printf("\nTotal purchase = %f tk", sum1);
        printf("\nTotal discount = %f", sum2);
        printf("\nTotal card point = %f", sum3);
    }
    else{
        for(i=1; ;i++){
            float cart_value, discount, payable, new_point;
	        printf("\nEnter cart value:");
	        scanf("%f", &cart_value);
	        if(cart_value==-1){
	            break;
	        }
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
	        
	        
	        
	        float total_value = payable;
	        float total_discount = discount;
	       
	        sum1=sum1+total_value;
	        sum2=sum2+total_discount;
        	printf("Total value = %f", payable);
        	
            printf("\nTotal payable = %f", temp_value);
        	
        }
        printf("\nTotal purchase = %f tk", sum1);
        printf("\nTotal discount = %f", sum2);
        
    }
    return 0;
}