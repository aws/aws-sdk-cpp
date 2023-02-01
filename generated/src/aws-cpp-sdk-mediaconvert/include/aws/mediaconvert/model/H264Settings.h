/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/H264AdaptiveQuantization.h>
#include <aws/mediaconvert/model/H264CodecLevel.h>
#include <aws/mediaconvert/model/H264CodecProfile.h>
#include <aws/mediaconvert/model/H264DynamicSubGop.h>
#include <aws/mediaconvert/model/H264EntropyEncoding.h>
#include <aws/mediaconvert/model/H264FieldEncoding.h>
#include <aws/mediaconvert/model/H264FlickerAdaptiveQuantization.h>
#include <aws/mediaconvert/model/H264FramerateControl.h>
#include <aws/mediaconvert/model/H264FramerateConversionAlgorithm.h>
#include <aws/mediaconvert/model/H264GopBReference.h>
#include <aws/mediaconvert/model/H264GopSizeUnits.h>
#include <aws/mediaconvert/model/H264InterlaceMode.h>
#include <aws/mediaconvert/model/H264ParControl.h>
#include <aws/mediaconvert/model/H264QualityTuningLevel.h>
#include <aws/mediaconvert/model/H264QvbrSettings.h>
#include <aws/mediaconvert/model/H264RateControlMode.h>
#include <aws/mediaconvert/model/H264RepeatPps.h>
#include <aws/mediaconvert/model/H264ScanTypeConversionMode.h>
#include <aws/mediaconvert/model/H264SceneChangeDetect.h>
#include <aws/mediaconvert/model/H264SlowPal.h>
#include <aws/mediaconvert/model/H264SpatialAdaptiveQuantization.h>
#include <aws/mediaconvert/model/H264Syntax.h>
#include <aws/mediaconvert/model/H264Telecine.h>
#include <aws/mediaconvert/model/H264TemporalAdaptiveQuantization.h>
#include <aws/mediaconvert/model/H264UnregisteredSeiTimecode.h>
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
   * Required when you set (Codec) under (VideoDescription)>(CodecSettings) to the
   * value H_264.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/H264Settings">AWS
   * API Reference</a></p>
   */
  class H264Settings
  {
  public:
    AWS_MEDIACONVERT_API H264Settings();
    AWS_MEDIACONVERT_API H264Settings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API H264Settings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Keep the default value, Auto (AUTO), for this setting to have MediaConvert
     * automatically apply the best types of quantization for your video content. When
     * you want to apply your quantization settings manually, you must set
     * H264AdaptiveQuantization to a value other than Auto (AUTO). Use this setting to
     * specify the strength of any adaptive quantization filters that you enable. If
     * you don't want MediaConvert to do any adaptive quantization in this transcode,
     * set Adaptive quantization (H264AdaptiveQuantization) to Off (OFF). Related
     * settings: The value that you choose here applies to the following settings:
     * H264FlickerAdaptiveQuantization, H264SpatialAdaptiveQuantization, and
     * H264TemporalAdaptiveQuantization.
     */
    inline const H264AdaptiveQuantization& GetAdaptiveQuantization() const{ return m_adaptiveQuantization; }

    /**
     * Keep the default value, Auto (AUTO), for this setting to have MediaConvert
     * automatically apply the best types of quantization for your video content. When
     * you want to apply your quantization settings manually, you must set
     * H264AdaptiveQuantization to a value other than Auto (AUTO). Use this setting to
     * specify the strength of any adaptive quantization filters that you enable. If
     * you don't want MediaConvert to do any adaptive quantization in this transcode,
     * set Adaptive quantization (H264AdaptiveQuantization) to Off (OFF). Related
     * settings: The value that you choose here applies to the following settings:
     * H264FlickerAdaptiveQuantization, H264SpatialAdaptiveQuantization, and
     * H264TemporalAdaptiveQuantization.
     */
    inline bool AdaptiveQuantizationHasBeenSet() const { return m_adaptiveQuantizationHasBeenSet; }

    /**
     * Keep the default value, Auto (AUTO), for this setting to have MediaConvert
     * automatically apply the best types of quantization for your video content. When
     * you want to apply your quantization settings manually, you must set
     * H264AdaptiveQuantization to a value other than Auto (AUTO). Use this setting to
     * specify the strength of any adaptive quantization filters that you enable. If
     * you don't want MediaConvert to do any adaptive quantization in this transcode,
     * set Adaptive quantization (H264AdaptiveQuantization) to Off (OFF). Related
     * settings: The value that you choose here applies to the following settings:
     * H264FlickerAdaptiveQuantization, H264SpatialAdaptiveQuantization, and
     * H264TemporalAdaptiveQuantization.
     */
    inline void SetAdaptiveQuantization(const H264AdaptiveQuantization& value) { m_adaptiveQuantizationHasBeenSet = true; m_adaptiveQuantization = value; }

    /**
     * Keep the default value, Auto (AUTO), for this setting to have MediaConvert
     * automatically apply the best types of quantization for your video content. When
     * you want to apply your quantization settings manually, you must set
     * H264AdaptiveQuantization to a value other than Auto (AUTO). Use this setting to
     * specify the strength of any adaptive quantization filters that you enable. If
     * you don't want MediaConvert to do any adaptive quantization in this transcode,
     * set Adaptive quantization (H264AdaptiveQuantization) to Off (OFF). Related
     * settings: The value that you choose here applies to the following settings:
     * H264FlickerAdaptiveQuantization, H264SpatialAdaptiveQuantization, and
     * H264TemporalAdaptiveQuantization.
     */
    inline void SetAdaptiveQuantization(H264AdaptiveQuantization&& value) { m_adaptiveQuantizationHasBeenSet = true; m_adaptiveQuantization = std::move(value); }

    /**
     * Keep the default value, Auto (AUTO), for this setting to have MediaConvert
     * automatically apply the best types of quantization for your video content. When
     * you want to apply your quantization settings manually, you must set
     * H264AdaptiveQuantization to a value other than Auto (AUTO). Use this setting to
     * specify the strength of any adaptive quantization filters that you enable. If
     * you don't want MediaConvert to do any adaptive quantization in this transcode,
     * set Adaptive quantization (H264AdaptiveQuantization) to Off (OFF). Related
     * settings: The value that you choose here applies to the following settings:
     * H264FlickerAdaptiveQuantization, H264SpatialAdaptiveQuantization, and
     * H264TemporalAdaptiveQuantization.
     */
    inline H264Settings& WithAdaptiveQuantization(const H264AdaptiveQuantization& value) { SetAdaptiveQuantization(value); return *this;}

    /**
     * Keep the default value, Auto (AUTO), for this setting to have MediaConvert
     * automatically apply the best types of quantization for your video content. When
     * you want to apply your quantization settings manually, you must set
     * H264AdaptiveQuantization to a value other than Auto (AUTO). Use this setting to
     * specify the strength of any adaptive quantization filters that you enable. If
     * you don't want MediaConvert to do any adaptive quantization in this transcode,
     * set Adaptive quantization (H264AdaptiveQuantization) to Off (OFF). Related
     * settings: The value that you choose here applies to the following settings:
     * H264FlickerAdaptiveQuantization, H264SpatialAdaptiveQuantization, and
     * H264TemporalAdaptiveQuantization.
     */
    inline H264Settings& WithAdaptiveQuantization(H264AdaptiveQuantization&& value) { SetAdaptiveQuantization(std::move(value)); return *this;}


    /**
     * Specify the average bitrate in bits per second. Required for VBR and CBR. For MS
     * Smooth outputs, bitrates must be unique when rounded down to the nearest
     * multiple of 1000.
     */
    inline int GetBitrate() const{ return m_bitrate; }

    /**
     * Specify the average bitrate in bits per second. Required for VBR and CBR. For MS
     * Smooth outputs, bitrates must be unique when rounded down to the nearest
     * multiple of 1000.
     */
    inline bool BitrateHasBeenSet() const { return m_bitrateHasBeenSet; }

    /**
     * Specify the average bitrate in bits per second. Required for VBR and CBR. For MS
     * Smooth outputs, bitrates must be unique when rounded down to the nearest
     * multiple of 1000.
     */
    inline void SetBitrate(int value) { m_bitrateHasBeenSet = true; m_bitrate = value; }

    /**
     * Specify the average bitrate in bits per second. Required for VBR and CBR. For MS
     * Smooth outputs, bitrates must be unique when rounded down to the nearest
     * multiple of 1000.
     */
    inline H264Settings& WithBitrate(int value) { SetBitrate(value); return *this;}


    /**
     * Specify an H.264 level that is consistent with your output video settings. If
     * you aren't sure what level to specify, choose Auto (AUTO).
     */
    inline const H264CodecLevel& GetCodecLevel() const{ return m_codecLevel; }

    /**
     * Specify an H.264 level that is consistent with your output video settings. If
     * you aren't sure what level to specify, choose Auto (AUTO).
     */
    inline bool CodecLevelHasBeenSet() const { return m_codecLevelHasBeenSet; }

    /**
     * Specify an H.264 level that is consistent with your output video settings. If
     * you aren't sure what level to specify, choose Auto (AUTO).
     */
    inline void SetCodecLevel(const H264CodecLevel& value) { m_codecLevelHasBeenSet = true; m_codecLevel = value; }

    /**
     * Specify an H.264 level that is consistent with your output video settings. If
     * you aren't sure what level to specify, choose Auto (AUTO).
     */
    inline void SetCodecLevel(H264CodecLevel&& value) { m_codecLevelHasBeenSet = true; m_codecLevel = std::move(value); }

    /**
     * Specify an H.264 level that is consistent with your output video settings. If
     * you aren't sure what level to specify, choose Auto (AUTO).
     */
    inline H264Settings& WithCodecLevel(const H264CodecLevel& value) { SetCodecLevel(value); return *this;}

    /**
     * Specify an H.264 level that is consistent with your output video settings. If
     * you aren't sure what level to specify, choose Auto (AUTO).
     */
    inline H264Settings& WithCodecLevel(H264CodecLevel&& value) { SetCodecLevel(std::move(value)); return *this;}


    /**
     * H.264 Profile. High 4:2:2 and 10-bit profiles are only available with the AVC-I
     * License.
     */
    inline const H264CodecProfile& GetCodecProfile() const{ return m_codecProfile; }

    /**
     * H.264 Profile. High 4:2:2 and 10-bit profiles are only available with the AVC-I
     * License.
     */
    inline bool CodecProfileHasBeenSet() const { return m_codecProfileHasBeenSet; }

    /**
     * H.264 Profile. High 4:2:2 and 10-bit profiles are only available with the AVC-I
     * License.
     */
    inline void SetCodecProfile(const H264CodecProfile& value) { m_codecProfileHasBeenSet = true; m_codecProfile = value; }

    /**
     * H.264 Profile. High 4:2:2 and 10-bit profiles are only available with the AVC-I
     * License.
     */
    inline void SetCodecProfile(H264CodecProfile&& value) { m_codecProfileHasBeenSet = true; m_codecProfile = std::move(value); }

    /**
     * H.264 Profile. High 4:2:2 and 10-bit profiles are only available with the AVC-I
     * License.
     */
    inline H264Settings& WithCodecProfile(const H264CodecProfile& value) { SetCodecProfile(value); return *this;}

    /**
     * H.264 Profile. High 4:2:2 and 10-bit profiles are only available with the AVC-I
     * License.
     */
    inline H264Settings& WithCodecProfile(H264CodecProfile&& value) { SetCodecProfile(std::move(value)); return *this;}


    /**
     * Choose Adaptive to improve subjective video quality for high-motion content.
     * This will cause the service to use fewer B-frames (which infer information based
     * on other frames) for high-motion portions of the video and more B-frames for
     * low-motion portions. The maximum number of B-frames is limited by the value you
     * provide for the setting B frames between reference frames
     * (numberBFramesBetweenReferenceFrames).
     */
    inline const H264DynamicSubGop& GetDynamicSubGop() const{ return m_dynamicSubGop; }

    /**
     * Choose Adaptive to improve subjective video quality for high-motion content.
     * This will cause the service to use fewer B-frames (which infer information based
     * on other frames) for high-motion portions of the video and more B-frames for
     * low-motion portions. The maximum number of B-frames is limited by the value you
     * provide for the setting B frames between reference frames
     * (numberBFramesBetweenReferenceFrames).
     */
    inline bool DynamicSubGopHasBeenSet() const { return m_dynamicSubGopHasBeenSet; }

    /**
     * Choose Adaptive to improve subjective video quality for high-motion content.
     * This will cause the service to use fewer B-frames (which infer information based
     * on other frames) for high-motion portions of the video and more B-frames for
     * low-motion portions. The maximum number of B-frames is limited by the value you
     * provide for the setting B frames between reference frames
     * (numberBFramesBetweenReferenceFrames).
     */
    inline void SetDynamicSubGop(const H264DynamicSubGop& value) { m_dynamicSubGopHasBeenSet = true; m_dynamicSubGop = value; }

    /**
     * Choose Adaptive to improve subjective video quality for high-motion content.
     * This will cause the service to use fewer B-frames (which infer information based
     * on other frames) for high-motion portions of the video and more B-frames for
     * low-motion portions. The maximum number of B-frames is limited by the value you
     * provide for the setting B frames between reference frames
     * (numberBFramesBetweenReferenceFrames).
     */
    inline void SetDynamicSubGop(H264DynamicSubGop&& value) { m_dynamicSubGopHasBeenSet = true; m_dynamicSubGop = std::move(value); }

    /**
     * Choose Adaptive to improve subjective video quality for high-motion content.
     * This will cause the service to use fewer B-frames (which infer information based
     * on other frames) for high-motion portions of the video and more B-frames for
     * low-motion portions. The maximum number of B-frames is limited by the value you
     * provide for the setting B frames between reference frames
     * (numberBFramesBetweenReferenceFrames).
     */
    inline H264Settings& WithDynamicSubGop(const H264DynamicSubGop& value) { SetDynamicSubGop(value); return *this;}

    /**
     * Choose Adaptive to improve subjective video quality for high-motion content.
     * This will cause the service to use fewer B-frames (which infer information based
     * on other frames) for high-motion portions of the video and more B-frames for
     * low-motion portions. The maximum number of B-frames is limited by the value you
     * provide for the setting B frames between reference frames
     * (numberBFramesBetweenReferenceFrames).
     */
    inline H264Settings& WithDynamicSubGop(H264DynamicSubGop&& value) { SetDynamicSubGop(std::move(value)); return *this;}


    /**
     * Entropy encoding mode. Use CABAC (must be in Main or High profile) or CAVLC.
     */
    inline const H264EntropyEncoding& GetEntropyEncoding() const{ return m_entropyEncoding; }

    /**
     * Entropy encoding mode. Use CABAC (must be in Main or High profile) or CAVLC.
     */
    inline bool EntropyEncodingHasBeenSet() const { return m_entropyEncodingHasBeenSet; }

    /**
     * Entropy encoding mode. Use CABAC (must be in Main or High profile) or CAVLC.
     */
    inline void SetEntropyEncoding(const H264EntropyEncoding& value) { m_entropyEncodingHasBeenSet = true; m_entropyEncoding = value; }

    /**
     * Entropy encoding mode. Use CABAC (must be in Main or High profile) or CAVLC.
     */
    inline void SetEntropyEncoding(H264EntropyEncoding&& value) { m_entropyEncodingHasBeenSet = true; m_entropyEncoding = std::move(value); }

    /**
     * Entropy encoding mode. Use CABAC (must be in Main or High profile) or CAVLC.
     */
    inline H264Settings& WithEntropyEncoding(const H264EntropyEncoding& value) { SetEntropyEncoding(value); return *this;}

    /**
     * Entropy encoding mode. Use CABAC (must be in Main or High profile) or CAVLC.
     */
    inline H264Settings& WithEntropyEncoding(H264EntropyEncoding&& value) { SetEntropyEncoding(std::move(value)); return *this;}


    /**
     * The video encoding method for your MPEG-4 AVC output. Keep the default value,
     * PAFF, to have MediaConvert use PAFF encoding for interlaced outputs. Choose
     * Force field (FORCE_FIELD) to disable PAFF encoding and create separate
     * interlaced fields. Choose MBAFF to disable PAFF and have MediaConvert use MBAFF
     * encoding for interlaced outputs.
     */
    inline const H264FieldEncoding& GetFieldEncoding() const{ return m_fieldEncoding; }

    /**
     * The video encoding method for your MPEG-4 AVC output. Keep the default value,
     * PAFF, to have MediaConvert use PAFF encoding for interlaced outputs. Choose
     * Force field (FORCE_FIELD) to disable PAFF encoding and create separate
     * interlaced fields. Choose MBAFF to disable PAFF and have MediaConvert use MBAFF
     * encoding for interlaced outputs.
     */
    inline bool FieldEncodingHasBeenSet() const { return m_fieldEncodingHasBeenSet; }

    /**
     * The video encoding method for your MPEG-4 AVC output. Keep the default value,
     * PAFF, to have MediaConvert use PAFF encoding for interlaced outputs. Choose
     * Force field (FORCE_FIELD) to disable PAFF encoding and create separate
     * interlaced fields. Choose MBAFF to disable PAFF and have MediaConvert use MBAFF
     * encoding for interlaced outputs.
     */
    inline void SetFieldEncoding(const H264FieldEncoding& value) { m_fieldEncodingHasBeenSet = true; m_fieldEncoding = value; }

    /**
     * The video encoding method for your MPEG-4 AVC output. Keep the default value,
     * PAFF, to have MediaConvert use PAFF encoding for interlaced outputs. Choose
     * Force field (FORCE_FIELD) to disable PAFF encoding and create separate
     * interlaced fields. Choose MBAFF to disable PAFF and have MediaConvert use MBAFF
     * encoding for interlaced outputs.
     */
    inline void SetFieldEncoding(H264FieldEncoding&& value) { m_fieldEncodingHasBeenSet = true; m_fieldEncoding = std::move(value); }

    /**
     * The video encoding method for your MPEG-4 AVC output. Keep the default value,
     * PAFF, to have MediaConvert use PAFF encoding for interlaced outputs. Choose
     * Force field (FORCE_FIELD) to disable PAFF encoding and create separate
     * interlaced fields. Choose MBAFF to disable PAFF and have MediaConvert use MBAFF
     * encoding for interlaced outputs.
     */
    inline H264Settings& WithFieldEncoding(const H264FieldEncoding& value) { SetFieldEncoding(value); return *this;}

    /**
     * The video encoding method for your MPEG-4 AVC output. Keep the default value,
     * PAFF, to have MediaConvert use PAFF encoding for interlaced outputs. Choose
     * Force field (FORCE_FIELD) to disable PAFF encoding and create separate
     * interlaced fields. Choose MBAFF to disable PAFF and have MediaConvert use MBAFF
     * encoding for interlaced outputs.
     */
    inline H264Settings& WithFieldEncoding(H264FieldEncoding&& value) { SetFieldEncoding(std::move(value)); return *this;}


    /**
     * Only use this setting when you change the default value, AUTO, for the setting
     * H264AdaptiveQuantization. When you keep all defaults, excluding
     * H264AdaptiveQuantization and all other adaptive quantization from your JSON job
     * specification, MediaConvert automatically applies the best types of quantization
     * for your video content. When you set H264AdaptiveQuantization to a value other
     * than AUTO, the default value for H264FlickerAdaptiveQuantization is Disabled
     * (DISABLED). Change this value to Enabled (ENABLED) to reduce I-frame pop.
     * I-frame pop appears as a visual flicker that can arise when the encoder saves
     * bits by copying some macroblocks many times from frame to frame, and then
     * refreshes them at the I-frame. When you enable this setting, the encoder updates
     * these macroblocks slightly more often to smooth out the flicker. To manually
     * enable or disable H264FlickerAdaptiveQuantization, you must set Adaptive
     * quantization (H264AdaptiveQuantization) to a value other than AUTO.
     */
    inline const H264FlickerAdaptiveQuantization& GetFlickerAdaptiveQuantization() const{ return m_flickerAdaptiveQuantization; }

    /**
     * Only use this setting when you change the default value, AUTO, for the setting
     * H264AdaptiveQuantization. When you keep all defaults, excluding
     * H264AdaptiveQuantization and all other adaptive quantization from your JSON job
     * specification, MediaConvert automatically applies the best types of quantization
     * for your video content. When you set H264AdaptiveQuantization to a value other
     * than AUTO, the default value for H264FlickerAdaptiveQuantization is Disabled
     * (DISABLED). Change this value to Enabled (ENABLED) to reduce I-frame pop.
     * I-frame pop appears as a visual flicker that can arise when the encoder saves
     * bits by copying some macroblocks many times from frame to frame, and then
     * refreshes them at the I-frame. When you enable this setting, the encoder updates
     * these macroblocks slightly more often to smooth out the flicker. To manually
     * enable or disable H264FlickerAdaptiveQuantization, you must set Adaptive
     * quantization (H264AdaptiveQuantization) to a value other than AUTO.
     */
    inline bool FlickerAdaptiveQuantizationHasBeenSet() const { return m_flickerAdaptiveQuantizationHasBeenSet; }

    /**
     * Only use this setting when you change the default value, AUTO, for the setting
     * H264AdaptiveQuantization. When you keep all defaults, excluding
     * H264AdaptiveQuantization and all other adaptive quantization from your JSON job
     * specification, MediaConvert automatically applies the best types of quantization
     * for your video content. When you set H264AdaptiveQuantization to a value other
     * than AUTO, the default value for H264FlickerAdaptiveQuantization is Disabled
     * (DISABLED). Change this value to Enabled (ENABLED) to reduce I-frame pop.
     * I-frame pop appears as a visual flicker that can arise when the encoder saves
     * bits by copying some macroblocks many times from frame to frame, and then
     * refreshes them at the I-frame. When you enable this setting, the encoder updates
     * these macroblocks slightly more often to smooth out the flicker. To manually
     * enable or disable H264FlickerAdaptiveQuantization, you must set Adaptive
     * quantization (H264AdaptiveQuantization) to a value other than AUTO.
     */
    inline void SetFlickerAdaptiveQuantization(const H264FlickerAdaptiveQuantization& value) { m_flickerAdaptiveQuantizationHasBeenSet = true; m_flickerAdaptiveQuantization = value; }

    /**
     * Only use this setting when you change the default value, AUTO, for the setting
     * H264AdaptiveQuantization. When you keep all defaults, excluding
     * H264AdaptiveQuantization and all other adaptive quantization from your JSON job
     * specification, MediaConvert automatically applies the best types of quantization
     * for your video content. When you set H264AdaptiveQuantization to a value other
     * than AUTO, the default value for H264FlickerAdaptiveQuantization is Disabled
     * (DISABLED). Change this value to Enabled (ENABLED) to reduce I-frame pop.
     * I-frame pop appears as a visual flicker that can arise when the encoder saves
     * bits by copying some macroblocks many times from frame to frame, and then
     * refreshes them at the I-frame. When you enable this setting, the encoder updates
     * these macroblocks slightly more often to smooth out the flicker. To manually
     * enable or disable H264FlickerAdaptiveQuantization, you must set Adaptive
     * quantization (H264AdaptiveQuantization) to a value other than AUTO.
     */
    inline void SetFlickerAdaptiveQuantization(H264FlickerAdaptiveQuantization&& value) { m_flickerAdaptiveQuantizationHasBeenSet = true; m_flickerAdaptiveQuantization = std::move(value); }

    /**
     * Only use this setting when you change the default value, AUTO, for the setting
     * H264AdaptiveQuantization. When you keep all defaults, excluding
     * H264AdaptiveQuantization and all other adaptive quantization from your JSON job
     * specification, MediaConvert automatically applies the best types of quantization
     * for your video content. When you set H264AdaptiveQuantization to a value other
     * than AUTO, the default value for H264FlickerAdaptiveQuantization is Disabled
     * (DISABLED). Change this value to Enabled (ENABLED) to reduce I-frame pop.
     * I-frame pop appears as a visual flicker that can arise when the encoder saves
     * bits by copying some macroblocks many times from frame to frame, and then
     * refreshes them at the I-frame. When you enable this setting, the encoder updates
     * these macroblocks slightly more often to smooth out the flicker. To manually
     * enable or disable H264FlickerAdaptiveQuantization, you must set Adaptive
     * quantization (H264AdaptiveQuantization) to a value other than AUTO.
     */
    inline H264Settings& WithFlickerAdaptiveQuantization(const H264FlickerAdaptiveQuantization& value) { SetFlickerAdaptiveQuantization(value); return *this;}

    /**
     * Only use this setting when you change the default value, AUTO, for the setting
     * H264AdaptiveQuantization. When you keep all defaults, excluding
     * H264AdaptiveQuantization and all other adaptive quantization from your JSON job
     * specification, MediaConvert automatically applies the best types of quantization
     * for your video content. When you set H264AdaptiveQuantization to a value other
     * than AUTO, the default value for H264FlickerAdaptiveQuantization is Disabled
     * (DISABLED). Change this value to Enabled (ENABLED) to reduce I-frame pop.
     * I-frame pop appears as a visual flicker that can arise when the encoder saves
     * bits by copying some macroblocks many times from frame to frame, and then
     * refreshes them at the I-frame. When you enable this setting, the encoder updates
     * these macroblocks slightly more often to smooth out the flicker. To manually
     * enable or disable H264FlickerAdaptiveQuantization, you must set Adaptive
     * quantization (H264AdaptiveQuantization) to a value other than AUTO.
     */
    inline H264Settings& WithFlickerAdaptiveQuantization(H264FlickerAdaptiveQuantization&& value) { SetFlickerAdaptiveQuantization(std::move(value)); return *this;}


    /**
     * If you are using the console, use the Framerate setting to specify the frame
     * rate for this output. If you want to keep the same frame rate as the input
     * video, choose Follow source. If you want to do frame rate conversion, choose a
     * frame rate from the dropdown list or choose Custom. The framerates shown in the
     * dropdown list are decimal approximations of fractions. If you choose Custom,
     * specify your frame rate as a fraction. If you are creating your transcoding job
     * specification as a JSON file without the console, use FramerateControl to
     * specify which value the service uses for the frame rate for this output. Choose
     * INITIALIZE_FROM_SOURCE if you want the service to use the frame rate from the
     * input. Choose SPECIFIED if you want the service to use the frame rate you
     * specify in the settings FramerateNumerator and FramerateDenominator.
     */
    inline const H264FramerateControl& GetFramerateControl() const{ return m_framerateControl; }

    /**
     * If you are using the console, use the Framerate setting to specify the frame
     * rate for this output. If you want to keep the same frame rate as the input
     * video, choose Follow source. If you want to do frame rate conversion, choose a
     * frame rate from the dropdown list or choose Custom. The framerates shown in the
     * dropdown list are decimal approximations of fractions. If you choose Custom,
     * specify your frame rate as a fraction. If you are creating your transcoding job
     * specification as a JSON file without the console, use FramerateControl to
     * specify which value the service uses for the frame rate for this output. Choose
     * INITIALIZE_FROM_SOURCE if you want the service to use the frame rate from the
     * input. Choose SPECIFIED if you want the service to use the frame rate you
     * specify in the settings FramerateNumerator and FramerateDenominator.
     */
    inline bool FramerateControlHasBeenSet() const { return m_framerateControlHasBeenSet; }

    /**
     * If you are using the console, use the Framerate setting to specify the frame
     * rate for this output. If you want to keep the same frame rate as the input
     * video, choose Follow source. If you want to do frame rate conversion, choose a
     * frame rate from the dropdown list or choose Custom. The framerates shown in the
     * dropdown list are decimal approximations of fractions. If you choose Custom,
     * specify your frame rate as a fraction. If you are creating your transcoding job
     * specification as a JSON file without the console, use FramerateControl to
     * specify which value the service uses for the frame rate for this output. Choose
     * INITIALIZE_FROM_SOURCE if you want the service to use the frame rate from the
     * input. Choose SPECIFIED if you want the service to use the frame rate you
     * specify in the settings FramerateNumerator and FramerateDenominator.
     */
    inline void SetFramerateControl(const H264FramerateControl& value) { m_framerateControlHasBeenSet = true; m_framerateControl = value; }

    /**
     * If you are using the console, use the Framerate setting to specify the frame
     * rate for this output. If you want to keep the same frame rate as the input
     * video, choose Follow source. If you want to do frame rate conversion, choose a
     * frame rate from the dropdown list or choose Custom. The framerates shown in the
     * dropdown list are decimal approximations of fractions. If you choose Custom,
     * specify your frame rate as a fraction. If you are creating your transcoding job
     * specification as a JSON file without the console, use FramerateControl to
     * specify which value the service uses for the frame rate for this output. Choose
     * INITIALIZE_FROM_SOURCE if you want the service to use the frame rate from the
     * input. Choose SPECIFIED if you want the service to use the frame rate you
     * specify in the settings FramerateNumerator and FramerateDenominator.
     */
    inline void SetFramerateControl(H264FramerateControl&& value) { m_framerateControlHasBeenSet = true; m_framerateControl = std::move(value); }

    /**
     * If you are using the console, use the Framerate setting to specify the frame
     * rate for this output. If you want to keep the same frame rate as the input
     * video, choose Follow source. If you want to do frame rate conversion, choose a
     * frame rate from the dropdown list or choose Custom. The framerates shown in the
     * dropdown list are decimal approximations of fractions. If you choose Custom,
     * specify your frame rate as a fraction. If you are creating your transcoding job
     * specification as a JSON file without the console, use FramerateControl to
     * specify which value the service uses for the frame rate for this output. Choose
     * INITIALIZE_FROM_SOURCE if you want the service to use the frame rate from the
     * input. Choose SPECIFIED if you want the service to use the frame rate you
     * specify in the settings FramerateNumerator and FramerateDenominator.
     */
    inline H264Settings& WithFramerateControl(const H264FramerateControl& value) { SetFramerateControl(value); return *this;}

    /**
     * If you are using the console, use the Framerate setting to specify the frame
     * rate for this output. If you want to keep the same frame rate as the input
     * video, choose Follow source. If you want to do frame rate conversion, choose a
     * frame rate from the dropdown list or choose Custom. The framerates shown in the
     * dropdown list are decimal approximations of fractions. If you choose Custom,
     * specify your frame rate as a fraction. If you are creating your transcoding job
     * specification as a JSON file without the console, use FramerateControl to
     * specify which value the service uses for the frame rate for this output. Choose
     * INITIALIZE_FROM_SOURCE if you want the service to use the frame rate from the
     * input. Choose SPECIFIED if you want the service to use the frame rate you
     * specify in the settings FramerateNumerator and FramerateDenominator.
     */
    inline H264Settings& WithFramerateControl(H264FramerateControl&& value) { SetFramerateControl(std::move(value)); return *this;}


    /**
     * Choose the method that you want MediaConvert to use when increasing or
     * decreasing the frame rate. We recommend using drop duplicate (DUPLICATE_DROP)
     * for numerically simple conversions, such as 60 fps to 30 fps. For numerically
     * complex conversions, you can use interpolate (INTERPOLATE) to avoid stutter.
     * This results in a smooth picture, but might introduce undesirable video
     * artifacts. For complex frame rate conversions, especially if your source video
     * has already been converted from its original cadence, use FrameFormer
     * (FRAMEFORMER) to do motion-compensated interpolation. FrameFormer chooses the
     * best conversion method frame by frame. Note that using FrameFormer increases the
     * transcoding time and incurs a significant add-on cost.
     */
    inline const H264FramerateConversionAlgorithm& GetFramerateConversionAlgorithm() const{ return m_framerateConversionAlgorithm; }

    /**
     * Choose the method that you want MediaConvert to use when increasing or
     * decreasing the frame rate. We recommend using drop duplicate (DUPLICATE_DROP)
     * for numerically simple conversions, such as 60 fps to 30 fps. For numerically
     * complex conversions, you can use interpolate (INTERPOLATE) to avoid stutter.
     * This results in a smooth picture, but might introduce undesirable video
     * artifacts. For complex frame rate conversions, especially if your source video
     * has already been converted from its original cadence, use FrameFormer
     * (FRAMEFORMER) to do motion-compensated interpolation. FrameFormer chooses the
     * best conversion method frame by frame. Note that using FrameFormer increases the
     * transcoding time and incurs a significant add-on cost.
     */
    inline bool FramerateConversionAlgorithmHasBeenSet() const { return m_framerateConversionAlgorithmHasBeenSet; }

    /**
     * Choose the method that you want MediaConvert to use when increasing or
     * decreasing the frame rate. We recommend using drop duplicate (DUPLICATE_DROP)
     * for numerically simple conversions, such as 60 fps to 30 fps. For numerically
     * complex conversions, you can use interpolate (INTERPOLATE) to avoid stutter.
     * This results in a smooth picture, but might introduce undesirable video
     * artifacts. For complex frame rate conversions, especially if your source video
     * has already been converted from its original cadence, use FrameFormer
     * (FRAMEFORMER) to do motion-compensated interpolation. FrameFormer chooses the
     * best conversion method frame by frame. Note that using FrameFormer increases the
     * transcoding time and incurs a significant add-on cost.
     */
    inline void SetFramerateConversionAlgorithm(const H264FramerateConversionAlgorithm& value) { m_framerateConversionAlgorithmHasBeenSet = true; m_framerateConversionAlgorithm = value; }

    /**
     * Choose the method that you want MediaConvert to use when increasing or
     * decreasing the frame rate. We recommend using drop duplicate (DUPLICATE_DROP)
     * for numerically simple conversions, such as 60 fps to 30 fps. For numerically
     * complex conversions, you can use interpolate (INTERPOLATE) to avoid stutter.
     * This results in a smooth picture, but might introduce undesirable video
     * artifacts. For complex frame rate conversions, especially if your source video
     * has already been converted from its original cadence, use FrameFormer
     * (FRAMEFORMER) to do motion-compensated interpolation. FrameFormer chooses the
     * best conversion method frame by frame. Note that using FrameFormer increases the
     * transcoding time and incurs a significant add-on cost.
     */
    inline void SetFramerateConversionAlgorithm(H264FramerateConversionAlgorithm&& value) { m_framerateConversionAlgorithmHasBeenSet = true; m_framerateConversionAlgorithm = std::move(value); }

    /**
     * Choose the method that you want MediaConvert to use when increasing or
     * decreasing the frame rate. We recommend using drop duplicate (DUPLICATE_DROP)
     * for numerically simple conversions, such as 60 fps to 30 fps. For numerically
     * complex conversions, you can use interpolate (INTERPOLATE) to avoid stutter.
     * This results in a smooth picture, but might introduce undesirable video
     * artifacts. For complex frame rate conversions, especially if your source video
     * has already been converted from its original cadence, use FrameFormer
     * (FRAMEFORMER) to do motion-compensated interpolation. FrameFormer chooses the
     * best conversion method frame by frame. Note that using FrameFormer increases the
     * transcoding time and incurs a significant add-on cost.
     */
    inline H264Settings& WithFramerateConversionAlgorithm(const H264FramerateConversionAlgorithm& value) { SetFramerateConversionAlgorithm(value); return *this;}

    /**
     * Choose the method that you want MediaConvert to use when increasing or
     * decreasing the frame rate. We recommend using drop duplicate (DUPLICATE_DROP)
     * for numerically simple conversions, such as 60 fps to 30 fps. For numerically
     * complex conversions, you can use interpolate (INTERPOLATE) to avoid stutter.
     * This results in a smooth picture, but might introduce undesirable video
     * artifacts. For complex frame rate conversions, especially if your source video
     * has already been converted from its original cadence, use FrameFormer
     * (FRAMEFORMER) to do motion-compensated interpolation. FrameFormer chooses the
     * best conversion method frame by frame. Note that using FrameFormer increases the
     * transcoding time and incurs a significant add-on cost.
     */
    inline H264Settings& WithFramerateConversionAlgorithm(H264FramerateConversionAlgorithm&& value) { SetFramerateConversionAlgorithm(std::move(value)); return *this;}


    /**
     * When you use the API for transcode jobs that use frame rate conversion, specify
     * the frame rate as a fraction. For example,  24000 / 1001 = 23.976 fps. Use
     * FramerateDenominator to specify the denominator of this fraction. In this
     * example, use 1001 for the value of FramerateDenominator. When you use the
     * console for transcode jobs that use frame rate conversion, provide the value as
     * a decimal number for Framerate. In this example, specify 23.976.
     */
    inline int GetFramerateDenominator() const{ return m_framerateDenominator; }

    /**
     * When you use the API for transcode jobs that use frame rate conversion, specify
     * the frame rate as a fraction. For example,  24000 / 1001 = 23.976 fps. Use
     * FramerateDenominator to specify the denominator of this fraction. In this
     * example, use 1001 for the value of FramerateDenominator. When you use the
     * console for transcode jobs that use frame rate conversion, provide the value as
     * a decimal number for Framerate. In this example, specify 23.976.
     */
    inline bool FramerateDenominatorHasBeenSet() const { return m_framerateDenominatorHasBeenSet; }

    /**
     * When you use the API for transcode jobs that use frame rate conversion, specify
     * the frame rate as a fraction. For example,  24000 / 1001 = 23.976 fps. Use
     * FramerateDenominator to specify the denominator of this fraction. In this
     * example, use 1001 for the value of FramerateDenominator. When you use the
     * console for transcode jobs that use frame rate conversion, provide the value as
     * a decimal number for Framerate. In this example, specify 23.976.
     */
    inline void SetFramerateDenominator(int value) { m_framerateDenominatorHasBeenSet = true; m_framerateDenominator = value; }

    /**
     * When you use the API for transcode jobs that use frame rate conversion, specify
     * the frame rate as a fraction. For example,  24000 / 1001 = 23.976 fps. Use
     * FramerateDenominator to specify the denominator of this fraction. In this
     * example, use 1001 for the value of FramerateDenominator. When you use the
     * console for transcode jobs that use frame rate conversion, provide the value as
     * a decimal number for Framerate. In this example, specify 23.976.
     */
    inline H264Settings& WithFramerateDenominator(int value) { SetFramerateDenominator(value); return *this;}


    /**
     * When you use the API for transcode jobs that use frame rate conversion, specify
     * the frame rate as a fraction. For example,  24000 / 1001 = 23.976 fps. Use
     * FramerateNumerator to specify the numerator of this fraction. In this example,
     * use 24000 for the value of FramerateNumerator. When you use the console for
     * transcode jobs that use frame rate conversion, provide the value as a decimal
     * number for Framerate. In this example, specify 23.976.
     */
    inline int GetFramerateNumerator() const{ return m_framerateNumerator; }

    /**
     * When you use the API for transcode jobs that use frame rate conversion, specify
     * the frame rate as a fraction. For example,  24000 / 1001 = 23.976 fps. Use
     * FramerateNumerator to specify the numerator of this fraction. In this example,
     * use 24000 for the value of FramerateNumerator. When you use the console for
     * transcode jobs that use frame rate conversion, provide the value as a decimal
     * number for Framerate. In this example, specify 23.976.
     */
    inline bool FramerateNumeratorHasBeenSet() const { return m_framerateNumeratorHasBeenSet; }

    /**
     * When you use the API for transcode jobs that use frame rate conversion, specify
     * the frame rate as a fraction. For example,  24000 / 1001 = 23.976 fps. Use
     * FramerateNumerator to specify the numerator of this fraction. In this example,
     * use 24000 for the value of FramerateNumerator. When you use the console for
     * transcode jobs that use frame rate conversion, provide the value as a decimal
     * number for Framerate. In this example, specify 23.976.
     */
    inline void SetFramerateNumerator(int value) { m_framerateNumeratorHasBeenSet = true; m_framerateNumerator = value; }

    /**
     * When you use the API for transcode jobs that use frame rate conversion, specify
     * the frame rate as a fraction. For example,  24000 / 1001 = 23.976 fps. Use
     * FramerateNumerator to specify the numerator of this fraction. In this example,
     * use 24000 for the value of FramerateNumerator. When you use the console for
     * transcode jobs that use frame rate conversion, provide the value as a decimal
     * number for Framerate. In this example, specify 23.976.
     */
    inline H264Settings& WithFramerateNumerator(int value) { SetFramerateNumerator(value); return *this;}


    /**
     * If enable, use reference B frames for GOP structures that have B frames > 1.
     */
    inline const H264GopBReference& GetGopBReference() const{ return m_gopBReference; }

    /**
     * If enable, use reference B frames for GOP structures that have B frames > 1.
     */
    inline bool GopBReferenceHasBeenSet() const { return m_gopBReferenceHasBeenSet; }

    /**
     * If enable, use reference B frames for GOP structures that have B frames > 1.
     */
    inline void SetGopBReference(const H264GopBReference& value) { m_gopBReferenceHasBeenSet = true; m_gopBReference = value; }

    /**
     * If enable, use reference B frames for GOP structures that have B frames > 1.
     */
    inline void SetGopBReference(H264GopBReference&& value) { m_gopBReferenceHasBeenSet = true; m_gopBReference = std::move(value); }

    /**
     * If enable, use reference B frames for GOP structures that have B frames > 1.
     */
    inline H264Settings& WithGopBReference(const H264GopBReference& value) { SetGopBReference(value); return *this;}

    /**
     * If enable, use reference B frames for GOP structures that have B frames > 1.
     */
    inline H264Settings& WithGopBReference(H264GopBReference&& value) { SetGopBReference(std::move(value)); return *this;}


    /**
     * Specify the relative frequency of open to closed GOPs in this output. For
     * example, if you want to allow four open GOPs and then require a closed GOP, set
     * this value to 5. We recommend that you have the transcoder automatically choose
     * this value for you based on characteristics of your input video. To enable this
     * automatic behavior, keep the default value by leaving this setting out of your
     * JSON job specification. In the console, do this by keeping the default empty
     * value. If you do explicitly specify a value, for segmented outputs, don't set
     * this value to 0.
     */
    inline int GetGopClosedCadence() const{ return m_gopClosedCadence; }

    /**
     * Specify the relative frequency of open to closed GOPs in this output. For
     * example, if you want to allow four open GOPs and then require a closed GOP, set
     * this value to 5. We recommend that you have the transcoder automatically choose
     * this value for you based on characteristics of your input video. To enable this
     * automatic behavior, keep the default value by leaving this setting out of your
     * JSON job specification. In the console, do this by keeping the default empty
     * value. If you do explicitly specify a value, for segmented outputs, don't set
     * this value to 0.
     */
    inline bool GopClosedCadenceHasBeenSet() const { return m_gopClosedCadenceHasBeenSet; }

    /**
     * Specify the relative frequency of open to closed GOPs in this output. For
     * example, if you want to allow four open GOPs and then require a closed GOP, set
     * this value to 5. We recommend that you have the transcoder automatically choose
     * this value for you based on characteristics of your input video. To enable this
     * automatic behavior, keep the default value by leaving this setting out of your
     * JSON job specification. In the console, do this by keeping the default empty
     * value. If you do explicitly specify a value, for segmented outputs, don't set
     * this value to 0.
     */
    inline void SetGopClosedCadence(int value) { m_gopClosedCadenceHasBeenSet = true; m_gopClosedCadence = value; }

    /**
     * Specify the relative frequency of open to closed GOPs in this output. For
     * example, if you want to allow four open GOPs and then require a closed GOP, set
     * this value to 5. We recommend that you have the transcoder automatically choose
     * this value for you based on characteristics of your input video. To enable this
     * automatic behavior, keep the default value by leaving this setting out of your
     * JSON job specification. In the console, do this by keeping the default empty
     * value. If you do explicitly specify a value, for segmented outputs, don't set
     * this value to 0.
     */
    inline H264Settings& WithGopClosedCadence(int value) { SetGopClosedCadence(value); return *this;}


    /**
     * Use this setting only when you set GOP mode control (GopSizeUnits) to Specified,
     * frames (FRAMES) or Specified, seconds (SECONDS). Specify the GOP length using a
     * whole number of frames or a decimal value of seconds. MediaConvert will
     * interpret this value as frames or seconds depending on the value you choose for
     * GOP mode control (GopSizeUnits). If you want to allow MediaConvert to
     * automatically determine GOP size, leave GOP size blank and set GOP mode control
     * to Auto (AUTO). If your output group specifies HLS, DASH, or CMAF, leave GOP
     * size blank and set GOP mode control to Auto in each output in your output group.
     */
    inline double GetGopSize() const{ return m_gopSize; }

    /**
     * Use this setting only when you set GOP mode control (GopSizeUnits) to Specified,
     * frames (FRAMES) or Specified, seconds (SECONDS). Specify the GOP length using a
     * whole number of frames or a decimal value of seconds. MediaConvert will
     * interpret this value as frames or seconds depending on the value you choose for
     * GOP mode control (GopSizeUnits). If you want to allow MediaConvert to
     * automatically determine GOP size, leave GOP size blank and set GOP mode control
     * to Auto (AUTO). If your output group specifies HLS, DASH, or CMAF, leave GOP
     * size blank and set GOP mode control to Auto in each output in your output group.
     */
    inline bool GopSizeHasBeenSet() const { return m_gopSizeHasBeenSet; }

    /**
     * Use this setting only when you set GOP mode control (GopSizeUnits) to Specified,
     * frames (FRAMES) or Specified, seconds (SECONDS). Specify the GOP length using a
     * whole number of frames or a decimal value of seconds. MediaConvert will
     * interpret this value as frames or seconds depending on the value you choose for
     * GOP mode control (GopSizeUnits). If you want to allow MediaConvert to
     * automatically determine GOP size, leave GOP size blank and set GOP mode control
     * to Auto (AUTO). If your output group specifies HLS, DASH, or CMAF, leave GOP
     * size blank and set GOP mode control to Auto in each output in your output group.
     */
    inline void SetGopSize(double value) { m_gopSizeHasBeenSet = true; m_gopSize = value; }

    /**
     * Use this setting only when you set GOP mode control (GopSizeUnits) to Specified,
     * frames (FRAMES) or Specified, seconds (SECONDS). Specify the GOP length using a
     * whole number of frames or a decimal value of seconds. MediaConvert will
     * interpret this value as frames or seconds depending on the value you choose for
     * GOP mode control (GopSizeUnits). If you want to allow MediaConvert to
     * automatically determine GOP size, leave GOP size blank and set GOP mode control
     * to Auto (AUTO). If your output group specifies HLS, DASH, or CMAF, leave GOP
     * size blank and set GOP mode control to Auto in each output in your output group.
     */
    inline H264Settings& WithGopSize(double value) { SetGopSize(value); return *this;}


    /**
     * Specify how the transcoder determines GOP size for this output. We recommend
     * that you have the transcoder automatically choose this value for you based on
     * characteristics of your input video. To enable this automatic behavior, choose
     * Auto (AUTO) and and leave GOP size (GopSize) blank. By default, if you don't
     * specify GOP mode control (GopSizeUnits), MediaConvert will use automatic
     * behavior. If your output group specifies HLS, DASH, or CMAF, set GOP mode
     * control to Auto and leave GOP size blank in each output in your output group. To
     * explicitly specify the GOP length, choose Specified, frames (FRAMES) or
     * Specified, seconds (SECONDS) and then provide the GOP length in the related
     * setting GOP size (GopSize).
     */
    inline const H264GopSizeUnits& GetGopSizeUnits() const{ return m_gopSizeUnits; }

    /**
     * Specify how the transcoder determines GOP size for this output. We recommend
     * that you have the transcoder automatically choose this value for you based on
     * characteristics of your input video. To enable this automatic behavior, choose
     * Auto (AUTO) and and leave GOP size (GopSize) blank. By default, if you don't
     * specify GOP mode control (GopSizeUnits), MediaConvert will use automatic
     * behavior. If your output group specifies HLS, DASH, or CMAF, set GOP mode
     * control to Auto and leave GOP size blank in each output in your output group. To
     * explicitly specify the GOP length, choose Specified, frames (FRAMES) or
     * Specified, seconds (SECONDS) and then provide the GOP length in the related
     * setting GOP size (GopSize).
     */
    inline bool GopSizeUnitsHasBeenSet() const { return m_gopSizeUnitsHasBeenSet; }

    /**
     * Specify how the transcoder determines GOP size for this output. We recommend
     * that you have the transcoder automatically choose this value for you based on
     * characteristics of your input video. To enable this automatic behavior, choose
     * Auto (AUTO) and and leave GOP size (GopSize) blank. By default, if you don't
     * specify GOP mode control (GopSizeUnits), MediaConvert will use automatic
     * behavior. If your output group specifies HLS, DASH, or CMAF, set GOP mode
     * control to Auto and leave GOP size blank in each output in your output group. To
     * explicitly specify the GOP length, choose Specified, frames (FRAMES) or
     * Specified, seconds (SECONDS) and then provide the GOP length in the related
     * setting GOP size (GopSize).
     */
    inline void SetGopSizeUnits(const H264GopSizeUnits& value) { m_gopSizeUnitsHasBeenSet = true; m_gopSizeUnits = value; }

    /**
     * Specify how the transcoder determines GOP size for this output. We recommend
     * that you have the transcoder automatically choose this value for you based on
     * characteristics of your input video. To enable this automatic behavior, choose
     * Auto (AUTO) and and leave GOP size (GopSize) blank. By default, if you don't
     * specify GOP mode control (GopSizeUnits), MediaConvert will use automatic
     * behavior. If your output group specifies HLS, DASH, or CMAF, set GOP mode
     * control to Auto and leave GOP size blank in each output in your output group. To
     * explicitly specify the GOP length, choose Specified, frames (FRAMES) or
     * Specified, seconds (SECONDS) and then provide the GOP length in the related
     * setting GOP size (GopSize).
     */
    inline void SetGopSizeUnits(H264GopSizeUnits&& value) { m_gopSizeUnitsHasBeenSet = true; m_gopSizeUnits = std::move(value); }

    /**
     * Specify how the transcoder determines GOP size for this output. We recommend
     * that you have the transcoder automatically choose this value for you based on
     * characteristics of your input video. To enable this automatic behavior, choose
     * Auto (AUTO) and and leave GOP size (GopSize) blank. By default, if you don't
     * specify GOP mode control (GopSizeUnits), MediaConvert will use automatic
     * behavior. If your output group specifies HLS, DASH, or CMAF, set GOP mode
     * control to Auto and leave GOP size blank in each output in your output group. To
     * explicitly specify the GOP length, choose Specified, frames (FRAMES) or
     * Specified, seconds (SECONDS) and then provide the GOP length in the related
     * setting GOP size (GopSize).
     */
    inline H264Settings& WithGopSizeUnits(const H264GopSizeUnits& value) { SetGopSizeUnits(value); return *this;}

    /**
     * Specify how the transcoder determines GOP size for this output. We recommend
     * that you have the transcoder automatically choose this value for you based on
     * characteristics of your input video. To enable this automatic behavior, choose
     * Auto (AUTO) and and leave GOP size (GopSize) blank. By default, if you don't
     * specify GOP mode control (GopSizeUnits), MediaConvert will use automatic
     * behavior. If your output group specifies HLS, DASH, or CMAF, set GOP mode
     * control to Auto and leave GOP size blank in each output in your output group. To
     * explicitly specify the GOP length, choose Specified, frames (FRAMES) or
     * Specified, seconds (SECONDS) and then provide the GOP length in the related
     * setting GOP size (GopSize).
     */
    inline H264Settings& WithGopSizeUnits(H264GopSizeUnits&& value) { SetGopSizeUnits(std::move(value)); return *this;}


    /**
     * If your downstream systems have strict buffer requirements: Specify the minimum
     * percentage of the HRD buffer that's available at the end of each encoded video
     * segment. For the best video quality: Set to 0 or leave blank to automatically
     * determine the final buffer fill percentage.
     */
    inline int GetHrdBufferFinalFillPercentage() const{ return m_hrdBufferFinalFillPercentage; }

    /**
     * If your downstream systems have strict buffer requirements: Specify the minimum
     * percentage of the HRD buffer that's available at the end of each encoded video
     * segment. For the best video quality: Set to 0 or leave blank to automatically
     * determine the final buffer fill percentage.
     */
    inline bool HrdBufferFinalFillPercentageHasBeenSet() const { return m_hrdBufferFinalFillPercentageHasBeenSet; }

    /**
     * If your downstream systems have strict buffer requirements: Specify the minimum
     * percentage of the HRD buffer that's available at the end of each encoded video
     * segment. For the best video quality: Set to 0 or leave blank to automatically
     * determine the final buffer fill percentage.
     */
    inline void SetHrdBufferFinalFillPercentage(int value) { m_hrdBufferFinalFillPercentageHasBeenSet = true; m_hrdBufferFinalFillPercentage = value; }

    /**
     * If your downstream systems have strict buffer requirements: Specify the minimum
     * percentage of the HRD buffer that's available at the end of each encoded video
     * segment. For the best video quality: Set to 0 or leave blank to automatically
     * determine the final buffer fill percentage.
     */
    inline H264Settings& WithHrdBufferFinalFillPercentage(int value) { SetHrdBufferFinalFillPercentage(value); return *this;}


    /**
     * Percentage of the buffer that should initially be filled (HRD buffer model).
     */
    inline int GetHrdBufferInitialFillPercentage() const{ return m_hrdBufferInitialFillPercentage; }

    /**
     * Percentage of the buffer that should initially be filled (HRD buffer model).
     */
    inline bool HrdBufferInitialFillPercentageHasBeenSet() const { return m_hrdBufferInitialFillPercentageHasBeenSet; }

    /**
     * Percentage of the buffer that should initially be filled (HRD buffer model).
     */
    inline void SetHrdBufferInitialFillPercentage(int value) { m_hrdBufferInitialFillPercentageHasBeenSet = true; m_hrdBufferInitialFillPercentage = value; }

    /**
     * Percentage of the buffer that should initially be filled (HRD buffer model).
     */
    inline H264Settings& WithHrdBufferInitialFillPercentage(int value) { SetHrdBufferInitialFillPercentage(value); return *this;}


    /**
     * Size of buffer (HRD buffer model) in bits. For example, enter five megabits as
     * 5000000.
     */
    inline int GetHrdBufferSize() const{ return m_hrdBufferSize; }

    /**
     * Size of buffer (HRD buffer model) in bits. For example, enter five megabits as
     * 5000000.
     */
    inline bool HrdBufferSizeHasBeenSet() const { return m_hrdBufferSizeHasBeenSet; }

    /**
     * Size of buffer (HRD buffer model) in bits. For example, enter five megabits as
     * 5000000.
     */
    inline void SetHrdBufferSize(int value) { m_hrdBufferSizeHasBeenSet = true; m_hrdBufferSize = value; }

    /**
     * Size of buffer (HRD buffer model) in bits. For example, enter five megabits as
     * 5000000.
     */
    inline H264Settings& WithHrdBufferSize(int value) { SetHrdBufferSize(value); return *this;}


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
    inline const H264InterlaceMode& GetInterlaceMode() const{ return m_interlaceMode; }

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
    inline void SetInterlaceMode(const H264InterlaceMode& value) { m_interlaceModeHasBeenSet = true; m_interlaceMode = value; }

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
    inline void SetInterlaceMode(H264InterlaceMode&& value) { m_interlaceModeHasBeenSet = true; m_interlaceMode = std::move(value); }

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
    inline H264Settings& WithInterlaceMode(const H264InterlaceMode& value) { SetInterlaceMode(value); return *this;}

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
    inline H264Settings& WithInterlaceMode(H264InterlaceMode&& value) { SetInterlaceMode(std::move(value)); return *this;}


    /**
     * Maximum bitrate in bits/second. For example, enter five megabits per second as
     * 5000000. Required when Rate control mode is QVBR.
     */
    inline int GetMaxBitrate() const{ return m_maxBitrate; }

    /**
     * Maximum bitrate in bits/second. For example, enter five megabits per second as
     * 5000000. Required when Rate control mode is QVBR.
     */
    inline bool MaxBitrateHasBeenSet() const { return m_maxBitrateHasBeenSet; }

    /**
     * Maximum bitrate in bits/second. For example, enter five megabits per second as
     * 5000000. Required when Rate control mode is QVBR.
     */
    inline void SetMaxBitrate(int value) { m_maxBitrateHasBeenSet = true; m_maxBitrate = value; }

    /**
     * Maximum bitrate in bits/second. For example, enter five megabits per second as
     * 5000000. Required when Rate control mode is QVBR.
     */
    inline H264Settings& WithMaxBitrate(int value) { SetMaxBitrate(value); return *this;}


    /**
     * Use this setting only when you also enable Scene change detection
     * (SceneChangeDetect). This setting determines how the encoder manages the spacing
     * between I-frames that it inserts as part of the I-frame cadence and the I-frames
     * that it inserts for Scene change detection. We recommend that you have the
     * transcoder automatically choose this value for you based on characteristics of
     * your input video. To enable this automatic behavior, keep the default value by
     * leaving this setting out of your JSON job specification. In the console, do this
     * by keeping the default empty value. When you explicitly specify a value for this
     * setting, the encoder determines whether to skip a cadence-driven I-frame by the
     * value you set. For example, if you set Min I interval (minIInterval) to 5 and a
     * cadence-driven I-frame would fall within 5 frames of a scene-change I-frame,
     * then the encoder skips the cadence-driven I-frame. In this way, one GOP is
     * shrunk slightly and one GOP is stretched slightly. When the cadence-driven
     * I-frames are farther from the scene-change I-frame than the value you set, then
     * the encoder leaves all I-frames in place and the GOPs surrounding the scene
     * change are smaller than the usual cadence GOPs.
     */
    inline int GetMinIInterval() const{ return m_minIInterval; }

    /**
     * Use this setting only when you also enable Scene change detection
     * (SceneChangeDetect). This setting determines how the encoder manages the spacing
     * between I-frames that it inserts as part of the I-frame cadence and the I-frames
     * that it inserts for Scene change detection. We recommend that you have the
     * transcoder automatically choose this value for you based on characteristics of
     * your input video. To enable this automatic behavior, keep the default value by
     * leaving this setting out of your JSON job specification. In the console, do this
     * by keeping the default empty value. When you explicitly specify a value for this
     * setting, the encoder determines whether to skip a cadence-driven I-frame by the
     * value you set. For example, if you set Min I interval (minIInterval) to 5 and a
     * cadence-driven I-frame would fall within 5 frames of a scene-change I-frame,
     * then the encoder skips the cadence-driven I-frame. In this way, one GOP is
     * shrunk slightly and one GOP is stretched slightly. When the cadence-driven
     * I-frames are farther from the scene-change I-frame than the value you set, then
     * the encoder leaves all I-frames in place and the GOPs surrounding the scene
     * change are smaller than the usual cadence GOPs.
     */
    inline bool MinIIntervalHasBeenSet() const { return m_minIIntervalHasBeenSet; }

    /**
     * Use this setting only when you also enable Scene change detection
     * (SceneChangeDetect). This setting determines how the encoder manages the spacing
     * between I-frames that it inserts as part of the I-frame cadence and the I-frames
     * that it inserts for Scene change detection. We recommend that you have the
     * transcoder automatically choose this value for you based on characteristics of
     * your input video. To enable this automatic behavior, keep the default value by
     * leaving this setting out of your JSON job specification. In the console, do this
     * by keeping the default empty value. When you explicitly specify a value for this
     * setting, the encoder determines whether to skip a cadence-driven I-frame by the
     * value you set. For example, if you set Min I interval (minIInterval) to 5 and a
     * cadence-driven I-frame would fall within 5 frames of a scene-change I-frame,
     * then the encoder skips the cadence-driven I-frame. In this way, one GOP is
     * shrunk slightly and one GOP is stretched slightly. When the cadence-driven
     * I-frames are farther from the scene-change I-frame than the value you set, then
     * the encoder leaves all I-frames in place and the GOPs surrounding the scene
     * change are smaller than the usual cadence GOPs.
     */
    inline void SetMinIInterval(int value) { m_minIIntervalHasBeenSet = true; m_minIInterval = value; }

    /**
     * Use this setting only when you also enable Scene change detection
     * (SceneChangeDetect). This setting determines how the encoder manages the spacing
     * between I-frames that it inserts as part of the I-frame cadence and the I-frames
     * that it inserts for Scene change detection. We recommend that you have the
     * transcoder automatically choose this value for you based on characteristics of
     * your input video. To enable this automatic behavior, keep the default value by
     * leaving this setting out of your JSON job specification. In the console, do this
     * by keeping the default empty value. When you explicitly specify a value for this
     * setting, the encoder determines whether to skip a cadence-driven I-frame by the
     * value you set. For example, if you set Min I interval (minIInterval) to 5 and a
     * cadence-driven I-frame would fall within 5 frames of a scene-change I-frame,
     * then the encoder skips the cadence-driven I-frame. In this way, one GOP is
     * shrunk slightly and one GOP is stretched slightly. When the cadence-driven
     * I-frames are farther from the scene-change I-frame than the value you set, then
     * the encoder leaves all I-frames in place and the GOPs surrounding the scene
     * change are smaller than the usual cadence GOPs.
     */
    inline H264Settings& WithMinIInterval(int value) { SetMinIInterval(value); return *this;}


    /**
     * This setting to determines the number of B-frames that MediaConvert puts between
     * reference frames in this output. We recommend that you use automatic behavior to
     * allow the transcoder to choose the best value based on characteristics of your
     * input video. In the console, choose AUTO to select this automatic behavior. When
     * you manually edit your JSON job specification, leave this setting out to choose
     * automatic behavior. When you want to specify this number explicitly, choose a
     * whole number from 0 through 7.
     */
    inline int GetNumberBFramesBetweenReferenceFrames() const{ return m_numberBFramesBetweenReferenceFrames; }

    /**
     * This setting to determines the number of B-frames that MediaConvert puts between
     * reference frames in this output. We recommend that you use automatic behavior to
     * allow the transcoder to choose the best value based on characteristics of your
     * input video. In the console, choose AUTO to select this automatic behavior. When
     * you manually edit your JSON job specification, leave this setting out to choose
     * automatic behavior. When you want to specify this number explicitly, choose a
     * whole number from 0 through 7.
     */
    inline bool NumberBFramesBetweenReferenceFramesHasBeenSet() const { return m_numberBFramesBetweenReferenceFramesHasBeenSet; }

    /**
     * This setting to determines the number of B-frames that MediaConvert puts between
     * reference frames in this output. We recommend that you use automatic behavior to
     * allow the transcoder to choose the best value based on characteristics of your
     * input video. In the console, choose AUTO to select this automatic behavior. When
     * you manually edit your JSON job specification, leave this setting out to choose
     * automatic behavior. When you want to specify this number explicitly, choose a
     * whole number from 0 through 7.
     */
    inline void SetNumberBFramesBetweenReferenceFrames(int value) { m_numberBFramesBetweenReferenceFramesHasBeenSet = true; m_numberBFramesBetweenReferenceFrames = value; }

    /**
     * This setting to determines the number of B-frames that MediaConvert puts between
     * reference frames in this output. We recommend that you use automatic behavior to
     * allow the transcoder to choose the best value based on characteristics of your
     * input video. In the console, choose AUTO to select this automatic behavior. When
     * you manually edit your JSON job specification, leave this setting out to choose
     * automatic behavior. When you want to specify this number explicitly, choose a
     * whole number from 0 through 7.
     */
    inline H264Settings& WithNumberBFramesBetweenReferenceFrames(int value) { SetNumberBFramesBetweenReferenceFrames(value); return *this;}


    /**
     * Number of reference frames to use. The encoder may use more than requested if
     * using B-frames and/or interlaced encoding.
     */
    inline int GetNumberReferenceFrames() const{ return m_numberReferenceFrames; }

    /**
     * Number of reference frames to use. The encoder may use more than requested if
     * using B-frames and/or interlaced encoding.
     */
    inline bool NumberReferenceFramesHasBeenSet() const { return m_numberReferenceFramesHasBeenSet; }

    /**
     * Number of reference frames to use. The encoder may use more than requested if
     * using B-frames and/or interlaced encoding.
     */
    inline void SetNumberReferenceFrames(int value) { m_numberReferenceFramesHasBeenSet = true; m_numberReferenceFrames = value; }

    /**
     * Number of reference frames to use. The encoder may use more than requested if
     * using B-frames and/or interlaced encoding.
     */
    inline H264Settings& WithNumberReferenceFrames(int value) { SetNumberReferenceFrames(value); return *this;}


    /**
     * Optional. Specify how the service determines the pixel aspect ratio (PAR) for
     * this output. The default behavior, Follow source (INITIALIZE_FROM_SOURCE), uses
     * the PAR from your input video for your output. To specify a different PAR in the
     * console, choose any value other than Follow source. To specify a different PAR
     * by editing the JSON job specification, choose SPECIFIED. When you choose
     * SPECIFIED for this setting, you must also specify values for the parNumerator
     * and parDenominator settings.
     */
    inline const H264ParControl& GetParControl() const{ return m_parControl; }

    /**
     * Optional. Specify how the service determines the pixel aspect ratio (PAR) for
     * this output. The default behavior, Follow source (INITIALIZE_FROM_SOURCE), uses
     * the PAR from your input video for your output. To specify a different PAR in the
     * console, choose any value other than Follow source. To specify a different PAR
     * by editing the JSON job specification, choose SPECIFIED. When you choose
     * SPECIFIED for this setting, you must also specify values for the parNumerator
     * and parDenominator settings.
     */
    inline bool ParControlHasBeenSet() const { return m_parControlHasBeenSet; }

    /**
     * Optional. Specify how the service determines the pixel aspect ratio (PAR) for
     * this output. The default behavior, Follow source (INITIALIZE_FROM_SOURCE), uses
     * the PAR from your input video for your output. To specify a different PAR in the
     * console, choose any value other than Follow source. To specify a different PAR
     * by editing the JSON job specification, choose SPECIFIED. When you choose
     * SPECIFIED for this setting, you must also specify values for the parNumerator
     * and parDenominator settings.
     */
    inline void SetParControl(const H264ParControl& value) { m_parControlHasBeenSet = true; m_parControl = value; }

    /**
     * Optional. Specify how the service determines the pixel aspect ratio (PAR) for
     * this output. The default behavior, Follow source (INITIALIZE_FROM_SOURCE), uses
     * the PAR from your input video for your output. To specify a different PAR in the
     * console, choose any value other than Follow source. To specify a different PAR
     * by editing the JSON job specification, choose SPECIFIED. When you choose
     * SPECIFIED for this setting, you must also specify values for the parNumerator
     * and parDenominator settings.
     */
    inline void SetParControl(H264ParControl&& value) { m_parControlHasBeenSet = true; m_parControl = std::move(value); }

    /**
     * Optional. Specify how the service determines the pixel aspect ratio (PAR) for
     * this output. The default behavior, Follow source (INITIALIZE_FROM_SOURCE), uses
     * the PAR from your input video for your output. To specify a different PAR in the
     * console, choose any value other than Follow source. To specify a different PAR
     * by editing the JSON job specification, choose SPECIFIED. When you choose
     * SPECIFIED for this setting, you must also specify values for the parNumerator
     * and parDenominator settings.
     */
    inline H264Settings& WithParControl(const H264ParControl& value) { SetParControl(value); return *this;}

    /**
     * Optional. Specify how the service determines the pixel aspect ratio (PAR) for
     * this output. The default behavior, Follow source (INITIALIZE_FROM_SOURCE), uses
     * the PAR from your input video for your output. To specify a different PAR in the
     * console, choose any value other than Follow source. To specify a different PAR
     * by editing the JSON job specification, choose SPECIFIED. When you choose
     * SPECIFIED for this setting, you must also specify values for the parNumerator
     * and parDenominator settings.
     */
    inline H264Settings& WithParControl(H264ParControl&& value) { SetParControl(std::move(value)); return *this;}


    /**
     * Required when you set Pixel aspect ratio (parControl) to SPECIFIED. On the
     * console, this corresponds to any value other than Follow source. When you
     * specify an output pixel aspect ratio (PAR) that is different from your input
     * video PAR, provide your output PAR as a ratio. For example, for D1/DV NTSC
     * widescreen, you would specify the ratio 40:33. In this example, the value for
     * parDenominator is 33.
     */
    inline int GetParDenominator() const{ return m_parDenominator; }

    /**
     * Required when you set Pixel aspect ratio (parControl) to SPECIFIED. On the
     * console, this corresponds to any value other than Follow source. When you
     * specify an output pixel aspect ratio (PAR) that is different from your input
     * video PAR, provide your output PAR as a ratio. For example, for D1/DV NTSC
     * widescreen, you would specify the ratio 40:33. In this example, the value for
     * parDenominator is 33.
     */
    inline bool ParDenominatorHasBeenSet() const { return m_parDenominatorHasBeenSet; }

    /**
     * Required when you set Pixel aspect ratio (parControl) to SPECIFIED. On the
     * console, this corresponds to any value other than Follow source. When you
     * specify an output pixel aspect ratio (PAR) that is different from your input
     * video PAR, provide your output PAR as a ratio. For example, for D1/DV NTSC
     * widescreen, you would specify the ratio 40:33. In this example, the value for
     * parDenominator is 33.
     */
    inline void SetParDenominator(int value) { m_parDenominatorHasBeenSet = true; m_parDenominator = value; }

    /**
     * Required when you set Pixel aspect ratio (parControl) to SPECIFIED. On the
     * console, this corresponds to any value other than Follow source. When you
     * specify an output pixel aspect ratio (PAR) that is different from your input
     * video PAR, provide your output PAR as a ratio. For example, for D1/DV NTSC
     * widescreen, you would specify the ratio 40:33. In this example, the value for
     * parDenominator is 33.
     */
    inline H264Settings& WithParDenominator(int value) { SetParDenominator(value); return *this;}


    /**
     * Required when you set Pixel aspect ratio (parControl) to SPECIFIED. On the
     * console, this corresponds to any value other than Follow source. When you
     * specify an output pixel aspect ratio (PAR) that is different from your input
     * video PAR, provide your output PAR as a ratio. For example, for D1/DV NTSC
     * widescreen, you would specify the ratio 40:33. In this example, the value for
     * parNumerator is 40.
     */
    inline int GetParNumerator() const{ return m_parNumerator; }

    /**
     * Required when you set Pixel aspect ratio (parControl) to SPECIFIED. On the
     * console, this corresponds to any value other than Follow source. When you
     * specify an output pixel aspect ratio (PAR) that is different from your input
     * video PAR, provide your output PAR as a ratio. For example, for D1/DV NTSC
     * widescreen, you would specify the ratio 40:33. In this example, the value for
     * parNumerator is 40.
     */
    inline bool ParNumeratorHasBeenSet() const { return m_parNumeratorHasBeenSet; }

    /**
     * Required when you set Pixel aspect ratio (parControl) to SPECIFIED. On the
     * console, this corresponds to any value other than Follow source. When you
     * specify an output pixel aspect ratio (PAR) that is different from your input
     * video PAR, provide your output PAR as a ratio. For example, for D1/DV NTSC
     * widescreen, you would specify the ratio 40:33. In this example, the value for
     * parNumerator is 40.
     */
    inline void SetParNumerator(int value) { m_parNumeratorHasBeenSet = true; m_parNumerator = value; }

    /**
     * Required when you set Pixel aspect ratio (parControl) to SPECIFIED. On the
     * console, this corresponds to any value other than Follow source. When you
     * specify an output pixel aspect ratio (PAR) that is different from your input
     * video PAR, provide your output PAR as a ratio. For example, for D1/DV NTSC
     * widescreen, you would specify the ratio 40:33. In this example, the value for
     * parNumerator is 40.
     */
    inline H264Settings& WithParNumerator(int value) { SetParNumerator(value); return *this;}


    /**
     * Optional. Use Quality tuning level (qualityTuningLevel) to choose how you want
     * to trade off encoding speed for output video quality. The default behavior is
     * faster, lower quality, single-pass encoding.
     */
    inline const H264QualityTuningLevel& GetQualityTuningLevel() const{ return m_qualityTuningLevel; }

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
    inline void SetQualityTuningLevel(const H264QualityTuningLevel& value) { m_qualityTuningLevelHasBeenSet = true; m_qualityTuningLevel = value; }

    /**
     * Optional. Use Quality tuning level (qualityTuningLevel) to choose how you want
     * to trade off encoding speed for output video quality. The default behavior is
     * faster, lower quality, single-pass encoding.
     */
    inline void SetQualityTuningLevel(H264QualityTuningLevel&& value) { m_qualityTuningLevelHasBeenSet = true; m_qualityTuningLevel = std::move(value); }

    /**
     * Optional. Use Quality tuning level (qualityTuningLevel) to choose how you want
     * to trade off encoding speed for output video quality. The default behavior is
     * faster, lower quality, single-pass encoding.
     */
    inline H264Settings& WithQualityTuningLevel(const H264QualityTuningLevel& value) { SetQualityTuningLevel(value); return *this;}

    /**
     * Optional. Use Quality tuning level (qualityTuningLevel) to choose how you want
     * to trade off encoding speed for output video quality. The default behavior is
     * faster, lower quality, single-pass encoding.
     */
    inline H264Settings& WithQualityTuningLevel(H264QualityTuningLevel&& value) { SetQualityTuningLevel(std::move(value)); return *this;}


    /**
     * Settings for quality-defined variable bitrate encoding with the H.265 codec. Use
     * these settings only when you set QVBR for Rate control mode (RateControlMode).
     */
    inline const H264QvbrSettings& GetQvbrSettings() const{ return m_qvbrSettings; }

    /**
     * Settings for quality-defined variable bitrate encoding with the H.265 codec. Use
     * these settings only when you set QVBR for Rate control mode (RateControlMode).
     */
    inline bool QvbrSettingsHasBeenSet() const { return m_qvbrSettingsHasBeenSet; }

    /**
     * Settings for quality-defined variable bitrate encoding with the H.265 codec. Use
     * these settings only when you set QVBR for Rate control mode (RateControlMode).
     */
    inline void SetQvbrSettings(const H264QvbrSettings& value) { m_qvbrSettingsHasBeenSet = true; m_qvbrSettings = value; }

    /**
     * Settings for quality-defined variable bitrate encoding with the H.265 codec. Use
     * these settings only when you set QVBR for Rate control mode (RateControlMode).
     */
    inline void SetQvbrSettings(H264QvbrSettings&& value) { m_qvbrSettingsHasBeenSet = true; m_qvbrSettings = std::move(value); }

    /**
     * Settings for quality-defined variable bitrate encoding with the H.265 codec. Use
     * these settings only when you set QVBR for Rate control mode (RateControlMode).
     */
    inline H264Settings& WithQvbrSettings(const H264QvbrSettings& value) { SetQvbrSettings(value); return *this;}

    /**
     * Settings for quality-defined variable bitrate encoding with the H.265 codec. Use
     * these settings only when you set QVBR for Rate control mode (RateControlMode).
     */
    inline H264Settings& WithQvbrSettings(H264QvbrSettings&& value) { SetQvbrSettings(std::move(value)); return *this;}


    /**
     * Use this setting to specify whether this output has a variable bitrate (VBR),
     * constant bitrate (CBR) or quality-defined variable bitrate (QVBR).
     */
    inline const H264RateControlMode& GetRateControlMode() const{ return m_rateControlMode; }

    /**
     * Use this setting to specify whether this output has a variable bitrate (VBR),
     * constant bitrate (CBR) or quality-defined variable bitrate (QVBR).
     */
    inline bool RateControlModeHasBeenSet() const { return m_rateControlModeHasBeenSet; }

    /**
     * Use this setting to specify whether this output has a variable bitrate (VBR),
     * constant bitrate (CBR) or quality-defined variable bitrate (QVBR).
     */
    inline void SetRateControlMode(const H264RateControlMode& value) { m_rateControlModeHasBeenSet = true; m_rateControlMode = value; }

    /**
     * Use this setting to specify whether this output has a variable bitrate (VBR),
     * constant bitrate (CBR) or quality-defined variable bitrate (QVBR).
     */
    inline void SetRateControlMode(H264RateControlMode&& value) { m_rateControlModeHasBeenSet = true; m_rateControlMode = std::move(value); }

    /**
     * Use this setting to specify whether this output has a variable bitrate (VBR),
     * constant bitrate (CBR) or quality-defined variable bitrate (QVBR).
     */
    inline H264Settings& WithRateControlMode(const H264RateControlMode& value) { SetRateControlMode(value); return *this;}

    /**
     * Use this setting to specify whether this output has a variable bitrate (VBR),
     * constant bitrate (CBR) or quality-defined variable bitrate (QVBR).
     */
    inline H264Settings& WithRateControlMode(H264RateControlMode&& value) { SetRateControlMode(std::move(value)); return *this;}


    /**
     * Places a PPS header on each encoded picture, even if repeated.
     */
    inline const H264RepeatPps& GetRepeatPps() const{ return m_repeatPps; }

    /**
     * Places a PPS header on each encoded picture, even if repeated.
     */
    inline bool RepeatPpsHasBeenSet() const { return m_repeatPpsHasBeenSet; }

    /**
     * Places a PPS header on each encoded picture, even if repeated.
     */
    inline void SetRepeatPps(const H264RepeatPps& value) { m_repeatPpsHasBeenSet = true; m_repeatPps = value; }

    /**
     * Places a PPS header on each encoded picture, even if repeated.
     */
    inline void SetRepeatPps(H264RepeatPps&& value) { m_repeatPpsHasBeenSet = true; m_repeatPps = std::move(value); }

    /**
     * Places a PPS header on each encoded picture, even if repeated.
     */
    inline H264Settings& WithRepeatPps(const H264RepeatPps& value) { SetRepeatPps(value); return *this;}

    /**
     * Places a PPS header on each encoded picture, even if repeated.
     */
    inline H264Settings& WithRepeatPps(H264RepeatPps&& value) { SetRepeatPps(std::move(value)); return *this;}


    /**
     * Use this setting for interlaced outputs, when your output frame rate is half of
     * your input frame rate. In this situation, choose Optimized interlacing
     * (INTERLACED_OPTIMIZE) to create a better quality interlaced output. In this
     * case, each progressive frame from the input corresponds to an interlaced field
     * in the output. Keep the default value, Basic interlacing (INTERLACED), for all
     * other output frame rates. With basic interlacing, MediaConvert performs any
     * frame rate conversion first and then interlaces the frames. When you choose
     * Optimized interlacing and you set your output frame rate to a value that isn't
     * suitable for optimized interlacing, MediaConvert automatically falls back to
     * basic interlacing. Required settings: To use optimized interlacing, you must set
     * Telecine (telecine) to None (NONE) or Soft (SOFT). You can't use optimized
     * interlacing for hard telecine outputs. You must also set Interlace mode
     * (interlaceMode) to a value other than Progressive (PROGRESSIVE).
     */
    inline const H264ScanTypeConversionMode& GetScanTypeConversionMode() const{ return m_scanTypeConversionMode; }

    /**
     * Use this setting for interlaced outputs, when your output frame rate is half of
     * your input frame rate. In this situation, choose Optimized interlacing
     * (INTERLACED_OPTIMIZE) to create a better quality interlaced output. In this
     * case, each progressive frame from the input corresponds to an interlaced field
     * in the output. Keep the default value, Basic interlacing (INTERLACED), for all
     * other output frame rates. With basic interlacing, MediaConvert performs any
     * frame rate conversion first and then interlaces the frames. When you choose
     * Optimized interlacing and you set your output frame rate to a value that isn't
     * suitable for optimized interlacing, MediaConvert automatically falls back to
     * basic interlacing. Required settings: To use optimized interlacing, you must set
     * Telecine (telecine) to None (NONE) or Soft (SOFT). You can't use optimized
     * interlacing for hard telecine outputs. You must also set Interlace mode
     * (interlaceMode) to a value other than Progressive (PROGRESSIVE).
     */
    inline bool ScanTypeConversionModeHasBeenSet() const { return m_scanTypeConversionModeHasBeenSet; }

    /**
     * Use this setting for interlaced outputs, when your output frame rate is half of
     * your input frame rate. In this situation, choose Optimized interlacing
     * (INTERLACED_OPTIMIZE) to create a better quality interlaced output. In this
     * case, each progressive frame from the input corresponds to an interlaced field
     * in the output. Keep the default value, Basic interlacing (INTERLACED), for all
     * other output frame rates. With basic interlacing, MediaConvert performs any
     * frame rate conversion first and then interlaces the frames. When you choose
     * Optimized interlacing and you set your output frame rate to a value that isn't
     * suitable for optimized interlacing, MediaConvert automatically falls back to
     * basic interlacing. Required settings: To use optimized interlacing, you must set
     * Telecine (telecine) to None (NONE) or Soft (SOFT). You can't use optimized
     * interlacing for hard telecine outputs. You must also set Interlace mode
     * (interlaceMode) to a value other than Progressive (PROGRESSIVE).
     */
    inline void SetScanTypeConversionMode(const H264ScanTypeConversionMode& value) { m_scanTypeConversionModeHasBeenSet = true; m_scanTypeConversionMode = value; }

    /**
     * Use this setting for interlaced outputs, when your output frame rate is half of
     * your input frame rate. In this situation, choose Optimized interlacing
     * (INTERLACED_OPTIMIZE) to create a better quality interlaced output. In this
     * case, each progressive frame from the input corresponds to an interlaced field
     * in the output. Keep the default value, Basic interlacing (INTERLACED), for all
     * other output frame rates. With basic interlacing, MediaConvert performs any
     * frame rate conversion first and then interlaces the frames. When you choose
     * Optimized interlacing and you set your output frame rate to a value that isn't
     * suitable for optimized interlacing, MediaConvert automatically falls back to
     * basic interlacing. Required settings: To use optimized interlacing, you must set
     * Telecine (telecine) to None (NONE) or Soft (SOFT). You can't use optimized
     * interlacing for hard telecine outputs. You must also set Interlace mode
     * (interlaceMode) to a value other than Progressive (PROGRESSIVE).
     */
    inline void SetScanTypeConversionMode(H264ScanTypeConversionMode&& value) { m_scanTypeConversionModeHasBeenSet = true; m_scanTypeConversionMode = std::move(value); }

    /**
     * Use this setting for interlaced outputs, when your output frame rate is half of
     * your input frame rate. In this situation, choose Optimized interlacing
     * (INTERLACED_OPTIMIZE) to create a better quality interlaced output. In this
     * case, each progressive frame from the input corresponds to an interlaced field
     * in the output. Keep the default value, Basic interlacing (INTERLACED), for all
     * other output frame rates. With basic interlacing, MediaConvert performs any
     * frame rate conversion first and then interlaces the frames. When you choose
     * Optimized interlacing and you set your output frame rate to a value that isn't
     * suitable for optimized interlacing, MediaConvert automatically falls back to
     * basic interlacing. Required settings: To use optimized interlacing, you must set
     * Telecine (telecine) to None (NONE) or Soft (SOFT). You can't use optimized
     * interlacing for hard telecine outputs. You must also set Interlace mode
     * (interlaceMode) to a value other than Progressive (PROGRESSIVE).
     */
    inline H264Settings& WithScanTypeConversionMode(const H264ScanTypeConversionMode& value) { SetScanTypeConversionMode(value); return *this;}

    /**
     * Use this setting for interlaced outputs, when your output frame rate is half of
     * your input frame rate. In this situation, choose Optimized interlacing
     * (INTERLACED_OPTIMIZE) to create a better quality interlaced output. In this
     * case, each progressive frame from the input corresponds to an interlaced field
     * in the output. Keep the default value, Basic interlacing (INTERLACED), for all
     * other output frame rates. With basic interlacing, MediaConvert performs any
     * frame rate conversion first and then interlaces the frames. When you choose
     * Optimized interlacing and you set your output frame rate to a value that isn't
     * suitable for optimized interlacing, MediaConvert automatically falls back to
     * basic interlacing. Required settings: To use optimized interlacing, you must set
     * Telecine (telecine) to None (NONE) or Soft (SOFT). You can't use optimized
     * interlacing for hard telecine outputs. You must also set Interlace mode
     * (interlaceMode) to a value other than Progressive (PROGRESSIVE).
     */
    inline H264Settings& WithScanTypeConversionMode(H264ScanTypeConversionMode&& value) { SetScanTypeConversionMode(std::move(value)); return *this;}


    /**
     * Enable this setting to insert I-frames at scene changes that the service
     * automatically detects. This improves video quality and is enabled by default. If
     * this output uses QVBR, choose Transition detection (TRANSITION_DETECTION) for
     * further video quality improvement. For more information about QVBR, see
     * https://docs.aws.amazon.com/console/mediaconvert/cbr-vbr-qvbr.
     */
    inline const H264SceneChangeDetect& GetSceneChangeDetect() const{ return m_sceneChangeDetect; }

    /**
     * Enable this setting to insert I-frames at scene changes that the service
     * automatically detects. This improves video quality and is enabled by default. If
     * this output uses QVBR, choose Transition detection (TRANSITION_DETECTION) for
     * further video quality improvement. For more information about QVBR, see
     * https://docs.aws.amazon.com/console/mediaconvert/cbr-vbr-qvbr.
     */
    inline bool SceneChangeDetectHasBeenSet() const { return m_sceneChangeDetectHasBeenSet; }

    /**
     * Enable this setting to insert I-frames at scene changes that the service
     * automatically detects. This improves video quality and is enabled by default. If
     * this output uses QVBR, choose Transition detection (TRANSITION_DETECTION) for
     * further video quality improvement. For more information about QVBR, see
     * https://docs.aws.amazon.com/console/mediaconvert/cbr-vbr-qvbr.
     */
    inline void SetSceneChangeDetect(const H264SceneChangeDetect& value) { m_sceneChangeDetectHasBeenSet = true; m_sceneChangeDetect = value; }

    /**
     * Enable this setting to insert I-frames at scene changes that the service
     * automatically detects. This improves video quality and is enabled by default. If
     * this output uses QVBR, choose Transition detection (TRANSITION_DETECTION) for
     * further video quality improvement. For more information about QVBR, see
     * https://docs.aws.amazon.com/console/mediaconvert/cbr-vbr-qvbr.
     */
    inline void SetSceneChangeDetect(H264SceneChangeDetect&& value) { m_sceneChangeDetectHasBeenSet = true; m_sceneChangeDetect = std::move(value); }

    /**
     * Enable this setting to insert I-frames at scene changes that the service
     * automatically detects. This improves video quality and is enabled by default. If
     * this output uses QVBR, choose Transition detection (TRANSITION_DETECTION) for
     * further video quality improvement. For more information about QVBR, see
     * https://docs.aws.amazon.com/console/mediaconvert/cbr-vbr-qvbr.
     */
    inline H264Settings& WithSceneChangeDetect(const H264SceneChangeDetect& value) { SetSceneChangeDetect(value); return *this;}

    /**
     * Enable this setting to insert I-frames at scene changes that the service
     * automatically detects. This improves video quality and is enabled by default. If
     * this output uses QVBR, choose Transition detection (TRANSITION_DETECTION) for
     * further video quality improvement. For more information about QVBR, see
     * https://docs.aws.amazon.com/console/mediaconvert/cbr-vbr-qvbr.
     */
    inline H264Settings& WithSceneChangeDetect(H264SceneChangeDetect&& value) { SetSceneChangeDetect(std::move(value)); return *this;}


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
    inline H264Settings& WithSlices(int value) { SetSlices(value); return *this;}


    /**
     * Ignore this setting unless your input frame rate is 23.976 or 24 frames per
     * second (fps). Enable slow PAL to create a 25 fps output. When you enable slow
     * PAL, MediaConvert relabels the video frames to 25 fps and resamples your audio
     * to keep it synchronized with the video. Note that enabling this setting will
     * slightly reduce the duration of your video. Required settings: You must also set
     * Framerate to 25. In your JSON job specification, set (framerateControl) to
     * (SPECIFIED), (framerateNumerator) to 25 and (framerateDenominator) to 1.
     */
    inline const H264SlowPal& GetSlowPal() const{ return m_slowPal; }

    /**
     * Ignore this setting unless your input frame rate is 23.976 or 24 frames per
     * second (fps). Enable slow PAL to create a 25 fps output. When you enable slow
     * PAL, MediaConvert relabels the video frames to 25 fps and resamples your audio
     * to keep it synchronized with the video. Note that enabling this setting will
     * slightly reduce the duration of your video. Required settings: You must also set
     * Framerate to 25. In your JSON job specification, set (framerateControl) to
     * (SPECIFIED), (framerateNumerator) to 25 and (framerateDenominator) to 1.
     */
    inline bool SlowPalHasBeenSet() const { return m_slowPalHasBeenSet; }

    /**
     * Ignore this setting unless your input frame rate is 23.976 or 24 frames per
     * second (fps). Enable slow PAL to create a 25 fps output. When you enable slow
     * PAL, MediaConvert relabels the video frames to 25 fps and resamples your audio
     * to keep it synchronized with the video. Note that enabling this setting will
     * slightly reduce the duration of your video. Required settings: You must also set
     * Framerate to 25. In your JSON job specification, set (framerateControl) to
     * (SPECIFIED), (framerateNumerator) to 25 and (framerateDenominator) to 1.
     */
    inline void SetSlowPal(const H264SlowPal& value) { m_slowPalHasBeenSet = true; m_slowPal = value; }

    /**
     * Ignore this setting unless your input frame rate is 23.976 or 24 frames per
     * second (fps). Enable slow PAL to create a 25 fps output. When you enable slow
     * PAL, MediaConvert relabels the video frames to 25 fps and resamples your audio
     * to keep it synchronized with the video. Note that enabling this setting will
     * slightly reduce the duration of your video. Required settings: You must also set
     * Framerate to 25. In your JSON job specification, set (framerateControl) to
     * (SPECIFIED), (framerateNumerator) to 25 and (framerateDenominator) to 1.
     */
    inline void SetSlowPal(H264SlowPal&& value) { m_slowPalHasBeenSet = true; m_slowPal = std::move(value); }

    /**
     * Ignore this setting unless your input frame rate is 23.976 or 24 frames per
     * second (fps). Enable slow PAL to create a 25 fps output. When you enable slow
     * PAL, MediaConvert relabels the video frames to 25 fps and resamples your audio
     * to keep it synchronized with the video. Note that enabling this setting will
     * slightly reduce the duration of your video. Required settings: You must also set
     * Framerate to 25. In your JSON job specification, set (framerateControl) to
     * (SPECIFIED), (framerateNumerator) to 25 and (framerateDenominator) to 1.
     */
    inline H264Settings& WithSlowPal(const H264SlowPal& value) { SetSlowPal(value); return *this;}

    /**
     * Ignore this setting unless your input frame rate is 23.976 or 24 frames per
     * second (fps). Enable slow PAL to create a 25 fps output. When you enable slow
     * PAL, MediaConvert relabels the video frames to 25 fps and resamples your audio
     * to keep it synchronized with the video. Note that enabling this setting will
     * slightly reduce the duration of your video. Required settings: You must also set
     * Framerate to 25. In your JSON job specification, set (framerateControl) to
     * (SPECIFIED), (framerateNumerator) to 25 and (framerateDenominator) to 1.
     */
    inline H264Settings& WithSlowPal(H264SlowPal&& value) { SetSlowPal(std::move(value)); return *this;}


    /**
     * Ignore this setting unless you need to comply with a specification that requires
     * a specific value. If you don't have a specification requirement, we recommend
     * that you adjust the softness of your output by using a lower value for the
     * setting Sharpness (sharpness) or by enabling a noise reducer filter
     * (noiseReducerFilter). The Softness (softness) setting specifies the quantization
     * matrices that the encoder uses. Keep the default value, 0, for flat
     * quantization. Choose the value 1 or 16 to use the default JVT softening
     * quantization matricies from the H.264 specification. Choose a value from 17 to
     * 128 to use planar interpolation. Increasing values from 17 to 128 result in
     * increasing reduction of high-frequency data. The value 128 results in the
     * softest video.
     */
    inline int GetSoftness() const{ return m_softness; }

    /**
     * Ignore this setting unless you need to comply with a specification that requires
     * a specific value. If you don't have a specification requirement, we recommend
     * that you adjust the softness of your output by using a lower value for the
     * setting Sharpness (sharpness) or by enabling a noise reducer filter
     * (noiseReducerFilter). The Softness (softness) setting specifies the quantization
     * matrices that the encoder uses. Keep the default value, 0, for flat
     * quantization. Choose the value 1 or 16 to use the default JVT softening
     * quantization matricies from the H.264 specification. Choose a value from 17 to
     * 128 to use planar interpolation. Increasing values from 17 to 128 result in
     * increasing reduction of high-frequency data. The value 128 results in the
     * softest video.
     */
    inline bool SoftnessHasBeenSet() const { return m_softnessHasBeenSet; }

    /**
     * Ignore this setting unless you need to comply with a specification that requires
     * a specific value. If you don't have a specification requirement, we recommend
     * that you adjust the softness of your output by using a lower value for the
     * setting Sharpness (sharpness) or by enabling a noise reducer filter
     * (noiseReducerFilter). The Softness (softness) setting specifies the quantization
     * matrices that the encoder uses. Keep the default value, 0, for flat
     * quantization. Choose the value 1 or 16 to use the default JVT softening
     * quantization matricies from the H.264 specification. Choose a value from 17 to
     * 128 to use planar interpolation. Increasing values from 17 to 128 result in
     * increasing reduction of high-frequency data. The value 128 results in the
     * softest video.
     */
    inline void SetSoftness(int value) { m_softnessHasBeenSet = true; m_softness = value; }

    /**
     * Ignore this setting unless you need to comply with a specification that requires
     * a specific value. If you don't have a specification requirement, we recommend
     * that you adjust the softness of your output by using a lower value for the
     * setting Sharpness (sharpness) or by enabling a noise reducer filter
     * (noiseReducerFilter). The Softness (softness) setting specifies the quantization
     * matrices that the encoder uses. Keep the default value, 0, for flat
     * quantization. Choose the value 1 or 16 to use the default JVT softening
     * quantization matricies from the H.264 specification. Choose a value from 17 to
     * 128 to use planar interpolation. Increasing values from 17 to 128 result in
     * increasing reduction of high-frequency data. The value 128 results in the
     * softest video.
     */
    inline H264Settings& WithSoftness(int value) { SetSoftness(value); return *this;}


    /**
     * Only use this setting when you change the default value, Auto (AUTO), for the
     * setting H264AdaptiveQuantization. When you keep all defaults, excluding
     * H264AdaptiveQuantization and all other adaptive quantization from your JSON job
     * specification, MediaConvert automatically applies the best types of quantization
     * for your video content. When you set H264AdaptiveQuantization to a value other
     * than AUTO, the default value for H264SpatialAdaptiveQuantization is Enabled
     * (ENABLED). Keep this default value to adjust quantization within each frame
     * based on spatial variation of content complexity. When you enable this feature,
     * the encoder uses fewer bits on areas that can sustain more distortion with no
     * noticeable visual degradation and uses more bits on areas where any small
     * distortion will be noticeable. For example, complex textured blocks are encoded
     * with fewer bits and smooth textured blocks are encoded with more bits. Enabling
     * this feature will almost always improve your video quality. Note, though, that
     * this feature doesn't take into account where the viewer's attention is likely to
     * be. If viewers are likely to be focusing their attention on a part of the screen
     * with a lot of complex texture, you might choose to set
     * H264SpatialAdaptiveQuantization to Disabled (DISABLED). Related setting: When
     * you enable spatial adaptive quantization, set the value for Adaptive
     * quantization (H264AdaptiveQuantization) depending on your content. For
     * homogeneous content, such as cartoons and video games, set it to Low. For
     * content with a wider variety of textures, set it to High or Higher. To manually
     * enable or disable H264SpatialAdaptiveQuantization, you must set Adaptive
     * quantization (H264AdaptiveQuantization) to a value other than AUTO.
     */
    inline const H264SpatialAdaptiveQuantization& GetSpatialAdaptiveQuantization() const{ return m_spatialAdaptiveQuantization; }

    /**
     * Only use this setting when you change the default value, Auto (AUTO), for the
     * setting H264AdaptiveQuantization. When you keep all defaults, excluding
     * H264AdaptiveQuantization and all other adaptive quantization from your JSON job
     * specification, MediaConvert automatically applies the best types of quantization
     * for your video content. When you set H264AdaptiveQuantization to a value other
     * than AUTO, the default value for H264SpatialAdaptiveQuantization is Enabled
     * (ENABLED). Keep this default value to adjust quantization within each frame
     * based on spatial variation of content complexity. When you enable this feature,
     * the encoder uses fewer bits on areas that can sustain more distortion with no
     * noticeable visual degradation and uses more bits on areas where any small
     * distortion will be noticeable. For example, complex textured blocks are encoded
     * with fewer bits and smooth textured blocks are encoded with more bits. Enabling
     * this feature will almost always improve your video quality. Note, though, that
     * this feature doesn't take into account where the viewer's attention is likely to
     * be. If viewers are likely to be focusing their attention on a part of the screen
     * with a lot of complex texture, you might choose to set
     * H264SpatialAdaptiveQuantization to Disabled (DISABLED). Related setting: When
     * you enable spatial adaptive quantization, set the value for Adaptive
     * quantization (H264AdaptiveQuantization) depending on your content. For
     * homogeneous content, such as cartoons and video games, set it to Low. For
     * content with a wider variety of textures, set it to High or Higher. To manually
     * enable or disable H264SpatialAdaptiveQuantization, you must set Adaptive
     * quantization (H264AdaptiveQuantization) to a value other than AUTO.
     */
    inline bool SpatialAdaptiveQuantizationHasBeenSet() const { return m_spatialAdaptiveQuantizationHasBeenSet; }

    /**
     * Only use this setting when you change the default value, Auto (AUTO), for the
     * setting H264AdaptiveQuantization. When you keep all defaults, excluding
     * H264AdaptiveQuantization and all other adaptive quantization from your JSON job
     * specification, MediaConvert automatically applies the best types of quantization
     * for your video content. When you set H264AdaptiveQuantization to a value other
     * than AUTO, the default value for H264SpatialAdaptiveQuantization is Enabled
     * (ENABLED). Keep this default value to adjust quantization within each frame
     * based on spatial variation of content complexity. When you enable this feature,
     * the encoder uses fewer bits on areas that can sustain more distortion with no
     * noticeable visual degradation and uses more bits on areas where any small
     * distortion will be noticeable. For example, complex textured blocks are encoded
     * with fewer bits and smooth textured blocks are encoded with more bits. Enabling
     * this feature will almost always improve your video quality. Note, though, that
     * this feature doesn't take into account where the viewer's attention is likely to
     * be. If viewers are likely to be focusing their attention on a part of the screen
     * with a lot of complex texture, you might choose to set
     * H264SpatialAdaptiveQuantization to Disabled (DISABLED). Related setting: When
     * you enable spatial adaptive quantization, set the value for Adaptive
     * quantization (H264AdaptiveQuantization) depending on your content. For
     * homogeneous content, such as cartoons and video games, set it to Low. For
     * content with a wider variety of textures, set it to High or Higher. To manually
     * enable or disable H264SpatialAdaptiveQuantization, you must set Adaptive
     * quantization (H264AdaptiveQuantization) to a value other than AUTO.
     */
    inline void SetSpatialAdaptiveQuantization(const H264SpatialAdaptiveQuantization& value) { m_spatialAdaptiveQuantizationHasBeenSet = true; m_spatialAdaptiveQuantization = value; }

    /**
     * Only use this setting when you change the default value, Auto (AUTO), for the
     * setting H264AdaptiveQuantization. When you keep all defaults, excluding
     * H264AdaptiveQuantization and all other adaptive quantization from your JSON job
     * specification, MediaConvert automatically applies the best types of quantization
     * for your video content. When you set H264AdaptiveQuantization to a value other
     * than AUTO, the default value for H264SpatialAdaptiveQuantization is Enabled
     * (ENABLED). Keep this default value to adjust quantization within each frame
     * based on spatial variation of content complexity. When you enable this feature,
     * the encoder uses fewer bits on areas that can sustain more distortion with no
     * noticeable visual degradation and uses more bits on areas where any small
     * distortion will be noticeable. For example, complex textured blocks are encoded
     * with fewer bits and smooth textured blocks are encoded with more bits. Enabling
     * this feature will almost always improve your video quality. Note, though, that
     * this feature doesn't take into account where the viewer's attention is likely to
     * be. If viewers are likely to be focusing their attention on a part of the screen
     * with a lot of complex texture, you might choose to set
     * H264SpatialAdaptiveQuantization to Disabled (DISABLED). Related setting: When
     * you enable spatial adaptive quantization, set the value for Adaptive
     * quantization (H264AdaptiveQuantization) depending on your content. For
     * homogeneous content, such as cartoons and video games, set it to Low. For
     * content with a wider variety of textures, set it to High or Higher. To manually
     * enable or disable H264SpatialAdaptiveQuantization, you must set Adaptive
     * quantization (H264AdaptiveQuantization) to a value other than AUTO.
     */
    inline void SetSpatialAdaptiveQuantization(H264SpatialAdaptiveQuantization&& value) { m_spatialAdaptiveQuantizationHasBeenSet = true; m_spatialAdaptiveQuantization = std::move(value); }

    /**
     * Only use this setting when you change the default value, Auto (AUTO), for the
     * setting H264AdaptiveQuantization. When you keep all defaults, excluding
     * H264AdaptiveQuantization and all other adaptive quantization from your JSON job
     * specification, MediaConvert automatically applies the best types of quantization
     * for your video content. When you set H264AdaptiveQuantization to a value other
     * than AUTO, the default value for H264SpatialAdaptiveQuantization is Enabled
     * (ENABLED). Keep this default value to adjust quantization within each frame
     * based on spatial variation of content complexity. When you enable this feature,
     * the encoder uses fewer bits on areas that can sustain more distortion with no
     * noticeable visual degradation and uses more bits on areas where any small
     * distortion will be noticeable. For example, complex textured blocks are encoded
     * with fewer bits and smooth textured blocks are encoded with more bits. Enabling
     * this feature will almost always improve your video quality. Note, though, that
     * this feature doesn't take into account where the viewer's attention is likely to
     * be. If viewers are likely to be focusing their attention on a part of the screen
     * with a lot of complex texture, you might choose to set
     * H264SpatialAdaptiveQuantization to Disabled (DISABLED). Related setting: When
     * you enable spatial adaptive quantization, set the value for Adaptive
     * quantization (H264AdaptiveQuantization) depending on your content. For
     * homogeneous content, such as cartoons and video games, set it to Low. For
     * content with a wider variety of textures, set it to High or Higher. To manually
     * enable or disable H264SpatialAdaptiveQuantization, you must set Adaptive
     * quantization (H264AdaptiveQuantization) to a value other than AUTO.
     */
    inline H264Settings& WithSpatialAdaptiveQuantization(const H264SpatialAdaptiveQuantization& value) { SetSpatialAdaptiveQuantization(value); return *this;}

    /**
     * Only use this setting when you change the default value, Auto (AUTO), for the
     * setting H264AdaptiveQuantization. When you keep all defaults, excluding
     * H264AdaptiveQuantization and all other adaptive quantization from your JSON job
     * specification, MediaConvert automatically applies the best types of quantization
     * for your video content. When you set H264AdaptiveQuantization to a value other
     * than AUTO, the default value for H264SpatialAdaptiveQuantization is Enabled
     * (ENABLED). Keep this default value to adjust quantization within each frame
     * based on spatial variation of content complexity. When you enable this feature,
     * the encoder uses fewer bits on areas that can sustain more distortion with no
     * noticeable visual degradation and uses more bits on areas where any small
     * distortion will be noticeable. For example, complex textured blocks are encoded
     * with fewer bits and smooth textured blocks are encoded with more bits. Enabling
     * this feature will almost always improve your video quality. Note, though, that
     * this feature doesn't take into account where the viewer's attention is likely to
     * be. If viewers are likely to be focusing their attention on a part of the screen
     * with a lot of complex texture, you might choose to set
     * H264SpatialAdaptiveQuantization to Disabled (DISABLED). Related setting: When
     * you enable spatial adaptive quantization, set the value for Adaptive
     * quantization (H264AdaptiveQuantization) depending on your content. For
     * homogeneous content, such as cartoons and video games, set it to Low. For
     * content with a wider variety of textures, set it to High or Higher. To manually
     * enable or disable H264SpatialAdaptiveQuantization, you must set Adaptive
     * quantization (H264AdaptiveQuantization) to a value other than AUTO.
     */
    inline H264Settings& WithSpatialAdaptiveQuantization(H264SpatialAdaptiveQuantization&& value) { SetSpatialAdaptiveQuantization(std::move(value)); return *this;}


    /**
     * Produces a bitstream compliant with SMPTE RP-2027.
     */
    inline const H264Syntax& GetSyntax() const{ return m_syntax; }

    /**
     * Produces a bitstream compliant with SMPTE RP-2027.
     */
    inline bool SyntaxHasBeenSet() const { return m_syntaxHasBeenSet; }

    /**
     * Produces a bitstream compliant with SMPTE RP-2027.
     */
    inline void SetSyntax(const H264Syntax& value) { m_syntaxHasBeenSet = true; m_syntax = value; }

    /**
     * Produces a bitstream compliant with SMPTE RP-2027.
     */
    inline void SetSyntax(H264Syntax&& value) { m_syntaxHasBeenSet = true; m_syntax = std::move(value); }

    /**
     * Produces a bitstream compliant with SMPTE RP-2027.
     */
    inline H264Settings& WithSyntax(const H264Syntax& value) { SetSyntax(value); return *this;}

    /**
     * Produces a bitstream compliant with SMPTE RP-2027.
     */
    inline H264Settings& WithSyntax(H264Syntax&& value) { SetSyntax(std::move(value)); return *this;}


    /**
     * When you do frame rate conversion from 23.976 frames per second (fps) to 29.97
     * fps, and your output scan type is interlaced, you can optionally enable hard or
     * soft telecine to create a smoother picture. Hard telecine (HARD) produces a
     * 29.97i output. Soft telecine (SOFT) produces an output with a 23.976 output that
     * signals to the video player device to do the conversion during play back. When
     * you keep the default value, None (NONE), MediaConvert does a standard frame rate
     * conversion to 29.97 without doing anything with the field polarity to create a
     * smoother picture.
     */
    inline const H264Telecine& GetTelecine() const{ return m_telecine; }

    /**
     * When you do frame rate conversion from 23.976 frames per second (fps) to 29.97
     * fps, and your output scan type is interlaced, you can optionally enable hard or
     * soft telecine to create a smoother picture. Hard telecine (HARD) produces a
     * 29.97i output. Soft telecine (SOFT) produces an output with a 23.976 output that
     * signals to the video player device to do the conversion during play back. When
     * you keep the default value, None (NONE), MediaConvert does a standard frame rate
     * conversion to 29.97 without doing anything with the field polarity to create a
     * smoother picture.
     */
    inline bool TelecineHasBeenSet() const { return m_telecineHasBeenSet; }

    /**
     * When you do frame rate conversion from 23.976 frames per second (fps) to 29.97
     * fps, and your output scan type is interlaced, you can optionally enable hard or
     * soft telecine to create a smoother picture. Hard telecine (HARD) produces a
     * 29.97i output. Soft telecine (SOFT) produces an output with a 23.976 output that
     * signals to the video player device to do the conversion during play back. When
     * you keep the default value, None (NONE), MediaConvert does a standard frame rate
     * conversion to 29.97 without doing anything with the field polarity to create a
     * smoother picture.
     */
    inline void SetTelecine(const H264Telecine& value) { m_telecineHasBeenSet = true; m_telecine = value; }

    /**
     * When you do frame rate conversion from 23.976 frames per second (fps) to 29.97
     * fps, and your output scan type is interlaced, you can optionally enable hard or
     * soft telecine to create a smoother picture. Hard telecine (HARD) produces a
     * 29.97i output. Soft telecine (SOFT) produces an output with a 23.976 output that
     * signals to the video player device to do the conversion during play back. When
     * you keep the default value, None (NONE), MediaConvert does a standard frame rate
     * conversion to 29.97 without doing anything with the field polarity to create a
     * smoother picture.
     */
    inline void SetTelecine(H264Telecine&& value) { m_telecineHasBeenSet = true; m_telecine = std::move(value); }

    /**
     * When you do frame rate conversion from 23.976 frames per second (fps) to 29.97
     * fps, and your output scan type is interlaced, you can optionally enable hard or
     * soft telecine to create a smoother picture. Hard telecine (HARD) produces a
     * 29.97i output. Soft telecine (SOFT) produces an output with a 23.976 output that
     * signals to the video player device to do the conversion during play back. When
     * you keep the default value, None (NONE), MediaConvert does a standard frame rate
     * conversion to 29.97 without doing anything with the field polarity to create a
     * smoother picture.
     */
    inline H264Settings& WithTelecine(const H264Telecine& value) { SetTelecine(value); return *this;}

    /**
     * When you do frame rate conversion from 23.976 frames per second (fps) to 29.97
     * fps, and your output scan type is interlaced, you can optionally enable hard or
     * soft telecine to create a smoother picture. Hard telecine (HARD) produces a
     * 29.97i output. Soft telecine (SOFT) produces an output with a 23.976 output that
     * signals to the video player device to do the conversion during play back. When
     * you keep the default value, None (NONE), MediaConvert does a standard frame rate
     * conversion to 29.97 without doing anything with the field polarity to create a
     * smoother picture.
     */
    inline H264Settings& WithTelecine(H264Telecine&& value) { SetTelecine(std::move(value)); return *this;}


    /**
     * Only use this setting when you change the default value, AUTO, for the setting
     * H264AdaptiveQuantization. When you keep all defaults, excluding
     * H264AdaptiveQuantization and all other adaptive quantization from your JSON job
     * specification, MediaConvert automatically applies the best types of quantization
     * for your video content. When you set H264AdaptiveQuantization to a value other
     * than AUTO, the default value for H264TemporalAdaptiveQuantization is Enabled
     * (ENABLED). Keep this default value to adjust quantization within each frame
     * based on temporal variation of content complexity. When you enable this feature,
     * the encoder uses fewer bits on areas of the frame that aren't moving and uses
     * more bits on complex objects with sharp edges that move a lot. For example, this
     * feature improves the readability of text tickers on newscasts and scoreboards on
     * sports matches. Enabling this feature will almost always improve your video
     * quality. Note, though, that this feature doesn't take into account where the
     * viewer's attention is likely to be. If viewers are likely to be focusing their
     * attention on a part of the screen that doesn't have moving objects with sharp
     * edges, such as sports athletes' faces, you might choose to set
     * H264TemporalAdaptiveQuantization to Disabled (DISABLED). Related setting: When
     * you enable temporal quantization, adjust the strength of the filter with the
     * setting Adaptive quantization (adaptiveQuantization). To manually enable or
     * disable H264TemporalAdaptiveQuantization, you must set Adaptive quantization
     * (H264AdaptiveQuantization) to a value other than AUTO.
     */
    inline const H264TemporalAdaptiveQuantization& GetTemporalAdaptiveQuantization() const{ return m_temporalAdaptiveQuantization; }

    /**
     * Only use this setting when you change the default value, AUTO, for the setting
     * H264AdaptiveQuantization. When you keep all defaults, excluding
     * H264AdaptiveQuantization and all other adaptive quantization from your JSON job
     * specification, MediaConvert automatically applies the best types of quantization
     * for your video content. When you set H264AdaptiveQuantization to a value other
     * than AUTO, the default value for H264TemporalAdaptiveQuantization is Enabled
     * (ENABLED). Keep this default value to adjust quantization within each frame
     * based on temporal variation of content complexity. When you enable this feature,
     * the encoder uses fewer bits on areas of the frame that aren't moving and uses
     * more bits on complex objects with sharp edges that move a lot. For example, this
     * feature improves the readability of text tickers on newscasts and scoreboards on
     * sports matches. Enabling this feature will almost always improve your video
     * quality. Note, though, that this feature doesn't take into account where the
     * viewer's attention is likely to be. If viewers are likely to be focusing their
     * attention on a part of the screen that doesn't have moving objects with sharp
     * edges, such as sports athletes' faces, you might choose to set
     * H264TemporalAdaptiveQuantization to Disabled (DISABLED). Related setting: When
     * you enable temporal quantization, adjust the strength of the filter with the
     * setting Adaptive quantization (adaptiveQuantization). To manually enable or
     * disable H264TemporalAdaptiveQuantization, you must set Adaptive quantization
     * (H264AdaptiveQuantization) to a value other than AUTO.
     */
    inline bool TemporalAdaptiveQuantizationHasBeenSet() const { return m_temporalAdaptiveQuantizationHasBeenSet; }

    /**
     * Only use this setting when you change the default value, AUTO, for the setting
     * H264AdaptiveQuantization. When you keep all defaults, excluding
     * H264AdaptiveQuantization and all other adaptive quantization from your JSON job
     * specification, MediaConvert automatically applies the best types of quantization
     * for your video content. When you set H264AdaptiveQuantization to a value other
     * than AUTO, the default value for H264TemporalAdaptiveQuantization is Enabled
     * (ENABLED). Keep this default value to adjust quantization within each frame
     * based on temporal variation of content complexity. When you enable this feature,
     * the encoder uses fewer bits on areas of the frame that aren't moving and uses
     * more bits on complex objects with sharp edges that move a lot. For example, this
     * feature improves the readability of text tickers on newscasts and scoreboards on
     * sports matches. Enabling this feature will almost always improve your video
     * quality. Note, though, that this feature doesn't take into account where the
     * viewer's attention is likely to be. If viewers are likely to be focusing their
     * attention on a part of the screen that doesn't have moving objects with sharp
     * edges, such as sports athletes' faces, you might choose to set
     * H264TemporalAdaptiveQuantization to Disabled (DISABLED). Related setting: When
     * you enable temporal quantization, adjust the strength of the filter with the
     * setting Adaptive quantization (adaptiveQuantization). To manually enable or
     * disable H264TemporalAdaptiveQuantization, you must set Adaptive quantization
     * (H264AdaptiveQuantization) to a value other than AUTO.
     */
    inline void SetTemporalAdaptiveQuantization(const H264TemporalAdaptiveQuantization& value) { m_temporalAdaptiveQuantizationHasBeenSet = true; m_temporalAdaptiveQuantization = value; }

    /**
     * Only use this setting when you change the default value, AUTO, for the setting
     * H264AdaptiveQuantization. When you keep all defaults, excluding
     * H264AdaptiveQuantization and all other adaptive quantization from your JSON job
     * specification, MediaConvert automatically applies the best types of quantization
     * for your video content. When you set H264AdaptiveQuantization to a value other
     * than AUTO, the default value for H264TemporalAdaptiveQuantization is Enabled
     * (ENABLED). Keep this default value to adjust quantization within each frame
     * based on temporal variation of content complexity. When you enable this feature,
     * the encoder uses fewer bits on areas of the frame that aren't moving and uses
     * more bits on complex objects with sharp edges that move a lot. For example, this
     * feature improves the readability of text tickers on newscasts and scoreboards on
     * sports matches. Enabling this feature will almost always improve your video
     * quality. Note, though, that this feature doesn't take into account where the
     * viewer's attention is likely to be. If viewers are likely to be focusing their
     * attention on a part of the screen that doesn't have moving objects with sharp
     * edges, such as sports athletes' faces, you might choose to set
     * H264TemporalAdaptiveQuantization to Disabled (DISABLED). Related setting: When
     * you enable temporal quantization, adjust the strength of the filter with the
     * setting Adaptive quantization (adaptiveQuantization). To manually enable or
     * disable H264TemporalAdaptiveQuantization, you must set Adaptive quantization
     * (H264AdaptiveQuantization) to a value other than AUTO.
     */
    inline void SetTemporalAdaptiveQuantization(H264TemporalAdaptiveQuantization&& value) { m_temporalAdaptiveQuantizationHasBeenSet = true; m_temporalAdaptiveQuantization = std::move(value); }

    /**
     * Only use this setting when you change the default value, AUTO, for the setting
     * H264AdaptiveQuantization. When you keep all defaults, excluding
     * H264AdaptiveQuantization and all other adaptive quantization from your JSON job
     * specification, MediaConvert automatically applies the best types of quantization
     * for your video content. When you set H264AdaptiveQuantization to a value other
     * than AUTO, the default value for H264TemporalAdaptiveQuantization is Enabled
     * (ENABLED). Keep this default value to adjust quantization within each frame
     * based on temporal variation of content complexity. When you enable this feature,
     * the encoder uses fewer bits on areas of the frame that aren't moving and uses
     * more bits on complex objects with sharp edges that move a lot. For example, this
     * feature improves the readability of text tickers on newscasts and scoreboards on
     * sports matches. Enabling this feature will almost always improve your video
     * quality. Note, though, that this feature doesn't take into account where the
     * viewer's attention is likely to be. If viewers are likely to be focusing their
     * attention on a part of the screen that doesn't have moving objects with sharp
     * edges, such as sports athletes' faces, you might choose to set
     * H264TemporalAdaptiveQuantization to Disabled (DISABLED). Related setting: When
     * you enable temporal quantization, adjust the strength of the filter with the
     * setting Adaptive quantization (adaptiveQuantization). To manually enable or
     * disable H264TemporalAdaptiveQuantization, you must set Adaptive quantization
     * (H264AdaptiveQuantization) to a value other than AUTO.
     */
    inline H264Settings& WithTemporalAdaptiveQuantization(const H264TemporalAdaptiveQuantization& value) { SetTemporalAdaptiveQuantization(value); return *this;}

    /**
     * Only use this setting when you change the default value, AUTO, for the setting
     * H264AdaptiveQuantization. When you keep all defaults, excluding
     * H264AdaptiveQuantization and all other adaptive quantization from your JSON job
     * specification, MediaConvert automatically applies the best types of quantization
     * for your video content. When you set H264AdaptiveQuantization to a value other
     * than AUTO, the default value for H264TemporalAdaptiveQuantization is Enabled
     * (ENABLED). Keep this default value to adjust quantization within each frame
     * based on temporal variation of content complexity. When you enable this feature,
     * the encoder uses fewer bits on areas of the frame that aren't moving and uses
     * more bits on complex objects with sharp edges that move a lot. For example, this
     * feature improves the readability of text tickers on newscasts and scoreboards on
     * sports matches. Enabling this feature will almost always improve your video
     * quality. Note, though, that this feature doesn't take into account where the
     * viewer's attention is likely to be. If viewers are likely to be focusing their
     * attention on a part of the screen that doesn't have moving objects with sharp
     * edges, such as sports athletes' faces, you might choose to set
     * H264TemporalAdaptiveQuantization to Disabled (DISABLED). Related setting: When
     * you enable temporal quantization, adjust the strength of the filter with the
     * setting Adaptive quantization (adaptiveQuantization). To manually enable or
     * disable H264TemporalAdaptiveQuantization, you must set Adaptive quantization
     * (H264AdaptiveQuantization) to a value other than AUTO.
     */
    inline H264Settings& WithTemporalAdaptiveQuantization(H264TemporalAdaptiveQuantization&& value) { SetTemporalAdaptiveQuantization(std::move(value)); return *this;}


    /**
     * Inserts timecode for each frame as 4 bytes of an unregistered SEI message.
     */
    inline const H264UnregisteredSeiTimecode& GetUnregisteredSeiTimecode() const{ return m_unregisteredSeiTimecode; }

    /**
     * Inserts timecode for each frame as 4 bytes of an unregistered SEI message.
     */
    inline bool UnregisteredSeiTimecodeHasBeenSet() const { return m_unregisteredSeiTimecodeHasBeenSet; }

    /**
     * Inserts timecode for each frame as 4 bytes of an unregistered SEI message.
     */
    inline void SetUnregisteredSeiTimecode(const H264UnregisteredSeiTimecode& value) { m_unregisteredSeiTimecodeHasBeenSet = true; m_unregisteredSeiTimecode = value; }

    /**
     * Inserts timecode for each frame as 4 bytes of an unregistered SEI message.
     */
    inline void SetUnregisteredSeiTimecode(H264UnregisteredSeiTimecode&& value) { m_unregisteredSeiTimecodeHasBeenSet = true; m_unregisteredSeiTimecode = std::move(value); }

    /**
     * Inserts timecode for each frame as 4 bytes of an unregistered SEI message.
     */
    inline H264Settings& WithUnregisteredSeiTimecode(const H264UnregisteredSeiTimecode& value) { SetUnregisteredSeiTimecode(value); return *this;}

    /**
     * Inserts timecode for each frame as 4 bytes of an unregistered SEI message.
     */
    inline H264Settings& WithUnregisteredSeiTimecode(H264UnregisteredSeiTimecode&& value) { SetUnregisteredSeiTimecode(std::move(value)); return *this;}

  private:

    H264AdaptiveQuantization m_adaptiveQuantization;
    bool m_adaptiveQuantizationHasBeenSet = false;

    int m_bitrate;
    bool m_bitrateHasBeenSet = false;

    H264CodecLevel m_codecLevel;
    bool m_codecLevelHasBeenSet = false;

    H264CodecProfile m_codecProfile;
    bool m_codecProfileHasBeenSet = false;

    H264DynamicSubGop m_dynamicSubGop;
    bool m_dynamicSubGopHasBeenSet = false;

    H264EntropyEncoding m_entropyEncoding;
    bool m_entropyEncodingHasBeenSet = false;

    H264FieldEncoding m_fieldEncoding;
    bool m_fieldEncodingHasBeenSet = false;

    H264FlickerAdaptiveQuantization m_flickerAdaptiveQuantization;
    bool m_flickerAdaptiveQuantizationHasBeenSet = false;

    H264FramerateControl m_framerateControl;
    bool m_framerateControlHasBeenSet = false;

    H264FramerateConversionAlgorithm m_framerateConversionAlgorithm;
    bool m_framerateConversionAlgorithmHasBeenSet = false;

    int m_framerateDenominator;
    bool m_framerateDenominatorHasBeenSet = false;

    int m_framerateNumerator;
    bool m_framerateNumeratorHasBeenSet = false;

    H264GopBReference m_gopBReference;
    bool m_gopBReferenceHasBeenSet = false;

    int m_gopClosedCadence;
    bool m_gopClosedCadenceHasBeenSet = false;

    double m_gopSize;
    bool m_gopSizeHasBeenSet = false;

    H264GopSizeUnits m_gopSizeUnits;
    bool m_gopSizeUnitsHasBeenSet = false;

    int m_hrdBufferFinalFillPercentage;
    bool m_hrdBufferFinalFillPercentageHasBeenSet = false;

    int m_hrdBufferInitialFillPercentage;
    bool m_hrdBufferInitialFillPercentageHasBeenSet = false;

    int m_hrdBufferSize;
    bool m_hrdBufferSizeHasBeenSet = false;

    H264InterlaceMode m_interlaceMode;
    bool m_interlaceModeHasBeenSet = false;

    int m_maxBitrate;
    bool m_maxBitrateHasBeenSet = false;

    int m_minIInterval;
    bool m_minIIntervalHasBeenSet = false;

    int m_numberBFramesBetweenReferenceFrames;
    bool m_numberBFramesBetweenReferenceFramesHasBeenSet = false;

    int m_numberReferenceFrames;
    bool m_numberReferenceFramesHasBeenSet = false;

    H264ParControl m_parControl;
    bool m_parControlHasBeenSet = false;

    int m_parDenominator;
    bool m_parDenominatorHasBeenSet = false;

    int m_parNumerator;
    bool m_parNumeratorHasBeenSet = false;

    H264QualityTuningLevel m_qualityTuningLevel;
    bool m_qualityTuningLevelHasBeenSet = false;

    H264QvbrSettings m_qvbrSettings;
    bool m_qvbrSettingsHasBeenSet = false;

    H264RateControlMode m_rateControlMode;
    bool m_rateControlModeHasBeenSet = false;

    H264RepeatPps m_repeatPps;
    bool m_repeatPpsHasBeenSet = false;

    H264ScanTypeConversionMode m_scanTypeConversionMode;
    bool m_scanTypeConversionModeHasBeenSet = false;

    H264SceneChangeDetect m_sceneChangeDetect;
    bool m_sceneChangeDetectHasBeenSet = false;

    int m_slices;
    bool m_slicesHasBeenSet = false;

    H264SlowPal m_slowPal;
    bool m_slowPalHasBeenSet = false;

    int m_softness;
    bool m_softnessHasBeenSet = false;

    H264SpatialAdaptiveQuantization m_spatialAdaptiveQuantization;
    bool m_spatialAdaptiveQuantizationHasBeenSet = false;

    H264Syntax m_syntax;
    bool m_syntaxHasBeenSet = false;

    H264Telecine m_telecine;
    bool m_telecineHasBeenSet = false;

    H264TemporalAdaptiveQuantization m_temporalAdaptiveQuantization;
    bool m_temporalAdaptiveQuantizationHasBeenSet = false;

    H264UnregisteredSeiTimecode m_unregisteredSeiTimecode;
    bool m_unregisteredSeiTimecodeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
