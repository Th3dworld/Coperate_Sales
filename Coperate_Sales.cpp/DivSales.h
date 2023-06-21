//This is the soecification file for the division sales class
#ifndef DIVSALES_H
#define DIVSALES_H

/*
* This class will allow a company to keep track of their quarterly sales for different divisions of the company
* It will also allow them to keep the total for all divisions as well
* 
* Matanda Hillary Phiri
*/

class DivSales
{
	//Declare private attributes
	private:
		double quarter_sales[4];//Array that will hold the sales for each quarter of the year
		static double total;//Static variable to hold the total sales for all divisions and quarters
	//Declare public members 
	public:
		//Function that takes four doubles(quarterly sales) as arguments and assigns argument a slot in the quarter sales array
		void take_quart_sales(double q1, double q2, double q3, double q4)
		{
			quarter_sales[0] = q1;
			quarter_sales[1] = q2;
			quarter_sales[2] = q3;
			quarter_sales[3] = q4;
			total += q1 + q2 + q3 + q4;
		
		}

		//Accessor function that takes interger argument(quarter number) and returns amount made in that quarter
		double get_quartFunds(int index)
		{
			return quarter_sales[index];
		}

		double get_Total()
		{
			return total;
		}

};
double DivSales::total = 0;
#endif // !DIVSALES_H
