/* Copyright (C) 2001-2003 Peter Selinger.
   This file is part of potrace. It is free software and it is covered
   by the GNU general public license. See the file COPYING for details. */

/* $Id: main.h,v 1.18 2003/12/24 00:16:06 selinger Exp $ */

#ifndef MAIN_H
#define MAIN_H

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#define POLICY_BLACK 0
#define POLICY_WHITE 1
#define POLICY_LEFT 2
#define POLICY_RIGHT 3
#define POLICY_MINORITY 4
#define POLICY_MAJORITY 5
#define POLICY_RANDOM 6

/* structure to hold a tilted rectangle */
struct rect_s {
  double bb[2];    /* dimensions of bounding box */
  double orig[2];  /* origin relative to bounding box */
};
typedef struct rect_s rect_t;

/* structure to hold a dimensioned value */
struct dim_s {
  double x; /* value */
  double d; /* dimension (in pt), or 0 if not given */
};
typedef struct dim_s dim_t;

#define DIM_IN (72)
#define DIM_CM (72 / 2.54)
#define DIM_MM (72 / 25.4)
#define DIM_PT (1)

/* set some regional defaults */

#ifdef USE_METRIC
#define DEFAULT_DIM DIM_CM
#define DEFAULT_DIM_NAME "centimeters"
#else
#define DEFAULT_DIM DIM_IN
#define DEFAULT_DIM_NAME "inches"
#endif

#ifdef USE_A4
#define DEFAULT_PAPERWIDTH 595
#define DEFAULT_PAPERHEIGHT 842
#define DEFAULT_PAPERFORMAT "a4"
#else
#define DEFAULT_PAPERWIDTH 612
#define DEFAULT_PAPERHEIGHT 792
#define DEFAULT_PAPERFORMAT "letter"
#endif

struct backend_s;

/* structure to hold command line options */
struct info {
  struct backend_s *backend;  /* type of backend (eps,ps,pgm etc) */
  int debug;         /* type of output (0-2) (for BACKEND_PS/EPS only) */
  dim_t width_d;     /* desired width of image */
  dim_t height_d;    /* desired height of image */
  double rx;         /* desired x resolution (in dpi) */
  double ry;         /* desired y resolution (in dpi) */
  double sx;         /* desired x scaling factor */
  double sy;         /* desired y scaling factor */
  double stretch;    /* ry/rx, if not otherwise determined */
  dim_t lmar_d, rmar_d, tmar_d, bmar_d;   /* margins */
  double angle;      /* rotate by this many degrees */
  int paperwidth, paperheight;  /* paper size for ps backend (in pt) */
  int turdsize;      /* area of largest path to be ignored */
  double unit;       /* granularity of output grid */
  int compress;      /* apply compression? */
  int pslevel;       /* postscript level to use: affects only compression */
  int color;         /* rgb color code 0xrrggbb: line color */
  int fillcolor;     /* rgb color code 0xrrggbb: fill color */
  int turnpolicy;    /* how to resolve ambiguous turns in path decomposition */
  double gamma;      /* gamma value for pgm backend */
  int opticurve;     /* use curve optimization */
  int longcoding;    /* do not optimize for file size? */
  double alphamax;   /* corner threshold parameter */
  double opttolerance; /* opticurve tolerance */
  char *outfile;     /* output filename, if given */
  char **infiles;    /* array of input filenames */
  int infilecount;   /* number of input filenames */
  double blacklevel; /* 0 to 1: black/white cutoff in input file */
  int invert;        /* invert bitmap? */
  int opaque;        /* paint white shapes opaquely? */
  int group;         /* group paths together? */
};

extern struct info info;

/* structure to hold per-image information, set e.g. by calc_dimensions */
struct imginfo_s {
  int pixwidth;        /* width of input pixmap */
  int pixheight;       /* height of input pixmap */
  double width;        /* desired width of image (in pt or pixels) */
  double height;       /* desired height of image (in pt or pixels) */
  double lmar, rmar, tmar, bmar;   /* requested margins (in pt) */
  rect_t trans;        /* specify relative position of a tilted rectangle */
};
typedef struct imginfo_s imginfo_t;

#endif /* MAIN_H */
