#include "TString.h"

// Privates Functions
int str_len(const char c[]){
  int len = 0 ;
  if(){while(c[len] != '/0'){
      len ++;
    }
    
  return len;}
    
}

// Publics functions
TString *create_empty_str()
{
    return NULL;
}

TString *create_string(const char str[])
{    
  int len  = str_len(c);
  int n_blocks = (len / STR_BLOCK) + 1;
  TString *s1 = malloc(sizeof(TString));
  s1->str = (char*)calloc(STR_BLOCK, sizeof(char));
  // s1->str[0] = '\0'
  s1->length = 0;
  s1->n_blocks = 1;
  if(len > 0 ){
    int i;
    for(i = 0; i<= len; i++){
      str-
    }
  }
  return s1;
}

int append(TString *str1, TString *str2)
{
    return OP_OK;
}

TString *substring(TString *str1, int start, int end, int *status)
{
    return NULL;
}
