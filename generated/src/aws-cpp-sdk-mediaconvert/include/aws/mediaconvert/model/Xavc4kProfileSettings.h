/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/Xavc4kProfileBitrateClass.h>
#include <aws/mediaconvert/model/Xavc4kProfileCodecProfile.h>
#include <aws/mediaconvert/model/XavcFlickerAdaptiveQuantization.h>
#include <aws/mediaconvert/model/XavcGopBReference.h>
#include <aws/mediaconvert/model/Xavc4kProfileQualityTuningLevel.h>
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
   * XAVC_4K.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/Xavc4kProfileSettings">AWS
   * API Reference</a></p>
   */
  class Xavc4kProfileSettings
  {
  public:
    AWS_MEDIACONVERT_API Xavc4kProfileSettings();
    AWS_MEDIACONVERT_API Xavc4kProfileSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Xavc4kProfileSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Specify the XAVC 4k (Long GOP) Bitrate Class to set the bitrate of your output.
     * Outputs of the same class have similar image quality over the operating points
     * that are valid for that class.
     */
    inline const Xavc4kProfileBitrateClass& GetBitrateClass() const{ return m_bitrateClass; }

    /**
     * Specify the XAVC 4k (Long GOP) Bitrate Class to set the bitrate of your output.
     * Outputs of the same class have similar image quality over the operating points
     * that are valid for that class.
     */
    inline bool BitrateClassHasBeenSet() const { return m_bitrateClassHasBeenSet; }

    /**
     * Specify the XAVC 4k (Long GOP) Bitrate Class to set the bitrate of your output.
     * Outputs of the same class have similar image quality over the operating points
     * that are valid for that class.
     */
    inline void SetBitrateClass(const Xavc4kProfileBitrateClass& value) { m_bitrateClassHasBeenSet = true; m_bitrateClass = value; }

    /**
     * Specify the XAVC 4k (Long GOP) Bitrate Class to set the bitrate of your output.
     * Outputs of the same class have similar image quality over the operating points
     * that are valid for that class.
     */
    inline void SetBitrateClass(Xavc4kProfileBitrateClass&& value) { m_bitrateClassHasBeenSet = true; m_bitrateClass = std::move(value); }

    /**
     * Specify the XAVC 4k (Long GOP) Bitrate Class to set the bitrate of your output.
     * Outputs of the same class have similar image quality over the operating points
     * that are valid for that class.
     */
    inline Xavc4kProfileSettings& WithBitrateClass(const Xavc4kProfileBitrateClass& value) { SetBitrateClass(value); return *this;}

    /**
     * Specify the XAVC 4k (Long GOP) Bitrate Class to set the bitrate of your output.
     * Outputs of the same class have similar image quality over the operating points
     * that are valid for that class.
     */
    inline Xavc4kProfileSettings& WithBitrateClass(Xavc4kProfileBitrateClass&& value) { SetBitrateClass(std::move(value)); return *this;}


    /**
     * Specify the codec profile for this output. Choose High, 8-bit, 4:2:0 (HIGH) or
     * High, 10-bit, 4:2:2 (HIGH_422). These profiles are specified in ITU-T H.264.
     */
    inline const Xavc4kProfileCodecProfile& GetCodecProfile() const{ return m_codecProfile; }

    /**
     * Specify the codec profile for this output. Choose High, 8-bit, 4:2:0 (HIGH) or
     * High, 10-bit, 4:2:2 (HIGH_422). These profiles are specified in ITU-T H.264.
     */
    inline bool CodecProfileHasBeenSet() const { return m_codecProfileHasBeenSet; }

    /**
     * Specify the codec profile for this output. Choose High, 8-bit, 4:2:0 (HIGH) or
     * High, 10-bit, 4:2:2 (HIGH_422). These profiles are specified in ITU-T H.264.
     */
    inline void SetCodecProfile(const Xavc4kProfileCodecProfile& value) { m_codecProfileHasBeenSet = true; m_codecProfile = value; }

    /**
     * Specify the codec profile for this output. Choose High, 8-bit, 4:2:0 (HIGH) or
     * High, 10-bit, 4:2:2 (HIGH_422). These profiles are specified in ITU-T H.264.
     */
    inline void SetCodecProfile(Xavc4kProfileCodecProfile&& value) { m_codecProfileHasBeenSet = true; m_codecProfile = std::move(value); }

    /**
     * Specify the codec profile for this output. Choose High, 8-bit, 4:2:0 (HIGH) or
     * High, 10-bit, 4:2:2 (HIGH_422). These profiles are specified in ITU-T H.264.
     */
    inline Xavc4kProfileSettings& WithCodecProfile(const Xavc4kProfileCodecProfile& value) { SetCodecProfile(value); return *this;}

    /**
     * Specify the codec profile for this output. Choose High, 8-bit, 4:2:0 (HIGH) or
     * High, 10-bit, 4:2:2 (HIGH_422). These profiles are specified in ITU-T H.264.
     */
    inline Xavc4kProfileSettings& WithCodecProfile(Xavc4kProfileCodecProfile&& value) { SetCodecProfile(std::move(value)); return *this;}


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
    inline Xavc4kProfileSettings& WithFlickerAdaptiveQuantization(const XavcFlickerAdaptiveQuantization& value) { SetFlickerAdaptiveQuantization(value); return *this;}

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
    inline Xavc4kProfileSettings& WithFlickerAdaptiveQuantization(XavcFlickerAdaptiveQuantization&& value) { SetFlickerAdaptiveQuantization(std::move(value)); return *this;}


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
    inline Xavc4kProfileSettings& WithGopBReference(const XavcGopBReference& value) { SetGopBReference(value); return *this;}

    /**
     * Specify whether the encoder uses B-frames as reference frames for other pictures
     * in the same GOP. Choose Allow (ENABLED) to allow the encoder to use B-frames as
     * reference frames. Choose Don't allow (DISABLED) to prevent the encoder from
     * using B-frames as reference frames.
     */
    inline Xavc4kProfileSettings& WithGopBReference(XavcGopBReference&& value) { SetGopBReference(std::move(value)); return *this;}


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
    inline Xavc4kProfileSettings& WithGopClosedCadence(int value) { SetGopClosedCadence(value); return *this;}


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
    inline Xavc4kProfileSettings& WithHrdBufferSize(int value) { SetHrdBufferSize(value); return *this;}


    /**
     * Optional. Use Quality tuning level (qualityTuningLevel) to choose how you want
     * to trade off encoding speed for output video quality. The default behavior is
     * faster, lower quality, single-pass encoding.
     */
    inline const Xavc4kProfileQualityTuningLevel& GetQualityTuningLevel() const{ return m_qualityTuningLevel; }

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
    inline void SetQualityTuningLevel(const Xavc4kProfileQualityTuningLevel& value) { m_qualityTuningLevelHasBeenSet = true; m_qualityTuningLevel = value; }

    /**
     * Optional. Use Quality tuning level (qualityTuningLevel) to choose how you want
     * to trade off encoding speed for output video quality. The default behavior is
     * faster, lower quality, single-pass encoding.
     */
    inline void SetQualityTuningLevel(Xavc4kProfileQualityTuningLevel&& value) { m_qualityTuningLevelHasBeenSet = true; m_qualityTuningLevel = std::move(value); }

    /**
     * Optional. Use Quality tuning level (qualityTuningLevel) to choose how you want
     * to trade off encoding speed for output video quality. The default behavior is
     * faster, lower quality, single-pass encoding.
     */
    inline Xavc4kProfileSettings& WithQualityTuningLevel(const Xavc4kProfileQualityTuningLevel& value) { SetQualityTuningLevel(value); return *this;}

    /**
     * Optional. Use Quality tuning level (qualityTuningLevel) to choose how you want
     * to trade off encoding speed for output video quality. The default behavior is
     * faster, lower quality, single-pass encoding.
     */
    inline Xavc4kProfileSettings& WithQualityTuningLevel(Xavc4kProfileQualityTuningLevel&& value) { SetQualityTuningLevel(std::move(value)); return *this;}


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
    inline Xavc4kProfileSettings& WithSlices(int value) { SetSlices(value); return *this;}

  private:

    Xavc4kProfileBitrateClass m_bitrateClass;
    bool m_bitrateClassHasBeenSet = false;

    Xavc4kProfileCodecProfile m_codecProfile;
    bool m_codecProfileHasBeenSet = false;

    XavcFlickerAdaptiveQuantization m_flickerAdaptiveQuantization;
    bool m_flickerAdaptiveQuantizationHasBeenSet = false;

    XavcGopBReference m_gopBReference;
    bool m_gopBReferenceHasBeenSet = false;

    int m_gopClosedCadence;
    bool m_gopClosedCadenceHasBeenSet = false;

    int m_hrdBufferSize;
    bool m_hrdBufferSizeHasBeenSet = false;

    Xavc4kProfileQualityTuningLevel m_qualityTuningLevel;
    bool m_qualityTuningLevelHasBeenSet = false;

    int m_slices;
    bool m_slicesHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
