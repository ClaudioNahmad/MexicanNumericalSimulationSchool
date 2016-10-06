float designparams[100][5] = {
0.232323, 0.20202, 0.737374, 0.474747, 0.464646,
0.30303, 0.89899, 0.181818, 0.969697, 0.0606061,
0.383838, 0.585859, 0.606061, 0.464646, 0.040404,
0.414141, 0, 0.838384, 0.646465, 0.575758,
0.929293, 0.292929, 0.555556, 0.59596, 0.616162,
0.777778, 0.0707071, 0.727273, 0.252525, 0.10101,
0.282828, 0.393939, 0.333333, 0.616162, 0.828283,
0.424242, 0.343434, 0.20202, 0.505051, 0.777778,
0.626263, 0.676768, 0.505051, 0.888889, 0.343434,
0.808081, 0.121212, 0.646465, 0.89899, 0.444444,
0.515152, 0.959596, 0.868687, 0.0909091, 0.131313,
0.727273, 0.888889, 0.59596, 0.606061, 0.232323,
0.959596, 0.808081, 0.676768, 0.343434, 0.737374,
0.646465, 0.737374, 0.69697, 0.707071, 0.545455,
0.171717, 0.979798, 0.656566, 0.666667, 0.676768,
0.656566, 0.141414, 0.535354, 0.323232, 0.888889,
0.494949, 0.515152, 0.565657, 0.757576, 0.414141,
0.838384, 0.666667, 0, 0.626263, 0.030303,
0.010101, 0.373737, 0.0505051, 0.69697, 0.0808081,
0.323232, 0.030303, 0.626263, 0.808081, 0.212121,
0.10101, 0.0808081, 0.141414, 0.737374, 0.20202,
0.909091, 0.575758, 0.414141, 0.777778, 0.494949,
0.444444, 0.383838, 0.787879, 1, 0.333333,
0.666667, 0.363636, 0.282828, 0.939394, 0.252525,
0.0505051, 0.59596, 0.767677, 0.131313, 0.989899,
0.737374, 0.555556, 0.020202, 0.989899, 0.606061,
0.848485, 0.818182, 0.747475, 0.212121, 0.909091,
0.818182, 0.353535, 0.454545, 0.020202, 0.191919,
0.969697, 0.171717, 0.0808081, 0.0808081, 0.515152,
0.858586, 0.151515, 0.151515, 0.444444, 0.636364,
0.636364, 0.535354, 0.888889, 0.414141, 0.0707071,
0.0606061, 0.0505051, 0.959596, 0.515152, 0.727273,
0.525253, 0.212121, 0.686869, 0.151515, 0.313131,
0.292929, 0.565657, 0.10101, 0.232323, 0.353535,
0.0808081, 0.525253, 0.222222, 0.0707071, 0.878788,
0.606061, 0.868687, 0.0909091, 0.161616, 0.707071,
0.888889, 0.747475, 0.575758, 0.0505051, 0.30303,
0.242424, 0.777778, 0.808081, 0.181818, 0,
0.747475, 0.69697, 0.878788, 0.686869, 0.858586,
0.565657, 0.0909091, 0.616162, 0.959596, 0.565657,
0.59596, 0.313131, 0.757576, 0.79798, 0.838384,
0.535354, 0.272727, 0.929293, 0.717172, 0.020202,
0.878788, 0.989899, 0.515152, 0.727273, 0.949495,
0.020202, 0.939394, 0.707071, 0.828283, 0.59596,
0.212121, 0.454545, 0.474747, 0.434343, 0.282828,
0.131313, 0.505051, 0.0606061, 0.858586, 0.757576,
0.545455, 0.838384, 0.010101, 0.424242, 0.818182,
0.79798, 0.282828, 0.030303, 0.121212, 0.373737,
1, 0.232323, 0.636364, 0.545455, 0.848485,
0.313131, 0.242424, 0.828283, 0.363636, 0.525253,
0.686869, 0.757576, 0.171717, 0.636364, 0.474747,
0, 0.767677, 0.363636, 0.454545, 0.151515,
0.20202, 0.717172, 0.969697, 0.878788, 0.626263,
0.454545, 0.161616, 0.989899, 0.575758, 0.181818,
0.868687, 0.494949, 0.939394, 0.141414, 0.242424,
0.787879, 0.545455, 0.525253, 0.565657, 0.717172,
0.979798, 0.0606061, 0.292929, 0.171717, 0.40404,
0.121212, 0.010101, 0.484848, 0.272727, 0.0505051,
0.464646, 0.727273, 0.0707071, 0.282828, 0.979798,
0.40404, 0.686869, 0.242424, 0.20202, 0.161616,
0.434343, 0.909091, 0.383838, 0.040404, 0.434343,
0.252525, 0.30303, 0.121212, 0.313131, 0.141414,
0.757576, 0.222222, 0.191919, 0.818182, 1,
0.111111, 0.252525, 0.424242, 0.949495, 0.69697,
0.393939, 0.131313, 0.909091, 0.838384, 0.292929,
0.919192, 0.474747, 0.777778, 0.929293, 0.121212,
0.707071, 0.434343, 0.89899, 0.767677, 0.646465,
0.474747, 0.787879, 0.313131, 0.848485, 0.686869,
0.939394, 0.949495, 0.040404, 0.484848, 0.272727,
0.363636, 0.464646, 0.111111, 0.585859, 0.929293,
0.141414, 0.848485, 0.848485, 0.555556, 0.363636,
0.030303, 0.828283, 0.919192, 0.919192, 0.484848,
0.181818, 0.646465, 0.545455, 0.979798, 0.808081,
0.151515, 0.181818, 0.252525, 0.787879, 0.0909091,
0.262626, 0.444444, 0.979798, 0.010101, 0.393939,
0.949495, 0.40404, 0.232323, 0.868687, 0.010101,
0.333333, 0.636364, 0.717172, 0.0606061, 0.747475,
0.555556, 0.616162, 0.212121, 0, 0.666667,
0.0909091, 0.424242, 0.585859, 0.222222, 0.505051,
0.89899, 0.919192, 0.858586, 0.262626, 0.79798,
0.676768, 0.969697, 0.373737, 0.191919, 0.787879,
0.989899, 0.626263, 0.949495, 0.30303, 0.919192,
0.161616, 0.333333, 1, 0.373737, 0.969697,
0.505051, 0.484848, 0.434343, 0.242424, 0.585859,
0.343434, 0.858586, 0.464646, 0.676768, 0.111111,
0.828283, 0.020202, 0.343434, 0.333333, 0.323232,
0.353535, 0.262626, 0.30303, 0.292929, 0.454545,
0.040404, 0.191919, 0.323232, 0.656566, 0.262626,
0.272727, 0.111111, 0.40404, 0.393939, 0.767677,
0.484848, 0.040404, 0.131313, 0.909091, 0.868687,
0.191919, 0.878788, 0.353535, 0.10101, 0.555556,
0.373737, 0.323232, 0.494949, 0.111111, 0.656566,
0.575758, 0.656566, 0.79798, 0.494949, 0.222222,
0.717172, 0.606061, 0.666667, 0.383838, 0.171717,
0.222222, 0.929293, 0.272727, 0.747475, 0.89899,
0.0707071, 0.707071, 0.444444, 0.40404, 0.383838,
0.585859, 1, 0.161616, 0.353535, 0.424242,
0.616162, 0.414141, 0.393939, 0.535354, 0.959596,
0.69697, 0.10101, 0.818182, 0.030303, 0.939394,
0.767677, 0.79798, 0.262626, 0.525253, 0.535354}; 

