//need to use the uaccess library o copy result to long pointer
#include <linux/kernel.h>
#include <linux/linkage.h>


asmlinkage long sys_csci3753_mult(int number1, int number2, long *result)
{
//using temp var to store rsult value before I copy it into user space
long temp;

//logging nums
printk(KERN ALERT "Input 1 is the Number: %d\n", number1);
printk(KERN ALERT "Input 2 is the Number: %d\n", number2);

//multiply and print result
temp = number1 * number2;
printk(KERN ALERT "And the result is: %ld\n", temp);


result = &temp;

//check for overflow failure and return -1 if so, else 0
if(a == 0 && temp == 0)
{
return 0;
}
else if (temp / a != b)//failure
{
return -1;
}
else
{
return 0;
}
