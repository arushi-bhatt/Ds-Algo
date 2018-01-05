/* Some basic Recursion questions
index   :   1.Multiplication
            2.Count Zeros in an integer
            3.geometric sum
            4.check pallindrome
            5.sum of digits
*/


// Multiplication(Recursion)
//Given two integers m & n, calculate and return their multiplication using recursion. You can only use
//subtraction and addition for your calculation. No other operators are allowed.
						int multiplyNumbers(int m, int n) {
						    if(n==1)
                                return m;

						    return m+multiplyNumbers(m,n-1);
						}

//**********************************************************************************************************

//Count Zeros
//Given an integer n, count and return the number of zeros that are present in the given integer using
//recursion



								int countZeros(int n) {
								    if(n/10==0)
                                        return 0;

								    if(n%10==0)
                                        return 1 + countZeros(n/10);

								    else return countZeros(n/10);
								}
//***************************************************************************************************
//
//Geometric Sum
//Given k, find the geometric sum i.e.

//1 + 1/2 + 1/4 + 1/8 + ... + 1/(2^k)

//using recursion. Return the answer.
										double power (double n, int p)
										{
										    if (p==1)
										        return n;
										    else{
										        if(p%2)
										                return (power(n,p/2)*power(n,p/2)*power(n,1));
										        else return (power(n,p/2)*power(n,p/2));
										    }

										}


										double geometricSum(int k){
										    if(k==0)
                                                return 1;

										    return power(0.5,k)+geometricSum(k-1);

										}

//*******************************************************************************************************

//
//Check Palindrome (recursive)
//Check if a given String is palindrome or not (using recursion). Return true or false.


									bool helper(char input[],int si,int ei)
									{
									    if(si==ei || si>ei)
                                            return true;

									    if(helper(input,si+1,ei-1)&&(input[si]==input[ei]))
                                            return true;

									    return false;
									}


									bool checkPalindrome(char input[]) {
									    int i;
									    for(i=0;input[i]!='\0';i++);
                                            return helper(input,0,i-1);
									}

//******************************************************************************************************
//
//Sum of digits (recursive)
//Write a recursive function that returns the sum of the digits of a given integer

											int sumOfDigits(int n) {

											    if(n/10==0)
                                                    return n;

											    return (n%10 + sumOfDigits(n/10));

											}
//********************************************************************************************************




