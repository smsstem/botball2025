 int arm = 0;
    int down = 2010;
    int claw = 1;
    int open = 690;
    // up1760;
    int close = 1106;
    enable_servos();
   
    motor(0,80);
    motor(1,80);
    motor(2,80);
    motor(3,80);
    msleep(3000);
   
    motor(0,-100);
    motor(1,80);
    motor(2,-100);
    motor(3,80);
    msleep(1390);
   
    motor(0,-100);
    motor(1,80);
    motor(2,80);
    motor(3,80);
    msleep(100);
   
    motor(0,-100);
    motor(1,80);
    motor(2,80);
    motor(3,80);
    msleep(300);
   
   
   
    motor(0,80);
    motor(1,80);
    motor(2,80);
    motor(3,80);
    msleep(2000);
   
    motor(0,80);
    motor(1,80);
    motor(2,80);
    motor(3,80);
    msleep(2000);
   
    motor(0,80);
    motor(1,80);
    motor(2,80);
    motor(3,-100);
    msleep(100);
   
    motor(0,80);
    motor(1,80);
    motor(2,80);
    motor(3,80);
    msleep(2000);
   
    motor(0,80);
    motor(1,80);
    motor(2,80);
    motor(3,-100);
    msleep(100);
   
    motor(0,80);
    motor(1,80);
    motor(2,80);
    motor(3,80);
    msleep(1000);
   
    motor(0,-100);
    motor(1,80);
    motor(2,80);
    motor(3,80);
    msleep(100);
   
    motor(0,80);
    motor(1,80);
    motor(2,80);
    motor(3,80);
    msleep(2000);
   
    motor(0,80);
    motor(1,80);
    motor(2,80);
    motor(3,80);
    msleep(1000);
   
    motor(0,-100);
    motor(1,80);
    motor(2,80);
    motor(3,80);
    msleep(500);
   
    motor(0,80);
    motor(1,80);
    motor(2,80);
    motor(3,80);
    msleep(3900);
   
    motor(0,-100);
    motor(1,80);
    motor(2,80);
    motor(3,80);
    msleep(100);
   
    motor(0,80);
    motor(1,80);
    motor(2,80);
    motor(3,-100);
    msleep(100);
   
   
   
    motor(0,-80);
    motor(1,-80);
    motor(2,-80);
    motor(3,-80);
    msleep(6000);
   
    motor(0,-100);
    motor(1,80);
    motor(2,-100);
    motor(3,80);
    msleep(2300);
   
    motor(0,-100);
    motor(1,80);
    motor(2,80);
    motor(3,80);
    msleep(600);
   
    //motor(0,0);
    //motor(1,0);
    //motor(2,0);
    //motor(3,0);
    //msleep(10);
   
    //set_servo_position(claw,682);
    //msleep(1000);
   
   
    motor(0,80);
    motor(1,80);
    motor(2,80);
    motor(3,80);
    msleep(900);
   
   
    motor(0,-80);
    motor(1,80);
    motor(2,80);
    motor(3,80);
    msleep(915);
   
    motor(0,-80);
    motor(1,-80);
    motor(2,-80);
    motor(3,-80);
    msleep(1000);
   
    motor(0,0);
    motor(1,0);
    motor(2,0);
    motor(3,0);
    msleep(1000);
   
    set_servo_position(claw,open);
    msleep(1000);
     
    set_servo_position(arm,down);
    msleep(1000);
   
    motor(0,80);
    motor(1,80);
    motor(2,80);
    motor(3,80);
    msleep(1100);
   
    motor(0,0);
    motor(1,0);
    motor(2,0);
    motor(3,0);
    msleep(1000);
   
   
   
    set_servo_position(claw,close);
    msleep(1000);
   
    set_servo_position(arm,1073);
    msleep(1000);
   
    motor(0,-80);
    motor(1,-80);
    motor(2,-80);
    motor(3,-80);
    msleep(200);
   
    motor(0,80);
    motor(1,-100);
    motor(2,80);
    motor(3,-100);
    msleep(1000);
   
    motor(0,80);
    motor(1,80);
    motor(2,80);
    motor(3,80);
    msleep(1000);
   
    motor(0,-100);
    motor(1,80);
    motor(2,80);
    motor(3,80);
    msleep(1000);
    return 0;
}