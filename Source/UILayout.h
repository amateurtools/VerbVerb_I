#pragma once

//==============================================================================
// UILayout.h
// All constants are in the 800x600 design space (pixels).
// resized() maps them to actual screen coords using:
//   actualX = uiX + int (baseX * s)
//   actualY = uiY + int (baseY * s)
//==============================================================================

namespace UILayout
{
    constexpr float scaleUp = 1.33f;

    // ── Design canvas ────────────────────────────────────────────────────────
    constexpr float canvasW = 800.0f * scaleUp;
    constexpr float canvasH = 600.0f * scaleUp;

    // ── LED enable buttons ───────────────────────────────────────────────────
    constexpr float enableLedW   = 35.0f * scaleUp;
    constexpr float enableLedH   = 35.0f * scaleUp;
    constexpr float enableAX     = 157.0f * scaleUp;   // left LED X
    constexpr float enableAY     = 59.0f * scaleUp;    // both LEDs share the same Y
    // enableBX is mirrored: canvasW - enableAX - enableLedW


    // ── ComboBoxes ───────────────────────────────────────────────────────────
    constexpr float comboW     = 160.0f * scaleUp;
    constexpr float comboH     = 30.0f * scaleUp;
    constexpr float comboGapY  = 15.0f * scaleUp;   // vertical gap between model and patch

    // ── Knobs (generic) ──────────────────────────────────────────────────────
    constexpr float knobSize   = 50.0f * scaleUp;

    // ── Device column A (model + patch combos) ───────────────────────────────
    constexpr float colACenterX  = 230.0f * scaleUp;
    constexpr float colATopY     = 156.0f * scaleUp;

    // ── Device column B (model + patch combos) ───────────────────────────────
    constexpr float colBCenterX  = 562.0f * scaleUp;
    constexpr float colBTopY     = 156.0f * scaleUp;   // same as A if rows are aligned

    // ── Device A: 2×4 knob grid (design space) ──────────────────────────────
    // Top row (PreDelay, Feedback, Pan, Level)
    constexpr float devA_knobRow1_Y = 300.0f * scaleUp;   // tune this to sit under device A
    constexpr float devA_knobCol1_X = 35.0f * scaleUp;   // PreDelay A
    constexpr float devA_knobCol2_X = 115.0f * scaleUp;   // Feedback A
    constexpr float devA_knobCol3_X = 195.0f * scaleUp;   // Pan A
    constexpr float devA_knobCol4_X = 275.0f * scaleUp;   // Level A

    // Bottom row (LPF, HPF, lfoDepth, lfoRate)
    constexpr float devA_knobRow2_Y = 408.0f * scaleUp;   // second row under A
    // X positions are usually same as row1:
    constexpr float devA_HPF_X      = devA_knobCol1_X; 
    constexpr float devA_LPF_X      = devA_knobCol2_X;
    constexpr float devA_lfoRate_X  = devA_knobCol3_X;
    constexpr float devA_lfoDepth_X = devA_knobCol4_X;

    // ── Device B: 2×4 knob grid (design space) ──────────────────────────────
    // Top row (PreDelay, Feedback, Pan, Level)
    constexpr float devB_knobRow1_Y = 300.0f * scaleUp;   // mirror/same as A, under device B
    constexpr float devB_knobCol1_X = 474.0f * scaleUp;   // PreDelay B
    constexpr float devB_knobCol2_X = 555.0f * scaleUp;   // Feedback B
    constexpr float devB_knobCol3_X = 635.0f * scaleUp;   // Pan B
    constexpr float devB_knobCol4_X = 715.0f * scaleUp;   // Level B

    // Bottom row (LPF, HPF, lfoDepth, lfoRate)
    constexpr float devB_knobRow2_Y = 408.0f * scaleUp;
    constexpr float devB_HPF_X      = devB_knobCol1_X;
    constexpr float devB_LPF_X      = devB_knobCol2_X;
    constexpr float devB_lfoRate_X  = devB_knobCol3_X;
    constexpr float devB_lfoDepth_X = devB_knobCol4_X;
  
    // ── Routing column (3 buttons, centred vertically) ───────────────────────
    constexpr float baseRoutingTopY = 230.0f * scaleUp;
    constexpr float routingCenterX  = 400.0f * scaleUp;
    constexpr float routingCellSize = 40.0f * scaleUp; // square
    constexpr float routingGapY     = 10.0f * scaleUp;  // gap between each button

    // ── Bottom row: In / Wet / Out ───────────────────────────────────────────
    constexpr float bottomKnobY    = 527.0f * scaleUp;  // top-Y of all three knobs
    constexpr float bottomKnobCX   = 400.0f * scaleUp;  // centre-X of the Wet knob
    constexpr float bottomKnobInX  = 35.0f * scaleUp;  // input knob
    constexpr float bottomKnobOutX = 715.0f * scaleUp;  // upper left corner of output knob

    // ── Level indicators ─────────────────────────────────────────────────────
    constexpr float indicatorX   = 106.0f * scaleUp;   // left indicator X; right is mirrored
    constexpr float indicatorY   = 527.0f * scaleUp;
    constexpr float indicatorW   = 20.0f * scaleUp;
    constexpr float indicatorH   = 50.0f * scaleUp;
}
