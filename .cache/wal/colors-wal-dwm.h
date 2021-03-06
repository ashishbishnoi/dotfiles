static const char norm_fg[] = "#c3c8cc";
static const char norm_bg[] = "#0a0b0d";
static const char norm_border[] = "#888c8e";

static const char sel_fg[] = "#c3c8cc";
static const char sel_bg[] = "#997D5A";
static const char sel_border[] = "#c3c8cc";

static const char urg_fg[] = "#c3c8cc";
static const char urg_bg[] = "#545C68";
static const char urg_border[] = "#545C68";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
