// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#include <dt-bindings/zmk/keys.h>
#define XXX &none

// Config
#define CONFIG_BT_CTLR_TX_PWR_PLUS_8=y
#define CONFIG_ZMK_KSCAN_DEBOUNCE_PRESS_MS=1
#define CONFIG_ZMK_KSCAN_DEBOUNCE_RELEASE_MS=10
#define CONFIG_ZMK_STUDIO=y
#define CONFIG_ZMK_STUDIO_LOCKING=n

// FPS friendly tap layer
#define MIRYOKU_LAYER_GAME \
&kp TAB,           &kp Q,             &kp W,             &kp E,             &kp R,             &kp Z,             &kp U,             &kp I,             &kp O,             &kp P,             \
&kp LSHFT,         &kp A,             &kp S,             &kp D,             &kp F,             &kp H,             &kp J,             &kp K,             &kp L,             &kp SQT,           \
&kp LCTRL,         &kp Y,             &kp X,             &kp C,             &kp V,             &kp N,             &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp LALT,          &kp SPC,           &mo U_GAMENUM,     &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_LAYER_GAMENUM \
&kp ESC,           &kp N7,            &kp N8,            &kp N9,            &kp T,             &kp LBKT,          &kp F7,            &kp F8,            &kp F9,            &kp RBKT,         \
&kp LSHFT,         &kp N4,            &kp N5,            &kp N6,            &kp G,             &kp EQL,           &kp F4,            &kp F5,            &kp F6,            &kp SEMI,         \
&kp LCTRL,         &kp N1,            &kp N2,            &kp N3,            &kp B,             &kp BSLH,          &kp F1,            &kp F2,            &kp F3,            &kp GRAVE,        \
U_NP,              U_NP,              &none,             &kp SPC,           &none,             &kp MINUS,         &kp N0,            &kp DOT,           U_NP,              U_NP

#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base") \
MIRYOKU_X(EXTRA,  "Extra") \
MIRYOKU_X(TAP,    "Tap") \
MIRYOKU_X(BUTTON, "Button") \
MIRYOKU_X(NAV,    "Nav") \
MIRYOKU_X(MOUSE,  "Mouse") \
MIRYOKU_X(MEDIA,  "Media") \
MIRYOKU_X(NUM,    "Num") \
MIRYOKU_X(SYM,    "Sym") \
MIRYOKU_X(FUN,    "Fun") \
MIRYOKU_X(GAME,   "Game") \
MIRYOKU_X(GAMENUM,"GNum")

#define MIRYOKU_LAYERMAPPING_GAME MIRYOKU_MAPPING
#define MIRYOKU_LAYERMAPPING_GAMENUM MIRYOKU_MAPPING

#define U_BASE        0
#define U_EXTRA       1
#define U_TAP         2
#define U_BUTTON      3
#define U_NAV         4
#define U_MOUSE       5
#define U_MEDIA       6
#define U_NUM         7
#define U_SYM         8
#define U_FUN         9
#define U_GAME       10
#define U_GAMENUM    11

/ {
    combos {
        compatible = "zmk,combos";
        
        combo_toggle_layer_gaming {
            timeout-ms = <50>;
            key-positions = <30 35>;
            bindings = <&tog U_GAME>;
            layers = <U_BASE U_GAME>;
        };

        // Combo für ä (Q + A) -> Vertikal links außen
        combo_ae {
            timeout-ms = <50>;
            key-positions = <0 10>; 
            bindings = <&kp RA(A)>;
            layers = <U_BASE>;
        };

        // Combo für ß (W + S) -> Vertikal links halbaußen
        combo_sz {
            timeout-ms = <50>;
            key-positions = <1 11>;
            bindings = <&kp RA(S)>;
            layers = <U_BASE>;
        };

        // Combo für ü (U + J) -> Vertikal rechts halbaußen
        combo_ue {
            timeout-ms = <50>;
            key-positions = <7 17>;
            bindings = <&kp RA(U)>;
            layers = <U_BASE>;
        };

        // Combo für ö (O + L) -> Vertikal rechts außen
        combo_oe {
            timeout-ms = <50>;
            key-positions = <9 19>;
            bindings = <&kp RA(O)>;
            layers = <U_BASE>;
        };
    };
};
