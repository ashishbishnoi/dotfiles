const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0a0b0d", /* black   */
  [1] = "#545C68", /* red     */
  [2] = "#997D5A", /* green   */
  [3] = "#375E8A", /* yellow  */
  [4] = "#577290", /* blue    */
  [5] = "#718AA3", /* magenta */
  [6] = "#779AC3", /* cyan    */
  [7] = "#c3c8cc", /* white   */

  /* 8 bright colors */
  [8]  = "#888c8e",  /* black   */
  [9]  = "#545C68",  /* red     */
  [10] = "#997D5A", /* green   */
  [11] = "#375E8A", /* yellow  */
  [12] = "#577290", /* blue    */
  [13] = "#718AA3", /* magenta */
  [14] = "#779AC3", /* cyan    */
  [15] = "#c3c8cc", /* white   */

  /* special colors */
  [256] = "#0a0b0d", /* background */
  [257] = "#c3c8cc", /* foreground */
  [258] = "#c3c8cc",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
