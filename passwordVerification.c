// done


#include<stdio.h>
int main(){
	char a, e;
	int b, c=0, s=0, sp=0, num=0;
	printf("Length of Password:");
	scanf("%d", &b);
	scanf("%c", &e);
	if(b>=8){
		for(int i=1; ;i++){
		printf("\nENTER YOUR PASSWORD:");
		for(int i=1;i<=b;i++){
			scanf(" %c", &a);
		    if(a>='A' && a<='Z'){
				c=1;	
			}
		    if(a>='a' && a<='z'){
				s=1;
			}
			if(a=='@' ||a=='#' ||a=='/' ||a=='!' ||a=='%'){
				sp=1;
			}
			if(a>='0' && a<='9'){
				num=1;
			}
	    }
	    if(c==1 && s==1 && sp==1 && num==1){
	        printf("DONE");
		break;
	    }
	   	 else{
	       		 if(c==0){
				printf("\nMUST HAVE CAPITAL LATTER!!!!");
		    	}
	    		if(s==0){
		   	 	printf("\nMUST HAVE SMALL LATTER!!!!");
	    		}
	    		if(sp==0){
	    			printf("\nMUST HAVE SPECIAL WORD!!!!");
	    		}
	     		if(num==0){
		    		printf("\nMUST HAVE NUMBER!!!!");
	    		} 
	  	  }
		printf("\nTry Again");
		}
	}
	else{
		printf("!!!! YOUR PASSWORD'S LENGTH MUST BE ATLEAST 8 !!!!");
		}
		
	return 0;
}