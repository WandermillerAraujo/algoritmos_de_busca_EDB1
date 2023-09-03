#include "catch_amalgamated.hpp"
#include "busca.h"

int array[] = {
    5,9,13,15,16,20,23,30,32,37,44,45,61,70,76,76,78,79,84,84,84,88,89,89,92,92,98,125,139,153,157,163,163,172,175,179,185,185,187,198,199,209,209,212,214,223,225,226,226,228,232,238,246,249,250,257,261,268,289,294,300,304,306,316,316,326,327,339,339,349,358,364,366,377,383,385,393,403,406,417,430,437,441,444,455,460,470,472,476,477,481,489,494,496,501,506,513,516,517,530,534,546,550,571,582,588,603,606,606,612,619,621,621,626,630,643,645,645,663,667,668,671,681,712,713,714,716,716,717,720,730,732,732,733,737,738,754,758,762,763,763,784,793,826,827,827,831,832,842,842,843,846,846,854,860,880,880,883,887,887,887,892,897,898,898,901,914,918,929,935,937,938,943,955,956,956,958,966,974,983,1000,1000,1011,1017,1018,1020,1022,1027,1028,1030,1031,1032,1046,1049,1051,1062,1062,1062,1064,1065,1082,1090,1103,1106,1106,1111,1111,1117,1128,1131,1135,1139,1148,1148,1149,1150,1155,1155,1158,1165,1168,1169,1170,1185,1187,1189,1206,1206,1207,1207,1218,1228,1237,1240,1254,1254,1260,1265,1271,1276,1278,1282,1287,1288,1297,1301,1301,1303,1319,1320,1323,1329,1332,1336,1337,1338,1354,1357,1358,1363,1367,1370,1372,1380,1389,1393,1395,1401,1407,1408,1411,1415,1425,1428,1448,1451,1456,1469,1470,1470,1473,1480,1498,1500,1509,1518,1520,1521,1526,1543,1550,1554,1555,1557,1559,1560,1561,1570,1571,1572,1573,1579,1583,1589,1601,1610,1611,1619,1621,1633,1637,1640,1643,1658,1662,1667,1672,1674,1677,1679,1680,1681,1684,1686,1696,1696,1700,1702,1702,1704,1707,1708,1718,1720,1725,1729,1735,1735,1747,1751,1763,1767,1771,1784,1785,1793,1799,1801,1804,1806,1808,1811,1822,1827,1827,1830,1835,1838,1839,1847,1864,1865,1866,1869,1870,1876,1881,1883,1890,1890,1899,1899,1900,1900,1903,1906,1917,1919,1929,1940,1940,1943,1944,1951,1951,1960,1962,1973,1973,1975,1976,1984,1993,1998,2000,2008,2043,2043,2050,2050,2053,2056,2058,2061,2067,2069,2082,2083,2091,2092,2093,2093,2098,2098,2105,2112,2118,2119,2121,2124,2142,2148,2152,2157,2176,2178,2184,2184,2186,2187,2191,2195,2195,2199,2200,2200,2203,2219,2221,2225,2231,2234,2238,2264,2269,2283,2288,2289,2292,2299,2299,2302,2308,2311,2313,2325,2332,2342,2350,2371,2374,2374,2382,2386,2392,2396,2399,2405,2413,2422,2426,2428,2441,2457,2459,2464,2466,2467,2469,2480,2481,2481,2482,2482,2483,2493,2497,2501,2509,2518,2519,2519,2521,2533,2542,2553,2557,2582,2587,2592,2600,2605,2617,2622,2624,2624,2633,2643,2656,2657,2666,2667,2671,2673,2674,2677,2682,2683,2693,2697,2700,2705,2707,2721,2724,2730,2732,2737,2747,2748,2754,2767,2779,2791,2791,2794,2794,2799,2800,2802,2812,2813,2816,2817,2823,2827,2835,2861,2871,2872,2874,2874,2876,2877,2878,2883,2903,2906,2913,2913,2913,2931,2933,2936,2946,2947,2976,2978,2978,2979,2979,2982,2984,2986,2988,2992,2997,3004,3005,3006,3007,3023,3029,3049,3050,3053,3056,3057,3059,3070,3082,3088,3091,3097,3103,3106,3116,3130,3134,3136,3156,3166,3169,3172,3175,3175,3177,3179,3180,3182,3182,3183,3189,3197,3198,3200,3217,3221,3225,3228,3235,3238,3239,3241,3248,3254,3257,3263,3265,3269,3274,3299,3300,3307,3309,3310,3314,3323,3327,3330,3331,3340,3340,3340,3340,3343,3347,3349,3352,3353,3354,3363,3371,3372,3386,3388,3390,3391,3404,3406,3406,3416,3419,3421,3427,3437,3440,3457,3465,3468,3474,3483,3496,3503,3508,3516,3523,3525,3539,3544,3547,3552,3554,3561,3564,3570,3572,3573,3576,3587,3590,3591,3592,3596,3603,3603,3607,3609,3620,3622,3632,3636,3638,3639,3644,3648,3650,3653,3658,3660,3664,3664,3667,3671,3674,3682,3683,3700,3704,3709,3716,3716,3724,3727,3731,3735,3740,3747,3749,3758,3763,3781,3790,3791,3800,3802,3802,3808,3817,3828,3831,3834,3842,3849,3851,3856,3860,3881,3883,3884,3884,3889,3891,3893,3902,3905,3916,3917,3917,3919,3920,3922,3932,3934,3935,3936,3936,3944,3953,3954,3954,3957,3958,3966,3972,3976,3981,3988,3992,3993,3994,3999,4000,4001,4006,4008,4010,4013,4015,4018,4024,4031,4035,4035,4036,4038,4043,4050,4054,4055,4058,4059,4064,4068,4074,4081,4089,4090,4091,4094,4105,4110,4123,4126,4127,4133,4141,4150,4152,4159,4166,4169,4172,4172,4187,4188,4207,4208,4208,4211,4223,4226,4228,4230,4246,4246,4247,4248,4253,4253,4259,4259,4269,4273,4274,4289,4296,4300,4301,4313,4322,4323,4324,4325,4326,4326,4331,4339,4339,4343,4372,4377,4392,4392,4398,4406,4409,4411,4411,4413,4413,4420,4422,4424,4431,4447,4447,4453,4475,4480,4481,4484,4491,4491,4492,4494,4495,4499,4507,4513,4520,4524,4532,4538,4546,4557,4564,4564,4566,4568,4569,4577,4579,4588,4593,4599,4608,4610,4619,4621,4624,4624,4634,4637,4637,4640,4641,4653,4653,4655,4656,4657,4672,4672,4672,4674,4675,4677,4680,4690,4691,4692,4692,4701,4710,4714,4714,4727,4729,4736,4738,4752,4754,4761,4765,4765,4768,4770,4773,4774,4774,4776,4778,4778,4783,4790,4795,4797,4802,4806,4807,4810,4811,4813,4837,4839,4842,4849,4853,4855,4857,4862,4872,4872,4878,4882,4883,4883,4889,4891,4895,4897,4897,4919,4927,4931,4935,4938,4946,4949,4961,4965,4965,4968,4980,4989,4992,4993,4996
};

