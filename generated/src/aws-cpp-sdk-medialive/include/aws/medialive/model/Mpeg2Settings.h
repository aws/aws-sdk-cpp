/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/Mpeg2AdaptiveQuantization.h>
#include <aws/medialive/model/AfdSignaling.h>
#include <aws/medialive/model/Mpeg2ColorMetadata.h>
#include <aws/medialive/model/Mpeg2ColorSpace.h>
#include <aws/medialive/model/Mpeg2DisplayRatio.h>
#include <aws/medialive/model/Mpeg2FilterSettings.h>
#include <aws/medialive/model/FixedAfd.h>
#include <aws/medialive/model/Mpeg2GopSizeUnits.h>
#include <aws/medialive/model/Mpeg2ScanType.h>
#include <aws/medialive/model/Mpeg2SubGopLength.h>
#include <aws/medialive/model/Mpeg2TimecodeInsertionBehavior.h>
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
   * Mpeg2 Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/Mpeg2Settings">AWS
   * API Reference</a></p>
   */
  class Mpeg2Settings
  {
  public:
    AWS_MEDIALIVE_API Mpeg2Settings() = default;
    AWS_MEDIALIVE_API Mpeg2Settings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Mpeg2Settings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Choose Off to disable adaptive quantization. Or choose another value to enable
     * the quantizer and set its strength. The strengths are: Auto, Off, Low, Medium,
     * High. When you enable this field, MediaLive allows intra-frame quantizers to
     * vary, which might improve visual quality.
     */
    inline Mpeg2AdaptiveQuantization GetAdaptiveQuantization() const { return m_adaptiveQuantization; }
    inline bool AdaptiveQuantizationHasBeenSet() const { return m_adaptiveQuantizationHasBeenSet; }
    inline void SetAdaptiveQuantization(Mpeg2AdaptiveQuantization value) { m_adaptiveQuantizationHasBeenSet = true; m_adaptiveQuantization = value; }
    inline Mpeg2Settings& WithAdaptiveQuantization(Mpeg2AdaptiveQuantization value) { SetAdaptiveQuantization(value); return *this;}
    ///@}

    ///@{
    /**
     * Indicates the AFD values that MediaLive will write into the video encode. If you
     * do not know what AFD signaling is, or if your downstream system has not given
     * you guidance, choose AUTO.
AUTO: MediaLive will try to preserve the input AFD
     * value (in cases where multiple AFD values are valid).
FIXED: MediaLive will use
     * the value you specify in fixedAFD.
     */
    inline AfdSignaling GetAfdSignaling() const { return m_afdSignaling; }
    inline bool AfdSignalingHasBeenSet() const { return m_afdSignalingHasBeenSet; }
    inline void SetAfdSignaling(AfdSignaling value) { m_afdSignalingHasBeenSet = true; m_afdSignaling = value; }
    inline Mpeg2Settings& WithAfdSignaling(AfdSignaling value) { SetAfdSignaling(value); return *this;}
    ///@}

    ///@{
    /**
     * Specifies whether to include the color space metadata. The metadata describes
     * the color space that applies to the video (the colorSpace field). We recommend
     * that you insert the metadata.
     */
    inline Mpeg2ColorMetadata GetColorMetadata() const { return m_colorMetadata; }
    inline bool ColorMetadataHasBeenSet() const { return m_colorMetadataHasBeenSet; }
    inline void SetColorMetadata(Mpeg2ColorMetadata value) { m_colorMetadataHasBeenSet = true; m_colorMetadata = value; }
    inline Mpeg2Settings& WithColorMetadata(Mpeg2ColorMetadata value) { SetColorMetadata(value); return *this;}
    ///@}

    ///@{
    /**
     * Choose the type of color space conversion to apply to the output. For detailed
     * information on setting up both the input and the output to obtain the desired
     * color space in the output, see the section on \"MediaLive Features - Video -
     * color space\" in the MediaLive User Guide.
PASSTHROUGH: Keep the color space of
     * the input content - do not convert it.
AUTO:Convert all content that is SD to
     * rec 601, and convert all content that is HD to rec 709.
     */
    inline Mpeg2ColorSpace GetColorSpace() const { return m_colorSpace; }
    inline bool ColorSpaceHasBeenSet() const { return m_colorSpaceHasBeenSet; }
    inline void SetColorSpace(Mpeg2ColorSpace value) { m_colorSpaceHasBeenSet = true; m_colorSpace = value; }
    inline Mpeg2Settings& WithColorSpace(Mpeg2ColorSpace value) { SetColorSpace(value); return *this;}
    ///@}

    ///@{
    /**
     * Sets the pixel aspect ratio for the encode.
     */
    inline Mpeg2DisplayRatio GetDisplayAspectRatio() const { return m_displayAspectRatio; }
    inline bool DisplayAspectRatioHasBeenSet() const { return m_displayAspectRatioHasBeenSet; }
    inline void SetDisplayAspectRatio(Mpeg2DisplayRatio value) { m_displayAspectRatioHasBeenSet = true; m_displayAspectRatio = value; }
    inline Mpeg2Settings& WithDisplayAspectRatio(Mpeg2DisplayRatio value) { SetDisplayAspectRatio(value); return *this;}
    ///@}

    ///@{
    /**
     * Optionally specify a noise reduction filter, which can improve quality of
     * compressed content. If you do not choose a filter, no filter will be
     * applied.
TEMPORAL: This filter is useful for both source content that is noisy
     * (when it has excessive digital artifacts) and source content that is clean.
When
     * the content is noisy, the filter cleans up the source content before the
     * encoding phase, with these two effects: First, it improves the output video
     * quality because the content has been cleaned up. Secondly, it decreases the
     * bandwidth because MediaLive does not waste bits on encoding noise.
When the
     * content is reasonably clean, the filter tends to decrease the bitrate.
     */
    inline const Mpeg2FilterSettings& GetFilterSettings() const { return m_filterSettings; }
    inline bool FilterSettingsHasBeenSet() const { return m_filterSettingsHasBeenSet; }
    template<typename FilterSettingsT = Mpeg2FilterSettings>
    void SetFilterSettings(FilterSettingsT&& value) { m_filterSettingsHasBeenSet = true; m_filterSettings = std::forward<FilterSettingsT>(value); }
    template<typename FilterSettingsT = Mpeg2FilterSettings>
    Mpeg2Settings& WithFilterSettings(FilterSettingsT&& value) { SetFilterSettings(std::forward<FilterSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Complete this field only when afdSignaling is set to FIXED. Enter the AFD value
     * (4 bits) to write on all frames of the video encode.
     */
    inline FixedAfd GetFixedAfd() const { return m_fixedAfd; }
    inline bool FixedAfdHasBeenSet() const { return m_fixedAfdHasBeenSet; }
    inline void SetFixedAfd(FixedAfd value) { m_fixedAfdHasBeenSet = true; m_fixedAfd = value; }
    inline Mpeg2Settings& WithFixedAfd(FixedAfd value) { SetFixedAfd(value); return *this;}
    ///@}

    ///@{
    /**
     * description": "The framerate denominator. For example, 1001. The framerate is
     * the numerator divided by the denominator. For example, 24000 / 1001 = 23.976
     * FPS.
     */
    inline int GetFramerateDenominator() const { return m_framerateDenominator; }
    inline bool FramerateDenominatorHasBeenSet() const { return m_framerateDenominatorHasBeenSet; }
    inline void SetFramerateDenominator(int value) { m_framerateDenominatorHasBeenSet = true; m_framerateDenominator = value; }
    inline Mpeg2Settings& WithFramerateDenominator(int value) { SetFramerateDenominator(value); return *this;}
    ///@}

    ///@{
    /**
     * The framerate numerator. For example, 24000. The framerate is the numerator
     * divided by the denominator. For example, 24000 / 1001 = 23.976 FPS.
     */
    inline int GetFramerateNumerator() const { return m_framerateNumerator; }
    inline bool FramerateNumeratorHasBeenSet() const { return m_framerateNumeratorHasBeenSet; }
    inline void SetFramerateNumerator(int value) { m_framerateNumeratorHasBeenSet = true; m_framerateNumerator = value; }
    inline Mpeg2Settings& WithFramerateNumerator(int value) { SetFramerateNumerator(value); return *this;}
    ///@}

    ///@{
    /**
     * MPEG2: default is open GOP.
     */
    inline int GetGopClosedCadence() const { return m_gopClosedCadence; }
    inline bool GopClosedCadenceHasBeenSet() const { return m_gopClosedCadenceHasBeenSet; }
    inline void SetGopClosedCadence(int value) { m_gopClosedCadenceHasBeenSet = true; m_gopClosedCadence = value; }
    inline Mpeg2Settings& WithGopClosedCadence(int value) { SetGopClosedCadence(value); return *this;}
    ///@}

    ///@{
    /**
     * Relates to the GOP structure. The number of B-frames between reference frames.
     * If you do not know what a B-frame is, use the default.
     */
    inline int GetGopNumBFrames() const { return m_gopNumBFrames; }
    inline bool GopNumBFramesHasBeenSet() const { return m_gopNumBFramesHasBeenSet; }
    inline void SetGopNumBFrames(int value) { m_gopNumBFramesHasBeenSet = true; m_gopNumBFrames = value; }
    inline Mpeg2Settings& WithGopNumBFrames(int value) { SetGopNumBFrames(value); return *this;}
    ///@}

    ///@{
    /**
     * Relates to the GOP structure. The GOP size (keyframe interval) in the units
     * specified in gopSizeUnits. If you do not know what GOP is, use the default.
If
     * gopSizeUnits is frames, then the gopSize must be an integer and must be greater
     * than or equal to 1.
If gopSizeUnits is seconds, the gopSize must be greater than
     * 0, but does not need to be an integer.
     */
    inline double GetGopSize() const { return m_gopSize; }
    inline bool GopSizeHasBeenSet() const { return m_gopSizeHasBeenSet; }
    inline void SetGopSize(double value) { m_gopSizeHasBeenSet = true; m_gopSize = value; }
    inline Mpeg2Settings& WithGopSize(double value) { SetGopSize(value); return *this;}
    ///@}

    ///@{
    /**
     * Relates to the GOP structure. Specifies whether the gopSize is specified in
     * frames or seconds. If you do not plan to change the default gopSize, leave the
     * default. If you specify SECONDS, MediaLive will internally convert the gop size
     * to a frame count.
     */
    inline Mpeg2GopSizeUnits GetGopSizeUnits() const { return m_gopSizeUnits; }
    inline bool GopSizeUnitsHasBeenSet() const { return m_gopSizeUnitsHasBeenSet; }
    inline void SetGopSizeUnits(Mpeg2GopSizeUnits value) { m_gopSizeUnitsHasBeenSet = true; m_gopSizeUnits = value; }
    inline Mpeg2Settings& WithGopSizeUnits(Mpeg2GopSizeUnits value) { SetGopSizeUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * Set the scan type of the output to PROGRESSIVE or INTERLACED (top field first).
     */
    inline Mpeg2ScanType GetScanType() const { return m_scanType; }
    inline bool ScanTypeHasBeenSet() const { return m_scanTypeHasBeenSet; }
    inline void SetScanType(Mpeg2ScanType value) { m_scanTypeHasBeenSet = true; m_scanType = value; }
    inline Mpeg2Settings& WithScanType(Mpeg2ScanType value) { SetScanType(value); return *this;}
    ///@}

    ///@{
    /**
     * Relates to the GOP structure. If you do not know what GOP is, use the
     * default.
FIXED: Set the number of B-frames in each sub-GOP to the value in
     * gopNumBFrames.
DYNAMIC: Let MediaLive optimize the number of B-frames in each
     * sub-GOP, to improve visual quality.
     */
    inline Mpeg2SubGopLength GetSubgopLength() const { return m_subgopLength; }
    inline bool SubgopLengthHasBeenSet() const { return m_subgopLengthHasBeenSet; }
    inline void SetSubgopLength(Mpeg2SubGopLength value) { m_subgopLengthHasBeenSet = true; m_subgopLength = value; }
    inline Mpeg2Settings& WithSubgopLength(Mpeg2SubGopLength value) { SetSubgopLength(value); return *this;}
    ///@}

    ///@{
    /**
     * Determines how MediaLive inserts timecodes in the output video. For detailed
     * information about setting up the input and the output for a timecode, see the
     * section on \"MediaLive Features - Timecode configuration\" in the MediaLive User
     * Guide.
DISABLED: do not include timecodes.
GOP_TIMECODE: Include timecode
     * metadata in the GOP header.
     */
    inline Mpeg2TimecodeInsertionBehavior GetTimecodeInsertion() const { return m_timecodeInsertion; }
    inline bool TimecodeInsertionHasBeenSet() const { return m_timecodeInsertionHasBeenSet; }
    inline void SetTimecodeInsertion(Mpeg2TimecodeInsertionBehavior value) { m_timecodeInsertionHasBeenSet = true; m_timecodeInsertion = value; }
    inline Mpeg2Settings& WithTimecodeInsertion(Mpeg2TimecodeInsertionBehavior value) { SetTimecodeInsertion(value); return *this;}
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
    Mpeg2Settings& WithTimecodeBurninSettings(TimecodeBurninSettingsT&& value) { SetTimecodeBurninSettings(std::forward<TimecodeBurninSettingsT>(value)); return *this;}
    ///@}
  private:

    Mpeg2AdaptiveQuantization m_adaptiveQuantization{Mpeg2AdaptiveQuantization::NOT_SET};
    bool m_adaptiveQuantizationHasBeenSet = false;

    AfdSignaling m_afdSignaling{AfdSignaling::NOT_SET};
    bool m_afdSignalingHasBeenSet = false;

    Mpeg2ColorMetadata m_colorMetadata{Mpeg2ColorMetadata::NOT_SET};
    bool m_colorMetadataHasBeenSet = false;

    Mpeg2ColorSpace m_colorSpace{Mpeg2ColorSpace::NOT_SET};
    bool m_colorSpaceHasBeenSet = false;

    Mpeg2DisplayRatio m_displayAspectRatio{Mpeg2DisplayRatio::NOT_SET};
    bool m_displayAspectRatioHasBeenSet = false;

    Mpeg2FilterSettings m_filterSettings;
    bool m_filterSettingsHasBeenSet = false;

    FixedAfd m_fixedAfd{FixedAfd::NOT_SET};
    bool m_fixedAfdHasBeenSet = false;

    int m_framerateDenominator{0};
    bool m_framerateDenominatorHasBeenSet = false;

    int m_framerateNumerator{0};
    bool m_framerateNumeratorHasBeenSet = false;

    int m_gopClosedCadence{0};
    bool m_gopClosedCadenceHasBeenSet = false;

    int m_gopNumBFrames{0};
    bool m_gopNumBFramesHasBeenSet = false;

    double m_gopSize{0.0};
    bool m_gopSizeHasBeenSet = false;

    Mpeg2GopSizeUnits m_gopSizeUnits{Mpeg2GopSizeUnits::NOT_SET};
    bool m_gopSizeUnitsHasBeenSet = false;

    Mpeg2ScanType m_scanType{Mpeg2ScanType::NOT_SET};
    bool m_scanTypeHasBeenSet = false;

    Mpeg2SubGopLength m_subgopLength{Mpeg2SubGopLength::NOT_SET};
    bool m_subgopLengthHasBeenSet = false;

    Mpeg2TimecodeInsertionBehavior m_timecodeInsertion{Mpeg2TimecodeInsertionBehavior::NOT_SET};
    bool m_timecodeInsertionHasBeenSet = false;

    TimecodeBurninSettings m_timecodeBurninSettings;
    bool m_timecodeBurninSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
