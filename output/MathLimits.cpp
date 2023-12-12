#include "stdafx.h"
#include "header.h"
double MathLimits::dblMax(char* stackStartPtr){
   char SPR_stack_dummy_var;
   double ret;
   
         ret = DBL_MAX;
      
   return ret;
   
   
} //End Of Method

double MathLimits::dblMin(char* stackStartPtr){
   char SPR_stack_dummy_var;
   double ret;
   
         ret = DBL_MIN;
      
   return ret;
   
   
} //End Of Method

double MathLimits::dblLowest(char* stackStartPtr){
   char SPR_stack_dummy_var;
   double ret;
   
         ret = std::numeric_limits<double>::lowest();
      
   return ret;
   
   
} //End Of Method

