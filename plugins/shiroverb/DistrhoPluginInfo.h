/*
 * Copyright (C) 2015 Nino de Wit <ninodig@hotmail.com>
 *
 * Permission to use, copy, modify, and/or distribute this software for any purpose with
 * or without fee is hereby granted, provided that the above copyright notice and this
 * permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES WITH REGARD
 * TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS. IN
 * NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL
 * DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER
 * IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN
 * CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef DISTRHO_PLUGIN_INFO_H_INCLUDED
#define DISTRHO_PLUGIN_INFO_H_INCLUDED

#define DISTRHO_PLUGIN_BRAND "SHIRO"
#define DISTRHO_PLUGIN_NAME  "Shiroverb"
#define DISTRHO_PLUGIN_URI   "https://github.com/ninodewit/SHIRO-Plugins/plugins/shiroverb"

#define DISTRHO_PLUGIN_HAS_UI        0
#define DISTRHO_PLUGIN_IS_RT_SAFE    0
#define DISTRHO_PLUGIN_NUM_INPUTS    1
#define DISTRHO_PLUGIN_NUM_OUTPUTS   2
#define DISTRHO_PLUGIN_USES_MODGUI   0

#define DISTRHO_PLUGIN_CLAP_ID "shiroverb.shiro"

#define DISTRHO_PLUGIN_LV2_CATEGORY "lv2:ReverbPlugin"

#define DISTRHO_PLUGIN_DESCRIPTION "Shiroverb is a shimmer-reverb based on the \"Gigaverb\"-genpatch, ported from the implementation by Juhana Sadeharju, and the \"Pitch-Shift\"-genpatch, both in Max MSP."
#define DISTRHO_PLUGIN_UNIQUE_ID d_cconst('D', 'M', 's', 'v')
#define DISTRHO_PLUGIN_VERSION d_version(0, 2, 0)

#endif // DISTRHO_PLUGIN_INFO_H_INCLUDED
