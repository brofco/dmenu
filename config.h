/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Hack:size=10"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the elft of input field */
static const char *normbgcolor = "#181818"; /* -nb option; normal background                 */
static const char *normfgcolor = "#d8d8d8"; /* -nf option; normal foreground                 */
static const char *selbgcolor  = "#181818"; /* -sb option; selected background               */
static const char *selfgcolor  = "#d8d8d8"; /* -sf option; selected foreground               */
static const char *outbgcolor  = "#181818";
static const char *outfgcolor  = "#d8d8d8";
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
