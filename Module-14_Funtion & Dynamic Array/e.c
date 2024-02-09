#include<stdio.h>
#include<string.h>

void  swap(char **a, char **b) 
{
  char *tmp = *a;
  *a = *b;
  *b = tmp;
}

int lexicographic_sort(const char* a, const char* b) 
{
  return (strcmp(a, b) > 0);
}

int lexicographic_sort_reverse(const char* a, const char* b) {
  return (strcmp(a, b) < 0);
}

int sort_by_number_of_distinct_characters(const char* a, const char* b) {
  /* Frequency arrays for counting 
  occurences of characters in both strings */
  int x1[27] = { [0 ... 26] = 0 };
  int x2[27] = { [0 ... 26] = 0 };
  int c1 = 0;
  int c2 = 0;
  /* ex: if a[i] == 'a' then 
  a[i] - 'a' will hold the index 0 for c == 'a' */
  for (int i = 0; i < strlen(a); i++)
    x1[a[i] - 'a'] = 1; 
  for (int i = 0; i < strlen(b); i++)
    x2[b[i] - 'a'] = 1;
  for (int i = 0; i < 27; i++) {
  /* check if the character is unique */
    if (x1[i] && !x2[i])
      c1++;
    if (!x1[i] && x2[i])
      c2++;
  }
  if (c1 == c2)
    return lexicographic_sort(a, b);
  return (c1 > c2);
}

int sort_by_length(const char* a, const char* b) {
  if (strlen(a) == strlen(b))
    return lexicographic_sort(a, b);
  return (strlen(a) > strlen(b));
}

void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b)){
  for (int i = 0; i + 1 < len; i++) {
    if ((*cmp_func)(arr[i], arr[i + 1])) {
      swap(&arr[i], &arr[i + 1]);
      i = -1;
    }
  }
}
int main()
{

   
  string_sort(55,5,4);
  return 0;
}