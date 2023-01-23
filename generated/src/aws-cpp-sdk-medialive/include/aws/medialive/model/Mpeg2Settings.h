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
    AWS_MEDIALIVE_API Mpeg2Settings();
    AWS_MEDIALIVE_API Mpeg2Settings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Mpeg2Settings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Choose Off to disable adaptive quantization. Or choose another value to enable
     * the quantizer and set its strength. The strengths are: Auto, Off, Low, Medium,
     * High. When you enable this field, MediaLive allows intra-frame quantizers to
     * vary, which might improve visual quality.
     */
    inline const Mpeg2AdaptiveQuantization& GetAdaptiveQuantization() const{ return m_adaptiveQuantization; }

    /**
     * Choose Off to disable adaptive quantization. Or choose another value to enable
     * the quantizer and set its strength. The strengths are: Auto, Off, Low, Medium,
     * High. When you enable this field, MediaLive allows intra-frame quantizers to
     * vary, which might improve visual quality.
     */
    inline bool AdaptiveQuantizationHasBeenSet() const { return m_adaptiveQuantizationHasBeenSet; }

    /**
     * Choose Off to disable adaptive quantization. Or choose another value to enable
     * the quantizer and set its strength. The strengths are: Auto, Off, Low, Medium,
     * High. When you enable this field, MediaLive allows intra-frame quantizers to
     * vary, which might improve visual quality.
     */
    inline void SetAdaptiveQuantization(const Mpeg2AdaptiveQuantization& value) { m_adaptiveQuantizationHasBeenSet = true; m_adaptiveQuantization = value; }

    /**
     * Choose Off to disable adaptive quantization. Or choose another value to enable
     * the quantizer and set its strength. The strengths are: Auto, Off, Low, Medium,
     * High. When you enable this field, MediaLive allows intra-frame quantizers to
     * vary, which might improve visual quality.
     */
    inline void SetAdaptiveQuantization(Mpeg2AdaptiveQuantization&& value) { m_adaptiveQuantizationHasBeenSet = true; m_adaptiveQuantization = std::move(value); }

    /**
     * Choose Off to disable adaptive quantization. Or choose another value to enable
     * the quantizer and set its strength. The strengths are: Auto, Off, Low, Medium,
     * High. When you enable this field, MediaLive allows intra-frame quantizers to
     * vary, which might improve visual quality.
     */
    inline Mpeg2Settings& WithAdaptiveQuantization(const Mpeg2AdaptiveQuantization& value) { SetAdaptiveQuantization(value); return *this;}

    /**
     * Choose Off to disable adaptive quantization. Or choose another value to enable
     * the quantizer and set its strength. The strengths are: Auto, Off, Low, Medium,
     * High. When you enable this field, MediaLive allows intra-frame quantizers to
     * vary, which might improve visual quality.
     */
    inline Mpeg2Settings& WithAdaptiveQuantization(Mpeg2AdaptiveQuantization&& value) { SetAdaptiveQuantization(std::move(value)); return *this;}


    /**
     * Indicates the AFD values that MediaLive will write into the video encode. If you
     * do not know what AFD signaling is, or if your downstream system has not given
     * you guidance, choose AUTO.
AUTO: MediaLive will try to preserve the input AFD
     * value (in cases where multiple AFD values are valid).
FIXED: MediaLive will use
     * the value you specify in fixedAFD.
     */
    inline const AfdSignaling& GetAfdSignaling() const{ return m_afdSignaling; }

    /**
     * Indicates the AFD values that MediaLive will write into the video encode. If you
     * do not know what AFD signaling is, or if your downstream system has not given
     * you guidance, choose AUTO.
AUTO: MediaLive will try to preserve the input AFD
     * value (in cases where multiple AFD values are valid).
FIXED: MediaLive will use
     * the value you specify in fixedAFD.
     */
    inline bool AfdSignalingHasBeenSet() const { return m_afdSignalingHasBeenSet; }

    /**
     * Indicates the AFD values that MediaLive will write into the video encode. If you
     * do not know what AFD signaling is, or if your downstream system has not given
     * you guidance, choose AUTO.
AUTO: MediaLive will try to preserve the input AFD
     * value (in cases where multiple AFD values are valid).
FIXED: MediaLive will use
     * the value you specify in fixedAFD.
     */
    inline void SetAfdSignaling(const AfdSignaling& value) { m_afdSignalingHasBeenSet = true; m_afdSignaling = value; }

    /**
     * Indicates the AFD values that MediaLive will write into the video encode. If you
     * do not know what AFD signaling is, or if your downstream system has not given
     * you guidance, choose AUTO.
AUTO: MediaLive will try to preserve the input AFD
     * value (in cases where multiple AFD values are valid).
FIXED: MediaLive will use
     * the value you specify in fixedAFD.
     */
    inline void SetAfdSignaling(AfdSignaling&& value) { m_afdSignalingHasBeenSet = true; m_afdSignaling = std::move(value); }

    /**
     * Indicates the AFD values that MediaLive will write into the video encode. If you
     * do not know what AFD signaling is, or if your downstream system has not given
     * you guidance, choose AUTO.
AUTO: MediaLive will try to preserve the input AFD
     * value (in cases where multiple AFD values are valid).
FIXED: MediaLive will use
     * the value you specify in fixedAFD.
     */
    inline Mpeg2Settings& WithAfdSignaling(const AfdSignaling& value) { SetAfdSignaling(value); return *this;}

    /**
     * Indicates the AFD values that MediaLive will write into the video encode. If you
     * do not know what AFD signaling is, or if your downstream system has not given
     * you guidance, choose AUTO.
AUTO: MediaLive will try to preserve the input AFD
     * value (in cases where multiple AFD values are valid).
FIXED: MediaLive will use
     * the value you specify in fixedAFD.
     */
    inline Mpeg2Settings& WithAfdSignaling(AfdSignaling&& value) { SetAfdSignaling(std::move(value)); return *this;}


    /**
     * Specifies whether to include the color space metadata. The metadata describes
     * the color space that applies to the video (the colorSpace field). We recommend
     * that you insert the metadata.
     */
    inline const Mpeg2ColorMetadata& GetColorMetadata() const{ return m_colorMetadata; }

    /**
     * Specifies whether to include the color space metadata. The metadata describes
     * the color space that applies to the video (the colorSpace field). We recommend
     * that you insert the metadata.
     */
    inline bool ColorMetadataHasBeenSet() const { return m_colorMetadataHasBeenSet; }

    /**
     * Specifies whether to include the color space metadata. The metadata describes
     * the color space that applies to the video (the colorSpace field). We recommend
     * that you insert the metadata.
     */
    inline void SetColorMetadata(const Mpeg2ColorMetadata& value) { m_colorMetadataHasBeenSet = true; m_colorMetadata = value; }

    /**
     * Specifies whether to include the color space metadata. The metadata describes
     * the color space that applies to the video (the colorSpace field). We recommend
     * that you insert the metadata.
     */
    inline void SetColorMetadata(Mpeg2ColorMetadata&& value) { m_colorMetadataHasBeenSet = true; m_colorMetadata = std::move(value); }

    /**
     * Specifies whether to include the color space metadata. The metadata describes
     * the color space that applies to the video (the colorSpace field). We recommend
     * that you insert the metadata.
     */
    inline Mpeg2Settings& WithColorMetadata(const Mpeg2ColorMetadata& value) { SetColorMetadata(value); return *this;}

    /**
     * Specifies whether to include the color space metadata. The metadata describes
     * the color space that applies to the video (the colorSpace field). We recommend
     * that you insert the metadata.
     */
    inline Mpeg2Settings& WithColorMetadata(Mpeg2ColorMetadata&& value) { SetColorMetadata(std::move(value)); return *this;}


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
    inline const Mpeg2ColorSpace& GetColorSpace() const{ return m_colorSpace; }

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
    inline bool ColorSpaceHasBeenSet() const { return m_colorSpaceHasBeenSet; }

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
    inline void SetColorSpace(const Mpeg2ColorSpace& value) { m_colorSpaceHasBeenSet = true; m_colorSpace = value; }

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
    inline void SetColorSpace(Mpeg2ColorSpace&& value) { m_colorSpaceHasBeenSet = true; m_colorSpace = std::move(value); }

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
    inline Mpeg2Settings& WithColorSpace(const Mpeg2ColorSpace& value) { SetColorSpace(value); return *this;}

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
    inline Mpeg2Settings& WithColorSpace(Mpeg2ColorSpace&& value) { SetColorSpace(std::move(value)); return *this;}


    /**
     * Sets the pixel aspect ratio for the encode.
     */
    inline const Mpeg2DisplayRatio& GetDisplayAspectRatio() const{ return m_displayAspectRatio; }

    /**
     * Sets the pixel aspect ratio for the encode.
     */
    inline bool DisplayAspectRatioHasBeenSet() const { return m_displayAspectRatioHasBeenSet; }

    /**
     * Sets the pixel aspect ratio for the encode.
     */
    inline void SetDisplayAspectRatio(const Mpeg2DisplayRatio& value) { m_displayAspectRatioHasBeenSet = true; m_displayAspectRatio = value; }

    /**
     * Sets the pixel aspect ratio for the encode.
     */
    inline void SetDisplayAspectRatio(Mpeg2DisplayRatio&& value) { m_displayAspectRatioHasBeenSet = true; m_displayAspectRatio = std::move(value); }

    /**
     * Sets the pixel aspect ratio for the encode.
     */
    inline Mpeg2Settings& WithDisplayAspectRatio(const Mpeg2DisplayRatio& value) { SetDisplayAspectRatio(value); return *this;}

    /**
     * Sets the pixel aspect ratio for the encode.
     */
    inline Mpeg2Settings& WithDisplayAspectRatio(Mpeg2DisplayRatio&& value) { SetDisplayAspectRatio(std::move(value)); return *this;}


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
    inline const Mpeg2FilterSettings& GetFilterSettings() const{ return m_filterSettings; }

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
    inline bool FilterSettingsHasBeenSet() const { return m_filterSettingsHasBeenSet; }

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
    inline void SetFilterSettings(const Mpeg2FilterSettings& value) { m_filterSettingsHasBeenSet = true; m_filterSettings = value; }

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
    inline void SetFilterSettings(Mpeg2FilterSettings&& value) { m_filterSettingsHasBeenSet = true; m_filterSettings = std::move(value); }

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
    inline Mpeg2Settings& WithFilterSettings(const Mpeg2FilterSettings& value) { SetFilterSettings(value); return *this;}

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
    inline Mpeg2Settings& WithFilterSettings(Mpeg2FilterSettings&& value) { SetFilterSettings(std::move(value)); return *this;}


    /**
     * Complete this field only when afdSignaling is set to FIXED. Enter the AFD value
     * (4 bits) to write on all frames of the video encode.
     */
    inline const FixedAfd& GetFixedAfd() const{ return m_fixedAfd; }

    /**
     * Complete this field only when afdSignaling is set to FIXED. Enter the AFD value
     * (4 bits) to write on all frames of the video encode.
     */
    inline bool FixedAfdHasBeenSet() const { return m_fixedAfdHasBeenSet; }

    /**
     * Complete this field only when afdSignaling is set to FIXED. Enter the AFD value
     * (4 bits) to write on all frames of the video encode.
     */
    inline void SetFixedAfd(const FixedAfd& value) { m_fixedAfdHasBeenSet = true; m_fixedAfd = value; }

    /**
     * Complete this field only when afdSignaling is set to FIXED. Enter the AFD value
     * (4 bits) to write on all frames of the video encode.
     */
    inline void SetFixedAfd(FixedAfd&& value) { m_fixedAfdHasBeenSet = true; m_fixedAfd = std::move(value); }

    /**
     * Complete this field only when afdSignaling is set to FIXED. Enter the AFD value
     * (4 bits) to write on all frames of the video encode.
     */
    inline Mpeg2Settings& WithFixedAfd(const FixedAfd& value) { SetFixedAfd(value); return *this;}

    /**
     * Complete this field only when afdSignaling is set to FIXED. Enter the AFD value
     * (4 bits) to write on all frames of the video encode.
     */
    inline Mpeg2Settings& WithFixedAfd(FixedAfd&& value) { SetFixedAfd(std::move(value)); return *this;}


    /**
     * description": "The framerate denominator. For example, 1001. The framerate is
     * the numerator divided by the denominator. For example, 24000 / 1001 = 23.976
     * FPS.
     */
    inline int GetFramerateDenominator() const{ return m_framerateDenominator; }

    /**
     * description": "The framerate denominator. For example, 1001. The framerate is
     * the numerator divided by the denominator. For example, 24000 / 1001 = 23.976
     * FPS.
     */
    inline bool FramerateDenominatorHasBeenSet() const { return m_framerateDenominatorHasBeenSet; }

    /**
     * description": "The framerate denominator. For example, 1001. The framerate is
     * the numerator divided by the denominator. For example, 24000 / 1001 = 23.976
     * FPS.
     */
    inline void SetFramerateDenominator(int value) { m_framerateDenominatorHasBeenSet = true; m_framerateDenominator = value; }

    /**
     * description": "The framerate denominator. For example, 1001. The framerate is
     * the numerator divided by the denominator. For example, 24000 / 1001 = 23.976
     * FPS.
     */
    inline Mpeg2Settings& WithFramerateDenominator(int value) { SetFramerateDenominator(value); return *this;}


    /**
     * The framerate numerator. For example, 24000. The framerate is the numerator
     * divided by the denominator. For example, 24000 / 1001 = 23.976 FPS.
     */
    inline int GetFramerateNumerator() const{ return m_framerateNumerator; }

    /**
     * The framerate numerator. For example, 24000. The framerate is the numerator
     * divided by the denominator. For example, 24000 / 1001 = 23.976 FPS.
     */
    inline bool FramerateNumeratorHasBeenSet() const { return m_framerateNumeratorHasBeenSet; }

    /**
     * The framerate numerator. For example, 24000. The framerate is the numerator
     * divided by the denominator. For example, 24000 / 1001 = 23.976 FPS.
     */
    inline void SetFramerateNumerator(int value) { m_framerateNumeratorHasBeenSet = true; m_framerateNumerator = value; }

    /**
     * The framerate numerator. For example, 24000. The framerate is the numerator
     * divided by the denominator. For example, 24000 / 1001 = 23.976 FPS.
     */
    inline Mpeg2Settings& WithFramerateNumerator(int value) { SetFramerateNumerator(value); return *this;}


    /**
     * MPEG2: default is open GOP.
     */
    inline int GetGopClosedCadence() const{ return m_gopClosedCadence; }

    /**
     * MPEG2: default is open GOP.
     */
    inline bool GopClosedCadenceHasBeenSet() const { return m_gopClosedCadenceHasBeenSet; }

    /**
     * MPEG2: default is open GOP.
     */
    inline void SetGopClosedCadence(int value) { m_gopClosedCadenceHasBeenSet = true; m_gopClosedCadence = value; }

    /**
     * MPEG2: default is open GOP.
     */
    inline Mpeg2Settings& WithGopClosedCadence(int value) { SetGopClosedCadence(value); return *this;}


    /**
     * Relates to the GOP structure. The number of B-frames between reference frames.
     * If you do not know what a B-frame is, use the default.
     */
    inline int GetGopNumBFrames() const{ return m_gopNumBFrames; }

    /**
     * Relates to the GOP structure. The number of B-frames between reference frames.
     * If you do not know what a B-frame is, use the default.
     */
    inline bool GopNumBFramesHasBeenSet() const { return m_gopNumBFramesHasBeenSet; }

    /**
     * Relates to the GOP structure. The number of B-frames between reference frames.
     * If you do not know what a B-frame is, use the default.
     */
    inline void SetGopNumBFrames(int value) { m_gopNumBFramesHasBeenSet = true; m_gopNumBFrames = value; }

    /**
     * Relates to the GOP structure. The number of B-frames between reference frames.
     * If you do not know what a B-frame is, use the default.
     */
    inline Mpeg2Settings& WithGopNumBFrames(int value) { SetGopNumBFrames(value); return *this;}


    /**
     * Relates to the GOP structure. The GOP size (keyframe interval) in the units
     * specified in gopSizeUnits. If you do not know what GOP is, use the default.
If
     * gopSizeUnits is frames, then the gopSize must be an integer and must be greater
     * than or equal to 1.
If gopSizeUnits is seconds, the gopSize must be greater than
     * 0, but does not need to be an integer.
     */
    inline double GetGopSize() const{ return m_gopSize; }

    /**
     * Relates to the GOP structure. The GOP size (keyframe interval) in the units
     * specified in gopSizeUnits. If you do not know what GOP is, use the default.
If
     * gopSizeUnits is frames, then the gopSize must be an integer and must be greater
     * than or equal to 1.
If gopSizeUnits is seconds, the gopSize must be greater than
     * 0, but does not need to be an integer.
     */
    inline bool GopSizeHasBeenSet() const { return m_gopSizeHasBeenSet; }

    /**
     * Relates to the GOP structure. The GOP size (keyframe interval) in the units
     * specified in gopSizeUnits. If you do not know what GOP is, use the default.
If
     * gopSizeUnits is frames, then the gopSize must be an integer and must be greater
     * than or equal to 1.
If gopSizeUnits is seconds, the gopSize must be greater than
     * 0, but does not need to be an integer.
     */
    inline void SetGopSize(double value) { m_gopSizeHasBeenSet = true; m_gopSize = value; }

    /**
     * Relates to the GOP structure. The GOP size (keyframe interval) in the units
     * specified in gopSizeUnits. If you do not know what GOP is, use the default.
If
     * gopSizeUnits is frames, then the gopSize must be an integer and must be greater
     * than or equal to 1.
If gopSizeUnits is seconds, the gopSize must be greater than
     * 0, but does not need to be an integer.
     */
    inline Mpeg2Settings& WithGopSize(double value) { SetGopSize(value); return *this;}


    /**
     * Relates to the GOP structure. Specifies whether the gopSize is specified in
     * frames or seconds. If you do not plan to change the default gopSize, leave the
     * default. If you specify SECONDS, MediaLive will internally convert the gop size
     * to a frame count.
     */
    inline const Mpeg2GopSizeUnits& GetGopSizeUnits() const{ return m_gopSizeUnits; }

    /**
     * Relates to the GOP structure. Specifies whether the gopSize is specified in
     * frames or seconds. If you do not plan to change the default gopSize, leave the
     * default. If you specify SECONDS, MediaLive will internally convert the gop size
     * to a frame count.
     */
    inline bool GopSizeUnitsHasBeenSet() const { return m_gopSizeUnitsHasBeenSet; }

    /**
     * Relates to the GOP structure. Specifies whether the gopSize is specified in
     * frames or seconds. If you do not plan to change the default gopSize, leave the
     * default. If you specify SECONDS, MediaLive will internally convert the gop size
     * to a frame count.
     */
    inline void SetGopSizeUnits(const Mpeg2GopSizeUnits& value) { m_gopSizeUnitsHasBeenSet = true; m_gopSizeUnits = value; }

    /**
     * Relates to the GOP structure. Specifies whether the gopSize is specified in
     * frames or seconds. If you do not plan to change the default gopSize, leave the
     * default. If you specify SECONDS, MediaLive will internally convert the gop size
     * to a frame count.
     */
    inline void SetGopSizeUnits(Mpeg2GopSizeUnits&& value) { m_gopSizeUnitsHasBeenSet = true; m_gopSizeUnits = std::move(value); }

    /**
     * Relates to the GOP structure. Specifies whether the gopSize is specified in
     * frames or seconds. If you do not plan to change the default gopSize, leave the
     * default. If you specify SECONDS, MediaLive will internally convert the gop size
     * to a frame count.
     */
    inline Mpeg2Settings& WithGopSizeUnits(const Mpeg2GopSizeUnits& value) { SetGopSizeUnits(value); return *this;}

    /**
     * Relates to the GOP structure. Specifies whether the gopSize is specified in
     * frames or seconds. If you do not plan to change the default gopSize, leave the
     * default. If you specify SECONDS, MediaLive will internally convert the gop size
     * to a frame count.
     */
    inline Mpeg2Settings& WithGopSizeUnits(Mpeg2GopSizeUnits&& value) { SetGopSizeUnits(std::move(value)); return *this;}


    /**
     * Set the scan type of the output to PROGRESSIVE or INTERLACED (top field first).
     */
    inline const Mpeg2ScanType& GetScanType() const{ return m_scanType; }

    /**
     * Set the scan type of the output to PROGRESSIVE or INTERLACED (top field first).
     */
    inline bool ScanTypeHasBeenSet() const { return m_scanTypeHasBeenSet; }

    /**
     * Set the scan type of the output to PROGRESSIVE or INTERLACED (top field first).
     */
    inline void SetScanType(const Mpeg2ScanType& value) { m_scanTypeHasBeenSet = true; m_scanType = value; }

    /**
     * Set the scan type of the output to PROGRESSIVE or INTERLACED (top field first).
     */
    inline void SetScanType(Mpeg2ScanType&& value) { m_scanTypeHasBeenSet = true; m_scanType = std::move(value); }

    /**
     * Set the scan type of the output to PROGRESSIVE or INTERLACED (top field first).
     */
    inline Mpeg2Settings& WithScanType(const Mpeg2ScanType& value) { SetScanType(value); return *this;}

    /**
     * Set the scan type of the output to PROGRESSIVE or INTERLACED (top field first).
     */
    inline Mpeg2Settings& WithScanType(Mpeg2ScanType&& value) { SetScanType(std::move(value)); return *this;}


    /**
     * Relates to the GOP structure. If you do not know what GOP is, use the
     * default.
FIXED: Set the number of B-frames in each sub-GOP to the value in
     * gopNumBFrames.
DYNAMIC: Let MediaLive optimize the number of B-frames in each
     * sub-GOP, to improve visual quality.
     */
    inline const Mpeg2SubGopLength& GetSubgopLength() const{ return m_subgopLength; }

    /**
     * Relates to the GOP structure. If you do not know what GOP is, use the
     * default.
FIXED: Set the number of B-frames in each sub-GOP to the value in
     * gopNumBFrames.
DYNAMIC: Let MediaLive optimize the number of B-frames in each
     * sub-GOP, to improve visual quality.
     */
    inline bool SubgopLengthHasBeenSet() const { return m_subgopLengthHasBeenSet; }

    /**
     * Relates to the GOP structure. If you do not know what GOP is, use the
     * default.
FIXED: Set the number of B-frames in each sub-GOP to the value in
     * gopNumBFrames.
DYNAMIC: Let MediaLive optimize the number of B-frames in each
     * sub-GOP, to improve visual quality.
     */
    inline void SetSubgopLength(const Mpeg2SubGopLength& value) { m_subgopLengthHasBeenSet = true; m_subgopLength = value; }

    /**
     * Relates to the GOP structure. If you do not know what GOP is, use the
     * default.
FIXED: Set the number of B-frames in each sub-GOP to the value in
     * gopNumBFrames.
DYNAMIC: Let MediaLive optimize the number of B-frames in each
     * sub-GOP, to improve visual quality.
     */
    inline void SetSubgopLength(Mpeg2SubGopLength&& value) { m_subgopLengthHasBeenSet = true; m_subgopLength = std::move(value); }

    /**
     * Relates to the GOP structure. If you do not know what GOP is, use the
     * default.
FIXED: Set the number of B-frames in each sub-GOP to the value in
     * gopNumBFrames.
DYNAMIC: Let MediaLive optimize the number of B-frames in each
     * sub-GOP, to improve visual quality.
     */
    inline Mpeg2Settings& WithSubgopLength(const Mpeg2SubGopLength& value) { SetSubgopLength(value); return *this;}

    /**
     * Relates to the GOP structure. If you do not know what GOP is, use the
     * default.
FIXED: Set the number of B-frames in each sub-GOP to the value in
     * gopNumBFrames.
DYNAMIC: Let MediaLive optimize the number of B-frames in each
     * sub-GOP, to improve visual quality.
     */
    inline Mpeg2Settings& WithSubgopLength(Mpeg2SubGopLength&& value) { SetSubgopLength(std::move(value)); return *this;}


    /**
     * Determines how MediaLive inserts timecodes in the output video. For detailed
     * information about setting up the input and the output for a timecode, see the
     * section on \"MediaLive Features - Timecode configuration\" in the MediaLive User
     * Guide.
DISABLED: do not include timecodes.
GOP_TIMECODE: Include timecode
     * metadata in the GOP header.
     */
    inline const Mpeg2TimecodeInsertionBehavior& GetTimecodeInsertion() const{ return m_timecodeInsertion; }

    /**
     * Determines how MediaLive inserts timecodes in the output video. For detailed
     * information about setting up the input and the output for a timecode, see the
     * section on \"MediaLive Features - Timecode configuration\" in the MediaLive User
     * Guide.
DISABLED: do not include timecodes.
GOP_TIMECODE: Include timecode
     * metadata in the GOP header.
     */
    inline bool TimecodeInsertionHasBeenSet() const { return m_timecodeInsertionHasBeenSet; }

    /**
     * Determines how MediaLive inserts timecodes in the output video. For detailed
     * information about setting up the input and the output for a timecode, see the
     * section on \"MediaLive Features - Timecode configuration\" in the MediaLive User
     * Guide.
DISABLED: do not include timecodes.
GOP_TIMECODE: Include timecode
     * metadata in the GOP header.
     */
    inline void SetTimecodeInsertion(const Mpeg2TimecodeInsertionBehavior& value) { m_timecodeInsertionHasBeenSet = true; m_timecodeInsertion = value; }

    /**
     * Determines how MediaLive inserts timecodes in the output video. For detailed
     * information about setting up the input and the output for a timecode, see the
     * section on \"MediaLive Features - Timecode configuration\" in the MediaLive User
     * Guide.
DISABLED: do not include timecodes.
GOP_TIMECODE: Include timecode
     * metadata in the GOP header.
     */
    inline void SetTimecodeInsertion(Mpeg2TimecodeInsertionBehavior&& value) { m_timecodeInsertionHasBeenSet = true; m_timecodeInsertion = std::move(value); }

    /**
     * Determines how MediaLive inserts timecodes in the output video. For detailed
     * information about setting up the input and the output for a timecode, see the
     * section on \"MediaLive Features - Timecode configuration\" in the MediaLive User
     * Guide.
DISABLED: do not include timecodes.
GOP_TIMECODE: Include timecode
     * metadata in the GOP header.
     */
    inline Mpeg2Settings& WithTimecodeInsertion(const Mpeg2TimecodeInsertionBehavior& value) { SetTimecodeInsertion(value); return *this;}

    /**
     * Determines how MediaLive inserts timecodes in the output video. For detailed
     * information about setting up the input and the output for a timecode, see the
     * section on \"MediaLive Features - Timecode configuration\" in the MediaLive User
     * Guide.
DISABLED: do not include timecodes.
GOP_TIMECODE: Include timecode
     * metadata in the GOP header.
     */
    inline Mpeg2Settings& WithTimecodeInsertion(Mpeg2TimecodeInsertionBehavior&& value) { SetTimecodeInsertion(std::move(value)); return *this;}


    /**
     * Timecode burn-in settings
     */
    inline const TimecodeBurninSettings& GetTimecodeBurninSettings() const{ return m_timecodeBurninSettings; }

    /**
     * Timecode burn-in settings
     */
    inline bool TimecodeBurninSettingsHasBeenSet() const { return m_timecodeBurninSettingsHasBeenSet; }

    /**
     * Timecode burn-in settings
     */
    inline void SetTimecodeBurninSettings(const TimecodeBurninSettings& value) { m_timecodeBurninSettingsHasBeenSet = true; m_timecodeBurninSettings = value; }

    /**
     * Timecode burn-in settings
     */
    inline void SetTimecodeBurninSettings(TimecodeBurninSettings&& value) { m_timecodeBurninSettingsHasBeenSet = true; m_timecodeBurninSettings = std::move(value); }

    /**
     * Timecode burn-in settings
     */
    inline Mpeg2Settings& WithTimecodeBurninSettings(const TimecodeBurninSettings& value) { SetTimecodeBurninSettings(value); return *this;}

    /**
     * Timecode burn-in settings
     */
    inline Mpeg2Settings& WithTimecodeBurninSettings(TimecodeBurninSettings&& value) { SetTimecodeBurninSettings(std::move(value)); return *this;}

  private:

    Mpeg2AdaptiveQuantization m_adaptiveQuantization;
    bool m_adaptiveQuantizationHasBeenSet = false;

    AfdSignaling m_afdSignaling;
    bool m_afdSignalingHasBeenSet = false;

    Mpeg2ColorMetadata m_colorMetadata;
    bool m_colorMetadataHasBeenSet = false;

    Mpeg2ColorSpace m_colorSpace;
    bool m_colorSpaceHasBeenSet = false;

    Mpeg2DisplayRatio m_displayAspectRatio;
    bool m_displayAspectRatioHasBeenSet = false;

    Mpeg2FilterSettings m_filterSettings;
    bool m_filterSettingsHasBeenSet = false;

    FixedAfd m_fixedAfd;
    bool m_fixedAfdHasBeenSet = false;

    int m_framerateDenominator;
    bool m_framerateDenominatorHasBeenSet = false;

    int m_framerateNumerator;
    bool m_framerateNumeratorHasBeenSet = false;

    int m_gopClosedCadence;
    bool m_gopClosedCadenceHasBeenSet = false;

    int m_gopNumBFrames;
    bool m_gopNumBFramesHasBeenSet = false;

    double m_gopSize;
    bool m_gopSizeHasBeenSet = false;

    Mpeg2GopSizeUnits m_gopSizeUnits;
    bool m_gopSizeUnitsHasBeenSet = false;

    Mpeg2ScanType m_scanType;
    bool m_scanTypeHasBeenSet = false;

    Mpeg2SubGopLength m_subgopLength;
    bool m_subgopLengthHasBeenSet = false;

    Mpeg2TimecodeInsertionBehavior m_timecodeInsertion;
    bool m_timecodeInsertionHasBeenSet = false;

    TimecodeBurninSettings m_timecodeBurninSettings;
    bool m_timecodeBurninSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
