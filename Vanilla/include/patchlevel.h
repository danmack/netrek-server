/* patchlevel.h -- the current patch level of the source
 *
 * Whenever you make a patch that you want to send in, name it in
 *   the patchname array below, make patch, and submit it.
 * 
 * Generally, the number of patchnames should not be very high,
 *   probably no more than one.  However, if you patch over someone
 *   else's patch before they get into a patch release, this will
 *   help keep the revisions straight.
 *
 * The code maintainer is to
 *  (a) reset this to zero before each major release, and;
 *  (b) increment this number before each patch release.
 */
#define PATCHLEVEL 3
#if !defined(NULL)
#define NULL 0
#endif

#if 0
/*
 * Patchname should be set back to an array of NULL at
 * every patch release.  I.e. this code should be compiled: */
char *patchname[10] = {
  NULL,
};
#else
/*
 * Only compile this to add the name of your patch before it's official */
char *patchname[10] = {
  NULL,
};
#endif
