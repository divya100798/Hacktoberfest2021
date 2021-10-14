/*Question 5 Solution 
 * 
 *
 *
 *Group : Binary*/

import javax.swing.JOptionPane;

public class income_tax {

	public static void main(String[] args) {
	
		double taxIt = 1,taxed,after_tax = 0;          //Declares and Initializes variables.
		
		
		String input = JOptionPane.showInputDialog( " Enter Annual Salary(no spaces , numbers only) : ");     //Prompts the employee to enter their annual salary. 
		                                                                                         
		double annual_salary = Double.parseDouble(input);
		
		if (annual_salary <= 36000){
			taxed = 0;
			taxIt = 0;
			after_tax = annual_salary - taxIt;
			}
			
		if ( 36000 < annual_salary  && annual_salary <= 72000){
			taxed = annual_salary - 36000;
			taxIt = taxed * 0.05;
			after_tax = annual_salary - taxIt;
			
			}
			
		if ( 72000 < annual_salary && annual_salary <= 108000){       //Checks the category the employee is in and then                
			taxed = annual_salary - 72000;                         //calculates the pre-tax,tax amount and salary post-tax.  
			taxIt = (taxed * 0.125) + 1800;	
			after_tax = annual_salary - taxIt;
			
			}
			
		if ( 108000 < annual_salary && annual_salary <= 144000){
			taxed = annual_salary - 108000;
			taxIt = (taxed * 0.1875) + 6300;
			after_tax = annual_salary - taxIt;
			}
			
		if ( annual_salary > 144000){
			taxed = annual_salary - 144000;
			taxIt = (taxed * 0.25) + 13050;
			after_tax = annual_salary - taxIt;
		  }
		String message = String.format("Annual salary is : P%10.2f ", annual_salary );  //Displays the annual salary pre-tax.
	        String tmessage = String.format( "\n Annual Tax : P%10.2f", taxIt);             //Displays the tax amount.
	        String smessage = String.format( "\n Annual Salary is : P%10.2f", after_tax);   //Displays salary post-tax.
	          
	        JOptionPane.showMessageDialog(null,message + tmessage + smessage);       
	         
		
		}
		
	
			
}					