int tamanho = sizeof(array) / sizeof(int);

TEST_CASE("Teste - Números que são encontrados")
{
    CHECK( busca(array, tamanho, 5) == 0 );
    CHECK( busca(array, tamanho, 9) == 1 );
    CHECK( busca(array, tamanho, 13) == 2 );
    CHECK( busca(array, tamanho, 4996) == tamanho-1 );
    CHECK( busca(array, tamanho, 4993) == tamanho-2 );
    CHECK( busca(array, tamanho, 4992) == tamanho-3 );
}

TEST_CASE("Teste - Números que não são encontrados")
{
    CHECK( busca(array, tamanho, -5) == -1 );
    CHECK( busca(array, tamanho, 7) == -1 );
    CHECK( busca(array, tamanho, 14) == -1 );
    CHECK( busca(array, tamanho, 4981) == -1 );
    CHECK( busca(array, tamanho, 4990) == -1 );
    CHECK( busca(array, tamanho, 10000) == -1 );
}

/*TEST_CASE("Teste - Números que são encontrados (com recursividade)")
{
    CHECK( busca_bin_rec(array, 5, inicio, fim) == 0 );
    CHECK( busca_bin_rec(array, 9, inicio, fim) == 1 );
    CHECK( busca_bin_rec(array, 13, inicio, fim) == 2 );
    CHECK( busca_bin_rec(array, 4996, inicio, fim) == fim-1 );
    CHECK( busca_bin_rec(array, 4993, inicio, fim) == fim-2 );
    CHECK( busca_bin_rec(array, 4992, inicio, fim) == fim-3 );
}

TEST_CASE("Teste - Números que não são encontrados (com recursividade)")
{
    CHECK( busca_bin_rec(array, -5, inicio, fim) == -1 );
    CHECK( busca_bin_rec(array, 7, inicio, fim) == -1 );
    CHECK( busca_bin_rec(array, 14, inicio, fim) == -1 );
    CHECK( busca_bin_rec(array, 4981, inicio, fim) == -1 );
    CHECK( busca_bin_rec(array, 4990, inicio, fim) == -1 );
    CHECK( busca_bin_rec(array, 10000, inicio, fim) == -1 );
}*/