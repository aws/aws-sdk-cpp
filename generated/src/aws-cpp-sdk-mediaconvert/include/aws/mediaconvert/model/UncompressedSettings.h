/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/UncompressedFourcc.h>
#include <aws/mediaconvert/model/UncompressedFramerateControl.h>
#include <aws/mediaconvert/model/UncompressedFramerateConversionAlgorithm.h>
#include <aws/mediaconvert/model/UncompressedInterlaceMode.h>
#include <aws/mediaconvert/model/UncompressedScanTypeConversionMode.h>
#include <aws/mediaconvert/model/UncompressedSlowPal.h>
#include <aws/mediaconvert/model/UncompressedTelecine.h>
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
   * Required when you set Codec, under VideoDescription>CodecSettings to the value
   * UNCOMPRESSED.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/UncompressedSettings">AWS
   * API Reference</a></p>
   */
  class UncompressedSettings
  {
  public:
    AWS_MEDIACONVERT_API UncompressedSettings();
    AWS_MEDIACONVERT_API UncompressedSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API UncompressedSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The four character code for the uncompressed video.
     */
    inline const UncompressedFourcc& GetFourcc() const{ return m_fourcc; }

    /**
     * The four character code for the uncompressed video.
     */
    inline bool FourccHasBeenSet() const { return m_fourccHasBeenSet; }

    /**
     * The four character code for the uncompressed video.
     */
    inline void SetFourcc(const UncompressedFourcc& value) { m_fourccHasBeenSet = true; m_fourcc = value; }

    /**
     * The four character code for the uncompressed video.
     */
    inline void SetFourcc(UncompressedFourcc&& value) { m_fourccHasBeenSet = true; m_fourcc = std::move(value); }

    /**
     * The four character code for the uncompressed video.
     */
    inline UncompressedSettings& WithFourcc(const UncompressedFourcc& value) { SetFourcc(value); return *this;}

    /**
     * The four character code for the uncompressed video.
     */
    inline UncompressedSettings& WithFourcc(UncompressedFourcc&& value) { SetFourcc(std::move(value)); return *this;}


    /**
     * Use the Framerate setting to specify the frame rate for this output. If you want
     * to keep the same frame rate as the input video, choose Follow source. If you
     * want to do frame rate conversion, choose a frame rate from the dropdown list or
     * choose Custom. The framerates shown in the dropdown list are decimal
     * approximations of fractions. If you choose Custom, specify your frame rate as a
     * fraction.
     */
    inline const UncompressedFramerateControl& GetFramerateControl() const{ return m_framerateControl; }

    /**
     * Use the Framerate setting to specify the frame rate for this output. If you want
     * to keep the same frame rate as the input video, choose Follow source. If you
     * want to do frame rate conversion, choose a frame rate from the dropdown list or
     * choose Custom. The framerates shown in the dropdown list are decimal
     * approximations of fractions. If you choose Custom, specify your frame rate as a
     * fraction.
     */
    inline bool FramerateControlHasBeenSet() const { return m_framerateControlHasBeenSet; }

    /**
     * Use the Framerate setting to specify the frame rate for this output. If you want
     * to keep the same frame rate as the input video, choose Follow source. If you
     * want to do frame rate conversion, choose a frame rate from the dropdown list or
     * choose Custom. The framerates shown in the dropdown list are decimal
     * approximations of fractions. If you choose Custom, specify your frame rate as a
     * fraction.
     */
    inline void SetFramerateControl(const UncompressedFramerateControl& value) { m_framerateControlHasBeenSet = true; m_framerateControl = value; }

    /**
     * Use the Framerate setting to specify the frame rate for this output. If you want
     * to keep the same frame rate as the input video, choose Follow source. If you
     * want to do frame rate conversion, choose a frame rate from the dropdown list or
     * choose Custom. The framerates shown in the dropdown list are decimal
     * approximations of fractions. If you choose Custom, specify your frame rate as a
     * fraction.
     */
    inline void SetFramerateControl(UncompressedFramerateControl&& value) { m_framerateControlHasBeenSet = true; m_framerateControl = std::move(value); }

    /**
     * Use the Framerate setting to specify the frame rate for this output. If you want
     * to keep the same frame rate as the input video, choose Follow source. If you
     * want to do frame rate conversion, choose a frame rate from the dropdown list or
     * choose Custom. The framerates shown in the dropdown list are decimal
     * approximations of fractions. If you choose Custom, specify your frame rate as a
     * fraction.
     */
    inline UncompressedSettings& WithFramerateControl(const UncompressedFramerateControl& value) { SetFramerateControl(value); return *this;}

    /**
     * Use the Framerate setting to specify the frame rate for this output. If you want
     * to keep the same frame rate as the input video, choose Follow source. If you
     * want to do frame rate conversion, choose a frame rate from the dropdown list or
     * choose Custom. The framerates shown in the dropdown list are decimal
     * approximations of fractions. If you choose Custom, specify your frame rate as a
     * fraction.
     */
    inline UncompressedSettings& WithFramerateControl(UncompressedFramerateControl&& value) { SetFramerateControl(std::move(value)); return *this;}


    /**
     * Choose the method that you want MediaConvert to use when increasing or
     * decreasing the frame rate. For numerically simple conversions, such as 60 fps to
     * 30 fps: We recommend that you keep the default value, Drop duplicate. For
     * numerically complex conversions, to avoid stutter: Choose Interpolate. This
     * results in a smooth picture, but might introduce undesirable video artifacts.
     * For complex frame rate conversions, especially if your source video has already
     * been converted from its original cadence: Choose FrameFormer to do
     * motion-compensated interpolation. FrameFormer uses the best conversion method
     * frame by frame. Note that using FrameFormer increases the transcoding time and
     * incurs a significant add-on cost. When you choose FrameFormer, your input video
     * resolution must be at least 128x96.
     */
    inline const UncompressedFramerateConversionAlgorithm& GetFramerateConversionAlgorithm() const{ return m_framerateConversionAlgorithm; }

    /**
     * Choose the method that you want MediaConvert to use when increasing or
     * decreasing the frame rate. For numerically simple conversions, such as 60 fps to
     * 30 fps: We recommend that you keep the default value, Drop duplicate. For
     * numerically complex conversions, to avoid stutter: Choose Interpolate. This
     * results in a smooth picture, but might introduce undesirable video artifacts.
     * For complex frame rate conversions, especially if your source video has already
     * been converted from its original cadence: Choose FrameFormer to do
     * motion-compensated interpolation. FrameFormer uses the best conversion method
     * frame by frame. Note that using FrameFormer increases the transcoding time and
     * incurs a significant add-on cost. When you choose FrameFormer, your input video
     * resolution must be at least 128x96.
     */
    inline bool FramerateConversionAlgorithmHasBeenSet() const { return m_framerateConversionAlgorithmHasBeenSet; }

    /**
     * Choose the method that you want MediaConvert to use when increasing or
     * decreasing the frame rate. For numerically simple conversions, such as 60 fps to
     * 30 fps: We recommend that you keep the default value, Drop duplicate. For
     * numerically complex conversions, to avoid stutter: Choose Interpolate. This
     * results in a smooth picture, but might introduce undesirable video artifacts.
     * For complex frame rate conversions, especially if your source video has already
     * been converted from its original cadence: Choose FrameFormer to do
     * motion-compensated interpolation. FrameFormer uses the best conversion method
     * frame by frame. Note that using FrameFormer increases the transcoding time and
     * incurs a significant add-on cost. When you choose FrameFormer, your input video
     * resolution must be at least 128x96.
     */
    inline void SetFramerateConversionAlgorithm(const UncompressedFramerateConversionAlgorithm& value) { m_framerateConversionAlgorithmHasBeenSet = true; m_framerateConversionAlgorithm = value; }

    /**
     * Choose the method that you want MediaConvert to use when increasing or
     * decreasing the frame rate. For numerically simple conversions, such as 60 fps to
     * 30 fps: We recommend that you keep the default value, Drop duplicate. For
     * numerically complex conversions, to avoid stutter: Choose Interpolate. This
     * results in a smooth picture, but might introduce undesirable video artifacts.
     * For complex frame rate conversions, especially if your source video has already
     * been converted from its original cadence: Choose FrameFormer to do
     * motion-compensated interpolation. FrameFormer uses the best conversion method
     * frame by frame. Note that using FrameFormer increases the transcoding time and
     * incurs a significant add-on cost. When you choose FrameFormer, your input video
     * resolution must be at least 128x96.
     */
    inline void SetFramerateConversionAlgorithm(UncompressedFramerateConversionAlgorithm&& value) { m_framerateConversionAlgorithmHasBeenSet = true; m_framerateConversionAlgorithm = std::move(value); }

    /**
     * Choose the method that you want MediaConvert to use when increasing or
     * decreasing the frame rate. For numerically simple conversions, such as 60 fps to
     * 30 fps: We recommend that you keep the default value, Drop duplicate. For
     * numerically complex conversions, to avoid stutter: Choose Interpolate. This
     * results in a smooth picture, but might introduce undesirable video artifacts.
     * For complex frame rate conversions, especially if your source video has already
     * been converted from its original cadence: Choose FrameFormer to do
     * motion-compensated interpolation. FrameFormer uses the best conversion method
     * frame by frame. Note that using FrameFormer increases the transcoding time and
     * incurs a significant add-on cost. When you choose FrameFormer, your input video
     * resolution must be at least 128x96.
     */
    inline UncompressedSettings& WithFramerateConversionAlgorithm(const UncompressedFramerateConversionAlgorithm& value) { SetFramerateConversionAlgorithm(value); return *this;}

    /**
     * Choose the method that you want MediaConvert to use when increasing or
     * decreasing the frame rate. For numerically simple conversions, such as 60 fps to
     * 30 fps: We recommend that you keep the default value, Drop duplicate. For
     * numerically complex conversions, to avoid stutter: Choose Interpolate. This
     * results in a smooth picture, but might introduce undesirable video artifacts.
     * For complex frame rate conversions, especially if your source video has already
     * been converted from its original cadence: Choose FrameFormer to do
     * motion-compensated interpolation. FrameFormer uses the best conversion method
     * frame by frame. Note that using FrameFormer increases the transcoding time and
     * incurs a significant add-on cost. When you choose FrameFormer, your input video
     * resolution must be at least 128x96.
     */
    inline UncompressedSettings& WithFramerateConversionAlgorithm(UncompressedFramerateConversionAlgorithm&& value) { SetFramerateConversionAlgorithm(std::move(value)); return *this;}


    /**
     * When you use the API for transcode jobs that use frame rate conversion, specify
     * the frame rate as a fraction. For example, 24000 / 1001 = 23.976 fps. Use
     * FramerateDenominator to specify the denominator of this fraction. In this
     * example, use 1001 for the value of FramerateDenominator. When you use the
     * console for transcode jobs that use frame rate conversion, provide the value as
     * a decimal number for Framerate. In this example, specify 23.976.
     */
    inline int GetFramerateDenominator() const{ return m_framerateDenominator; }

    /**
     * When you use the API for transcode jobs that use frame rate conversion, specify
     * the frame rate as a fraction. For example, 24000 / 1001 = 23.976 fps. Use
     * FramerateDenominator to specify the denominator of this fraction. In this
     * example, use 1001 for the value of FramerateDenominator. When you use the
     * console for transcode jobs that use frame rate conversion, provide the value as
     * a decimal number for Framerate. In this example, specify 23.976.
     */
    inline bool FramerateDenominatorHasBeenSet() const { return m_framerateDenominatorHasBeenSet; }

    /**
     * When you use the API for transcode jobs that use frame rate conversion, specify
     * the frame rate as a fraction. For example, 24000 / 1001 = 23.976 fps. Use
     * FramerateDenominator to specify the denominator of this fraction. In this
     * example, use 1001 for the value of FramerateDenominator. When you use the
     * console for transcode jobs that use frame rate conversion, provide the value as
     * a decimal number for Framerate. In this example, specify 23.976.
     */
    inline void SetFramerateDenominator(int value) { m_framerateDenominatorHasBeenSet = true; m_framerateDenominator = value; }

    /**
     * When you use the API for transcode jobs that use frame rate conversion, specify
     * the frame rate as a fraction. For example, 24000 / 1001 = 23.976 fps. Use
     * FramerateDenominator to specify the denominator of this fraction. In this
     * example, use 1001 for the value of FramerateDenominator. When you use the
     * console for transcode jobs that use frame rate conversion, provide the value as
     * a decimal number for Framerate. In this example, specify 23.976.
     */
    inline UncompressedSettings& WithFramerateDenominator(int value) { SetFramerateDenominator(value); return *this;}


    /**
     * When you use the API for transcode jobs that use frame rate conversion, specify
     * the frame rate as a fraction. For example, 24000 / 1001 = 23.976 fps. Use
     * FramerateNumerator to specify the numerator of this fraction. In this example,
     * use 24000 for the value of FramerateNumerator. When you use the console for
     * transcode jobs that use frame rate conversion, provide the value as a decimal
     * number for Framerate. In this example, specify 23.976.
     */
    inline int GetFramerateNumerator() const{ return m_framerateNumerator; }

    /**
     * When you use the API for transcode jobs that use frame rate conversion, specify
     * the frame rate as a fraction. For example, 24000 / 1001 = 23.976 fps. Use
     * FramerateNumerator to specify the numerator of this fraction. In this example,
     * use 24000 for the value of FramerateNumerator. When you use the console for
     * transcode jobs that use frame rate conversion, provide the value as a decimal
     * number for Framerate. In this example, specify 23.976.
     */
    inline bool FramerateNumeratorHasBeenSet() const { return m_framerateNumeratorHasBeenSet; }

    /**
     * When you use the API for transcode jobs that use frame rate conversion, specify
     * the frame rate as a fraction. For example, 24000 / 1001 = 23.976 fps. Use
     * FramerateNumerator to specify the numerator of this fraction. In this example,
     * use 24000 for the value of FramerateNumerator. When you use the console for
     * transcode jobs that use frame rate conversion, provide the value as a decimal
     * number for Framerate. In this example, specify 23.976.
     */
    inline void SetFramerateNumerator(int value) { m_framerateNumeratorHasBeenSet = true; m_framerateNumerator = value; }

    /**
     * When you use the API for transcode jobs that use frame rate conversion, specify
     * the frame rate as a fraction. For example, 24000 / 1001 = 23.976 fps. Use
     * FramerateNumerator to specify the numerator of this fraction. In this example,
     * use 24000 for the value of FramerateNumerator. When you use the console for
     * transcode jobs that use frame rate conversion, provide the value as a decimal
     * number for Framerate. In this example, specify 23.976.
     */
    inline UncompressedSettings& WithFramerateNumerator(int value) { SetFramerateNumerator(value); return *this;}


    /**
     * Optional. Choose the scan line type for this output. If you don't specify a
     * value, MediaConvert will create a progressive output.
     */
    inline const UncompressedInterlaceMode& GetInterlaceMode() const{ return m_interlaceMode; }

    /**
     * Optional. Choose the scan line type for this output. If you don't specify a
     * value, MediaConvert will create a progressive output.
     */
    inline bool InterlaceModeHasBeenSet() const { return m_interlaceModeHasBeenSet; }

    /**
     * Optional. Choose the scan line type for this output. If you don't specify a
     * value, MediaConvert will create a progressive output.
     */
    inline void SetInterlaceMode(const UncompressedInterlaceMode& value) { m_interlaceModeHasBeenSet = true; m_interlaceMode = value; }

    /**
     * Optional. Choose the scan line type for this output. If you don't specify a
     * value, MediaConvert will create a progressive output.
     */
    inline void SetInterlaceMode(UncompressedInterlaceMode&& value) { m_interlaceModeHasBeenSet = true; m_interlaceMode = std::move(value); }

    /**
     * Optional. Choose the scan line type for this output. If you don't specify a
     * value, MediaConvert will create a progressive output.
     */
    inline UncompressedSettings& WithInterlaceMode(const UncompressedInterlaceMode& value) { SetInterlaceMode(value); return *this;}

    /**
     * Optional. Choose the scan line type for this output. If you don't specify a
     * value, MediaConvert will create a progressive output.
     */
    inline UncompressedSettings& WithInterlaceMode(UncompressedInterlaceMode&& value) { SetInterlaceMode(std::move(value)); return *this;}


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
    inline const UncompressedScanTypeConversionMode& GetScanTypeConversionMode() const{ return m_scanTypeConversionMode; }

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
    inline bool ScanTypeConversionModeHasBeenSet() const { return m_scanTypeConversionModeHasBeenSet; }

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
    inline void SetScanTypeConversionMode(const UncompressedScanTypeConversionMode& value) { m_scanTypeConversionModeHasBeenSet = true; m_scanTypeConversionMode = value; }

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
    inline void SetScanTypeConversionMode(UncompressedScanTypeConversionMode&& value) { m_scanTypeConversionModeHasBeenSet = true; m_scanTypeConversionMode = std::move(value); }

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
    inline UncompressedSettings& WithScanTypeConversionMode(const UncompressedScanTypeConversionMode& value) { SetScanTypeConversionMode(value); return *this;}

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
    inline UncompressedSettings& WithScanTypeConversionMode(UncompressedScanTypeConversionMode&& value) { SetScanTypeConversionMode(std::move(value)); return *this;}


    /**
     * Ignore this setting unless your input frame rate is 23.976 or 24 frames per
     * second (fps). Enable slow PAL to create a 25 fps output by relabeling the video
     * frames and resampling your audio. Note that enabling this setting will slightly
     * reduce the duration of your video. Related settings: You must also set Framerate
     * to 25.
     */
    inline const UncompressedSlowPal& GetSlowPal() const{ return m_slowPal; }

    /**
     * Ignore this setting unless your input frame rate is 23.976 or 24 frames per
     * second (fps). Enable slow PAL to create a 25 fps output by relabeling the video
     * frames and resampling your audio. Note that enabling this setting will slightly
     * reduce the duration of your video. Related settings: You must also set Framerate
     * to 25.
     */
    inline bool SlowPalHasBeenSet() const { return m_slowPalHasBeenSet; }

    /**
     * Ignore this setting unless your input frame rate is 23.976 or 24 frames per
     * second (fps). Enable slow PAL to create a 25 fps output by relabeling the video
     * frames and resampling your audio. Note that enabling this setting will slightly
     * reduce the duration of your video. Related settings: You must also set Framerate
     * to 25.
     */
    inline void SetSlowPal(const UncompressedSlowPal& value) { m_slowPalHasBeenSet = true; m_slowPal = value; }

    /**
     * Ignore this setting unless your input frame rate is 23.976 or 24 frames per
     * second (fps). Enable slow PAL to create a 25 fps output by relabeling the video
     * frames and resampling your audio. Note that enabling this setting will slightly
     * reduce the duration of your video. Related settings: You must also set Framerate
     * to 25.
     */
    inline void SetSlowPal(UncompressedSlowPal&& value) { m_slowPalHasBeenSet = true; m_slowPal = std::move(value); }

    /**
     * Ignore this setting unless your input frame rate is 23.976 or 24 frames per
     * second (fps). Enable slow PAL to create a 25 fps output by relabeling the video
     * frames and resampling your audio. Note that enabling this setting will slightly
     * reduce the duration of your video. Related settings: You must also set Framerate
     * to 25.
     */
    inline UncompressedSettings& WithSlowPal(const UncompressedSlowPal& value) { SetSlowPal(value); return *this;}

    /**
     * Ignore this setting unless your input frame rate is 23.976 or 24 frames per
     * second (fps). Enable slow PAL to create a 25 fps output by relabeling the video
     * frames and resampling your audio. Note that enabling this setting will slightly
     * reduce the duration of your video. Related settings: You must also set Framerate
     * to 25.
     */
    inline UncompressedSettings& WithSlowPal(UncompressedSlowPal&& value) { SetSlowPal(std::move(value)); return *this;}


    /**
     * When you do frame rate conversion from 23.976 frames per second (fps) to 29.97
     * fps, and your output scan type is interlaced, you can optionally enable hard
     * telecine to create a smoother picture. When you keep the default value, None,
     * MediaConvert does a standard frame rate conversion to 29.97 without doing
     * anything with the field polarity to create a smoother picture.
     */
    inline const UncompressedTelecine& GetTelecine() const{ return m_telecine; }

    /**
     * When you do frame rate conversion from 23.976 frames per second (fps) to 29.97
     * fps, and your output scan type is interlaced, you can optionally enable hard
     * telecine to create a smoother picture. When you keep the default value, None,
     * MediaConvert does a standard frame rate conversion to 29.97 without doing
     * anything with the field polarity to create a smoother picture.
     */
    inline bool TelecineHasBeenSet() const { return m_telecineHasBeenSet; }

    /**
     * When you do frame rate conversion from 23.976 frames per second (fps) to 29.97
     * fps, and your output scan type is interlaced, you can optionally enable hard
     * telecine to create a smoother picture. When you keep the default value, None,
     * MediaConvert does a standard frame rate conversion to 29.97 without doing
     * anything with the field polarity to create a smoother picture.
     */
    inline void SetTelecine(const UncompressedTelecine& value) { m_telecineHasBeenSet = true; m_telecine = value; }

    /**
     * When you do frame rate conversion from 23.976 frames per second (fps) to 29.97
     * fps, and your output scan type is interlaced, you can optionally enable hard
     * telecine to create a smoother picture. When you keep the default value, None,
     * MediaConvert does a standard frame rate conversion to 29.97 without doing
     * anything with the field polarity to create a smoother picture.
     */
    inline void SetTelecine(UncompressedTelecine&& value) { m_telecineHasBeenSet = true; m_telecine = std::move(value); }

    /**
     * When you do frame rate conversion from 23.976 frames per second (fps) to 29.97
     * fps, and your output scan type is interlaced, you can optionally enable hard
     * telecine to create a smoother picture. When you keep the default value, None,
     * MediaConvert does a standard frame rate conversion to 29.97 without doing
     * anything with the field polarity to create a smoother picture.
     */
    inline UncompressedSettings& WithTelecine(const UncompressedTelecine& value) { SetTelecine(value); return *this;}

    /**
     * When you do frame rate conversion from 23.976 frames per second (fps) to 29.97
     * fps, and your output scan type is interlaced, you can optionally enable hard
     * telecine to create a smoother picture. When you keep the default value, None,
     * MediaConvert does a standard frame rate conversion to 29.97 without doing
     * anything with the field polarity to create a smoother picture.
     */
    inline UncompressedSettings& WithTelecine(UncompressedTelecine&& value) { SetTelecine(std::move(value)); return *this;}

  private:

    UncompressedFourcc m_fourcc;
    bool m_fourccHasBeenSet = false;

    UncompressedFramerateControl m_framerateControl;
    bool m_framerateControlHasBeenSet = false;

    UncompressedFramerateConversionAlgorithm m_framerateConversionAlgorithm;
    bool m_framerateConversionAlgorithmHasBeenSet = false;

    int m_framerateDenominator;
    bool m_framerateDenominatorHasBeenSet = false;

    int m_framerateNumerator;
    bool m_framerateNumeratorHasBeenSet = false;

    UncompressedInterlaceMode m_interlaceMode;
    bool m_interlaceModeHasBeenSet = false;

    UncompressedScanTypeConversionMode m_scanTypeConversionMode;
    bool m_scanTypeConversionModeHasBeenSet = false;

    UncompressedSlowPal m_slowPal;
    bool m_slowPalHasBeenSet = false;

    UncompressedTelecine m_telecine;
    bool m_telecineHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
