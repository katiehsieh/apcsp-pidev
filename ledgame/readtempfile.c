#include <stdio.h>
#include "main.h"

void readtempfile() {
  FILE *fp;
  fp = fopen(".tempfile","r");
  fread(&color, sizeof(color), 1, fp);
  fread(&score, sizeof(score), 1, fp);
  fclose(fp);
}

