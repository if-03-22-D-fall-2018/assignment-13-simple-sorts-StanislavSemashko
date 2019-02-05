/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: 22DHIF
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			sorting_algorithms.cpp
 * Author(s):		Siamashka Stanislau
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/
#include "general.h"
#include <cstdlib>
#include <cstdbool>
#include <time.h>
#include "sorting_algorithms.h"

void init_random(int the_array[], int len)
{
  srandom(time(NULL));
  for (unsigned long i = 0; i < len; i++)
  {
    the_array[i] = random();
  }
}
void bubble_sort(int the_array[], int len)
{

}
void insertion_sort(int the_array[], int len)
{

}
