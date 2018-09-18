package Task1;

import java.util.Scanner;

public class CircleTest {
    public static void main(String[] args){
        double radius = 0;
        Scanner scan = new Scanner(System.in);
        if(scan.hasNextDouble())
        {
            radius = scan.nextDouble();
        }
        else
        {
            System.out.println("eh");
        }
        Circle circle_1 = new Circle(radius);
        System.out.println(circle_1.getCircumference());
        System.out.println(circle_1.getSurfaceArea());
        if(scan.hasNextDouble())
        {
            radius = scan.nextDouble();
        }
        else
        {
            System.out.println("eh");
        }
        circle_1.setRadius(radius);
        System.out.println(circle_1.getCircumference());
        System.out.println(circle_1.getSurfaceArea());
    }
}
