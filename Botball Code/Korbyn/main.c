int main()
{
    printf("Hello World\n");
   
    enable_servos();
   
    set_servo_position(0,1100);
    msleep(1000);
   
    set_servo_position(3,1608);
    msleep(1000);
   
    motor(0,55);
    motor(3,70);
    msleep(4450);
   
    motor(0,70);
    motor(3,70);
    msleep(1700);
   
    motor(0,0);
    motor(3,0);
    msleep(100);
   
    set_servo_position(0,1240);
    msleep(1000);
   
    set_servo_position(3,1940);   //grab hamburger
    msleep(1000);
   
    set_servo_position(0,1000);
    msleep(1000);
   
    motor(0,-60);
    motor(3,-70);
    msleep(2000);
   
    motor(0,-70);
    motor(3,70);
    msleep(1400);
   
    motor(0,70);
    motor(3,70);
    msleep(3600);
   
    motor(0,30);
    motor(3,70);
    msleep(1900);
   
    motor(0,0);
    motor(3,0);
    msleep(100);
   
    set_servo_position(0,1400);   //drop hamburger
    msleep(1000);
   
    set_servo_position(3,1660);
    msleep(1000);
   
    motor(0,-30);
    motor(3,-70);
    msleep(5400);
   
    set_servo_position(0,1100);
    msleep(1000);
   
    motor(0,70);
    motor(3,70);
    msleep(4700);
   
    motor(0,0);
    motor(3,0);
    msleep(100);
   
    set_servo_position(3,2000);   //grab hotdog
    msleep(1000);
   
    set_servo_position(0,1000);
    msleep(1000);
   
    motor(0,-60);
    motor(3,-70);
    msleep(2000);
   
    motor(0,-70);
    motor(3,70);
    msleep(1500);
   
    motor(0,70);
    motor(3,70);
    msleep(4600);
   
    motor(0,0);
    motor(3,70);
    msleep(1400);
   
    motor(0,0);
    motor(3,0);
    msleep(100);
   
    set_servo_position(0,1400);
    msleep(1000);
   
    set_servo_position(3,1608);   //drop hotdog
    msleep(1000);
   
    set_servo_position(0,1100);
    msleep(1000);
   
    motor(0,-70);
    motor(3,-70);
    msleep(1800);
   
    motor(0,0);
    motor(3,70);
    msleep(2700);
   
    motor(0,70);
    motor(3,70);
    msleep(2900);
   
    motor(0,0);
    motor(3,70);
    msleep(1500);
   
    motor(0,70);
    motor(3,70);
    msleep(1400);
   
    motor(0,0);
    motor(3,0);
    msleep(100);
   
    set_servo_position(0,1275);   //grab taco
    msleep(1000);
   
    set_servo_position(3,2047);
    msleep(1000);
   
    motor(0,0);
    motor(3,0);
    msleep(100);
   
    set_servo_position(0,1000);
    msleep(1000);
   
    motor(0,-70);
    motor(3,-70);
    msleep(2000);
   
    motor(0,0);
    motor(3,70);
    msleep(2800);
   
    motor(0,70);
    motor(3,70);
    msleep(4500);
   
    motor(0,0);
    motor(3,70);
    msleep(1420);
   
    motor(0,0);
    motor(3,0);
    msleep(100);
   
    set_servo_position(0,1400);   //drop taco
    msleep(1000);
   
    set_servo_position(3,1660);
    msleep(1000);
   
    motor(0,0);
    motor(3,0);
    msleep(100);
   
    motor(0,-70);
    motor(3,-70);
    msleep(1500);
   
    motor(0,70);
    motor(3,0);
    msleep(1800);
   
    motor(0,70);
    motor(3,70);
    msleep(5700);
   
    motor(0,70);
    motor(3,0);
    msleep(1650);
   
    motor(0,70);
    motor(3,70);
    msleep(125);
   
    motor(0,0);
    motor(3,0);
    msleep(100);
   
    set_servo_position(0,1550);
    msleep(1000);
   
    set_servo_position(3,1957);   //grab potato
    msleep(1000);
   
    return 0;
}
