/**************************************************************************************************
  qux.h
  Copyright 2024 Drew Gislason
  license: <https://mit-license.org>
**************************************************************************************************/
#ifndef QUX_H
#define QUX_H

// allows source to be compiled with C or C++ compilers
#ifdef __cplusplus
  extern "C" {
#endif

#define SZ_QUX_VER  "1.0"

int qux_power(int n, int power);

#ifdef __cplusplus
  }
#endif

#endif // QUX_H
