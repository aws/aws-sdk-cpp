/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/Vc3FramerateControl.h>
#include <aws/mediaconvert/model/Vc3FramerateConversionAlgorithm.h>
#include <aws/mediaconvert/model/Vc3InterlaceMode.h>
#include <aws/mediaconvert/model/Vc3ScanTypeConversionMode.h>
#include <aws/mediaconvert/model/Vc3SlowPal.h>
#include <aws/mediaconvert/model/Vc3Telecine.h>
#include <aws/mediaconvert/model/Vc3Class.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MediaConvert
{
namespace Model
{

  /**
   * Required when you set Codec to the value VC3<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/Vc3Settings">AWS
   * API Reference</a></p>
   */
  class Vc3Settings
  {
  public:
    AWS_MEDIACONVERT_API Vc3Settings() = default;
    AWS_MEDIACONVERT_API Vc3Settings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Vc3Settings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * If you are using the console, use the Framerate setting to specify the frame
     * rate for this output. If you want to keep the same frame rate as the input
     * video, choose Follow source. If you want to do frame rate conversion, choose a
     * frame rate from the dropdown list or choose Custom. The framerates shown in the
     * dropdown list are decimal approximations of fractions. If you choose Custom,
     * specify your frame rate as a fraction.
     */
    inline Vc3FramerateControl GetFramerateControl() const { return m_framerateControl; }
    inline bool FramerateControlHasBeenSet() const { return m_framerateControlHasBeenSet; }
    inline void SetFramerateControl(Vc3FramerateControl value) { m_framerateControlHasBeenSet = true; m_framerateControl = value; }
    inline Vc3Settings& WithFramerateControl(Vc3FramerateControl value) { SetFramerateControl(value); return *this;}
    ///@}

    ///@{
    /**
     * Choose the method that you want MediaConvert to use when increasing or
     * decreasing your video's frame rate. For numerically simple conversions, such as
     * 60 fps to 30 fps: We recommend that you keep the default value, Drop duplicate.
     * For numerically complex conversions, to avoid stutter: Choose Interpolate. This
     * results in a smooth picture, but might introduce undesirable video artifacts.
     * For complex frame rate conversions, especially if your source video has already
     * been converted from its original cadence: Choose FrameFormer to do
     * motion-compensated interpolation. FrameFormer uses the best conversion method
     * frame by frame. Note that using FrameFormer increases the transcoding time and
     * incurs a significant add-on cost. When you choose FrameFormer, your input video
     * resolution must be at least 128x96. To create an output with the same number of
     * frames as your input: Choose Maintain frame count. When you do, MediaConvert
     * will not drop, interpolate, add, or otherwise change the frame count from your
     * input to your output. Note that since the frame count is maintained, the
     * duration of your output will become shorter at higher frame rates and longer at
     * lower frame rates.
     */
    inline Vc3FramerateConversionAlgorithm GetFramerateConversionAlgorithm() const { return m_framerateConversionAlgorithm; }
    inline bool FramerateConversionAlgorithmHasBeenSet() const { return m_framerateConversionAlgorithmHasBeenSet; }
    inline void SetFramerateConversionAlgorithm(Vc3FramerateConversionAlgorithm value) { m_framerateConversionAlgorithmHasBeenSet = true; m_framerateConversionAlgorithm = value; }
    inline Vc3Settings& WithFramerateConversionAlgorithm(Vc3FramerateConversionAlgorithm value) { SetFramerateConversionAlgorithm(value); return *this;}
    ///@}

    ///@{
    /**
     * When you use the API for transcode jobs that use frame rate conversion, specify
     * the frame rate as a fraction. For example, 24000 / 1001 = 23.976 fps. Use
     * FramerateDenominator to specify the denominator of this fraction. In this
     * example, use 1001 for the value of FramerateDenominator. When you use the
     * console for transcode jobs that use frame rate conversion, provide the value as
     * a decimal number for Framerate. In this example, specify 23.976.
     */
    inline int GetFramerateDenominator() const { return m_framerateDenominator; }
    inline bool FramerateDenominatorHasBeenSet() const { return m_framerateDenominatorHasBeenSet; }
    inline void SetFramerateDenominator(int value) { m_framerateDenominatorHasBeenSet = true; m_framerateDenominator = value; }
    inline Vc3Settings& WithFramerateDenominator(int value) { SetFramerateDenominator(value); return *this;}
    ///@}

    ///@{
    /**
     * When you use the API for transcode jobs that use frame rate conversion, specify
     * the frame rate as a fraction. For example, 24000 / 1001 = 23.976 fps. Use
     * FramerateNumerator to specify the numerator of this fraction. In this example,
     * use 24000 for the value of FramerateNumerator. When you use the console for
     * transcode jobs that use frame rate conversion, provide the value as a decimal
     * number for Framerate. In this example, specify 23.976.
     */
    inline int GetFramerateNumerator() const { return m_framerateNumerator; }
    inline bool FramerateNumeratorHasBeenSet() const { return m_framerateNumeratorHasBeenSet; }
    inline void SetFramerateNumerator(int value) { m_framerateNumeratorHasBeenSet = true; m_framerateNumerator = value; }
    inline Vc3Settings& WithFramerateNumerator(int value) { SetFramerateNumerator(value); return *this;}
    ///@}

    ///@{
    /**
     * Optional. Choose the scan line type for this output. If you don't specify a
     * value, MediaConvert will create a progressive output.
     */
    inline Vc3InterlaceMode GetInterlaceMode() const { return m_interlaceMode; }
    inline bool InterlaceModeHasBeenSet() const { return m_interlaceModeHasBeenSet; }
    inline void SetInterlaceMode(Vc3InterlaceMode value) { m_interlaceModeHasBeenSet = true; m_interlaceMode = value; }
    inline Vc3Settings& WithInterlaceMode(Vc3InterlaceMode value) { SetInterlaceMode(value); return *this;}
    ///@}

    ///@{
    /**
     * Use this setting for interlaced outputs, when your output frame rate is half of
     * your input frame rate. In this situation, choose Optimized interlacing to create
     * a better quality interlaced output. In this case, each progressive frame from
     * the input corresponds to an interlaced field in the output. Keep the default
     * value, Basic interlacing, for all other output frame rates. With basic
     * interlacing, MediaConvert performs any frame rate conversion first and then
     * interlaces the frames. When you choose Optimized interlacing and you set your
     * output frame rate to a value that isn't suitable for optimized interlacing,
     * MediaConvert automatically falls back to basic interlacing. Required settings:
     * To use optimized interlacing, you must set Telecine to None or Soft. You can't
     * use optimized interlacing for hard telecine outputs. You must also set Interlace
     * mode to a value other than Progressive.
     */
    inline Vc3ScanTypeConversionMode GetScanTypeConversionMode() const { return m_scanTypeConversionMode; }
    inline bool ScanTypeConversionModeHasBeenSet() const { return m_scanTypeConversionModeHasBeenSet; }
    inline void SetScanTypeConversionMode(Vc3ScanTypeConversionMode value) { m_scanTypeConversionModeHasBeenSet = true; m_scanTypeConversionMode = value; }
    inline Vc3Settings& WithScanTypeConversionMode(Vc3ScanTypeConversionMode value) { SetScanTypeConversionMode(value); return *this;}
    ///@}

    ///@{
    /**
     * Ignore this setting unless your input frame rate is 23.976 or 24 frames per
     * second (fps). Enable slow PAL to create a 25 fps output by relabeling the video
     * frames and resampling your audio. Note that enabling this setting will slightly
     * reduce the duration of your video. Related settings: You must also set Framerate
     * to 25.
     */
    inline Vc3SlowPal GetSlowPal() const { return m_slowPal; }
    inline bool SlowPalHasBeenSet() const { return m_slowPalHasBeenSet; }
    inline void SetSlowPal(Vc3SlowPal value) { m_slowPalHasBeenSet = true; m_slowPal = value; }
    inline Vc3Settings& WithSlowPal(Vc3SlowPal value) { SetSlowPal(value); return *this;}
    ///@}

    ///@{
    /**
     * When you do frame rate conversion from 23.976 frames per second (fps) to 29.97
     * fps, and your output scan type is interlaced, you can optionally enable hard
     * telecine to create a smoother picture. When you keep the default value, None,
     * MediaConvert does a standard frame rate conversion to 29.97 without doing
     * anything with the field polarity to create a smoother picture.
     */
    inline Vc3Telecine GetTelecine() const { return m_telecine; }
    inline bool TelecineHasBeenSet() const { return m_telecineHasBeenSet; }
    inline void SetTelecine(Vc3Telecine value) { m_telecineHasBeenSet = true; m_telecine = value; }
    inline Vc3Settings& WithTelecine(Vc3Telecine value) { SetTelecine(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the VC3 class to choose the quality characteristics for this output. VC3
     * class, together with the settings Framerate (framerateNumerator and
     * framerateDenominator) and Resolution (height and width), determine your output
     * bitrate. For example, say that your video resolution is 1920x1080 and your
     * framerate is 29.97. Then Class 145 gives you an output with a bitrate of
     * approximately 145 Mbps and Class 220 gives you and output with a bitrate of
     * approximately 220 Mbps. VC3 class also specifies the color bit depth of your
     * output.
     */
    inline Vc3Class GetVc3Class() const { return m_vc3Class; }
    inline bool Vc3ClassHasBeenSet() const { return m_vc3ClassHasBeenSet; }
    inline void SetVc3Class(Vc3Class value) { m_vc3ClassHasBeenSet = true; m_vc3Class = value; }
    inline Vc3Settings& WithVc3Class(Vc3Class value) { SetVc3Class(value); return *this;}
    ///@}
  private:

    Vc3FramerateControl m_framerateControl{Vc3FramerateControl::NOT_SET};
    bool m_framerateControlHasBeenSet = false;

    Vc3FramerateConversionAlgorithm m_framerateConversionAlgorithm{Vc3FramerateConversionAlgorithm::NOT_SET};
    bool m_framerateConversionAlgorithmHasBeenSet = false;

    int m_framerateDenominator{0};
    bool m_framerateDenominatorHasBeenSet = false;

    int m_framerateNumerator{0};
    bool m_framerateNumeratorHasBeenSet = false;

    Vc3InterlaceMode m_interlaceMode{Vc3InterlaceMode::NOT_SET};
    bool m_interlaceModeHasBeenSet = false;

    Vc3ScanTypeConversionMode m_scanTypeConversionMode{Vc3ScanTypeConversionMode::NOT_SET};
    bool m_scanTypeConversionModeHasBeenSet = false;

    Vc3SlowPal m_slowPal{Vc3SlowPal::NOT_SET};
    bool m_slowPalHasBeenSet = false;

    Vc3Telecine m_telecine{Vc3Telecine::NOT_SET};
    bool m_telecineHasBeenSet = false;

    Vc3Class m_vc3Class{Vc3Class::NOT_SET};
    bool m_vc3ClassHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
