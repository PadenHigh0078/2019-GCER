#include <kipr/botball.h>
#include <yoyo.h>
#include <cras.h>
                                       // int rmotor=0;
                                        //int lmotor=3;
							
                                 
                                        int fc=0; // front claw bruh
                                        int close=1355;
                                        int open=700;
										int count=0;
int main()
{	enable_servos();
    printf("Hello World\n");
   		 set_servo_position(fc, close);
 		mav(lmotor,1000);
      	mav(rmotor,50);
  	 	msleep(1500);
    printf("Somebody once told me");rightlinefollowslow(3000);
	mav(lmotor,810);//820
      	mav(rmotor,900);
  	 	msleep(5900);
 
   set_servo_position(fc, open-75);
 msleep(500);
 
 //leftlinefollowslow(250);//1575	. 1720/////750
 		mav(lmotor,250);
      	mav(rmotor,250);
  	 	msleep(700);
 
while(count<6){ 
    mav(lmotor,700);
      	mav(rmotor,700);
  	 	msleep(475);//475
    leftlinefollowslow(585);//1575	. 1720 . . . 900. . . . 750...450
 		mav(lmotor,0);
      	mav(rmotor,0);
  	 	msleep(500);
    set_servo_position(fc, close);
 	 msleep(200);
  
  set_servo_position(fc, close);
	msleep(850);
  		mav(lmotor,0);
      	mav(rmotor,0);
  	 	msleep(500);
    set_servo_position(fc, close);
        msleep(850);
 mav(lmotor,-700);
 mav(rmotor,-700);
 msleep(1000);
    set_servo_position(fc, close);
msleep(650);
    
 set_servo_position(fc, open);
 msleep(500);
     mav(lmotor,700);
 mav(rmotor,700);
 msleep(700);//350
 count++;}
 
		   set_servo_position(fc, close);
  	mav(lmotor,400);
 	mav(rmotor,400);
	msleep(1500);
              mav(lmotor,300);
             mav(rmotor,-300);
             msleep(4000);
   mav(lmotor,1200);
 mav(rmotor,1200);
 msleep(1000);
         rightlinefollowslow(1500);
          mav(lmotor,0);
         mav(rmotor,600);
         msleep(4000);
    set_servo_position(fc, open);
        msleep(850);
 mav(lmotor,-700);
 mav(rmotor,-700);
 msleep(1000);
    set_servo_position(fc, close);
msleep(650);
   mav(lmotor,600);
         mav(rmotor,0);
         msleep(4000);
                                  rightlinefollowslow(1500);  
                                   mav(lmotor,0);
                                         mav(rmotor,600);
                                         msleep(4000);
                                    set_servo_position(fc, open);
                                        msleep(850);
                                 mav(lmotor,-700);
                                 mav(rmotor,-700);
                                 msleep(1000);
                                    set_servo_position(fc, close);
                                msleep(650);

 
/* 	set_servo_position(fc, open);
   	mav(lmotor,800);
      mav(rmotor,700);
  	 msleep(750);
 leftlinefollowslow(2500);//1575
    
                                                       
                                                              set_servo_position(fc, close);
                                                                mav(lmotor,-400);
                                                                mav(rmotor,-400);
                                                                msleep(4545);
                                                                     set_servo_position(fc, open);
                                                             msleep(500);
                                                                 mav(lmotor,400);
                                                                mav(rmotor,400);
                                                                msleep(645);
                                                             set_servo_position(fc, close);*/
    return 0;
}
