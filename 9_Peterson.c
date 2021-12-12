 #include<stdio.h>
 #include<conio.h>
 #include<math.h>

// 9. Write a program to check whether a number is Peterson (xyz=x!+y!+z!).

int main () {
  int n,t;
  int a,b,c=1,s=0;
  printf ("Calculating Peterson number\n\n");
  printf ("Enter a number: ");
  scanf ("%d", &n);
  t=n;
  while (n>0){
    a=n%10;//a=3
    for (b=a;b>=1;b--){
      c*=b;//c=c*b;//factorial of the digit
    }
    s+=c;//s=s+c;
    c=1;//
    n=n/10;
  }
  (t==s)?
  printf ("%d is Peterson number\n", t)
  :
  printf ("%d is not Peterson number\n", t);
  return 0;
}