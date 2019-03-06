#include <kipr/botball.h>
#include <yoyo.h>
#include <cras.h>
                                       // int rmotor=0;
                                        //int lmotor=3;
							
                                 
                                        int fc=0; // front claw bruh
                                        int close=1100;
                                        int open=1500;
										int count=0;
int main()
{	enable_servos();
    printf("Hello World\n");
   		 set_servo_position(fc, close+300);
 		mav(lmotor,1000);
      	mav(rmotor,50);
  	 	msleep(1500);
    set_servo_position(fc, open+200);
 printf("Somebody once told me\n");rightlinefollowslow(3400);//3450
  //set_servo_position(fc, open);
 //msleep(500);
 
	mav(lmotor,830);//820 . . .850 n. 35....25
      	mav(rmotor,900);
  	 	msleep(5850);//5900
mav(lmotor,450); 
      	mav(rmotor,450);
  	 	msleep(200); //700.. .  .1450 . . .100
 
 leftlinefollowslow(550);//1575	. 1720/////750. . . . 250.,m mm,bi y0 450
  set_servo_position(fc, open);
 msleep(500);
 	
 
while(count<7){ printf("that you had a boyfriend that looked like a giiiiirrrlfrieeend\n");
    mav(lmotor,1000);
      	mav(rmotor,1000);
  	 	msleep(300);//475
  leftlinefollowslow(350);//1575	. 1720 . . . 900. . . . 750...450
 		mav(lmotor,0);
      	mav(rmotor,0);
  	 	msleep(500);  
  set_servo_position(fc, close);
	msleep(1050);

 mav(lmotor,-750);
 mav(rmotor,-700);
 msleep(450); //600 ahhh 500
    set_servo_position(fc, close);msleep(650);
                set_servo_position(fc, open+150);
 				msleep(500);mav(lmotor,750);mav(rmotor,700);msleep(600+((count/3)+.53));//350////700 ...33
 count++;}
 
		   set_servo_position(fc, close);
  	mav(lmotor,600);
 	mav(rmotor,600);
	msleep(1500);
              mav(lmotor,300);
             mav(rmotor,-300);
             msleep(2000);
 /////////////////////////////////////////////////
 mav(lmotor,600);
 	mav(rmotor,600);
	msleep(750);
              mav(lmotor,300);
             mav(rmotor,-300);
             msleep(2000);
 ///////////////////////////////////////////////
   mav(lmotor,1200);
 mav(rmotor,1200);
 msleep(2000);//1000
      rightlinefollowslow(3000);
          mav(lmotor,0);
         mav(rmotor,600);
         msleep(4000);
    set_servo_position(fc, open);
        msleep(850);
 mav(lmotor,-700);
 mav(rmotor,-700);
 msleep(1000);
    /*set_servo_position(fc, close);
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

 /////////	set_servo_position(fc, open);
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
