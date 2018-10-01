/*
	byte 	127			overflow fibonacciIterative(12)
	char 	65535			overflow fibonacciIterative(25
	long 	9223372036854775807L	overflow fibonacciIterative(93)
	short 	32767			overflow fibonacciIterative(24)
	
	Reemplace xxxxx por algun tipo de dato.
*/



public class Fibo {
	
	public xxxxx fibonacciIterative(xxxxx n) {
		if(n <= 1) {
			return n;
		}
		xxxxx fib = 1;
		xxxxx prevFib = 1;
		
		for(xxxxx i=2; i<n; i++) {
			xxxxx temp = fib;
			fib+= prevFib;
			prevFib = temp;
		}
		return fib;
	}
	
	public static void main(String[] args) {
		
	}

}
