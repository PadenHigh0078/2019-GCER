  #define rightIR 5
#define leftIR 1
#define lightsensor 0
#define Rmotor 0
#define Lmotor 3
#define frontIR 5
void rightlinefollowslow(int distance) // forward
{
    cmpc(Rmotor);
    cmpc(Lmotor);
    while ((gmpc(Rmotor)+gmpc(Lmotor))/2 < distance)
    {
        mav(Rmotor, .65*.35*  (3400 - analog(leftIR)));
     
        mav(Lmotor, .85*  analog(leftIR));
    }
}




void leftlinefollowslow(int distance) // forward
{
    cmpc(Rmotor);
    cmpc(Lmotor);
    while ((gmpc(Rmotor)+gmpc(Lmotor))/2 < distance)
    {
        mav(Rmotor, .34*.5*    analog(frontIR));
     
        mav(Lmotor, .14*    (3400 - analog(frontIR)));
    }
}






