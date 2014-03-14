#include <stdio.h>

struct stack {
  int * mem;
  int T; // Stack Pointer
  int M; // Number of nodes
};

int stack_pop(struct stack * stack)
{
  if (stack->T == 0) 
  {
    return -1; // UNDERFLOW
  }
  int Y = stack->mem[stack->T];
  stack->T--;
  return Y;
}

void stack_push(struct stack * stack, int Y)
{
  stack->T++;
  if (stack->T > stack->M)
  {
    return; // OVERFLOW
  }
  stack->mem[stack->T] = Y;
}

int main(int argc, char * argv[])
{
  int buff[12];
  struct stack s;
  s.mem = buff;
  s.T = 0;
  s.M = 12;
  stack_push(&s, 2);
  stack_push(&s, 1);
}