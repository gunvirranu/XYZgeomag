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
