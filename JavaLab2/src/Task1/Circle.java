package Task1;

public class Circle {
    static double pi = 3.14;
    private double radius;
    private double circumference;
    private double surfaceArea;

    public Circle(double radius){
        this.radius = radius;
    }
    public double getRadius(){
        return radius;
    }

    public void setRadius(double radius) {
        this.radius = radius;
    }

    public double getCircumference() {
        this.circumference = 2*pi*radius;
        return circumference;
    }

    public double getSurfaceArea() {
        this.surfaceArea = pi * Math.pow(radius, 2);
        return surfaceArea;
    }
}
