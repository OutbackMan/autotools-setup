#ifndef __options_h__
#define __options_h__

struct RlayoutOptions {

};

extern const struct RlayoutOptions default_rlayout_options;

int parse_options(struct RlayoutOptions *options, int argc, const char **argv);
void print_option_usage(const char *invocation_string);

#endif
