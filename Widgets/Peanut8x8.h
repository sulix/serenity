#pragma once

namespace Peanut8x8 {

static constexpr char first_character = '!';
static constexpr char last_character = '~';
static constexpr byte font_width = 8;
static constexpr byte font_height = 8;

static constexpr const char* font[] {

    "   ##   "
    "   ##   "
    "   ##   "
    "   ##   "
    "   ##   "
    "        "
    "   ##   "
    "        ",

    " ## ##  "
    " ## ##  "
    " #  #   "
    "        "
    "        "
    "        "
    "        "
    "        ",

    "  #  #  "
    "  #  #  "
    " ###### "
    "  #  #  "
    " ###### "
    "  #  #  "
    "  #  #  "
    "        ",

    "  ####  "
    " #  # # "
    " #  #   "
    "  ####  "
    "   #  # "
    " # #  # "
    "  ####  "
    "        ",

    " ##   # "
    " ##  ## "
    "    ##  "
    "   ##   "
    "  ##    "
    " ##  ## "
    " #   ## "
    "        ",

    "        "
    "   ##   "
    "  #  #  "
    "  ###   "
    " #   # #"
    " #   ## "
    "  ###  #"
    "        ",

    "   ##   "
    "   ##   "
    "   #    "
    "        "
    "        "
    "        "
    "        "
    "        ",

    "    #   "
    "   #    "
    "  #     "
    "  #     "
    "  #     "
    "   #    "
    "    #   "
    "        ",

    "   #    "
    "    #   "
    "     #  "
    "     #  "
    "     #  "
    "    #   "
    "   #    "
    "        ",

    "        "
    "        "
    "   #    "
    " #####  "
    "   #    "
    "  # #   "
    "        "
    "        ",

    "        "
    "        "
    "   #    "
    "   #    "
    " #####  "
    "   #    "
    "   #    "
    "        ",

    "        "
    "        "
    "        "
    "        "
    "        "
    "    ##  "
    "   ##   "
    "        ",

    "        "
    "        "
    "        "
    "        "
    " #####  "
    "        "
    "        "
    "        ",

    "        "
    "        "
    "        "
    "        "
    "        "
    "   ##   "
    "   ##   "
    "        ",
    
    "      # "
    "     ## "
    "    ##  "
    "   ##   "
    "  ##    "
    " ##     "
    " #      "
    "        ",

    "  ####  "
    " #   ## "
    " #  # # "
    " # #  # "
    " # #  # "
    " ##   # "
    "  ####  "
    "        ",

    "   #    "
    "  ##    "
    " # #    "
    "   #    "
    "   #    "
    "   #    "
    "  ###   "
    "        ",

    "  ####  "
    " #    # "
    " #   #  "
    "    #   "
    "   #    "
    "  #     "
    " ###### "
    "        ",

    " ###### "
    "     #  "
    "    #   "
    "   ###  "
    "      # "
    " #    # "
    "  ####  "
    "        ",

    "    ### "
    "   #  # "
    "  #   # "
    " ###### "
    "      # "
    "      # "
    "      # "
    "        ",

    " ###### "
    " #      "
    " #      "
    " #####  "
    "      # "
    " #    # "
    "  ####  "
    "        ",

    "     ## "
    "   ##   "
    "  #     "
    " #####  "
    " #    # "
    " #    # "
    "  ####  "
    "        ",

    " ###### "
    " #    # "
    "     #  "
    "    #   "
    "   #    "
    "  #     "
    "  #     "
    "        ",

    "  ####  "
    " #    # "
    " #    # "
    "  ####  "
    " #    # "
    " #    # "
    "  ####  "
    "        ",

    "  ####  "
    " #    # "
    " #    # "
    "  ##### "
    "     #  "
    "   ##   "
    " ##     "
    "        ",

    "        "
    "        "
    "   ##   "
    "   ##   "
    "        "
    "   ##   "
    "   ##   "
    "        ",

    "        "
    "        "
    "    ##  "
    "    ##  "
    "        "
    "    ##  "
    "   ##   "
    "        ",

    "    ##  "
    "   #    "
    "  #     "
    " #      "
    "  #     "
    "   #    "
    "    ##  "
    "        ",

    "        "
    "        "
    " ###### "
    "        "
    " ###### "
    "        "
    "        "
    "        ",

    " ##     "
    "   #    "
    "    #   "
    "     #  "
    "    #   "
    "   #    "
    " ##     "
    "        ",

    "  ####  "
    " #    # "
    "     #  "
    "    #   "
    "   ##   "
    "        "
    "   ##   "
    "        ",

    "  ####  "
    " #    # "
    " #  ### "
    " # #  # "
    " #  ### "
    " #      "
    "  ####  "
    "        ",

    "  ####  "
    " #    # "
    " #    # "
    " ###### "
    " #    # "
    " #    # "
    "###  ###"
    "        ",

    " #####  "
    " #    # "
    " #    # "
    " ###### "
    " #    # "
    " #    # "
    " #####  "
    "        ",

    "  ####  "
    " #    # "
    " #      "
    " #      "
    " #      "
    " #    # "
    "  ####  "
    "        ",

    " #####  "
    " #    # "
    " #    # "
    " #    # "
    " #    # "
    " #    # "
    " #####  "
    "        ",

    " ###### "
    "  #   # "
    "  #     "
    "  ####  "
    "  #     "
    "  #   # "
    " ###### "
    "        ",

    " ###### "
    "  #   # "
    "  #     "
    "  ###   "
    "  #     "
    "  #     "
    " ###    "
    "        ",

    "  ####  "
    " #    # "
    " #      "
    " #   ###"
    " #    # "
    " #    # "
    "  ####  "
    "        ",

    " #    # "
    " #    # "
    " #    # "
    " ###### "
    " #    # "
    " #    # "
    " #    # "
    "        ",

    "  ###   "
    "   #    "
    "   #    "
    "   #    "
    "   #    "
    "   #    "
    "  ###   "
    "        ",

    "  ##### "
    " #   #  "
    "     #  "
    "     #  "
    "     #  "
    " #   #  "
    "  ###   "
    "        ",

    " ### ###"
    "  #   # "
    "  #  #  "
    "  ###   "
    "  #  #  "
    "  #   # "
    " ### ###"
    "        ",

    " ###    "
    "  #     "
    "  #     "
    "  #     "
    "  #     "
    "  #   # "
    " ###### "
    "        ",

    " #    # "
    " ##  ## "
    " # ## # "
    " #    # "
    " #    # "
    " #    # "
    "###  ###"
    "        ",

    " #    # "
    " ##   # "
    " # #  # "
    " #  # # "
    " #   ## "
    " #    # "
    " #    # "
    "        ",

    "  ####  "
    " #    # "
    " #    # "
    " #    # "
    " #    # "
    " #    # "
    "  ####  "
    "        ",

    " #####  "
    "  #   # "
    "  #   # "
    "  ####  "
    "  #     "
    "  #     "
    " ###    "
    "        ",

    "  ####  "
    " #    # "
    " #    # "
    " #    # "
    " #  # # "
    " #   #  "
    "  ### # "
    "        ",

    " #####  "
    "  #   # "
    "  #   # "
    "  ####  "
    "  # #   "
    "  #  #  "
    " ###  # "
    "        ",

    "  ####  "
    " #    # "
    " #      "
    "  ####  "
    "      # "
    " #    # "
    "  ####  "
    "        ",

    "####### "
    "#  #  # "
    "   #    "
    "   #    "
    "   #    "
    "   #    "
    "  ###   "
    "        ",

    "###  ###"
    " #    # "
    " #    # "
    " #    # "
    " #    # "
    " #    # "
    "  ####  "
    "        ",

    "### ### "
    " #   #  "
    " #   #  "
    "  # #   "
    "  # #   "
    "   #    "
    "   #    "
    "        ",

    "###  ###"
    " #    # "
    " #    # "
    " #    # "
    " # ## # "
    " ##  ## "
    " #    # "
    "        ",

    "##   ## "
    " #   #  "
    "  # #   "
    "   #    "
    "  # #   "
    " #   #  "
    "##   ## "
    "        ",

    "##   ## "
    " #   #  "
    "  # #   "
    "   #    "
    "   #    "
    "   #    "
    "  ###   "
    "        ",

    " ###### "
    " #   #  "
    "    #   "
    "   #    "
    "  #     "
    " #    # "
    " ###### "
    "        ",

    "  ####  "
    "  #     "
    "  #     "
    "  #     "
    "  #     "
    "  #     "
    "  ####  "
    "        ",

    " #      "
    " ##     "
    "  ##    "
    "   ##   "
    "    ##  "
    "     ## "
    "      # "
    "        ",

    "  ####  "
    "     #  "
    "     #  "
    "     #  "
    "     #  "
    "     #  "
    "  ####  "
    "        ",

    "   #    "
    "  # #   "
    " #   #  "
    "        "
    "        "
    "        "
    "        "
    "        ",

    "        "
    "        "
    "        "
    "        "
    "        "
    "        "
    " ###### "
    "        ",

    "   ##   "
    "    ##  "
    "        "
    "        "
    "        "
    "        "
    "        "
    "        ",

    "        "
    "        "
    "  ####  "
    " #    # "
    " #    # "
    " #   ## "
    "  ### # "
    "        ",

    " #      "
    " #      "
    " #####  "
    " #    # "
    " #    # "
    " #    # "
    " #####  "
    "        ",

    "        "
    "        "
    "  ####  "
    " #    # "
    " #      "
    " #    # "
    "  ####  "
    "        ",

    "      # "
    "      # "
    "  ##### "
    " #    # "
    " #    # "
    " #    # "
    "  ##### "
    "        ",

    "        "
    "        "
    "  ####  "
    " #    # "
    " ###### "
    " #      "
    "  ####  "
    "        ",

    "    ### "
    "   #    "
    "  ####  "
    "   #    "
    "   #    "
    "   #    "
    "  ###   "
    "        ",

    "        "
    "        "
    "  ####  "
    " #    # "
    " #    # "
    "  ####  "
    "      # "
    "  ####  ",

    " #      "
    " #      "
    " #####  "
    " #    # "
    " #    # "
    " #    # "
    " #    # "
    "        ",

    "   #    "
    "        "
    "  ###   "
    "   #    "
    "   #    "
    "   #    "
    "  ###   "
    "        ",

    "   #    "
    "        "
    "  ###   "
    "    #   "
    "    #   "
    "    #   "
    "    #   "
    "  ##    ",

    "###     "
    " #      "
    " #  ##  "
    " # #    "
    " ## #   "
    " #   #  "
    "###   # "
    "        ",

    "  ##    "
    "   #    "
    "   #    "
    "   #    "
    "   #    "
    "   #    "
    "  ###   "
    "        ",

    "        "
    "        "
    "  ## ## " 
    " #  #  #"
    " #  #  #"
    " #     #"
    " #     #"
    "        ",

    "        "
    "        "
    " #####  " 
    " #    # "
    " #    # "
    " #    # "
    " #    # "
    "        ",

    "        "
    "        "
    "  ####  "
    " #    # "
    " #    # "
    " #    # "
    "  ####  "
    "        ",

    "        "
    "        "
    " #####  "
    " #    # "
    " #    # "
    " #####  "
    " #      "
    "###     ",

    "        "
    "        "
    "  ##### "
    " #    # "
    " #    # "
    "  ##### "
    "      # "
    "     ###",

    "        "
    "        "
    "  ####  "
    " #    # "
    " #      "
    " #      "
    "###     "
    "        ",

    "        "
    "        "
    "  ####  "
    " ##   # "
    "   ##   "
    " #   ## "
    "  ####  "
    "        ",

    "   #    "
    "   #    "
    "  ####  "
    "   #    "
    "   #    "
    "   #    "
    "    ### "
    "        ",

    "        "
    "        "
    " #    # " 
    " #    # "
    " #    # "
    " #    # "
    "  #### #"
    "        ",

    "        "
    "        "
    " #    # " 
    " #    # "
    " #    # "
    "  #  #  "
    "   ##   "
    "        ",

    "        "
    "        " 
    " #  #  #"
    " #  #  #"
    " #  #  #"
    " #  #  #"
    "  ## ###"
    "        ",


    "        "
    "        "
    " #   #  " 
    "  # #   "
    "   #    "
    "  # #   "
    " #   #  "
    "        ",

    "        "
    "        "
    " #    # " 
    " #    # "
    " #    # "
    "  ##### "
    "      # "
    "  ####  ",

    "        "
    "        "
    " ###### " 
    "     #  "
    "   ##   "
    "  #     "
    " ###### "
    "        ",

    "   ###  "
    "  #     "
    "  #     "
    " #      "
    "  #     "
    "  #     "
    "   ###  "
    "        ",

    "   #    "
    "   #    "
    "   #    "
    "   #    "
    "   #    "
    "   #    "
    "   #    "
    "        ",

    "  ###   "
    "     #  "
    "     #  "
    "      # "
    "     #  "
    "     #  "
    "  ###   "
    "        ",

    "        "
    "        "
    "        "
    "  ##  # "
    " #  ##  "
    "        "
    "        "
    "        ",
};

}

