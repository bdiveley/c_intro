//must state the type is a struct because I'm utilizing that struct within the struct definition itself
typedef struct node
{
  int n;
  // address of next node
  struct node *next
}
node;
