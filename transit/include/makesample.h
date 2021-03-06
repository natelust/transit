// Copyright (C) 2015-2016 University of Central Florida. All rights reserved.
// Transit is under an open-source, reproducible-research license (see LICENSE).

#if __STDC__ || defined(__cplusplus)
#define P_(s) s
#else
#define P_(s) ()
#endif

/* src/makesample.c */
extern int  makesample P_((prop_samp *samp, prop_samp *hint,
                           prop_samp *ref, const long fl));
extern int  makesample1 P_((prop_samp *samp, prop_samp *ref, const long fl));
extern int  makewnsample P_((struct transit *tr));
extern int  makeipsample P_((struct transit *tr));
extern int  makeradsample P_((struct transit *tr));
extern int  maketempsample P_((struct transit *tr));
extern void savesample P_((FILE *out, prop_samp *samp));
extern void savesample_arr P_((FILE *out, prop_samp *samp));
extern int restsample P_((FILE *in, prop_samp *samp));
extern int restsample_arr P_((FILE *in, prop_samp *samp));
extern int outsample P_((struct transit *tr));
extern void freemem_samp P_((prop_samp *samp));

#undef P_
