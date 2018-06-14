#include <stdio.h>
#include "main.h"

void writetempfile() {
  FILE *fp;
  fp = fopen("/var/tmp/tempfile","w");
  fwrite(&color, sizeof(color), 1, fp);
  fwrite(&score, sizeof(score), 1, fp);
  fclose(fp);
}

