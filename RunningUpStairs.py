def fib(n):
 a = 1;
 b = 1;
 for i in range(n):
     c = a+b;
     a=b;
     b=c;
 return a
 
t = int(input())
for i in range(t):
    n = int(input())
    print(fib(n))
