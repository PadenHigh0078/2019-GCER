#include <kipr/botball.h>
#include <panda.h>
int main()
{
    // 0 left
    // 1 right
    
    // 3 servo = big servo
    // 0 servo = right mini
    // 2 servo = left mini
    // 1 servo = grabber open = 917
   
    // 0 left
    // 1 right
    
    // 3 servo = big servo
    // 0 servo = right mini
    // 2 servo = left mini
    // 1 servo = grabber open = 917
    enable_servos();
        set_servo_position(3,1295);
      msleep(500);
        set_servo_position(2,1024);
      msleep(100);
        set_servo_position(0,1024);
      msleep(100);
        set_servo_position(1,1907);
      msleep(100); // setiing up
    
    printf("Hello World\n");
    mav(0,800);
    mav(1,850);
    msleep(9200);
    
    mav(1,1000);
    mav(0,-1000);
    msleep(800);
    
        mav(0,-1200);
    mav(1,-1300);
    msleep(2000);// square up 
    
  
    
    mav(1,820);
    mav(0,800);
msleep(3800);
    
    
    
    
    
    
          set_servo_position(3,630);
      msleep(500);// getting low
        set_servo_position(2,2000);
      
        set_servo_position(0,0);
      msleep(500);
    

        mav(1,820);
    mav(0,800);
msleep(700);
    
            set_servo_position(2,1500);
      
        set_servo_position(0,512);
      msleep(500);
    
           set_servo_position(2,1280);
      
        set_servo_position(0,768);
      msleep(500);
            set_servo_position(2,1024);
      
        set_servo_position(0,1024);
      msleep(500);// slowly closing the claw
    
    
            mav(1,-520);
    mav(0,-500);
msleep(100);// backing up with poms
    
    set_servo_position(3,200);
    msleep(500);
    
      set_servo_position(3,300);
    msleep(500);
      set_servo_position(3,400);
    msleep(500);  
    set_servo_position(3,450);
    
    msleep(500);    
    set_servo_position(3,510);
    msleep(500);
        set_servo_position(3,600);
    msleep(500);// slowly raising the claw
 
 
    mav(0,-900);
    mav(1,-80);
    msleep(1600);
    
      
    
mav(0,-800);
    mav(1,-820);
    msleep(2000);
    
     set_servo_position(3,100);
      msleep(100);// getting low
     set_servo_position(1,917);
      msleep(100);// opening grabber
           set_servo_position(2,1500);
      
        set_servo_position(0,500);
      msleep(500);
          set_servo_position(2,2000);
      
        set_servo_position(0,0);
      msleep(500);
    
        
mav(0,400);
    mav(1,410);
    msleep(5250);
    msleep(50);
    
           set_servo_position(2,1200);
      
        set_servo_position(0,512);
      msleep(500);
       set_servo_position(2,1390);
      
        set_servo_position(0,640);
      msleep(500);// kdmklfkdnfnbfjgfjhgjh
    
           set_servo_position(2,1280);
      
        set_servo_position(0,768);
      msleep(500);
           set_servo_position(2,1152);
      
        set_servo_position(0,896);
      msleep(500);
            set_servo_position(2,1024);
      
        set_servo_position(0,1024);
      msleep(500);// slowly closing the claw
    
        
    set_servo_position(3,200);
    msleep(500);
    
      set_servo_position(3,310);
    msleep(500);
      set_servo_position(3,400);
    msleep(500);
         set_servo_position(3,500);
    msleep(500);
         set_servo_position(3,600);
    msleep(500);
         set_servo_position(3,700);
    msleep(500);
        set_servo_position(3,700);
    msleep(500);// slowly raising the claw
    
    mav(1,600);
    mav(0,500);
    msleep(1789);
    
    mav(0,-600);
    mav(1,10);
    msleep(1780);
    
    mav(1,520);
    mav(0,500);
        msleep(900);
    
            set_servo_position(0,0);
         set_servo_position(2,2000);
    msleep(500);
        


 

    return 0;
}
