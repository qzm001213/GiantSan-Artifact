/* Copyright (C) 2001-2003 Peter Selinger.
   This file is part of potrace. It is free software and it is covered
   by the GNU general public license. See the file COPYING for details. */

/* $Id: greymap.h,v 1.4 2003/09/19 04:32:43 selinger Exp $ */

#ifndef PGM_H
#define PGM_H

#include <stdio.h>

/* internal format for greymaps. Note: in this format, rows are
   ordered from bottom to top. The pixels in each row are given from
   left to right. */

struct greymap_s {
  int w;                 /* width, in pixels */
  int h;                 /* height, in pixels */
  signed short int *map;    /* raw data, w*h values */
};
typedef struct greymap_s greymap_t;

/* macros for accessing pixel at index (x,y). Note that the origin is
   in the *lower* left corner. U* macros omit the bounds check. */

#define gm_index(gm, x, y) (&(gm)->map[(x)+(y)*(gm)->w])
#define gm_safe(gm, x, y) ((x)>=0 && (int)(x)<(gm)->w && (y)>=0 && (int)(y)<(gm)->h)
#define gm_bound(x, m) ((x)<0 ? 0 : (x)>=(m) ? (m)-1 : (x))
#define GM_UGET(gm, x, y) (*gm_index(gm, x, y))
#define GM_UINC(gm, x, y, b) (*gm_index(gm, x, y) += (short int)(b))
#define GM_UINV(gm, x, y) (*gm_index(gm, x, y) = 255 - *gm_index(gm, x, y))
#define GM_UPUT(gm, x, y, b) (*gm_index(gm, x, y) = (short int)(b))
#define GM_GET(gm, x, y) (gm_safe(gm, x, y) ? GM_UGET(gm, x, y) : 0)
#define GM_INC(gm, x, y, b) (gm_safe(gm, x, y) ? GM_UINC(gm, x, y, b) : 0)
#define GM_INV(gm, x, y) (gm_safe(gm, x, y) ? GM_UINV(gm, x, y) : 0)
#define GM_PUT(gm, x, y, b) (gm_safe(gm, x, y) ? GM_UPUT(gm, x, y, b) : 0)
#define GM_BGET(gm, x, y) GM_UGET(gm, gm_bound(x, gm->w), gm_bound(y, gm->h))

/* modes for cutting off out-of-range values. The following names
   refer to winding numbers. I.e., make a pixel black if winding
   number is nonzero, odd, or positive, respectively. We assume that 0
   winding number corresponds to white (255). */
#define GM_MODE_NONZERO 1
#define GM_MODE_ODD 2
#define GM_MODE_POSITIVE 3
#define GM_MODE_NEGATIVE 4

extern char *gm_read_error;

greymap_t *gm_new(int w, int h);
greymap_t *gm_dup(greymap_t *gm);
void gm_free(greymap_t *gm);
void gm_clear(greymap_t *gm, int b);
int gm_read(FILE *f, greymap_t **gmp);
int gm_writepgm(FILE *f, greymap_t *gm, char *comment, int raw, int mode, double gamma);
int gm_print(FILE *f, greymap_t *gm);

#endif /* PGM_H */
