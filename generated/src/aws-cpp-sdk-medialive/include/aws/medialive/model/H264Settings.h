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
    AWS_MEDIALIVE_API H264Settings() = default;
    AWS_MEDIALIVE_API H264Settings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API H264Settings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Enables or disables adaptive quantization (AQ), which is a technique MediaLive
     * can apply to video on a frame-by-frame basis to produce more compression without
     * losing quality. There are three types of adaptive quantization: spatial,
     * temporal, and flicker. We recommend that you set the field to Auto. For more
     * information about all the options, see the topic about video adaptive
     * quantization in the MediaLive user guide.
     */
    inline H264AdaptiveQuantization GetAdaptiveQuantization() const { return m_adaptiveQuantization; }
    inline bool AdaptiveQuantizationHasBeenSet() const { return m_adaptiveQuantizationHasBeenSet; }
    inline void SetAdaptiveQuantization(H264AdaptiveQuantization value) { m_adaptiveQuantizationHasBeenSet = true; m_adaptiveQuantization = value; }
    inline H264Settings& WithAdaptiveQuantization(H264AdaptiveQuantization value) { SetAdaptiveQuantization(value); return *this;}
    ///@}

    ///@{
    /**
     * Indicates that AFD values will be written into the output stream.  If
     * afdSignaling is "auto", the system will try to preserve the input AFD value (in
     * cases where multiple AFD values are valid). If set to "fixed", the AFD value
     * will be the value configured in the fixedAfd parameter.
     */
    inline AfdSignaling GetAfdSignaling() const { return m_afdSignaling; }
    inline bool AfdSignalingHasBeenSet() const { return m_afdSignalingHasBeenSet; }
    inline void SetAfdSignaling(AfdSignaling value) { m_afdSignalingHasBeenSet = true; m_afdSignaling = value; }
    inline H264Settings& WithAfdSignaling(AfdSignaling value) { SetAfdSignaling(value); return *this;}
    ///@}

    ///@{
    /**
     * Average bitrate in bits/second. Required when the rate control mode is VBR or
     * CBR. Not used for QVBR. In an MS Smooth output group, each output must have a
     * unique value when its bitrate is rounded down to the nearest multiple of 1000.
     */
    inline int GetBitrate() const { return m_bitrate; }
    inline bool BitrateHasBeenSet() const { return m_bitrateHasBeenSet; }
    inline void SetBitrate(int value) { m_bitrateHasBeenSet = true; m_bitrate = value; }
    inline H264Settings& WithBitrate(int value) { SetBitrate(value); return *this;}
    ///@}

    ///@{
    /**
     * Percentage of the buffer that should initially be filled (HRD buffer model).
     */
    inline int GetBufFillPct() const { return m_bufFillPct; }
    inline bool BufFillPctHasBeenSet() const { return m_bufFillPctHasBeenSet; }
    inline void SetBufFillPct(int value) { m_bufFillPctHasBeenSet = true; m_bufFillPct = value; }
    inline H264Settings& WithBufFillPct(int value) { SetBufFillPct(value); return *this;}
    ///@}

    ///@{
    /**
     * Size of buffer (HRD buffer model) in bits.
     */
    inline int GetBufSize() const { return m_bufSize; }
    inline bool BufSizeHasBeenSet() const { return m_bufSizeHasBeenSet; }
    inline void SetBufSize(int value) { m_bufSizeHasBeenSet = true; m_bufSize = value; }
    inline H264Settings& WithBufSize(int value) { SetBufSize(value); return *this;}
    ///@}

    ///@{
    /**
     * Includes colorspace metadata in the output.
     */
    inline H264ColorMetadata GetColorMetadata() const { return m_colorMetadata; }
    inline bool ColorMetadataHasBeenSet() const { return m_colorMetadataHasBeenSet; }
    inline void SetColorMetadata(H264ColorMetadata value) { m_colorMetadataHasBeenSet = true; m_colorMetadata = value; }
    inline H264Settings& WithColorMetadata(H264ColorMetadata value) { SetColorMetadata(value); return *this;}
    ///@}

    ///@{
    /**
     * Color Space settings
     */
    inline const H264ColorSpaceSettings& GetColorSpaceSettings() const { return m_colorSpaceSettings; }
    inline bool ColorSpaceSettingsHasBeenSet() const { return m_colorSpaceSettingsHasBeenSet; }
    template<typename ColorSpaceSettingsT = H264ColorSpaceSettings>
    void SetColorSpaceSettings(ColorSpaceSettingsT&& value) { m_colorSpaceSettingsHasBeenSet = true; m_colorSpaceSettings = std::forward<ColorSpaceSettingsT>(value); }
    template<typename ColorSpaceSettingsT = H264ColorSpaceSettings>
    H264Settings& WithColorSpaceSettings(ColorSpaceSettingsT&& value) { SetColorSpaceSettings(std::forward<ColorSpaceSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Entropy encoding mode.  Use cabac (must be in Main or High profile) or cavlc.
     */
    inline H264EntropyEncoding GetEntropyEncoding() const { return m_entropyEncoding; }
    inline bool EntropyEncodingHasBeenSet() const { return m_entropyEncodingHasBeenSet; }
    inline void SetEntropyEncoding(H264EntropyEncoding value) { m_entropyEncodingHasBeenSet = true; m_entropyEncoding = value; }
    inline H264Settings& WithEntropyEncoding(H264EntropyEncoding value) { SetEntropyEncoding(value); return *this;}
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
    inline const H264FilterSettings& GetFilterSettings() const { return m_filterSettings; }
    inline bool FilterSettingsHasBeenSet() const { return m_filterSettingsHasBeenSet; }
    template<typename FilterSettingsT = H264FilterSettings>
    void SetFilterSettings(FilterSettingsT&& value) { m_filterSettingsHasBeenSet = true; m_filterSettings = std::forward<FilterSettingsT>(value); }
    template<typename FilterSettingsT = H264FilterSettings>
    H264Settings& WithFilterSettings(FilterSettingsT&& value) { SetFilterSettings(std::forward<FilterSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Four bit AFD value to write on all frames of video in the output stream. Only
     * valid when afdSignaling is set to 'Fixed'.
     */
    inline FixedAfd GetFixedAfd() const { return m_fixedAfd; }
    inline bool FixedAfdHasBeenSet() const { return m_fixedAfdHasBeenSet; }
    inline void SetFixedAfd(FixedAfd value) { m_fixedAfdHasBeenSet = true; m_fixedAfd = value; }
    inline H264Settings& WithFixedAfd(FixedAfd value) { SetFixedAfd(value); return *this;}
    ///@}

    ///@{
    /**
     * Flicker AQ makes adjustments within each frame to reduce flicker or 'pop' on
     * I-frames. The value to enter in this field depends on the value in the Adaptive
     * quantization field. For more information, see the topic about video adaptive
     * quantization in the MediaLive user guide.
     */
    inline H264FlickerAq GetFlickerAq() const { return m_flickerAq; }
    inline bool FlickerAqHasBeenSet() const { return m_flickerAqHasBeenSet; }
    inline void SetFlickerAq(H264FlickerAq value) { m_flickerAqHasBeenSet = true; m_flickerAq = value; }
    inline H264Settings& WithFlickerAq(H264FlickerAq value) { SetFlickerAq(value); return *this;}
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
    inline H264ForceFieldPictures GetForceFieldPictures() const { return m_forceFieldPictures; }
    inline bool ForceFieldPicturesHasBeenSet() const { return m_forceFieldPicturesHasBeenSet; }
    inline void SetForceFieldPictures(H264ForceFieldPictures value) { m_forceFieldPicturesHasBeenSet = true; m_forceFieldPictures = value; }
    inline H264Settings& WithForceFieldPictures(H264ForceFieldPictures value) { SetForceFieldPictures(value); return *this;}
    ///@}

    ///@{
    /**
     * This field indicates how the output video frame rate is specified.  If
     * "specified" is selected then the output video frame rate is determined by
     * framerateNumerator and framerateDenominator, else if "initializeFromSource" is
     * selected then the output video frame rate will be set equal to the input video
     * frame rate of the first input.
     */
    inline H264FramerateControl GetFramerateControl() const { return m_framerateControl; }
    inline bool FramerateControlHasBeenSet() const { return m_framerateControlHasBeenSet; }
    inline void SetFramerateControl(H264FramerateControl value) { m_framerateControlHasBeenSet = true; m_framerateControl = value; }
    inline H264Settings& WithFramerateControl(H264FramerateControl value) { SetFramerateControl(value); return *this;}
    ///@}

    ///@{
    /**
     * Framerate denominator.
     */
    inline int GetFramerateDenominator() const { return m_framerateDenominator; }
    inline bool FramerateDenominatorHasBeenSet() const { return m_framerateDenominatorHasBeenSet; }
    inline void SetFramerateDenominator(int value) { m_framerateDenominatorHasBeenSet = true; m_framerateDenominator = value; }
    inline H264Settings& WithFramerateDenominator(int value) { SetFramerateDenominator(value); return *this;}
    ///@}

    ///@{
    /**
     * Framerate numerator - framerate is a fraction, e.g. 24000 / 1001 = 23.976 fps.
     */
    inline int GetFramerateNumerator() const { return m_framerateNumerator; }
    inline bool FramerateNumeratorHasBeenSet() const { return m_framerateNumeratorHasBeenSet; }
    inline void SetFramerateNumerator(int value) { m_framerateNumeratorHasBeenSet = true; m_framerateNumerator = value; }
    inline H264Settings& WithFramerateNumerator(int value) { SetFramerateNumerator(value); return *this;}
    ///@}

    ///@{
    /**
     * Documentation update needed
     */
    inline H264GopBReference GetGopBReference() const { return m_gopBReference; }
    inline bool GopBReferenceHasBeenSet() const { return m_gopBReferenceHasBeenSet; }
    inline void SetGopBReference(H264GopBReference value) { m_gopBReferenceHasBeenSet = true; m_gopBReference = value; }
    inline H264Settings& WithGopBReference(H264GopBReference value) { SetGopBReference(value); return *this;}
    ///@}

    ///@{
    /**
     * Frequency of closed GOPs. In streaming applications, it is recommended that this
     * be set to 1 so a decoder joining mid-stream will receive an IDR frame as quickly
     * as possible. Setting this value to 0 will break output segmenting.
     */
    inline int GetGopClosedCadence() const { return m_gopClosedCadence; }
    inline bool GopClosedCadenceHasBeenSet() const { return m_gopClosedCadenceHasBeenSet; }
    inline void SetGopClosedCadence(int value) { m_gopClosedCadenceHasBeenSet = true; m_gopClosedCadence = value; }
    inline H264Settings& WithGopClosedCadence(int value) { SetGopClosedCadence(value); return *this;}
    ///@}

    ///@{
    /**
     * Number of B-frames between reference frames.
     */
    inline int GetGopNumBFrames() const { return m_gopNumBFrames; }
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
    inline double GetGopSize() const { return m_gopSize; }
    inline bool GopSizeHasBeenSet() const { return m_gopSizeHasBeenSet; }
    inline void SetGopSize(double value) { m_gopSizeHasBeenSet = true; m_gopSize = value; }
    inline H264Settings& WithGopSize(double value) { SetGopSize(value); return *this;}
    ///@}

    ///@{
    /**
     * Indicates if the gopSize is specified in frames or seconds. If seconds the
     * system will convert the gopSize into a frame count at run time.
     */
    inline H264GopSizeUnits GetGopSizeUnits() const { return m_gopSizeUnits; }
    inline bool GopSizeUnitsHasBeenSet() const { return m_gopSizeUnitsHasBeenSet; }
    inline void SetGopSizeUnits(H264GopSizeUnits value) { m_gopSizeUnitsHasBeenSet = true; m_gopSizeUnits = value; }
    inline H264Settings& WithGopSizeUnits(H264GopSizeUnits value) { SetGopSizeUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * H.264 Level.
     */
    inline H264Level GetLevel() const { return m_level; }
    inline bool LevelHasBeenSet() const { return m_levelHasBeenSet; }
    inline void SetLevel(H264Level value) { m_levelHasBeenSet = true; m_level = value; }
    inline H264Settings& WithLevel(H264Level value) { SetLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * Amount of lookahead. A value of low can decrease latency and memory usage, while
     * high can produce better quality for certain content.
     */
    inline H264LookAheadRateControl GetLookAheadRateControl() const { return m_lookAheadRateControl; }
    inline bool LookAheadRateControlHasBeenSet() const { return m_lookAheadRateControlHasBeenSet; }
    inline void SetLookAheadRateControl(H264LookAheadRateControl value) { m_lookAheadRateControlHasBeenSet = true; m_lookAheadRateControl = value; }
    inline H264Settings& WithLookAheadRateControl(H264LookAheadRateControl value) { SetLookAheadRateControl(value); return *this;}
    ///@}

    ///@{
    /**
     * For QVBR: See the tooltip for Quality level

For VBR: Set the maximum bitrate in
     * order to accommodate expected spikes in the complexity of the video.
     */
    inline int GetMaxBitrate() const { return m_maxBitrate; }
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
    inline int GetMinIInterval() const { return m_minIInterval; }
    inline bool MinIIntervalHasBeenSet() const { return m_minIIntervalHasBeenSet; }
    inline void SetMinIInterval(int value) { m_minIIntervalHasBeenSet = true; m_minIInterval = value; }
    inline H264Settings& WithMinIInterval(int value) { SetMinIInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * Number of reference frames to use. The encoder may use more than requested if
     * using B-frames and/or interlaced encoding.
     */
    inline int GetNumRefFrames() const { return m_numRefFrames; }
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
    inline H264ParControl GetParControl() const { return m_parControl; }
    inline bool ParControlHasBeenSet() const { return m_parControlHasBeenSet; }
    inline void SetParControl(H264ParControl value) { m_parControlHasBeenSet = true; m_parControl = value; }
    inline H264Settings& WithParControl(H264ParControl value) { SetParControl(value); return *this;}
    ///@}

    ///@{
    /**
     * Pixel Aspect Ratio denominator.
     */
    inline int GetParDenominator() const { return m_parDenominator; }
    inline bool ParDenominatorHasBeenSet() const { return m_parDenominatorHasBeenSet; }
    inline void SetParDenominator(int value) { m_parDenominatorHasBeenSet = true; m_parDenominator = value; }
    inline H264Settings& WithParDenominator(int value) { SetParDenominator(value); return *this;}
    ///@}

    ///@{
    /**
     * Pixel Aspect Ratio numerator.
     */
    inline int GetParNumerator() const { return m_parNumerator; }
    inline bool ParNumeratorHasBeenSet() const { return m_parNumeratorHasBeenSet; }
    inline void SetParNumerator(int value) { m_parNumeratorHasBeenSet = true; m_parNumerator = value; }
    inline H264Settings& WithParNumerator(int value) { SetParNumerator(value); return *this;}
    ///@}

    ///@{
    /**
     * H.264 Profile.
     */
    inline H264Profile GetProfile() const { return m_profile; }
    inline bool ProfileHasBeenSet() const { return m_profileHasBeenSet; }
    inline void SetProfile(H264Profile value) { m_profileHasBeenSet = true; m_profile = value; }
    inline H264Settings& WithProfile(H264Profile value) { SetProfile(value); return *this;}
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
    inline H264QualityLevel GetQualityLevel() const { return m_qualityLevel; }
    inline bool QualityLevelHasBeenSet() const { return m_qualityLevelHasBeenSet; }
    inline void SetQualityLevel(H264QualityLevel value) { m_qualityLevelHasBeenSet = true; m_qualityLevel = value; }
    inline H264Settings& WithQualityLevel(H264QualityLevel value) { SetQualityLevel(value); return *this;}
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
    inline int GetQvbrQualityLevel() const { return m_qvbrQualityLevel; }
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
    inline H264RateControlMode GetRateControlMode() const { return m_rateControlMode; }
    inline bool RateControlModeHasBeenSet() const { return m_rateControlModeHasBeenSet; }
    inline void SetRateControlMode(H264RateControlMode value) { m_rateControlModeHasBeenSet = true; m_rateControlMode = value; }
    inline H264Settings& WithRateControlMode(H264RateControlMode value) { SetRateControlMode(value); return *this;}
    ///@}

    ///@{
    /**
     * Sets the scan type of the output to progressive or top-field-first interlaced.
     */
    inline H264ScanType GetScanType() const { return m_scanType; }
    inline bool ScanTypeHasBeenSet() const { return m_scanTypeHasBeenSet; }
    inline void SetScanType(H264ScanType value) { m_scanTypeHasBeenSet = true; m_scanType = value; }
    inline H264Settings& WithScanType(H264ScanType value) { SetScanType(value); return *this;}
    ///@}

    ///@{
    /**
     * Scene change detection.

- On: inserts I-frames when scene change is detected.
-
     * Off: does not force an I-frame when scene change is detected.
     */
    inline H264SceneChangeDetect GetSceneChangeDetect() const { return m_sceneChangeDetect; }
    inline bool SceneChangeDetectHasBeenSet() const { return m_sceneChangeDetectHasBeenSet; }
    inline void SetSceneChangeDetect(H264SceneChangeDetect value) { m_sceneChangeDetectHasBeenSet = true; m_sceneChangeDetect = value; }
    inline H264Settings& WithSceneChangeDetect(H264SceneChangeDetect value) { SetSceneChangeDetect(value); return *this;}
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
    inline int GetSlices() const { return m_slices; }
    inline bool SlicesHasBeenSet() const { return m_slicesHasBeenSet; }
    inline void SetSlices(int value) { m_slicesHasBeenSet = true; m_slices = value; }
    inline H264Settings& WithSlices(int value) { SetSlices(value); return *this;}
    ///@}

    ///@{
    /**
     * Softness. Selects quantizer matrix, larger values reduce high-frequency content
     * in the encoded image.  If not set to zero, must be greater than 15.
     */
    inline int GetSoftness() const { return m_softness; }
    inline bool SoftnessHasBeenSet() const { return m_softnessHasBeenSet; }
    inline void SetSoftness(int value) { m_softnessHasBeenSet = true; m_softness = value; }
    inline H264Settings& WithSoftness(int value) { SetSoftness(value); return *this;}
    ///@}

    ///@{
    /**
     * Spatial AQ makes adjustments within each frame based on spatial variation of
     * content complexity. The value to enter in this field depends on the value in the
     * Adaptive quantization field. For more information, see the topic about video
     * adaptive quantization in the MediaLive user guide.
     */
    inline H264SpatialAq GetSpatialAq() const { return m_spatialAq; }
    inline bool SpatialAqHasBeenSet() const { return m_spatialAqHasBeenSet; }
    inline void SetSpatialAq(H264SpatialAq value) { m_spatialAqHasBeenSet = true; m_spatialAq = value; }
    inline H264Settings& WithSpatialAq(H264SpatialAq value) { SetSpatialAq(value); return *this;}
    ///@}

    ///@{
    /**
     * If set to fixed, use gopNumBFrames B-frames per sub-GOP. If set to dynamic,
     * optimize the number of B-frames used for each sub-GOP to improve visual quality.
     */
    inline H264SubGopLength GetSubgopLength() const { return m_subgopLength; }
    inline bool SubgopLengthHasBeenSet() const { return m_subgopLengthHasBeenSet; }
    inline void SetSubgopLength(H264SubGopLength value) { m_subgopLengthHasBeenSet = true; m_subgopLength = value; }
    inline H264Settings& WithSubgopLength(H264SubGopLength value) { SetSubgopLength(value); return *this;}
    ///@}

    ///@{
    /**
     * Produces a bitstream compliant with SMPTE RP-2027.
     */
    inline H264Syntax GetSyntax() const { return m_syntax; }
    inline bool SyntaxHasBeenSet() const { return m_syntaxHasBeenSet; }
    inline void SetSyntax(H264Syntax value) { m_syntaxHasBeenSet = true; m_syntax = value; }
    inline H264Settings& WithSyntax(H264Syntax value) { SetSyntax(value); return *this;}
    ///@}

    ///@{
    /**
     * Temporal makes adjustments within each frame based on variations in content
     * complexity over time. The value to enter in this field depends on the value in
     * the Adaptive quantization field. For more information, see the topic about video
     * adaptive quantization in the MediaLive user guide.
     */
    inline H264TemporalAq GetTemporalAq() const { return m_temporalAq; }
    inline bool TemporalAqHasBeenSet() const { return m_temporalAqHasBeenSet; }
    inline void SetTemporalAq(H264TemporalAq value) { m_temporalAqHasBeenSet = true; m_temporalAq = value; }
    inline H264Settings& WithTemporalAq(H264TemporalAq value) { SetTemporalAq(value); return *this;}
    ///@}

    ///@{
    /**
     * Determines how timecodes should be inserted into the video elementary stream.
-
     * 'disabled': Do not include timecodes
- 'picTimingSei': Pass through picture
     * timing SEI messages from the source specified in Timecode Config
     */
    inline H264TimecodeInsertionBehavior GetTimecodeInsertion() const { return m_timecodeInsertion; }
    inline bool TimecodeInsertionHasBeenSet() const { return m_timecodeInsertionHasBeenSet; }
    inline void SetTimecodeInsertion(H264TimecodeInsertionBehavior value) { m_timecodeInsertionHasBeenSet = true; m_timecodeInsertion = value; }
    inline H264Settings& WithTimecodeInsertion(H264TimecodeInsertionBehavior value) { SetTimecodeInsertion(value); return *this;}
    ///@}

    ///@{
    /**
     * Timecode burn-in settings
     */
    inline const TimecodeBurninSettings& GetTimecodeBurninSettings() const { return m_timecodeBurninSettings; }
    inline bool TimecodeBurninSettingsHasBeenSet() const { return m_timecodeBurninSettingsHasBeenSet; }
    template<typename TimecodeBurninSettingsT = TimecodeBurninSettings>
    void SetTimecodeBurninSettings(TimecodeBurninSettingsT&& value) { m_timecodeBurninSettingsHasBeenSet = true; m_timecodeBurninSettings = std::forward<TimecodeBurninSettingsT>(value); }
    template<typename TimecodeBurninSettingsT = TimecodeBurninSettings>
    H264Settings& WithTimecodeBurninSettings(TimecodeBurninSettingsT&& value) { SetTimecodeBurninSettings(std::forward<TimecodeBurninSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Sets the minimum QP. If you aren't familiar with quantization adjustment, leave
     * the field empty. MediaLive will
apply an appropriate value.
     */
    inline int GetMinQp() const { return m_minQp; }
    inline bool MinQpHasBeenSet() const { return m_minQpHasBeenSet; }
    inline void SetMinQp(int value) { m_minQpHasBeenSet = true; m_minQp = value; }
    inline H264Settings& WithMinQp(int value) { SetMinQp(value); return *this;}
    ///@}

    ///@{
    /**
     * Used for QVBR rate control mode only.
Optional.
Enter a minimum bitrate if you
     * want to keep the output bitrate about a threshold, in order to prevent the
     * downstream system from de-allocating network bandwidth for this output.
     */
    inline int GetMinBitrate() const { return m_minBitrate; }
    inline bool MinBitrateHasBeenSet() const { return m_minBitrateHasBeenSet; }
    inline void SetMinBitrate(int value) { m_minBitrateHasBeenSet = true; m_minBitrate = value; }
    inline H264Settings& WithMinBitrate(int value) { SetMinBitrate(value); return *this;}
    ///@}
  private:

    H264AdaptiveQuantization m_adaptiveQuantization{H264AdaptiveQuantization::NOT_SET};
    bool m_adaptiveQuantizationHasBeenSet = false;

    AfdSignaling m_afdSignaling{AfdSignaling::NOT_SET};
    bool m_afdSignalingHasBeenSet = false;

    int m_bitrate{0};
    bool m_bitrateHasBeenSet = false;

    int m_bufFillPct{0};
    bool m_bufFillPctHasBeenSet = false;

    int m_bufSize{0};
    bool m_bufSizeHasBeenSet = false;

    H264ColorMetadata m_colorMetadata{H264ColorMetadata::NOT_SET};
    bool m_colorMetadataHasBeenSet = false;

    H264ColorSpaceSettings m_colorSpaceSettings;
    bool m_colorSpaceSettingsHasBeenSet = false;

    H264EntropyEncoding m_entropyEncoding{H264EntropyEncoding::NOT_SET};
    bool m_entropyEncodingHasBeenSet = false;

    H264FilterSettings m_filterSettings;
    bool m_filterSettingsHasBeenSet = false;

    FixedAfd m_fixedAfd{FixedAfd::NOT_SET};
    bool m_fixedAfdHasBeenSet = false;

    H264FlickerAq m_flickerAq{H264FlickerAq::NOT_SET};
    bool m_flickerAqHasBeenSet = false;

    H264ForceFieldPictures m_forceFieldPictures{H264ForceFieldPictures::NOT_SET};
    bool m_forceFieldPicturesHasBeenSet = false;

    H264FramerateControl m_framerateControl{H264FramerateControl::NOT_SET};
    bool m_framerateControlHasBeenSet = false;

    int m_framerateDenominator{0};
    bool m_framerateDenominatorHasBeenSet = false;

    int m_framerateNumerator{0};
    bool m_framerateNumeratorHasBeenSet = false;

    H264GopBReference m_gopBReference{H264GopBReference::NOT_SET};
    bool m_gopBReferenceHasBeenSet = false;

    int m_gopClosedCadence{0};
    bool m_gopClosedCadenceHasBeenSet = false;

    int m_gopNumBFrames{0};
    bool m_gopNumBFramesHasBeenSet = false;

    double m_gopSize{0.0};
    bool m_gopSizeHasBeenSet = false;

    H264GopSizeUnits m_gopSizeUnits{H264GopSizeUnits::NOT_SET};
    bool m_gopSizeUnitsHasBeenSet = false;

    H264Level m_level{H264Level::NOT_SET};
    bool m_levelHasBeenSet = false;

    H264LookAheadRateControl m_lookAheadRateControl{H264LookAheadRateControl::NOT_SET};
    bool m_lookAheadRateControlHasBeenSet = false;

    int m_maxBitrate{0};
    bool m_maxBitrateHasBeenSet = false;

    int m_minIInterval{0};
    bool m_minIIntervalHasBeenSet = false;

    int m_numRefFrames{0};
    bool m_numRefFramesHasBeenSet = false;

    H264ParControl m_parControl{H264ParControl::NOT_SET};
    bool m_parControlHasBeenSet = false;

    int m_parDenominator{0};
    bool m_parDenominatorHasBeenSet = false;

    int m_parNumerator{0};
    bool m_parNumeratorHasBeenSet = false;

    H264Profile m_profile{H264Profile::NOT_SET};
    bool m_profileHasBeenSet = false;

    H264QualityLevel m_qualityLevel{H264QualityLevel::NOT_SET};
    bool m_qualityLevelHasBeenSet = false;

    int m_qvbrQualityLevel{0};
    bool m_qvbrQualityLevelHasBeenSet = false;

    H264RateControlMode m_rateControlMode{H264RateControlMode::NOT_SET};
    bool m_rateControlModeHasBeenSet = false;

    H264ScanType m_scanType{H264ScanType::NOT_SET};
    bool m_scanTypeHasBeenSet = false;

    H264SceneChangeDetect m_sceneChangeDetect{H264SceneChangeDetect::NOT_SET};
    bool m_sceneChangeDetectHasBeenSet = false;

    int m_slices{0};
    bool m_slicesHasBeenSet = false;

    int m_softness{0};
    bool m_softnessHasBeenSet = false;

    H264SpatialAq m_spatialAq{H264SpatialAq::NOT_SET};
    bool m_spatialAqHasBeenSet = false;

    H264SubGopLength m_subgopLength{H264SubGopLength::NOT_SET};
    bool m_subgopLengthHasBeenSet = false;

    H264Syntax m_syntax{H264Syntax::NOT_SET};
    bool m_syntaxHasBeenSet = false;

    H264TemporalAq m_temporalAq{H264TemporalAq::NOT_SET};
    bool m_temporalAqHasBeenSet = false;

    H264TimecodeInsertionBehavior m_timecodeInsertion{H264TimecodeInsertionBehavior::NOT_SET};
    bool m_timecodeInsertionHasBeenSet = false;

    TimecodeBurninSettings m_timecodeBurninSettings;
    bool m_timecodeBurninSettingsHasBeenSet = false;

    int m_minQp{0};
    bool m_minQpHasBeenSet = false;

    int m_minBitrate{0};
    bool m_minBitrateHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
