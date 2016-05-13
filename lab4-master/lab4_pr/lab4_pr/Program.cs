using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace lab4_pr
{
    class Program
    {
        static void Main(string[] args)
        {
            var rectangle = new Rectangle(10,20);
            Console.WriteLine("Perimetr: "+rectangle.getPerimetr()+" Square: "+rectangle.getSquare());


            var circle = new Circle(10);
            Console.WriteLine("Perimetr: " + circle.getPerimetr() + " Square: " + circle.getSquare());

            var triangle = new Triangle(10, 20,20);
            Console.WriteLine("Perimetr: " + triangle.getPerimetr() + " Square: " + triangle.getSquare());

        }
    }
}
