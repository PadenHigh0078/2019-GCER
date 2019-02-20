//set_each_analog_state(1,0); 
//msleep(0.02); // set port  0 toFloating
#define rmotor 0
#define lmotor 3

void ET() {
    
        if(analog10(1) > 500)  {
            
            printf("straight\n");
   			 mav(lmotor,600); //left prob
    		 mav(rmotor,600); //right prob
    		 msleep(3000);
        }
           
        if(analog10(1)<=1000) { //close to pvc
        //moving forward
             printf("Leave me alone\n");
            mav(lmotor,400);
            mav(rmotor,350); 
            msleep(1000);
      
        } 
       
        if(analog10(1) < 500)  {printf("Im lonely\n");
            mav(lmotor,325);
            mav(rmotor,400);
            msleep(1000);
 
        }    
 
    }
         

