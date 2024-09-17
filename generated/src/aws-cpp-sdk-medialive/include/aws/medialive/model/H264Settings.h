/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/H264AdaptiveQuantization.h>
#include <aws/medialive/model/AfdSignaling.h>
#include <aws/medialive/model/H264ColorMetadata.h>
#include <aws/medialive/model/H264ColorSpaceSettings.h>
#include <aws/medialive/model/H264EntropyEncoding.h>
#include <aws/medialive/model/H264FilterSettings.h>
#include <aws/medialive/model/FixedAfd.h>
#include <aws/medialive/model/H264FlickerAq.h>
#include <aws/medialive/model/H264ForceFieldPictures.h>
#include <aws/medialive/model/H264FramerateControl.h>
#include <aws/medialive/model/H264GopBReference.h>
#include <aws/medialive/model/H264GopSizeUnits.h>
#include <aws/medialive/model/H264Level.h>
#include <aws/medialive/model/H264LookAheadRateControl.h>
#include <aws/medialive/model/H264ParControl.h>
#include <aws/medialive/model/H264Profile.h>
#include <aws/medialive/model/H264QualityLevel.h>
#include <aws/medialive/model/H264RateControlMode.h>
#include <aws/medialive/model/H264ScanType.h>
#include <aws/medialive/model/H264SceneChangeDetect.h>
#include <aws/medialive/model/H264SpatialAq.h>
#include <aws/medialive/model/H264SubGopLength.h>
#include <aws/medialive/model/H264Syntax.h>
#include <aws/medialive/model/H264TemporalAq.h>
#include <aws/medialive/model/H264TimecodeInsertionBehavior.h>
#include <aws/medialive/model/TimecodeBurninSettings.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * H264 Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/H264Settings">AWS
   * API Reference</a></p>
   */
  class H264Settings
  {
  public:
    AWS_MEDIALIVE_API H264Settings();
    AWS_MEDIALIVE_API H264Settings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API H264Settings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Enables or disables adaptive quantization, which is a technique MediaLive can
     * apply to video on a frame-by-frame basis to produce more compression without
     * losing quality. There are three types of adaptive quantization: flicker,
     * spatial, and temporal. Set the field in one of these ways: Set to Auto.
     * Recommended. For each type of AQ, MediaLive will determine if AQ is needed, and
     * if so, the appropriate strength. Set a strength (a value other than Auto or
     * Disable). This strength will apply to any of the AQ fields that you choose to
     * enable. Set to Disabled to disable all types of adaptive quantization.
     */
    inline const H264AdaptiveQuantization& GetAdaptiveQuantization() const{ return m_adaptiveQuantization; }
    inline bool AdaptiveQuantizationHasBeenSet() const { return m_adaptiveQuantizationHasBeenSet; }
    inline void SetAdaptiveQuantization(const H264AdaptiveQuantization& value) { m_adaptiveQuantizationHasBeenSet = true; m_adaptiveQuantization = value; }
    inline void SetAdaptiveQuantization(H264AdaptiveQuantization&& value) { m_adaptiveQuantizationHasBeenSet = true; m_adaptiveQuantization = std::move(value); }
    inline H264Settings& WithAdaptiveQuantization(const H264AdaptiveQuantization& value) { SetAdaptiveQuantization(value); return *this;}
    inline H264Settings& WithAdaptiveQuantization(H264AdaptiveQuantization&& value) { SetAdaptiveQuantization(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Indicates that AFD values will be written into the output stream.  If
     * afdSignaling is "auto", the system will try to preserve the input AFD value (in
     * cases where multiple AFD values are valid). If set to "fixed", the AFD value
     * will be the value configured in the fixedAfd parameter.
     */
    inline const AfdSignaling& GetAfdSignaling() const{ return m_afdSignaling; }
    inline bool AfdSignalingHasBeenSet() const { return m_afdSignalingHasBeenSet; }
    inline void SetAfdSignaling(const AfdSignaling& value) { m_afdSignalingHasBeenSet = true; m_afdSignaling = value; }
    inline void SetAfdSignaling(AfdSignaling&& value) { m_afdSignalingHasBeenSet = true; m_afdSignaling = std::move(value); }
    inline H264Settings& WithAfdSignaling(const AfdSignaling& value) { SetAfdSignaling(value); return *this;}
    inline H264Settings& WithAfdSignaling(AfdSignaling&& value) { SetAfdSignaling(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Average bitrate in bits/second. Required when the rate control mode is VBR or
     * CBR. Not used for QVBR. In an MS Smooth output group, each output must have a
     * unique value when its bitrate is rounded down to the nearest multiple of 1000.
     */
    inline int GetBitrate() const{ return m_bitrate; }
    inline bool BitrateHasBeenSet() const { return m_bitrateHasBeenSet; }
    inline void SetBitrate(int value) { m_bitrateHasBeenSet = true; m_bitrate = value; }
    inline H264Settings& WithBitrate(int value) { SetBitrate(value); return *this;}
    ///@}

    ///@{
    /**
     * Percentage of the buffer that should initially be filled (HRD buffer model).
     */
    inline int GetBufFillPct() const{ return m_bufFillPct; }
    inline bool BufFillPctHasBeenSet() const { return m_bufFillPctHasBeenSet; }
    inline void SetBufFillPct(int value) { m_bufFillPctHasBeenSet = true; m_bufFillPct = value; }
    inline H264Settings& WithBufFillPct(int value) { SetBufFillPct(value); return *this;}
    ///@}

    ///@{
    /**
     * Size of buffer (HRD buffer model) in bits.
     */
    inline int GetBufSize() const{ return m_bufSize; }
    inline bool BufSizeHasBeenSet() const { return m_bufSizeHasBeenSet; }
    inline void SetBufSize(int value) { m_bufSizeHasBeenSet = true; m_bufSize = value; }
    inline H264Settings& WithBufSize(int value) { SetBufSize(value); return *this;}
    ///@}

    ///@{
    /**
     * Includes colorspace metadata in the output.
     */
    inline const H264ColorMetadata& GetColorMetadata() const{ return m_colorMetadata; }
    inline bool ColorMetadataHasBeenSet() const { return m_colorMetadataHasBeenSet; }
    inline void SetColorMetadata(const H264ColorMetadata& value) { m_colorMetadataHasBeenSet = true; m_colorMetadata = value; }
    inline void SetColorMetadata(H264ColorMetadata&& value) { m_colorMetadataHasBeenSet = true; m_colorMetadata = std::move(value); }
    inline H264Settings& WithColorMetadata(const H264ColorMetadata& value) { SetColorMetadata(value); return *this;}
    inline H264Settings& WithColorMetadata(H264ColorMetadata&& value) { SetColorMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Color Space settings
     */
    inline const H264ColorSpaceSettings& GetColorSpaceSettings() const{ return m_colorSpaceSettings; }
    inline bool ColorSpaceSettingsHasBeenSet() const { return m_colorSpaceSettingsHasBeenSet; }
    inline void SetColorSpaceSettings(const H264ColorSpaceSettings& value) { m_colorSpaceSettingsHasBeenSet = true; m_colorSpaceSettings = value; }
    inline void SetColorSpaceSettings(H264ColorSpaceSettings&& value) { m_colorSpaceSettingsHasBeenSet = true; m_colorSpaceSettings = std::move(value); }
    inline H264Settings& WithColorSpaceSettings(const H264ColorSpaceSettings& value) { SetColorSpaceSettings(value); return *this;}
    inline H264Settings& WithColorSpaceSettings(H264ColorSpaceSettings&& value) { SetColorSpaceSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Entropy encoding mode.  Use cabac (must be in Main or High profile) or cavlc.
     */
    inline const H264EntropyEncoding& GetEntropyEncoding() const{ return m_entropyEncoding; }
    inline bool EntropyEncodingHasBeenSet() const { return m_entropyEncodingHasBeenSet; }
    inline void SetEntropyEncoding(const H264EntropyEncoding& value) { m_entropyEncodingHasBeenSet = true; m_entropyEncoding = value; }
    inline void SetEntropyEncoding(H264EntropyEncoding&& value) { m_entropyEncodingHasBeenSet = true; m_entropyEncoding = std::move(value); }
    inline H264Settings& WithEntropyEncoding(const H264EntropyEncoding& value) { SetEntropyEncoding(value); return *this;}
    inline H264Settings& WithEntropyEncoding(H264EntropyEncoding&& value) { SetEntropyEncoding(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Optional. Both filters reduce bandwidth by removing imperceptible details. You
     * can enable one of the filters. We
recommend that you try both filters and
     * observe the results to decide which one to use.

The Temporal Filter reduces
     * bandwidth by removing imperceptible details in the content. It combines
     * perceptual
filtering and motion compensated temporal filtering (MCTF). It
     * operates independently of the compression level.

The Bandwidth Reduction filter
     * is a perceptual filter located within the encoding loop. It adapts to the
     * current
compression level to filter imperceptible signals. This filter works
     * only when the resolution is 1080p or lower.
     */
    inline const H264FilterSettings& GetFilterSettings() const{ return m_filterSettings; }
    inline bool FilterSettingsHasBeenSet() const { return m_filterSettingsHasBeenSet; }
    inline void SetFilterSettings(const H264FilterSettings& value) { m_filterSettingsHasBeenSet = true; m_filterSettings = value; }
    inline void SetFilterSettings(H264FilterSettings&& value) { m_filterSettingsHasBeenSet = true; m_filterSettings = std::move(value); }
    inline H264Settings& WithFilterSettings(const H264FilterSettings& value) { SetFilterSettings(value); return *this;}
    inline H264Settings& WithFilterSettings(H264FilterSettings&& value) { SetFilterSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Four bit AFD value to write on all frames of video in the output stream. Only
     * valid when afdSignaling is set to 'Fixed'.
     */
    inline const FixedAfd& GetFixedAfd() const{ return m_fixedAfd; }
    inline bool FixedAfdHasBeenSet() const { return m_fixedAfdHasBeenSet; }
    inline void SetFixedAfd(const FixedAfd& value) { m_fixedAfdHasBeenSet = true; m_fixedAfd = value; }
    inline void SetFixedAfd(FixedAfd&& value) { m_fixedAfdHasBeenSet = true; m_fixedAfd = std::move(value); }
    inline H264Settings& WithFixedAfd(const FixedAfd& value) { SetFixedAfd(value); return *this;}
    inline H264Settings& WithFixedAfd(FixedAfd&& value) { SetFixedAfd(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Flicker AQ makes adjustments within each frame to reduce flicker or 'pop' on
     * I-frames. The value to enter in this field depends on the value in the Adaptive
     * quantization field: If you have set the Adaptive quantization field to Auto,
     * MediaLive ignores any value in this field. MediaLive will determine if flicker
     * AQ is appropriate and will apply the appropriate strength. If you have set the
     * Adaptive quantization field to a strength, you can set this field to Enabled or
     * Disabled. Enabled: MediaLive will apply flicker AQ using the specified strength.
     * Disabled: MediaLive won't apply flicker AQ. If you have set the Adaptive
     * quantization to Disabled, MediaLive ignores any value in this field and doesn't
     * apply flicker AQ.
     */
    inline const H264FlickerAq& GetFlickerAq() const{ return m_flickerAq; }
    inline bool FlickerAqHasBeenSet() const { return m_flickerAqHasBeenSet; }
    inline void SetFlickerAq(const H264FlickerAq& value) { m_flickerAqHasBeenSet = true; m_flickerAq = value; }
    inline void SetFlickerAq(H264FlickerAq&& value) { m_flickerAqHasBeenSet = true; m_flickerAq = std::move(value); }
    inline H264Settings& WithFlickerAq(const H264FlickerAq& value) { SetFlickerAq(value); return *this;}
    inline H264Settings& WithFlickerAq(H264FlickerAq&& value) { SetFlickerAq(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * This setting applies only when scan type is "interlaced." It controls whether
     * coding is performed on a field basis or on a frame basis. (When the video is
     * progressive, the coding is always performed on a frame basis.)
enabled: Force
     * MediaLive to code on a field basis, so that odd and even sets of fields are
     * coded separately.
disabled: Code the two sets of fields separately (on a field
     * basis) or together (on a frame basis using PAFF), depending on what is most
     * appropriate for the content.
     */
    inline const H264ForceFieldPictures& GetForceFieldPictures() const{ return m_forceFieldPictures; }
    inline bool ForceFieldPicturesHasBeenSet() const { return m_forceFieldPicturesHasBeenSet; }
    inline void SetForceFieldPictures(const H264ForceFieldPictures& value) { m_forceFieldPicturesHasBeenSet = true; m_forceFieldPictures = value; }
    inline void SetForceFieldPictures(H264ForceFieldPictures&& value) { m_forceFieldPicturesHasBeenSet = true; m_forceFieldPictures = std::move(value); }
    inline H264Settings& WithForceFieldPictures(const H264ForceFieldPictures& value) { SetForceFieldPictures(value); return *this;}
    inline H264Settings& WithForceFieldPictures(H264ForceFieldPictures&& value) { SetForceFieldPictures(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * This field indicates how the output video frame rate is specified.  If
     * "specified" is selected then the output video frame rate is determined by
     * framerateNumerator and framerateDenominator, else if "initializeFromSource" is
     * selected then the output video frame rate will be set equal to the input video
     * frame rate of the first input.
     */
    inline const H264FramerateControl& GetFramerateControl() const{ return m_framerateControl; }
    inline bool FramerateControlHasBeenSet() const { return m_framerateControlHasBeenSet; }
    inline void SetFramerateControl(const H264FramerateControl& value) { m_framerateControlHasBeenSet = true; m_framerateControl = value; }
    inline void SetFramerateControl(H264FramerateControl&& value) { m_framerateControlHasBeenSet = true; m_framerateControl = std::move(value); }
    inline H264Settings& WithFramerateControl(const H264FramerateControl& value) { SetFramerateControl(value); return *this;}
    inline H264Settings& WithFramerateControl(H264FramerateControl&& value) { SetFramerateControl(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Framerate denominator.
     */
    inline int GetFramerateDenominator() const{ return m_framerateDenominator; }
    inline bool FramerateDenominatorHasBeenSet() const { return m_framerateDenominatorHasBeenSet; }
    inline void SetFramerateDenominator(int value) { m_framerateDenominatorHasBeenSet = true; m_framerateDenominator = value; }
    inline H264Settings& WithFramerateDenominator(int value) { SetFramerateDenominator(value); return *this;}
    ///@}

    ///@{
    /**
     * Framerate numerator - framerate is a fraction, e.g. 24000 / 1001 = 23.976 fps.
     */
    inline int GetFramerateNumerator() const{ return m_framerateNumerator; }
    inline bool FramerateNumeratorHasBeenSet() const { return m_framerateNumeratorHasBeenSet; }
    inline void SetFramerateNumerator(int value) { m_framerateNumeratorHasBeenSet = true; m_framerateNumerator = value; }
    inline H264Settings& WithFramerateNumerator(int value) { SetFramerateNumerator(value); return *this;}
    ///@}

    ///@{
    /**
     * Documentation update needed
     */
    inline const H264GopBReference& GetGopBReference() const{ return m_gopBReference; }
    inline bool GopBReferenceHasBeenSet() const { return m_gopBReferenceHasBeenSet; }
    inline void SetGopBReference(const H264GopBReference& value) { m_gopBReferenceHasBeenSet = true; m_gopBReference = value; }
    inline void SetGopBReference(H264GopBReference&& value) { m_gopBReferenceHasBeenSet = true; m_gopBReference = std::move(value); }
    inline H264Settings& WithGopBReference(const H264GopBReference& value) { SetGopBReference(value); return *this;}
    inline H264Settings& WithGopBReference(H264GopBReference&& value) { SetGopBReference(std::move(value)); return *this;}
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
    inline H264Settings& WithGopClosedCadence(int value) { SetGopClosedCadence(value); return *this;}
    ///@}

    ///@{
    /**
     * Number of B-frames between reference frames.
     */
    inline int GetGopNumBFrames() const{ return m_gopNumBFrames; }
    inline bool GopNumBFramesHasBeenSet() const { return m_gopNumBFramesHasBeenSet; }
    inline void SetGopNumBFrames(int value) { m_gopNumBFramesHasBeenSet = true; m_gopNumBFrames = value; }
    inline H264Settings& WithGopNumBFrames(int value) { SetGopNumBFrames(value); return *this;}
    ///@}

    ///@{
    /**
     * GOP size (keyframe interval) in units of either frames or seconds per
     * gopSizeUnits.
If gopSizeUnits is frames, gopSize must be an integer and must be
     * greater than or equal to 1.
If gopSizeUnits is seconds, gopSize must be greater
     * than 0, but need not be an integer.
     */
    inline double GetGopSize() const{ return m_gopSize; }
    inline bool GopSizeHasBeenSet() const { return m_gopSizeHasBeenSet; }
    inline void SetGopSize(double value) { m_gopSizeHasBeenSet = true; m_gopSize = value; }
    inline H264Settings& WithGopSize(double value) { SetGopSize(value); return *this;}
    ///@}

    ///@{
    /**
     * Indicates if the gopSize is specified in frames or seconds. If seconds the
     * system will convert the gopSize into a frame count at run time.
     */
    inline const H264GopSizeUnits& GetGopSizeUnits() const{ return m_gopSizeUnits; }
    inline bool GopSizeUnitsHasBeenSet() const { return m_gopSizeUnitsHasBeenSet; }
    inline void SetGopSizeUnits(const H264GopSizeUnits& value) { m_gopSizeUnitsHasBeenSet = true; m_gopSizeUnits = value; }
    inline void SetGopSizeUnits(H264GopSizeUnits&& value) { m_gopSizeUnitsHasBeenSet = true; m_gopSizeUnits = std::move(value); }
    inline H264Settings& WithGopSizeUnits(const H264GopSizeUnits& value) { SetGopSizeUnits(value); return *this;}
    inline H264Settings& WithGopSizeUnits(H264GopSizeUnits&& value) { SetGopSizeUnits(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * H.264 Level.
     */
    inline const H264Level& GetLevel() const{ return m_level; }
    inline bool LevelHasBeenSet() const { return m_levelHasBeenSet; }
    inline void SetLevel(const H264Level& value) { m_levelHasBeenSet = true; m_level = value; }
    inline void SetLevel(H264Level&& value) { m_levelHasBeenSet = true; m_level = std::move(value); }
    inline H264Settings& WithLevel(const H264Level& value) { SetLevel(value); return *this;}
    inline H264Settings& WithLevel(H264Level&& value) { SetLevel(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Amount of lookahead. A value of low can decrease latency and memory usage, while
     * high can produce better quality for certain content.
     */
    inline const H264LookAheadRateControl& GetLookAheadRateControl() const{ return m_lookAheadRateControl; }
    inline bool LookAheadRateControlHasBeenSet() const { return m_lookAheadRateControlHasBeenSet; }
    inline void SetLookAheadRateControl(const H264LookAheadRateControl& value) { m_lookAheadRateControlHasBeenSet = true; m_lookAheadRateControl = value; }
    inline void SetLookAheadRateControl(H264LookAheadRateControl&& value) { m_lookAheadRateControlHasBeenSet = true; m_lookAheadRateControl = std::move(value); }
    inline H264Settings& WithLookAheadRateControl(const H264LookAheadRateControl& value) { SetLookAheadRateControl(value); return *this;}
    inline H264Settings& WithLookAheadRateControl(H264LookAheadRateControl&& value) { SetLookAheadRateControl(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * For QVBR: See the tooltip for Quality level

For VBR: Set the maximum bitrate in
     * order to accommodate expected spikes in the complexity of the video.
     */
    inline int GetMaxBitrate() const{ return m_maxBitrate; }
    inline bool MaxBitrateHasBeenSet() const { return m_maxBitrateHasBeenSet; }
    inline void SetMaxBitrate(int value) { m_maxBitrateHasBeenSet = true; m_maxBitrate = value; }
    inline H264Settings& WithMaxBitrate(int value) { SetMaxBitrate(value); return *this;}
    ///@}

    ///@{
    /**
     * Only meaningful if sceneChangeDetect is set to enabled.  Defaults to 5 if
     * multiplex rate control is used.  Enforces separation between repeated (cadence)
     * I-frames and I-frames inserted by Scene Change Detection. If a scene change
     * I-frame is within I-interval frames of a cadence I-frame, the GOP is shrunk
     * and/or stretched to the scene change I-frame. GOP stretch requires enabling
     * lookahead as well as setting I-interval. The normal cadence resumes for the next
     * GOP. Note: Maximum GOP stretch = GOP size + Min-I-interval - 1
     */
    inline int GetMinIInterval() const{ return m_minIInterval; }
    inline bool MinIIntervalHasBeenSet() const { return m_minIIntervalHasBeenSet; }
    inline void SetMinIInterval(int value) { m_minIIntervalHasBeenSet = true; m_minIInterval = value; }
    inline H264Settings& WithMinIInterval(int value) { SetMinIInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * Number of reference frames to use. The encoder may use more than requested if
     * using B-frames and/or interlaced encoding.
     */
    inline int GetNumRefFrames() const{ return m_numRefFrames; }
    inline bool NumRefFramesHasBeenSet() const { return m_numRefFramesHasBeenSet; }
    inline void SetNumRefFrames(int value) { m_numRefFramesHasBeenSet = true; m_numRefFrames = value; }
    inline H264Settings& WithNumRefFrames(int value) { SetNumRefFrames(value); return *this;}
    ///@}

    ///@{
    /**
     * This field indicates how the output pixel aspect ratio is specified.  If
     * "specified" is selected then the output video pixel aspect ratio is determined
     * by parNumerator and parDenominator, else if "initializeFromSource" is selected
     * then the output pixsel aspect ratio will be set equal to the input video pixel
     * aspect ratio of the first input.
     */
    inline const H264ParControl& GetParControl() const{ return m_parControl; }
    inline bool ParControlHasBeenSet() const { return m_parControlHasBeenSet; }
    inline void SetParControl(const H264ParControl& value) { m_parControlHasBeenSet = true; m_parControl = value; }
    inline void SetParControl(H264ParControl&& value) { m_parControlHasBeenSet = true; m_parControl = std::move(value); }
    inline H264Settings& WithParControl(const H264ParControl& value) { SetParControl(value); return *this;}
    inline H264Settings& WithParControl(H264ParControl&& value) { SetParControl(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Pixel Aspect Ratio denominator.
     */
    inline int GetParDenominator() const{ return m_parDenominator; }
    inline bool ParDenominatorHasBeenSet() const { return m_parDenominatorHasBeenSet; }
    inline void SetParDenominator(int value) { m_parDenominatorHasBeenSet = true; m_parDenominator = value; }
    inline H264Settings& WithParDenominator(int value) { SetParDenominator(value); return *this;}
    ///@}

    ///@{
    /**
     * Pixel Aspect Ratio numerator.
     */
    inline int GetParNumerator() const{ return m_parNumerator; }
    inline bool ParNumeratorHasBeenSet() const { return m_parNumeratorHasBeenSet; }
    inline void SetParNumerator(int value) { m_parNumeratorHasBeenSet = true; m_parNumerator = value; }
    inline H264Settings& WithParNumerator(int value) { SetParNumerator(value); return *this;}
    ///@}

    ///@{
    /**
     * H.264 Profile.
     */
    inline const H264Profile& GetProfile() const{ return m_profile; }
    inline bool ProfileHasBeenSet() const { return m_profileHasBeenSet; }
    inline void SetProfile(const H264Profile& value) { m_profileHasBeenSet = true; m_profile = value; }
    inline void SetProfile(H264Profile&& value) { m_profileHasBeenSet = true; m_profile = std::move(value); }
    inline H264Settings& WithProfile(const H264Profile& value) { SetProfile(value); return *this;}
    inline H264Settings& WithProfile(H264Profile&& value) { SetProfile(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Leave as STANDARD_QUALITY or choose a different value (which might result in
     * additional costs to run the channel).
- ENHANCED_QUALITY: Produces a slightly
     * better video quality without an increase in the bitrate. Has an effect only when
     * the Rate control mode is QVBR or CBR. If this channel is in a MediaLive
     * multiplex, the value must be ENHANCED_QUALITY.
- STANDARD_QUALITY: Valid for any
     * Rate control mode.
     */
    inline const H264QualityLevel& GetQualityLevel() const{ return m_qualityLevel; }
    inline bool QualityLevelHasBeenSet() const { return m_qualityLevelHasBeenSet; }
    inline void SetQualityLevel(const H264QualityLevel& value) { m_qualityLevelHasBeenSet = true; m_qualityLevel = value; }
    inline void SetQualityLevel(H264QualityLevel&& value) { m_qualityLevelHasBeenSet = true; m_qualityLevel = std::move(value); }
    inline H264Settings& WithQualityLevel(const H264QualityLevel& value) { SetQualityLevel(value); return *this;}
    inline H264Settings& WithQualityLevel(H264QualityLevel&& value) { SetQualityLevel(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Controls the target quality for the video encode. Applies only when the rate
     * control mode is QVBR. You can set a target quality or you can let MediaLive
     * determine the best quality. To set a target quality, enter values in the QVBR
     * quality level field and the Max bitrate field. Enter values that suit your most
     * important viewing devices. Recommended values are:
- Primary screen: Quality
     * level: 8 to 10. Max bitrate: 4M
- PC or tablet: Quality level: 7. Max bitrate:
     * 1.5M to 3M
- Smartphone: Quality level: 6. Max bitrate: 1M to 1.5M
To let
     * MediaLive decide, leave the QVBR quality level field empty, and in Max bitrate
     * enter the maximum rate you want in the video. For more information, see the
     * section called "Video - rate control mode" in the MediaLive user guide
     */
    inline int GetQvbrQualityLevel() const{ return m_qvbrQualityLevel; }
    inline bool QvbrQualityLevelHasBeenSet() const { return m_qvbrQualityLevelHasBeenSet; }
    inline void SetQvbrQualityLevel(int value) { m_qvbrQualityLevelHasBeenSet = true; m_qvbrQualityLevel = value; }
    inline H264Settings& WithQvbrQualityLevel(int value) { SetQvbrQualityLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * Rate control mode.

QVBR: Quality will match the specified quality level except
     * when it is constrained by the
maximum bitrate.  Recommended if you or your
     * viewers pay for bandwidth.

VBR: Quality and bitrate vary, depending on the
     * video complexity. Recommended instead of QVBR
if you want to maintain a specific
     * average bitrate over the duration of the channel.

CBR: Quality varies,
     * depending on the video complexity. Recommended only if you distribute
your
     * assets to devices that cannot handle variable bitrates.

Multiplex: This rate
     * control mode is only supported (and is required) when the video is
     * being
delivered to a MediaLive Multiplex in which case the rate control
     * configuration is controlled
by the properties within the Multiplex Program.
     */
    inline const H264RateControlMode& GetRateControlMode() const{ return m_rateControlMode; }
    inline bool RateControlModeHasBeenSet() const { return m_rateControlModeHasBeenSet; }
    inline void SetRateControlMode(const H264RateControlMode& value) { m_rateControlModeHasBeenSet = true; m_rateControlMode = value; }
    inline void SetRateControlMode(H264RateControlMode&& value) { m_rateControlModeHasBeenSet = true; m_rateControlMode = std::move(value); }
    inline H264Settings& WithRateControlMode(const H264RateControlMode& value) { SetRateControlMode(value); return *this;}
    inline H264Settings& WithRateControlMode(H264RateControlMode&& value) { SetRateControlMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Sets the scan type of the output to progressive or top-field-first interlaced.
     */
    inline const H264ScanType& GetScanType() const{ return m_scanType; }
    inline bool ScanTypeHasBeenSet() const { return m_scanTypeHasBeenSet; }
    inline void SetScanType(const H264ScanType& value) { m_scanTypeHasBeenSet = true; m_scanType = value; }
    inline void SetScanType(H264ScanType&& value) { m_scanTypeHasBeenSet = true; m_scanType = std::move(value); }
    inline H264Settings& WithScanType(const H264ScanType& value) { SetScanType(value); return *this;}
    inline H264Settings& WithScanType(H264ScanType&& value) { SetScanType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Scene change detection.

- On: inserts I-frames when scene change is detected.
-
     * Off: does not force an I-frame when scene change is detected.
     */
    inline const H264SceneChangeDetect& GetSceneChangeDetect() const{ return m_sceneChangeDetect; }
    inline bool SceneChangeDetectHasBeenSet() const { return m_sceneChangeDetectHasBeenSet; }
    inline void SetSceneChangeDetect(const H264SceneChangeDetect& value) { m_sceneChangeDetectHasBeenSet = true; m_sceneChangeDetect = value; }
    inline void SetSceneChangeDetect(H264SceneChangeDetect&& value) { m_sceneChangeDetectHasBeenSet = true; m_sceneChangeDetect = std::move(value); }
    inline H264Settings& WithSceneChangeDetect(const H264SceneChangeDetect& value) { SetSceneChangeDetect(value); return *this;}
    inline H264Settings& WithSceneChangeDetect(H264SceneChangeDetect&& value) { SetSceneChangeDetect(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Number of slices per picture. Must be less than or equal to the number of
     * macroblock rows for progressive pictures, and less than or equal to half the
     * number of macroblock rows for interlaced pictures.
This field is optional; when
     * no value is specified the encoder will choose the number of slices based on
     * encode resolution.
     */
    inline int GetSlices() const{ return m_slices; }
    inline bool SlicesHasBeenSet() const { return m_slicesHasBeenSet; }
    inline void SetSlices(int value) { m_slicesHasBeenSet = true; m_slices = value; }
    inline H264Settings& WithSlices(int value) { SetSlices(value); return *this;}
    ///@}

    ///@{
    /**
     * Softness. Selects quantizer matrix, larger values reduce high-frequency content
     * in the encoded image.  If not set to zero, must be greater than 15.
     */
    inline int GetSoftness() const{ return m_softness; }
    inline bool SoftnessHasBeenSet() const { return m_softnessHasBeenSet; }
    inline void SetSoftness(int value) { m_softnessHasBeenSet = true; m_softness = value; }
    inline H264Settings& WithSoftness(int value) { SetSoftness(value); return *this;}
    ///@}

    ///@{
    /**
     * Spatial AQ makes adjustments within each frame based on spatial variation of
     * content complexity. The value to enter in this field depends on the value in the
     * Adaptive quantization field: If you have set the Adaptive quantization field to
     * Auto, MediaLive ignores any value in this field. MediaLive will determine if
     * spatial AQ is appropriate and will apply the appropriate strength. If you have
     * set the Adaptive quantization field to a strength, you can set this field to
     * Enabled or Disabled. Enabled: MediaLive will apply spatial AQ using the
     * specified strength. Disabled: MediaLive won't apply spatial AQ. If you have set
     * the Adaptive quantization to Disabled, MediaLive ignores any value in this field
     * and doesn't apply spatial AQ.
     */
    inline const H264SpatialAq& GetSpatialAq() const{ return m_spatialAq; }
    inline bool SpatialAqHasBeenSet() const { return m_spatialAqHasBeenSet; }
    inline void SetSpatialAq(const H264SpatialAq& value) { m_spatialAqHasBeenSet = true; m_spatialAq = value; }
    inline void SetSpatialAq(H264SpatialAq&& value) { m_spatialAqHasBeenSet = true; m_spatialAq = std::move(value); }
    inline H264Settings& WithSpatialAq(const H264SpatialAq& value) { SetSpatialAq(value); return *this;}
    inline H264Settings& WithSpatialAq(H264SpatialAq&& value) { SetSpatialAq(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * If set to fixed, use gopNumBFrames B-frames per sub-GOP. If set to dynamic,
     * optimize the number of B-frames used for each sub-GOP to improve visual quality.
     */
    inline const H264SubGopLength& GetSubgopLength() const{ return m_subgopLength; }
    inline bool SubgopLengthHasBeenSet() const { return m_subgopLengthHasBeenSet; }
    inline void SetSubgopLength(const H264SubGopLength& value) { m_subgopLengthHasBeenSet = true; m_subgopLength = value; }
    inline void SetSubgopLength(H264SubGopLength&& value) { m_subgopLengthHasBeenSet = true; m_subgopLength = std::move(value); }
    inline H264Settings& WithSubgopLength(const H264SubGopLength& value) { SetSubgopLength(value); return *this;}
    inline H264Settings& WithSubgopLength(H264SubGopLength&& value) { SetSubgopLength(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Produces a bitstream compliant with SMPTE RP-2027.
     */
    inline const H264Syntax& GetSyntax() const{ return m_syntax; }
    inline bool SyntaxHasBeenSet() const { return m_syntaxHasBeenSet; }
    inline void SetSyntax(const H264Syntax& value) { m_syntaxHasBeenSet = true; m_syntax = value; }
    inline void SetSyntax(H264Syntax&& value) { m_syntaxHasBeenSet = true; m_syntax = std::move(value); }
    inline H264Settings& WithSyntax(const H264Syntax& value) { SetSyntax(value); return *this;}
    inline H264Settings& WithSyntax(H264Syntax&& value) { SetSyntax(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Temporal makes adjustments within each frame based on temporal variation of
     * content complexity. The value to enter in this field depends on the value in the
     * Adaptive quantization field: If you have set the Adaptive quantization field to
     * Auto, MediaLive ignores any value in this field. MediaLive will determine if
     * temporal AQ is appropriate and will apply the appropriate strength. If you have
     * set the Adaptive quantization field to a strength, you can set this field to
     * Enabled or Disabled. Enabled: MediaLive will apply temporal AQ using the
     * specified strength. Disabled: MediaLive won't apply temporal AQ. If you have set
     * the Adaptive quantization to Disabled, MediaLive ignores any value in this field
     * and doesn't apply temporal AQ.
     */
    inline const H264TemporalAq& GetTemporalAq() const{ return m_temporalAq; }
    inline bool TemporalAqHasBeenSet() const { return m_temporalAqHasBeenSet; }
    inline void SetTemporalAq(const H264TemporalAq& value) { m_temporalAqHasBeenSet = true; m_temporalAq = value; }
    inline void SetTemporalAq(H264TemporalAq&& value) { m_temporalAqHasBeenSet = true; m_temporalAq = std::move(value); }
    inline H264Settings& WithTemporalAq(const H264TemporalAq& value) { SetTemporalAq(value); return *this;}
    inline H264Settings& WithTemporalAq(H264TemporalAq&& value) { SetTemporalAq(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Determines how timecodes should be inserted into the video elementary stream.
-
     * 'disabled': Do not include timecodes
- 'picTimingSei': Pass through picture
     * timing SEI messages from the source specified in Timecode Config
     */
    inline const H264TimecodeInsertionBehavior& GetTimecodeInsertion() const{ return m_timecodeInsertion; }
    inline bool TimecodeInsertionHasBeenSet() const { return m_timecodeInsertionHasBeenSet; }
    inline void SetTimecodeInsertion(const H264TimecodeInsertionBehavior& value) { m_timecodeInsertionHasBeenSet = true; m_timecodeInsertion = value; }
    inline void SetTimecodeInsertion(H264TimecodeInsertionBehavior&& value) { m_timecodeInsertionHasBeenSet = true; m_timecodeInsertion = std::move(value); }
    inline H264Settings& WithTimecodeInsertion(const H264TimecodeInsertionBehavior& value) { SetTimecodeInsertion(value); return *this;}
    inline H264Settings& WithTimecodeInsertion(H264TimecodeInsertionBehavior&& value) { SetTimecodeInsertion(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Timecode burn-in settings
     */
    inline const TimecodeBurninSettings& GetTimecodeBurninSettings() const{ return m_timecodeBurninSettings; }
    inline bool TimecodeBurninSettingsHasBeenSet() const { return m_timecodeBurninSettingsHasBeenSet; }
    inline void SetTimecodeBurninSettings(const TimecodeBurninSettings& value) { m_timecodeBurninSettingsHasBeenSet = true; m_timecodeBurninSettings = value; }
    inline void SetTimecodeBurninSettings(TimecodeBurninSettings&& value) { m_timecodeBurninSettingsHasBeenSet = true; m_timecodeBurninSettings = std::move(value); }
    inline H264Settings& WithTimecodeBurninSettings(const TimecodeBurninSettings& value) { SetTimecodeBurninSettings(value); return *this;}
    inline H264Settings& WithTimecodeBurninSettings(TimecodeBurninSettings&& value) { SetTimecodeBurninSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Sets the minimum QP. If you aren't familiar with quantization adjustment, leave
     * the field empty. MediaLive will
apply an appropriate value.
     */
    inline int GetMinQp() const{ return m_minQp; }
    inline bool MinQpHasBeenSet() const { return m_minQpHasBeenSet; }
    inline void SetMinQp(int value) { m_minQpHasBeenSet = true; m_minQp = value; }
    inline H264Settings& WithMinQp(int value) { SetMinQp(value); return *this;}
    ///@}
  private:

    H264AdaptiveQuantization m_adaptiveQuantization;
    bool m_adaptiveQuantizationHasBeenSet = false;

    AfdSignaling m_afdSignaling;
    bool m_afdSignalingHasBeenSet = false;

    int m_bitrate;
    bool m_bitrateHasBeenSet = false;

    int m_bufFillPct;
    bool m_bufFillPctHasBeenSet = false;

    int m_bufSize;
    bool m_bufSizeHasBeenSet = false;

    H264ColorMetadata m_colorMetadata;
    bool m_colorMetadataHasBeenSet = false;

    H264ColorSpaceSettings m_colorSpaceSettings;
    bool m_colorSpaceSettingsHasBeenSet = false;

    H264EntropyEncoding m_entropyEncoding;
    bool m_entropyEncodingHasBeenSet = false;

    H264FilterSettings m_filterSettings;
    bool m_filterSettingsHasBeenSet = false;

    FixedAfd m_fixedAfd;
    bool m_fixedAfdHasBeenSet = false;

    H264FlickerAq m_flickerAq;
    bool m_flickerAqHasBeenSet = false;

    H264ForceFieldPictures m_forceFieldPictures;
    bool m_forceFieldPicturesHasBeenSet = false;

    H264FramerateControl m_framerateControl;
    bool m_framerateControlHasBeenSet = false;

    int m_framerateDenominator;
    bool m_framerateDenominatorHasBeenSet = false;

    int m_framerateNumerator;
    bool m_framerateNumeratorHasBeenSet = false;

    H264GopBReference m_gopBReference;
    bool m_gopBReferenceHasBeenSet = false;

    int m_gopClosedCadence;
    bool m_gopClosedCadenceHasBeenSet = false;

    int m_gopNumBFrames;
    bool m_gopNumBFramesHasBeenSet = false;

    double m_gopSize;
    bool m_gopSizeHasBeenSet = false;

    H264GopSizeUnits m_gopSizeUnits;
    bool m_gopSizeUnitsHasBeenSet = false;

    H264Level m_level;
    bool m_levelHasBeenSet = false;

    H264LookAheadRateControl m_lookAheadRateControl;
    bool m_lookAheadRateControlHasBeenSet = false;

    int m_maxBitrate;
    bool m_maxBitrateHasBeenSet = false;

    int m_minIInterval;
    bool m_minIIntervalHasBeenSet = false;

    int m_numRefFrames;
    bool m_numRefFramesHasBeenSet = false;

    H264ParControl m_parControl;
    bool m_parControlHasBeenSet = false;

    int m_parDenominator;
    bool m_parDenominatorHasBeenSet = false;

    int m_parNumerator;
    bool m_parNumeratorHasBeenSet = false;

    H264Profile m_profile;
    bool m_profileHasBeenSet = false;

    H264QualityLevel m_qualityLevel;
    bool m_qualityLevelHasBeenSet = false;

    int m_qvbrQualityLevel;
    bool m_qvbrQualityLevelHasBeenSet = false;

    H264RateControlMode m_rateControlMode;
    bool m_rateControlModeHasBeenSet = false;

    H264ScanType m_scanType;
    bool m_scanTypeHasBeenSet = false;

    H264SceneChangeDetect m_sceneChangeDetect;
    bool m_sceneChangeDetectHasBeenSet = false;

    int m_slices;
    bool m_slicesHasBeenSet = false;

    int m_softness;
    bool m_softnessHasBeenSet = false;

    H264SpatialAq m_spatialAq;
    bool m_spatialAqHasBeenSet = false;

    H264SubGopLength m_subgopLength;
    bool m_subgopLengthHasBeenSet = false;

    H264Syntax m_syntax;
    bool m_syntaxHasBeenSet = false;

    H264TemporalAq m_temporalAq;
    bool m_temporalAqHasBeenSet = false;

    H264TimecodeInsertionBehavior m_timecodeInsertion;
    bool m_timecodeInsertionHasBeenSet = false;

    TimecodeBurninSettings m_timecodeBurninSettings;
    bool m_timecodeBurninSettingsHasBeenSet = false;

    int m_minQp;
    bool m_minQpHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
