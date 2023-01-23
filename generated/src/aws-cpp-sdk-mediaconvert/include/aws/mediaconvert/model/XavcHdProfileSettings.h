/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/XavcHdProfileBitrateClass.h>
#include <aws/mediaconvert/model/XavcFlickerAdaptiveQuantization.h>
#include <aws/mediaconvert/model/XavcGopBReference.h>
#include <aws/mediaconvert/model/XavcInterlaceMode.h>
#include <aws/mediaconvert/model/XavcHdProfileQualityTuningLevel.h>
#include <aws/mediaconvert/model/XavcHdProfileTelecine.h>
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
   * Required when you set (Profile) under
   * (VideoDescription)>(CodecSettings)>(XavcSettings) to the value
   * XAVC_HD.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/XavcHdProfileSettings">AWS
   * API Reference</a></p>
   */
  class XavcHdProfileSettings
  {
  public:
    AWS_MEDIACONVERT_API XavcHdProfileSettings();
    AWS_MEDIACONVERT_API XavcHdProfileSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API XavcHdProfileSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Specify the XAVC HD (Long GOP) Bitrate Class to set the bitrate of your output.
     * Outputs of the same class have similar image quality over the operating points
     * that are valid for that class.
     */
    inline const XavcHdProfileBitrateClass& GetBitrateClass() const{ return m_bitrateClass; }

    /**
     * Specify the XAVC HD (Long GOP) Bitrate Class to set the bitrate of your output.
     * Outputs of the same class have similar image quality over the operating points
     * that are valid for that class.
     */
    inline bool BitrateClassHasBeenSet() const { return m_bitrateClassHasBeenSet; }

    /**
     * Specify the XAVC HD (Long GOP) Bitrate Class to set the bitrate of your output.
     * Outputs of the same class have similar image quality over the operating points
     * that are valid for that class.
     */
    inline void SetBitrateClass(const XavcHdProfileBitrateClass& value) { m_bitrateClassHasBeenSet = true; m_bitrateClass = value; }

    /**
     * Specify the XAVC HD (Long GOP) Bitrate Class to set the bitrate of your output.
     * Outputs of the same class have similar image quality over the operating points
     * that are valid for that class.
     */
    inline void SetBitrateClass(XavcHdProfileBitrateClass&& value) { m_bitrateClassHasBeenSet = true; m_bitrateClass = std::move(value); }

    /**
     * Specify the XAVC HD (Long GOP) Bitrate Class to set the bitrate of your output.
     * Outputs of the same class have similar image quality over the operating points
     * that are valid for that class.
     */
    inline XavcHdProfileSettings& WithBitrateClass(const XavcHdProfileBitrateClass& value) { SetBitrateClass(value); return *this;}

    /**
     * Specify the XAVC HD (Long GOP) Bitrate Class to set the bitrate of your output.
     * Outputs of the same class have similar image quality over the operating points
     * that are valid for that class.
     */
    inline XavcHdProfileSettings& WithBitrateClass(XavcHdProfileBitrateClass&& value) { SetBitrateClass(std::move(value)); return *this;}


    /**
     * The best way to set up adaptive quantization is to keep the default value, Auto
     * (AUTO), for the setting Adaptive quantization (XavcAdaptiveQuantization). When
     * you do so, MediaConvert automatically applies the best types of quantization for
     * your video content. Include this setting in your JSON job specification only
     * when you choose to change the default value for Adaptive quantization. Enable
     * this setting to have the encoder reduce I-frame pop. I-frame pop appears as a
     * visual flicker that can arise when the encoder saves bits by copying some
     * macroblocks many times from frame to frame, and then refreshes them at the
     * I-frame. When you enable this setting, the encoder updates these macroblocks
     * slightly more often to smooth out the flicker. This setting is disabled by
     * default. Related setting: In addition to enabling this setting, you must also
     * set Adaptive quantization (adaptiveQuantization) to a value other than Off (OFF)
     * or Auto (AUTO). Use Adaptive quantization to adjust the degree of smoothing that
     * Flicker adaptive quantization provides.
     */
    inline const XavcFlickerAdaptiveQuantization& GetFlickerAdaptiveQuantization() const{ return m_flickerAdaptiveQuantization; }

    /**
     * The best way to set up adaptive quantization is to keep the default value, Auto
     * (AUTO), for the setting Adaptive quantization (XavcAdaptiveQuantization). When
     * you do so, MediaConvert automatically applies the best types of quantization for
     * your video content. Include this setting in your JSON job specification only
     * when you choose to change the default value for Adaptive quantization. Enable
     * this setting to have the encoder reduce I-frame pop. I-frame pop appears as a
     * visual flicker that can arise when the encoder saves bits by copying some
     * macroblocks many times from frame to frame, and then refreshes them at the
     * I-frame. When you enable this setting, the encoder updates these macroblocks
     * slightly more often to smooth out the flicker. This setting is disabled by
     * default. Related setting: In addition to enabling this setting, you must also
     * set Adaptive quantization (adaptiveQuantization) to a value other than Off (OFF)
     * or Auto (AUTO). Use Adaptive quantization to adjust the degree of smoothing that
     * Flicker adaptive quantization provides.
     */
    inline bool FlickerAdaptiveQuantizationHasBeenSet() const { return m_flickerAdaptiveQuantizationHasBeenSet; }

    /**
     * The best way to set up adaptive quantization is to keep the default value, Auto
     * (AUTO), for the setting Adaptive quantization (XavcAdaptiveQuantization). When
     * you do so, MediaConvert automatically applies the best types of quantization for
     * your video content. Include this setting in your JSON job specification only
     * when you choose to change the default value for Adaptive quantization. Enable
     * this setting to have the encoder reduce I-frame pop. I-frame pop appears as a
     * visual flicker that can arise when the encoder saves bits by copying some
     * macroblocks many times from frame to frame, and then refreshes them at the
     * I-frame. When you enable this setting, the encoder updates these macroblocks
     * slightly more often to smooth out the flicker. This setting is disabled by
     * default. Related setting: In addition to enabling this setting, you must also
     * set Adaptive quantization (adaptiveQuantization) to a value other than Off (OFF)
     * or Auto (AUTO). Use Adaptive quantization to adjust the degree of smoothing that
     * Flicker adaptive quantization provides.
     */
    inline void SetFlickerAdaptiveQuantization(const XavcFlickerAdaptiveQuantization& value) { m_flickerAdaptiveQuantizationHasBeenSet = true; m_flickerAdaptiveQuantization = value; }

    /**
     * The best way to set up adaptive quantization is to keep the default value, Auto
     * (AUTO), for the setting Adaptive quantization (XavcAdaptiveQuantization). When
     * you do so, MediaConvert automatically applies the best types of quantization for
     * your video content. Include this setting in your JSON job specification only
     * when you choose to change the default value for Adaptive quantization. Enable
     * this setting to have the encoder reduce I-frame pop. I-frame pop appears as a
     * visual flicker that can arise when the encoder saves bits by copying some
     * macroblocks many times from frame to frame, and then refreshes them at the
     * I-frame. When you enable this setting, the encoder updates these macroblocks
     * slightly more often to smooth out the flicker. This setting is disabled by
     * default. Related setting: In addition to enabling this setting, you must also
     * set Adaptive quantization (adaptiveQuantization) to a value other than Off (OFF)
     * or Auto (AUTO). Use Adaptive quantization to adjust the degree of smoothing that
     * Flicker adaptive quantization provides.
     */
    inline void SetFlickerAdaptiveQuantization(XavcFlickerAdaptiveQuantization&& value) { m_flickerAdaptiveQuantizationHasBeenSet = true; m_flickerAdaptiveQuantization = std::move(value); }

    /**
     * The best way to set up adaptive quantization is to keep the default value, Auto
     * (AUTO), for the setting Adaptive quantization (XavcAdaptiveQuantization). When
     * you do so, MediaConvert automatically applies the best types of quantization for
     * your video content. Include this setting in your JSON job specification only
     * when you choose to change the default value for Adaptive quantization. Enable
     * this setting to have the encoder reduce I-frame pop. I-frame pop appears as a
     * visual flicker that can arise when the encoder saves bits by copying some
     * macroblocks many times from frame to frame, and then refreshes them at the
     * I-frame. When you enable this setting, the encoder updates these macroblocks
     * slightly more often to smooth out the flicker. This setting is disabled by
     * default. Related setting: In addition to enabling this setting, you must also
     * set Adaptive quantization (adaptiveQuantization) to a value other than Off (OFF)
     * or Auto (AUTO). Use Adaptive quantization to adjust the degree of smoothing that
     * Flicker adaptive quantization provides.
     */
    inline XavcHdProfileSettings& WithFlickerAdaptiveQuantization(const XavcFlickerAdaptiveQuantization& value) { SetFlickerAdaptiveQuantization(value); return *this;}

    /**
     * The best way to set up adaptive quantization is to keep the default value, Auto
     * (AUTO), for the setting Adaptive quantization (XavcAdaptiveQuantization). When
     * you do so, MediaConvert automatically applies the best types of quantization for
     * your video content. Include this setting in your JSON job specification only
     * when you choose to change the default value for Adaptive quantization. Enable
     * this setting to have the encoder reduce I-frame pop. I-frame pop appears as a
     * visual flicker that can arise when the encoder saves bits by copying some
     * macroblocks many times from frame to frame, and then refreshes them at the
     * I-frame. When you enable this setting, the encoder updates these macroblocks
     * slightly more often to smooth out the flicker. This setting is disabled by
     * default. Related setting: In addition to enabling this setting, you must also
     * set Adaptive quantization (adaptiveQuantization) to a value other than Off (OFF)
     * or Auto (AUTO). Use Adaptive quantization to adjust the degree of smoothing that
     * Flicker adaptive quantization provides.
     */
    inline XavcHdProfileSettings& WithFlickerAdaptiveQuantization(XavcFlickerAdaptiveQuantization&& value) { SetFlickerAdaptiveQuantization(std::move(value)); return *this;}


    /**
     * Specify whether the encoder uses B-frames as reference frames for other pictures
     * in the same GOP. Choose Allow (ENABLED) to allow the encoder to use B-frames as
     * reference frames. Choose Don't allow (DISABLED) to prevent the encoder from
     * using B-frames as reference frames.
     */
    inline const XavcGopBReference& GetGopBReference() const{ return m_gopBReference; }

    /**
     * Specify whether the encoder uses B-frames as reference frames for other pictures
     * in the same GOP. Choose Allow (ENABLED) to allow the encoder to use B-frames as
     * reference frames. Choose Don't allow (DISABLED) to prevent the encoder from
     * using B-frames as reference frames.
     */
    inline bool GopBReferenceHasBeenSet() const { return m_gopBReferenceHasBeenSet; }

    /**
     * Specify whether the encoder uses B-frames as reference frames for other pictures
     * in the same GOP. Choose Allow (ENABLED) to allow the encoder to use B-frames as
     * reference frames. Choose Don't allow (DISABLED) to prevent the encoder from
     * using B-frames as reference frames.
     */
    inline void SetGopBReference(const XavcGopBReference& value) { m_gopBReferenceHasBeenSet = true; m_gopBReference = value; }

    /**
     * Specify whether the encoder uses B-frames as reference frames for other pictures
     * in the same GOP. Choose Allow (ENABLED) to allow the encoder to use B-frames as
     * reference frames. Choose Don't allow (DISABLED) to prevent the encoder from
     * using B-frames as reference frames.
     */
    inline void SetGopBReference(XavcGopBReference&& value) { m_gopBReferenceHasBeenSet = true; m_gopBReference = std::move(value); }

    /**
     * Specify whether the encoder uses B-frames as reference frames for other pictures
     * in the same GOP. Choose Allow (ENABLED) to allow the encoder to use B-frames as
     * reference frames. Choose Don't allow (DISABLED) to prevent the encoder from
     * using B-frames as reference frames.
     */
    inline XavcHdProfileSettings& WithGopBReference(const XavcGopBReference& value) { SetGopBReference(value); return *this;}

    /**
     * Specify whether the encoder uses B-frames as reference frames for other pictures
     * in the same GOP. Choose Allow (ENABLED) to allow the encoder to use B-frames as
     * reference frames. Choose Don't allow (DISABLED) to prevent the encoder from
     * using B-frames as reference frames.
     */
    inline XavcHdProfileSettings& WithGopBReference(XavcGopBReference&& value) { SetGopBReference(std::move(value)); return *this;}


    /**
     * Frequency of closed GOPs. In streaming applications, it is recommended that this
     * be set to 1 so a decoder joining mid-stream will receive an IDR frame as quickly
     * as possible. Setting this value to 0 will break output segmenting.
     */
    inline int GetGopClosedCadence() const{ return m_gopClosedCadence; }

    /**
     * Frequency of closed GOPs. In streaming applications, it is recommended that this
     * be set to 1 so a decoder joining mid-stream will receive an IDR frame as quickly
     * as possible. Setting this value to 0 will break output segmenting.
     */
    inline bool GopClosedCadenceHasBeenSet() const { return m_gopClosedCadenceHasBeenSet; }

    /**
     * Frequency of closed GOPs. In streaming applications, it is recommended that this
     * be set to 1 so a decoder joining mid-stream will receive an IDR frame as quickly
     * as possible. Setting this value to 0 will break output segmenting.
     */
    inline void SetGopClosedCadence(int value) { m_gopClosedCadenceHasBeenSet = true; m_gopClosedCadence = value; }

    /**
     * Frequency of closed GOPs. In streaming applications, it is recommended that this
     * be set to 1 so a decoder joining mid-stream will receive an IDR frame as quickly
     * as possible. Setting this value to 0 will break output segmenting.
     */
    inline XavcHdProfileSettings& WithGopClosedCadence(int value) { SetGopClosedCadence(value); return *this;}


    /**
     * Specify the size of the buffer that MediaConvert uses in the HRD buffer model
     * for this output. Specify this value in bits; for example, enter five megabits as
     * 5000000. When you don't set this value, or you set it to zero, MediaConvert
     * calculates the default by doubling the bitrate of this output point.
     */
    inline int GetHrdBufferSize() const{ return m_hrdBufferSize; }

    /**
     * Specify the size of the buffer that MediaConvert uses in the HRD buffer model
     * for this output. Specify this value in bits; for example, enter five megabits as
     * 5000000. When you don't set this value, or you set it to zero, MediaConvert
     * calculates the default by doubling the bitrate of this output point.
     */
    inline bool HrdBufferSizeHasBeenSet() const { return m_hrdBufferSizeHasBeenSet; }

    /**
     * Specify the size of the buffer that MediaConvert uses in the HRD buffer model
     * for this output. Specify this value in bits; for example, enter five megabits as
     * 5000000. When you don't set this value, or you set it to zero, MediaConvert
     * calculates the default by doubling the bitrate of this output point.
     */
    inline void SetHrdBufferSize(int value) { m_hrdBufferSizeHasBeenSet = true; m_hrdBufferSize = value; }

    /**
     * Specify the size of the buffer that MediaConvert uses in the HRD buffer model
     * for this output. Specify this value in bits; for example, enter five megabits as
     * 5000000. When you don't set this value, or you set it to zero, MediaConvert
     * calculates the default by doubling the bitrate of this output point.
     */
    inline XavcHdProfileSettings& WithHrdBufferSize(int value) { SetHrdBufferSize(value); return *this;}


    /**
     * Choose the scan line type for the output. Keep the default value, Progressive
     * (PROGRESSIVE) to create a progressive output, regardless of the scan type of
     * your input. Use Top field first (TOP_FIELD) or Bottom field first (BOTTOM_FIELD)
     * to create an output that's interlaced with the same field polarity throughout.
     * Use Follow, default top (FOLLOW_TOP_FIELD) or Follow, default bottom
     * (FOLLOW_BOTTOM_FIELD) to produce outputs with the same field polarity as the
     * source. For jobs that have multiple inputs, the output field polarity might
     * change over the course of the output. Follow behavior depends on the input scan
     * type. If the source is interlaced, the output will be interlaced with the same
     * polarity as the source. If the source is progressive, the output will be
     * interlaced with top field bottom field first, depending on which of the Follow
     * options you choose.
     */
    inline const XavcInterlaceMode& GetInterlaceMode() const{ return m_interlaceMode; }

    /**
     * Choose the scan line type for the output. Keep the default value, Progressive
     * (PROGRESSIVE) to create a progressive output, regardless of the scan type of
     * your input. Use Top field first (TOP_FIELD) or Bottom field first (BOTTOM_FIELD)
     * to create an output that's interlaced with the same field polarity throughout.
     * Use Follow, default top (FOLLOW_TOP_FIELD) or Follow, default bottom
     * (FOLLOW_BOTTOM_FIELD) to produce outputs with the same field polarity as the
     * source. For jobs that have multiple inputs, the output field polarity might
     * change over the course of the output. Follow behavior depends on the input scan
     * type. If the source is interlaced, the output will be interlaced with the same
     * polarity as the source. If the source is progressive, the output will be
     * interlaced with top field bottom field first, depending on which of the Follow
     * options you choose.
     */
    inline bool InterlaceModeHasBeenSet() const { return m_interlaceModeHasBeenSet; }

    /**
     * Choose the scan line type for the output. Keep the default value, Progressive
     * (PROGRESSIVE) to create a progressive output, regardless of the scan type of
     * your input. Use Top field first (TOP_FIELD) or Bottom field first (BOTTOM_FIELD)
     * to create an output that's interlaced with the same field polarity throughout.
     * Use Follow, default top (FOLLOW_TOP_FIELD) or Follow, default bottom
     * (FOLLOW_BOTTOM_FIELD) to produce outputs with the same field polarity as the
     * source. For jobs that have multiple inputs, the output field polarity might
     * change over the course of the output. Follow behavior depends on the input scan
     * type. If the source is interlaced, the output will be interlaced with the same
     * polarity as the source. If the source is progressive, the output will be
     * interlaced with top field bottom field first, depending on which of the Follow
     * options you choose.
     */
    inline void SetInterlaceMode(const XavcInterlaceMode& value) { m_interlaceModeHasBeenSet = true; m_interlaceMode = value; }

    /**
     * Choose the scan line type for the output. Keep the default value, Progressive
     * (PROGRESSIVE) to create a progressive output, regardless of the scan type of
     * your input. Use Top field first (TOP_FIELD) or Bottom field first (BOTTOM_FIELD)
     * to create an output that's interlaced with the same field polarity throughout.
     * Use Follow, default top (FOLLOW_TOP_FIELD) or Follow, default bottom
     * (FOLLOW_BOTTOM_FIELD) to produce outputs with the same field polarity as the
     * source. For jobs that have multiple inputs, the output field polarity might
     * change over the course of the output. Follow behavior depends on the input scan
     * type. If the source is interlaced, the output will be interlaced with the same
     * polarity as the source. If the source is progressive, the output will be
     * interlaced with top field bottom field first, depending on which of the Follow
     * options you choose.
     */
    inline void SetInterlaceMode(XavcInterlaceMode&& value) { m_interlaceModeHasBeenSet = true; m_interlaceMode = std::move(value); }

    /**
     * Choose the scan line type for the output. Keep the default value, Progressive
     * (PROGRESSIVE) to create a progressive output, regardless of the scan type of
     * your input. Use Top field first (TOP_FIELD) or Bottom field first (BOTTOM_FIELD)
     * to create an output that's interlaced with the same field polarity throughout.
     * Use Follow, default top (FOLLOW_TOP_FIELD) or Follow, default bottom
     * (FOLLOW_BOTTOM_FIELD) to produce outputs with the same field polarity as the
     * source. For jobs that have multiple inputs, the output field polarity might
     * change over the course of the output. Follow behavior depends on the input scan
     * type. If the source is interlaced, the output will be interlaced with the same
     * polarity as the source. If the source is progressive, the output will be
     * interlaced with top field bottom field first, depending on which of the Follow
     * options you choose.
     */
    inline XavcHdProfileSettings& WithInterlaceMode(const XavcInterlaceMode& value) { SetInterlaceMode(value); return *this;}

    /**
     * Choose the scan line type for the output. Keep the default value, Progressive
     * (PROGRESSIVE) to create a progressive output, regardless of the scan type of
     * your input. Use Top field first (TOP_FIELD) or Bottom field first (BOTTOM_FIELD)
     * to create an output that's interlaced with the same field polarity throughout.
     * Use Follow, default top (FOLLOW_TOP_FIELD) or Follow, default bottom
     * (FOLLOW_BOTTOM_FIELD) to produce outputs with the same field polarity as the
     * source. For jobs that have multiple inputs, the output field polarity might
     * change over the course of the output. Follow behavior depends on the input scan
     * type. If the source is interlaced, the output will be interlaced with the same
     * polarity as the source. If the source is progressive, the output will be
     * interlaced with top field bottom field first, depending on which of the Follow
     * options you choose.
     */
    inline XavcHdProfileSettings& WithInterlaceMode(XavcInterlaceMode&& value) { SetInterlaceMode(std::move(value)); return *this;}


    /**
     * Optional. Use Quality tuning level (qualityTuningLevel) to choose how you want
     * to trade off encoding speed for output video quality. The default behavior is
     * faster, lower quality, single-pass encoding.
     */
    inline const XavcHdProfileQualityTuningLevel& GetQualityTuningLevel() const{ return m_qualityTuningLevel; }

    /**
     * Optional. Use Quality tuning level (qualityTuningLevel) to choose how you want
     * to trade off encoding speed for output video quality. The default behavior is
     * faster, lower quality, single-pass encoding.
     */
    inline bool QualityTuningLevelHasBeenSet() const { return m_qualityTuningLevelHasBeenSet; }

    /**
     * Optional. Use Quality tuning level (qualityTuningLevel) to choose how you want
     * to trade off encoding speed for output video quality. The default behavior is
     * faster, lower quality, single-pass encoding.
     */
    inline void SetQualityTuningLevel(const XavcHdProfileQualityTuningLevel& value) { m_qualityTuningLevelHasBeenSet = true; m_qualityTuningLevel = value; }

    /**
     * Optional. Use Quality tuning level (qualityTuningLevel) to choose how you want
     * to trade off encoding speed for output video quality. The default behavior is
     * faster, lower quality, single-pass encoding.
     */
    inline void SetQualityTuningLevel(XavcHdProfileQualityTuningLevel&& value) { m_qualityTuningLevelHasBeenSet = true; m_qualityTuningLevel = std::move(value); }

    /**
     * Optional. Use Quality tuning level (qualityTuningLevel) to choose how you want
     * to trade off encoding speed for output video quality. The default behavior is
     * faster, lower quality, single-pass encoding.
     */
    inline XavcHdProfileSettings& WithQualityTuningLevel(const XavcHdProfileQualityTuningLevel& value) { SetQualityTuningLevel(value); return *this;}

    /**
     * Optional. Use Quality tuning level (qualityTuningLevel) to choose how you want
     * to trade off encoding speed for output video quality. The default behavior is
     * faster, lower quality, single-pass encoding.
     */
    inline XavcHdProfileSettings& WithQualityTuningLevel(XavcHdProfileQualityTuningLevel&& value) { SetQualityTuningLevel(std::move(value)); return *this;}


    /**
     * Number of slices per picture. Must be less than or equal to the number of
     * macroblock rows for progressive pictures, and less than or equal to half the
     * number of macroblock rows for interlaced pictures.
     */
    inline int GetSlices() const{ return m_slices; }

    /**
     * Number of slices per picture. Must be less than or equal to the number of
     * macroblock rows for progressive pictures, and less than or equal to half the
     * number of macroblock rows for interlaced pictures.
     */
    inline bool SlicesHasBeenSet() const { return m_slicesHasBeenSet; }

    /**
     * Number of slices per picture. Must be less than or equal to the number of
     * macroblock rows for progressive pictures, and less than or equal to half the
     * number of macroblock rows for interlaced pictures.
     */
    inline void SetSlices(int value) { m_slicesHasBeenSet = true; m_slices = value; }

    /**
     * Number of slices per picture. Must be less than or equal to the number of
     * macroblock rows for progressive pictures, and less than or equal to half the
     * number of macroblock rows for interlaced pictures.
     */
    inline XavcHdProfileSettings& WithSlices(int value) { SetSlices(value); return *this;}


    /**
     * Ignore this setting unless you set Frame rate (framerateNumerator divided by
     * framerateDenominator) to 29.970. If your input framerate is 23.976, choose Hard
     * (HARD). Otherwise, keep the default value None (NONE). For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/working-with-telecine-and-inverse-telecine.html.
     */
    inline const XavcHdProfileTelecine& GetTelecine() const{ return m_telecine; }

    /**
     * Ignore this setting unless you set Frame rate (framerateNumerator divided by
     * framerateDenominator) to 29.970. If your input framerate is 23.976, choose Hard
     * (HARD). Otherwise, keep the default value None (NONE). For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/working-with-telecine-and-inverse-telecine.html.
     */
    inline bool TelecineHasBeenSet() const { return m_telecineHasBeenSet; }

    /**
     * Ignore this setting unless you set Frame rate (framerateNumerator divided by
     * framerateDenominator) to 29.970. If your input framerate is 23.976, choose Hard
     * (HARD). Otherwise, keep the default value None (NONE). For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/working-with-telecine-and-inverse-telecine.html.
     */
    inline void SetTelecine(const XavcHdProfileTelecine& value) { m_telecineHasBeenSet = true; m_telecine = value; }

    /**
     * Ignore this setting unless you set Frame rate (framerateNumerator divided by
     * framerateDenominator) to 29.970. If your input framerate is 23.976, choose Hard
     * (HARD). Otherwise, keep the default value None (NONE). For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/working-with-telecine-and-inverse-telecine.html.
     */
    inline void SetTelecine(XavcHdProfileTelecine&& value) { m_telecineHasBeenSet = true; m_telecine = std::move(value); }

    /**
     * Ignore this setting unless you set Frame rate (framerateNumerator divided by
     * framerateDenominator) to 29.970. If your input framerate is 23.976, choose Hard
     * (HARD). Otherwise, keep the default value None (NONE). For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/working-with-telecine-and-inverse-telecine.html.
     */
    inline XavcHdProfileSettings& WithTelecine(const XavcHdProfileTelecine& value) { SetTelecine(value); return *this;}

    /**
     * Ignore this setting unless you set Frame rate (framerateNumerator divided by
     * framerateDenominator) to 29.970. If your input framerate is 23.976, choose Hard
     * (HARD). Otherwise, keep the default value None (NONE). For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/working-with-telecine-and-inverse-telecine.html.
     */
    inline XavcHdProfileSettings& WithTelecine(XavcHdProfileTelecine&& value) { SetTelecine(std::move(value)); return *this;}

  private:

    XavcHdProfileBitrateClass m_bitrateClass;
    bool m_bitrateClassHasBeenSet = false;

    XavcFlickerAdaptiveQuantization m_flickerAdaptiveQuantization;
    bool m_flickerAdaptiveQuantizationHasBeenSet = false;

    XavcGopBReference m_gopBReference;
    bool m_gopBReferenceHasBeenSet = false;

    int m_gopClosedCadence;
    bool m_gopClosedCadenceHasBeenSet = false;

    int m_hrdBufferSize;
    bool m_hrdBufferSizeHasBeenSet = false;

    XavcInterlaceMode m_interlaceMode;
    bool m_interlaceModeHasBeenSet = false;

    XavcHdProfileQualityTuningLevel m_qualityTuningLevel;
    bool m_qualityTuningLevelHasBeenSet = false;

    int m_slices;
    bool m_slicesHasBeenSet = false;

    XavcHdProfileTelecine m_telecine;
    bool m_telecineHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
