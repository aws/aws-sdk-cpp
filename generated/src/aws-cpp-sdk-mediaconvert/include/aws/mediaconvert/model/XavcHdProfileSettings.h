﻿/**
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
   * Required when you set Profile to the value XAVC_HD.<p><h3>See Also:</h3>   <a
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


    ///@{
    /**
     * Specify the XAVC HD (Long GOP) Bitrate Class to set the bitrate of your output.
     * Outputs of the same class have similar image quality over the operating points
     * that are valid for that class.
     */
    inline const XavcHdProfileBitrateClass& GetBitrateClass() const{ return m_bitrateClass; }
    inline bool BitrateClassHasBeenSet() const { return m_bitrateClassHasBeenSet; }
    inline void SetBitrateClass(const XavcHdProfileBitrateClass& value) { m_bitrateClassHasBeenSet = true; m_bitrateClass = value; }
    inline void SetBitrateClass(XavcHdProfileBitrateClass&& value) { m_bitrateClassHasBeenSet = true; m_bitrateClass = std::move(value); }
    inline XavcHdProfileSettings& WithBitrateClass(const XavcHdProfileBitrateClass& value) { SetBitrateClass(value); return *this;}
    inline XavcHdProfileSettings& WithBitrateClass(XavcHdProfileBitrateClass&& value) { SetBitrateClass(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The best way to set up adaptive quantization is to keep the default value, Auto,
     * for the setting Adaptive quantization. When you do so, MediaConvert
     * automatically applies the best types of quantization for your video content.
     * Include this setting in your JSON job specification only when you choose to
     * change the default value for Adaptive quantization. Enable this setting to have
     * the encoder reduce I-frame pop. I-frame pop appears as a visual flicker that can
     * arise when the encoder saves bits by copying some macroblocks many times from
     * frame to frame, and then refreshes them at the I-frame. When you enable this
     * setting, the encoder updates these macroblocks slightly more often to smooth out
     * the flicker. This setting is disabled by default. Related setting: In addition
     * to enabling this setting, you must also set Adaptive quantization to a value
     * other than Off or Auto. Use Adaptive quantization to adjust the degree of
     * smoothing that Flicker adaptive quantization provides.
     */
    inline const XavcFlickerAdaptiveQuantization& GetFlickerAdaptiveQuantization() const{ return m_flickerAdaptiveQuantization; }
    inline bool FlickerAdaptiveQuantizationHasBeenSet() const { return m_flickerAdaptiveQuantizationHasBeenSet; }
    inline void SetFlickerAdaptiveQuantization(const XavcFlickerAdaptiveQuantization& value) { m_flickerAdaptiveQuantizationHasBeenSet = true; m_flickerAdaptiveQuantization = value; }
    inline void SetFlickerAdaptiveQuantization(XavcFlickerAdaptiveQuantization&& value) { m_flickerAdaptiveQuantizationHasBeenSet = true; m_flickerAdaptiveQuantization = std::move(value); }
    inline XavcHdProfileSettings& WithFlickerAdaptiveQuantization(const XavcFlickerAdaptiveQuantization& value) { SetFlickerAdaptiveQuantization(value); return *this;}
    inline XavcHdProfileSettings& WithFlickerAdaptiveQuantization(XavcFlickerAdaptiveQuantization&& value) { SetFlickerAdaptiveQuantization(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify whether the encoder uses B-frames as reference frames for other pictures
     * in the same GOP. Choose Allow to allow the encoder to use B-frames as reference
     * frames. Choose Don't allow to prevent the encoder from using B-frames as
     * reference frames.
     */
    inline const XavcGopBReference& GetGopBReference() const{ return m_gopBReference; }
    inline bool GopBReferenceHasBeenSet() const { return m_gopBReferenceHasBeenSet; }
    inline void SetGopBReference(const XavcGopBReference& value) { m_gopBReferenceHasBeenSet = true; m_gopBReference = value; }
    inline void SetGopBReference(XavcGopBReference&& value) { m_gopBReferenceHasBeenSet = true; m_gopBReference = std::move(value); }
    inline XavcHdProfileSettings& WithGopBReference(const XavcGopBReference& value) { SetGopBReference(value); return *this;}
    inline XavcHdProfileSettings& WithGopBReference(XavcGopBReference&& value) { SetGopBReference(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Frequency of closed GOPs. In streaming applications, it is recommended that this
     * be set to 1 so a decoder joining mid-stream will receive an IDR frame as quickly
     * as possible. Setting this value to 0 will break output segmenting.
     */
    inline int GetGopClosedCadence() const{ return m_gopClosedCadence; }
    inline bool GopClosedCadenceHasBeenSet() const { return m_gopClosedCadenceHasBeenSet; }
    inline void SetGopClosedCadence(int value) { m_gopClosedCadenceHasBeenSet = true; m_gopClosedCadence = value; }
    inline XavcHdProfileSettings& WithGopClosedCadence(int value) { SetGopClosedCadence(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the size of the buffer that MediaConvert uses in the HRD buffer model
     * for this output. Specify this value in bits; for example, enter five megabits as
     * 5000000. When you don't set this value, or you set it to zero, MediaConvert
     * calculates the default by doubling the bitrate of this output point.
     */
    inline int GetHrdBufferSize() const{ return m_hrdBufferSize; }
    inline bool HrdBufferSizeHasBeenSet() const { return m_hrdBufferSizeHasBeenSet; }
    inline void SetHrdBufferSize(int value) { m_hrdBufferSizeHasBeenSet = true; m_hrdBufferSize = value; }
    inline XavcHdProfileSettings& WithHrdBufferSize(int value) { SetHrdBufferSize(value); return *this;}
    ///@}

    ///@{
    /**
     * Choose the scan line type for the output. Keep the default value, Progressive to
     * create a progressive output, regardless of the scan type of your input. Use Top
     * field first or Bottom field first to create an output that's interlaced with the
     * same field polarity throughout. Use Follow, default top or Follow, default
     * bottom to produce outputs with the same field polarity as the source. For jobs
     * that have multiple inputs, the output field polarity might change over the
     * course of the output. Follow behavior depends on the input scan type. If the
     * source is interlaced, the output will be interlaced with the same polarity as
     * the source. If the source is progressive, the output will be interlaced with top
     * field bottom field first, depending on which of the Follow options you choose.
     */
    inline const XavcInterlaceMode& GetInterlaceMode() const{ return m_interlaceMode; }
    inline bool InterlaceModeHasBeenSet() const { return m_interlaceModeHasBeenSet; }
    inline void SetInterlaceMode(const XavcInterlaceMode& value) { m_interlaceModeHasBeenSet = true; m_interlaceMode = value; }
    inline void SetInterlaceMode(XavcInterlaceMode&& value) { m_interlaceModeHasBeenSet = true; m_interlaceMode = std::move(value); }
    inline XavcHdProfileSettings& WithInterlaceMode(const XavcInterlaceMode& value) { SetInterlaceMode(value); return *this;}
    inline XavcHdProfileSettings& WithInterlaceMode(XavcInterlaceMode&& value) { SetInterlaceMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Optional. Use Quality tuning level to choose how you want to trade off encoding
     * speed for output video quality. The default behavior is faster, lower quality,
     * single-pass encoding.
     */
    inline const XavcHdProfileQualityTuningLevel& GetQualityTuningLevel() const{ return m_qualityTuningLevel; }
    inline bool QualityTuningLevelHasBeenSet() const { return m_qualityTuningLevelHasBeenSet; }
    inline void SetQualityTuningLevel(const XavcHdProfileQualityTuningLevel& value) { m_qualityTuningLevelHasBeenSet = true; m_qualityTuningLevel = value; }
    inline void SetQualityTuningLevel(XavcHdProfileQualityTuningLevel&& value) { m_qualityTuningLevelHasBeenSet = true; m_qualityTuningLevel = std::move(value); }
    inline XavcHdProfileSettings& WithQualityTuningLevel(const XavcHdProfileQualityTuningLevel& value) { SetQualityTuningLevel(value); return *this;}
    inline XavcHdProfileSettings& WithQualityTuningLevel(XavcHdProfileQualityTuningLevel&& value) { SetQualityTuningLevel(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Number of slices per picture. Must be less than or equal to the number of
     * macroblock rows for progressive pictures, and less than or equal to half the
     * number of macroblock rows for interlaced pictures.
     */
    inline int GetSlices() const{ return m_slices; }
    inline bool SlicesHasBeenSet() const { return m_slicesHasBeenSet; }
    inline void SetSlices(int value) { m_slicesHasBeenSet = true; m_slices = value; }
    inline XavcHdProfileSettings& WithSlices(int value) { SetSlices(value); return *this;}
    ///@}

    ///@{
    /**
     * Ignore this setting unless you set Frame rate (framerateNumerator divided by
     * framerateDenominator) to 29.970. If your input framerate is 23.976, choose Hard.
     * Otherwise, keep the default value None. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/working-with-telecine-and-inverse-telecine.html.
     */
    inline const XavcHdProfileTelecine& GetTelecine() const{ return m_telecine; }
    inline bool TelecineHasBeenSet() const { return m_telecineHasBeenSet; }
    inline void SetTelecine(const XavcHdProfileTelecine& value) { m_telecineHasBeenSet = true; m_telecine = value; }
    inline void SetTelecine(XavcHdProfileTelecine&& value) { m_telecineHasBeenSet = true; m_telecine = std::move(value); }
    inline XavcHdProfileSettings& WithTelecine(const XavcHdProfileTelecine& value) { SetTelecine(value); return *this;}
    inline XavcHdProfileSettings& WithTelecine(XavcHdProfileTelecine&& value) { SetTelecine(std::move(value)); return *this;}
    ///@}
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
