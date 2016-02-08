 
class circleType
{
public:
    void setRadius(double r);
      //Function to set the radius.
      //Postcondition: if (r >= 0) radius = r;
      //               otherwise radius = 0;

    double getRadius();
      //Function to return the radius.
      //Postcondition: The value of radius is returned.

    double area();
      //Function to return the area of a circle.
      //Postcondition: Area is calculated and returned.

    double circumference();
      //Function to return the circumference of a circle.
      //Postcondition: Circumference is calculated and returned.

	void printCircleProperties();
	//Function to print the value of the circle's: radius, area,
	//and circumference
	//Postcondition: The radius, area, and circumference of the circle
	//are printed

    circleType(double r = 0);
      //Constructor with a default parameter.
      //Radius is set according to the parameter.
      //The default value of the radius is 0.0;
      //Postcondition: radius = r;

private:
    double radius;
};
