/*
MIT License

Copyright (c) 2019 Nathan Zimmerberg
Copyright (c) 2021 Gunvir Ranu

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#ifndef GEOMAG_H
#define GEOMAG_H

// Change if needed
typedef double real;
#define REAL_SQRT sqrt

// Returns magnetic field in ITRF.
//
// Uses WMM 2020 (World Magnetic Model - 2020).
//
// Args:
//     pos_itrf: ECEF position vector in ITRF frame [m]
//     dyear: Decimal year
//
// Returns:
//     mag_itrf: Magnetic field vector in ITRF frame [T]
void geoMag(real dyear, const real (*pos_itrf)[3], real (*mag_itrf)[3]);

#endif // GEOMAG_H