float designparams_0_4985[149][5] = {
0.232323,  0.20202,  0.737374,  0.474747,  0.464646, 
0.30303,  0.89899,  0.181818,  0.969697,  0.0606061, 
0.383838,  0.585859,  0.606061,  0.464646,  0.040404, 
0.414141,  0,  0.838384,  0.646465,  0.575758, 
0.929293,  0.292929,  0.555556,  0.59596,  0.616162, 
0.777778,  0.0707071,  0.727273,  0.252525,  0.10101, 
0.282828,  0.393939,  0.333333,  0.616162,  0.828283, 
0.424242,  0.343434,  0.20202,  0.505051,  0.777778, 
0.626263,  0.676768,  0.505051,  0.888889,  0.343434, 
0.808081,  0.121212,  0.646465,  0.89899,  0.444444, 
0.515152,  0.959596,  0.868687,  0.0909091,  0.131313, 
0.727273,  0.888889,  0.59596,  0.606061,  0.232323, 
0.959596,  0.808081,  0.676768,  0.343434,  0.737374, 
0.646465,  0.737374,  0.69697,  0.707071,  0.545455, 
0.171717,  0.979798,  0.656566,  0.666667,  0.676768, 
0.656566,  0.141414,  0.535354,  0.323232,  0.888889, 
0.494949,  0.515152,  0.565657,  0.757576,  0.414141, 
0.838384,  0.666667,  0,  0.626263,  0.030303, 
0.010101,  0.373737,  0.0505051,  0.69697,  0.0808081, 
0.323232,  0.030303,  0.626263,  0.808081,  0.212121, 
0.10101,  0.0808081,  0.141414,  0.737374,  0.20202, 
0.909091,  0.575758,  0.414141,  0.777778,  0.494949, 
0.444444,  0.383838,  0.787879,  1,  0.333333, 
0.666667,  0.363636,  0.282828,  0.939394,  0.252525, 
0.0505051,  0.59596,  0.767677,  0.131313,  0.989899, 
0.737374,  0.555556,  0.020202,  0.989899,  0.606061, 
0.848485,  0.818182,  0.747475,  0.212121,  0.909091, 
0.818182,  0.353535,  0.454545,  0.020202,  0.191919, 
0.969697,  0.171717,  0.0808081,  0.0808081,  0.515152, 
0.858586,  0.151515,  0.151515,  0.444444,  0.636364, 
0.636364,  0.535354,  0.888889,  0.414141,  0.0707071, 
0.0606061,  0.0505051,  0.959596,  0.515152,  0.727273, 
0.525253,  0.212121,  0.686869,  0.151515,  0.313131, 
0.292929,  0.565657,  0.10101,  0.232323,  0.353535, 
0.0808081,  0.525253,  0.222222,  0.0707071,  0.878788, 
0.606061,  0.868687,  0.0909091,  0.161616,  0.707071, 
0.888889,  0.747475,  0.575758,  0.0505051,  0.30303, 
0.242424,  0.777778,  0.808081,  0.181818,  0, 
0.747475,  0.69697,  0.878788,  0.686869,  0.858586, 
0.565657,  0.0909091,  0.616162,  0.959596,  0.565657, 
0.59596,  0.313131,  0.757576,  0.79798,  0.838384, 
0.535354,  0.272727,  0.929293,  0.717172,  0.020202, 
0.020202,  0.939394,  0.707071,  0.828283,  0.59596, 
0.212121,  0.454545,  0.474747,  0.434343,  0.282828, 
0.131313,  0.505051,  0.0606061,  0.858586,  0.757576, 
0.545455,  0.838384,  0.010101,  0.424242,  0.818182, 
0.79798,  0.282828,  0.030303,  0.121212,  0.373737, 
1,  0.232323,  0.636364,  0.545455,  0.848485, 
0.313131,  0.242424,  0.828283,  0.363636,  0.525253, 
0.686869,  0.757576,  0.171717,  0.636364,  0.474747, 
0,  0.767677,  0.363636,  0.454545,  0.151515, 
0.20202,  0.717172,  0.969697,  0.878788,  0.626263, 
0.454545,  0.161616,  0.989899,  0.575758,  0.181818, 
0.868687,  0.494949,  0.939394,  0.141414,  0.242424, 
0.787879,  0.545455,  0.525253,  0.565657,  0.717172, 
0.979798,  0.0606061,  0.292929,  0.171717,  0.40404, 
0.121212,  0.010101,  0.484848,  0.272727,  0.0505051, 
0.464646,  0.727273,  0.0707071,  0.282828,  0.979798, 
0.40404,  0.686869,  0.242424,  0.20202,  0.161616, 
0.434343,  0.909091,  0.383838,  0.040404,  0.434343, 
0.252525,  0.30303,  0.121212,  0.313131,  0.141414, 
0.757576,  0.222222,  0.191919,  0.818182,  1, 
0.111111,  0.252525,  0.424242,  0.949495,  0.69697, 
0.393939,  0.131313,  0.909091,  0.838384,  0.292929, 
0.919192,  0.474747,  0.777778,  0.929293,  0.121212, 
0.707071,  0.434343,  0.89899,  0.767677,  0.646465, 
0.474747,  0.787879,  0.313131,  0.848485,  0.686869, 
0.939394,  0.949495,  0.040404,  0.484848,  0.272727, 
0.363636,  0.464646,  0.111111,  0.585859,  0.929293, 
0.141414,  0.848485,  0.848485,  0.555556,  0.363636, 
0.030303,  0.828283,  0.919192,  0.919192,  0.484848, 
0.181818,  0.646465,  0.545455,  0.979798,  0.808081, 
0.151515,  0.181818,  0.252525,  0.787879,  0.0909091, 
0.262626,  0.444444,  0.979798,  0.010101,  0.393939, 
0.949495,  0.40404,  0.232323,  0.868687,  0.010101, 
0.333333,  0.636364,  0.717172,  0.0606061,  0.747475, 
0.555556,  0.616162,  0.212121,  0,  0.666667, 
0.0909091,  0.424242,  0.585859,  0.222222,  0.505051, 
0.89899,  0.919192,  0.858586,  0.262626,  0.79798, 
0.676768,  0.969697,  0.373737,  0.191919,  0.787879, 
0.989899,  0.626263,  0.949495,  0.30303,  0.919192, 
0.161616,  0.333333,  1,  0.373737,  0.969697, 
0.505051,  0.484848,  0.434343,  0.242424,  0.585859, 
0.343434,  0.858586,  0.464646,  0.676768,  0.111111, 
0.828283,  0.020202,  0.343434,  0.333333,  0.323232, 
0.353535,  0.262626,  0.30303,  0.292929,  0.454545, 
0.040404,  0.191919,  0.323232,  0.656566,  0.262626, 
0.272727,  0.111111,  0.40404,  0.393939,  0.767677, 
0.484848,  0.040404,  0.131313,  0.909091,  0.868687, 
0.191919,  0.878788,  0.353535,  0.10101,  0.555556, 
0.373737,  0.323232,  0.494949,  0.111111,  0.656566, 
0.575758,  0.656566,  0.79798,  0.494949,  0.222222, 
0.717172,  0.606061,  0.666667,  0.383838,  0.171717, 
0.222222,  0.929293,  0.272727,  0.747475,  0.89899, 
0.0707071,  0.707071,  0.444444,  0.40404,  0.383838, 
0.585859,  1,  0.161616,  0.353535,  0.424242, 
0.616162,  0.414141,  0.393939,  0.535354,  0.959596, 
0.69697,  0.10101,  0.818182,  0.030303,  0.939394, 
0.767677,  0.79798,  0.262626,  0.525253,  0.535354, 
0.632653,  0.938776,  0.591837,  0.530612,  0.469388, 
0.918367,  0.306122,  0.918367,  0.367347,  0.571429, 
0.959184,  0.918367,  0.387755,  0.755102,  0.204082, 
0.428571,  0.204082,  0.632653,  0.938776,  0.265306, 
0.591837,  0.510204,  0.122449,  0.836735,  0.306122, 
0.836735,  0.571429,  0.979592,  0.77551,  0.510204, 
0.734694,  0.387755,  0.346939,  0.897959,  0.408163, 
0.530612,  0.632653,  0.755102,  0.428571,  0.0816327, 
0.102041,  0.55102,  0.326531,  0.346939,  0.857143, 
0.877551,  0.122449,  0.285714,  0.142857,  0.346939, 
0.510204,  0.897959,  0.959184,  0.122449,  0.836735, 
0.755102,  0.530612,  0.571429,  0.0204082,  0.0204082, 
0.653061,  0.653061,  0.857143,  0.918367,  0.897959, 
0.673469,  0.0204082,  0.204082,  0.183673,  0.22449, 
0.612245,  0.183673,  0.734694,  0.285714,  1, 
0.55102,  0,  0.530612,  0.612245,  0.612245, 
0.857143,  0.959184,  0.102041,  0.265306,  0.632653, 
0.979592,  0.22449,  0.816327,  0.0408163,  0.44898, 
0.77551,  0.857143,  0.0612245,  0.44898,  0.959184, 
0.306122,  0.265306,  0,  0.673469,  0.877551, 
0.204082,  0.673469,  0.306122,  0,  0.183673, 
0.285714,  0.836735,  0.55102,  0.306122,  0.326531, 
0,  0.408163,  0.836735,  0.489796,  0.244898, 
0.0612245,  0.285714,  0.489796,  0.795918,  0.0612245, 
0.816327,  0.755102,  0.77551,  0.591837,  0.285714, 
0.183673,  0.244898,  0.22449,  0.408163,  0.714286, 
0.938776,  0.714286,  0.510204,  0.204082,  0.938776, 
1,  0.591837,  0.163265,  0.510204,  0.755102, 
0.714286,  0.163265,  0.44898,  0.693878,  0.673469, 
0.795918,  0.326531,  0.693878,  1,  0.816327, 
0.693878,  0.734694,  1,  0.326531,  0.122449, 
0.22449,  0.142857,  0.938776,  0.55102,  0.0408163, 
0.0204082,  0.77551,  0.183673,  0.959184,  0.55102, 
0.142857,  0.0408163,  0.897959,  0.734694,  0.367347, 
0.44898,  1,  0.469388,  0.387755,  0.387755, 
0.387755,  0.816327,  0.265306,  0.714286,  0, 
0.326531,  0.979592,  0.795918,  0.816327,  0.77551, 
0.346939,  0.346939,  0.142857,  0.0816327,  0.102041, 
0.244898,  0.469388,  0.428571,  0.979592,  0.979592, 
0.489796,  0.102041,  0.0408163,  0.877551,  0.163265, 
0.122449,  0.877551,  0.714286,  0.857143,  0.653061, 
0.897959,  0.44898,  0.673469,  0.653061,  0.142857, 
0.469388,  0.367347,  0.244898,  0.571429,  0.918367, 
0.265306,  0.612245,  0.653061,  0.102041,  0.591837, 
0.163265,  0.428571,  0.0204082,  0.22449,  0.489796, 
0.408163,  0.489796,  0.877551,  0.163265,  0.693878, 
0.571429,  0.795918,  0.367347,  0.0612245,  0.734694, 
0.0408163,  0.0816327,  0.612245,  0.244898,  0.795918, 
0.0816327,  0.693878,  0.0816327,  0.632653,  0.428571, 
0.367347,  0.0612245,  0.408163,  0.469388,  0.530612};  
