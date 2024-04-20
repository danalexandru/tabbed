/************************************/
/**     COLORSCHEME COMPONENTS      */
/************************************/
#define SIZE_STRING 8

typedef struct {
    char Background[SIZE_STRING];
    char Foreground[SIZE_STRING];
} Scheme;

typedef struct {
    Scheme Normal;
    Scheme Select;
} ColorScheme;


/************************************/
/**         COLORSCHEMES            */
/************************************/
const ColorScheme Default = {
    .Normal = {
        .Background = "#222222",
        .Foreground = "#bbbbbb",
    },
    .Select = {
        .Background = "#005577",
        .Foreground = "#eeeeee",
    }
};

const ColorScheme DoomOne = {
    .Normal = {
        .Background = "#14191F",
        .Foreground = "#8C92AC",
    },
    .Select = {
        .Background = "#1F2833",
        .Foreground = "#F3F3F6",
    }
};

const ColorScheme MatchaDark = {
    .Normal = {
        .Background = "#141a1b",
        .Foreground = "#6c8782",
        /* .Foreground = "#16a085", */
    },
    .Select = {
        .Background = "#263034",
        .Foreground = "#F3F3F6",
    }
};


const ColorScheme Gruvbox = {
    .Normal = {
        .Background = "#282828",
        .Foreground = "#ebdbb2",
    },
    .Select = {
        .Background = "#1d2021",
        .Foreground = "#ffaf00",
    }
};

const ColorScheme GruvboxMaterial = {
    .Normal = {
        .Background = "#282828",
        .Foreground = "#ebdbb2",
    },
    .Select = {
        .Background = "#3c3836",
        .Foreground = "#d78700",
    }
};

const ColorScheme Ayu = {
    .Normal = {
        .Background = "#0A0B11",
        .Foreground = "#F3F3F6",
    },
    .Select = {
        .Background = "#1c1e29",
        .Foreground = "#FFBF00",
    }
};

const ColorScheme SweetDark = {
    .Normal = {
        .Background = "#161925",
        .Foreground = "#bbbbbb",
    },
    .Select = {
        .Background = "#0c0e14",
        .Foreground = "#F3F3F6",
    }
};

const ColorScheme Dracula = {
    .Normal = {
        .Background = "#282a36",
        .Foreground = "#f8f8f2",
    },
    .Select = {
        .Background = "#1e1f29",
        .Foreground = "#ff79c6",
    },
};

const ColorScheme BreezeDark = {
    .Normal = {
        .Background = "#2a2e32",
        .Foreground = "#eff0f1",
    },
    .Select = {
        .Background = "#1b1e20",
        .Foreground = "#eff0f1",
    },
};

/************************************/
/**      CURRENT COLORSCHEME        */
/************************************/
const ColorScheme CurrentColorScheme = Gruvbox;

