#include "phi.h"
#include "what.h"
#include "what_0.4985.h"
#include "ymean.h"
#include "ystd.h"
#include "pk_m.h"
#include "gsl/gsl_matrix.h"
#include "gsl/gsl_linalg.h"
#include "gsl/gsl_blas.h"
#include "gsl/gsl_spline.h"

double rho_w[30][10] = {
0.757000,0.563000,0.582000,0.253000,0.390000,0.088000,0.039000,0.006000,0.020000,0.138000,
0.342000,0.291000,0.174000,0.061000,0.064000,0.692000,0.457000,0.001000,0.023000,0.454000,
0.923000,0.439000,0.053000,0.354000,0.375000,0.072000,0.000000,0.007000,0.144000,0.030000,
0.988000,0.919000,0.776000,0.833000,0.581000,0.597000,0.053000,0.008000,0.504000,0.039000,
0.812000,0.684000,0.792000,0.398000,0.053000,0.355000,0.173000,0.001000,0.010000,0.000000,

0.893000,0.597000,0.417000,0.449000,0.010000,0.005000,0.072000,0.114000,0.116000,0.609000,
0.558000,0.276000,0.113000,0.106000,0.016000,0.010000,0.122000,0.644000,0.279000,0.024000,
0.956000,0.790000,0.711000,0.374000,0.663000,0.890000,0.408000,0.611000,0.150000,0.225000,
0.994000,0.839000,0.831000,0.943000,0.653000,0.474000,0.773000,0.123000,0.345000,0.520000,
0.890000,0.903000,0.745000,0.327000,0.149000,0.486000,0.200000,0.144000,0.224000,0.316000,

0.713000,0.629000,0.422000,0.050000,0.084000,0.036000,0.110000,0.274000,0.078000,0.120000,
0.636000,0.122000,0.096000,0.050000,0.001000,0.000000,0.072000,0.505000,0.033000,0.098000,
0.952000,0.933000,0.923000,0.826000,0.286000,0.085000,0.562000,0.502000,0.192000,0.091000,
0.996000,0.942000,0.982000,0.903000,0.775000,0.607000,0.559000,0.891000,0.425000,0.520000,
0.877000,0.674000,0.644000,0.443000,0.302000,0.047000,0.127000,0.299000,0.013000,0.177000,

0.765000,0.601000,0.384000,0.109000,0.059000,0.073000,0.053000,0.091000,0.050000,0.100000,
0.758000,0.228000,0.163000,0.057000,0.008000,0.005000,0.150000,0.052000,0.047000,0.131000,
0.959000,0.947000,0.795000,0.888000,0.577000,0.126000,0.212000,0.283000,0.251000,0.263000,
0.995000,0.977000,0.947000,0.981000,0.463000,0.513000,0.953000,0.210000,0.423000,0.213000,
0.839000,0.807000,0.538000,0.301000,0.218000,0.027000,0.319000,0.108000,0.508000,0.043000,

0.754000,0.644000,0.336000,0.175000,0.096000,0.011000,0.273000,0.187000,0.154000,0.139000,
0.723000,0.240000,0.192000,0.097000,0.004000,0.002000,0.151000,0.003000,0.107000,0.128000,
0.943000,0.902000,0.884000,0.922000,0.764000,0.033000,0.271000,0.002000,0.765000,0.532000,
0.991000,0.976000,0.959000,0.972000,0.863000,0.190000,0.766000,0.673000,0.053000,0.519000,
0.826000,0.718000,0.699000,0.405000,0.310000,0.064000,0.662000,0.016000,0.167000,0.051000,

0.813000,0.633000,0.461000,0.310000,0.132000,0.052000,0.077000,0.040000,0.091000,0.061000,
0.689000,0.156000,0.248000,0.109000,0.041000,0.000000,0.219000,0.002000,0.046000,0.191000,
0.960000,0.946000,0.877000,0.969000,0.849000,0.060000,0.594000,0.479000,0.562000,0.043000,
0.993000,0.982000,0.974000,0.986000,0.898000,0.149000,0.488000,0.042000,0.904000,0.879000,
0.797000,0.633000,0.585000,0.573000,0.092000,0.090000,0.681000,0.025000,0.437000,0.075000}; 



double lambda_w[60] = 
  {
    0.450000,
    0.350000,
    0.350000,
    0.250000,
    0.250000,
    0.250000,
    0.250000,
    0.250000,
    0.250000,
    0.250000,
    0.200000,
    0.300000,
    0.300000,
    0.150000,
    0.150000,
    0.150000,
    0.200000,
    0.200000,
    0.200000,
    0.200000,
    0.200000,
    0.300000,
    0.350000,
    0.200000,
    0.150000,
    0.100000,
    0.150000,
    0.250000,
    0.150000,
    0.200000,
    0.300000,
    0.300000,
    0.400000,
    0.200000,
    0.150000,
    0.150000,
    0.200000,
    0.200000,
    0.150000,
    0.200000,
    0.300000,
    0.300000,
    0.400000,
    0.200000,
    0.150000,
    0.150000,
    0.150000,
    0.100000,
    0.200000,
    0.150000,
    0.250000,
    0.250000,
    0.450000,
    0.150000,
    0.150000,
    0.100000,
    0.200000,
    0.100000,
    0.250000,
    0.150000};



double lambdaP[6] = {3592804.541319, 9268792.334669, 9990100.179496, 9906178.839203, 10266886.618848, 8765425.086342}; 


/* extern float min_design[5];  */
/* extern float max_design[5];  */
/* extern int nM, numPC, nmodels, nparams;  */

/* int nM = 100;   // Number of mass bins */
/* int numPC = 3;    // Number of pricipal components */
/* int nmodels = 37; // How many models to cover parameter space */
/* int nparams = 5; // Number of cosmological parameters */

