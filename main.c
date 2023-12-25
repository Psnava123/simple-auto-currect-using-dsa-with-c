/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int
sort_algo (const void *a, const void *b)
{
  return strcmp ((char *) a, (char *) b);
}

// void perct(){
//      FILE *lern;
//     char *lernp="learn.txt";
//     lern=fopen(lernp,"r");
//      char lrn[500][20];
//     int z=0;
//     while(fscanf(lern,"%s\n",lrn[z])== 1 &&strcmp(lrn[z]," ")>0){
//         z++;
//         printf("hiper");
//     }
//       for(int i=0;strcmp(arr[i]," ")>0;i++)
//     {   
//         for(int j=0;strcmp(lrn[j]," ")>0;j++){
//         if(strcmp(arr[i],lrn[j])==0){
//             strcat(lrn[j],"*");
//             printf("hi");
//             fprintf(lern,"%s\n",lrn[j]);

//         }
// }
// }
// }
void
learn (char mno[][20], char pyq[][20])
{
  int i = 0;
  while (i < 100 && strcmp (mno[i], " ") > 0)
    {
      printf ("%s\n", mno[i]);
      i++;
    }
  printf ("satisfied : yes '1' : no '0'\n");
  int s;
  scanf ("%d", &s);
  if (s == 0)
    {
      printf ("write you result without spelling mistake\n");
      char arr[100][20];
      int a = 0;
      while (strcmp (mno[a], " ") > 0)
	{
	  scanf ("%s", arr[a]);
	  a++;
	  printf ("%d\n", a);
	}
      int p = 0;
      while (p < a)
	{

	  printf ("%s\n", arr[p]);
	  p++;
	}
      FILE *lern;
      char *lernp = "C:\Users\KIIT\Desktop\ai first project\learn (2).txt";
    //   lern = fopen (lernp, "r");

      lern = fopen (lernp, "w");
      int j = 0;
      while (j < a)
	{

	  fputs( arr[j],lern);
	  j++;
	  printf ("%d", j);
	}
	fclose(lern);
	

    }

}



void
ser_algo (char pqr[][20])
{
  char s_arr[20];
  scanf ("%s", s_arr);
  FILE *output;
  char *outputp = "output.txt";
  output = fopen (outputp, "w");
  for (int i = 0; i < 2000; i++)
    {
      if (strncmp (pqr[i], s_arr, strlen (s_arr)) == 0)
	{
	  fprintf (output, "%s\n", pqr[i]);
	  fprintf (output, "%d\n", i);
	}

    }
}

void
dict (char dic[][20])
{
  FILE *input, *inputw;
  char *inputp = "C:\Users\KIIT\Desktop\ai first project\words.txt";
  input = fopen (inputp, "r");
  if (input == NULL)
    {
      printf ("error opening file\n");

    }

  int wc = 0;

  while (fscanf (input, "%s", dic[wc]) == 1 && wc < 2000)
    {
      wc++;
    }
  qsort (dic, wc, sizeof (dic[0]), sort_algo);
//   ser_algo(dic);
//   inputw=fopen(inputp,"w");
//      for(int i=0;i<2000;i++){

//         fprintf(inputw,"%s\n",dic[i]);
//     }



}

void
simmiler (char abc[][20], char mun[][20])
{
  char dmo[20];
  for (int i = 0; i < 100; i++)
    {
      int x = 0;
      strcpy (dmo, abc[i]);
      int j = 0;
      int pos = 0;
      while (j < 2000)
	{
	  int cx = 0;
	  int m = 0;
	  if (dmo[0] == mun[j][0])
	    {
	      for (m = 1; m < 20; m++)
		{
		  if (dmo[m] == mun[j][m])
		    {
		      cx++;

		    }
		  if (cx > x)
		    {
		      x = cx;
		      pos = j;
		    }

		}

	    }
	  j++;
	}
      strcpy (dmo, mun[pos]);
      strcpy (abc[i], dmo);
    }
}

// void correct(char abc[][20],char mun[][20]){

// }

int
main ()
{
  char xyz[2000][20];
  dict (xyz);
  FILE *infl, *inflw;
  char *inflp = "C:\Users\KIIT\Desktop\ai first project\file (2).txt";
  infl = fopen (inflp, "r");
  if (infl == NULL)
    {
      printf ("error opening file\n");

    }

  char we[100][20];
  fscanf (infl, "%s", we[0]);
  int c = 0;
  while (strcmp (we[c], " ") > 0)
    {
      fscanf (infl, "%s", we[c + 1]);
      c++;
    }


  simmiler (we, xyz);
  learn (we, xyz);
  inflw = fopen (inflp, "w");

  // fprintf(inflw,"corrected sentence _\n");

  for (int i = 0; i < 100; i++)
    {

      if (we[i] != " ")
	{
	  fprintf (inflw, "%s\n", we[i]);
	}
    }
  return 0;
}
