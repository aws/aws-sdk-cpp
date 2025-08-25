/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/AlphaBehavior.h>
#include <aws/mediaconvert/model/ColorSpace.h>
#include <aws/mediaconvert/model/ColorSpaceUsage.h>
#include <aws/mediaconvert/model/EmbeddedTimecodeOverride.h>
#include <aws/mediaconvert/model/Hdr10Metadata.h>
#include <aws/mediaconvert/model/PadVideo.h>
#include <aws/mediaconvert/model/InputRotate.h>
#include <aws/mediaconvert/model/InputSampleRange.h>
#include <aws/mediaconvert/model/VideoSelectorType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * Input video selectors contain the video settings for the input. Each of your
   * inputs can have up to one video selector.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/VideoSelector">AWS
   * API Reference</a></p>
   */
  class VideoSelector
  {
  public:
    AWS_MEDIACONVERT_API VideoSelector() = default;
    AWS_MEDIACONVERT_API VideoSelector(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API VideoSelector& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Ignore this setting unless this input is a QuickTime animation with an alpha
     * channel. Use this setting to create separate Key and Fill outputs. In each
     * output, specify which part of the input MediaConvert uses. Leave this setting at
     * the default value DISCARD to delete the alpha channel and preserve the video.
     * Set it to REMAP_TO_LUMA to delete the video and map the alpha channel to the
     * luma channel of your outputs.
     */
    inline AlphaBehavior GetAlphaBehavior() const { return m_alphaBehavior; }
    inline bool AlphaBehaviorHasBeenSet() const { return m_alphaBehaviorHasBeenSet; }
    inline void SetAlphaBehavior(AlphaBehavior value) { m_alphaBehaviorHasBeenSet = true; m_alphaBehavior = value; }
    inline VideoSelector& WithAlphaBehavior(AlphaBehavior value) { SetAlphaBehavior(value); return *this;}
    ///@}

    ///@{
    /**
     * If your input video has accurate color space metadata, or if you don't know
     * about color space: Keep the default value, Follow. MediaConvert will
     * automatically detect your input color space. If your input video has metadata
     * indicating the wrong color space, or has missing metadata: Specify the accurate
     * color space here. If your input video is HDR 10 and the SMPTE ST 2086 Mastering
     * Display Color Volume static metadata isn't present in your video stream, or if
     * that metadata is present but not accurate: Choose Force HDR 10. Specify correct
     * values in the input HDR 10 metadata settings. For more information about HDR
     * jobs, see https://docs.aws.amazon.com/console/mediaconvert/hdr. When you specify
     * an input color space, MediaConvert uses the following color space metadata,
     * which includes color primaries, transfer characteristics, and matrix
     * coefficients:
 * HDR 10: BT.2020, PQ, BT.2020 non-constant
 * HLG 2020: BT.2020,
     * HLG, BT.2020 non-constant
 * P3DCI (Theater): DCIP3, SMPTE 428M, BT.709
 * P3D65
     * (SDR): Display P3, sRGB, BT.709
 * P3D65 (HDR): Display P3, PQ, BT.709
     */
    inline ColorSpace GetColorSpace() const { return m_colorSpace; }
    inline bool ColorSpaceHasBeenSet() const { return m_colorSpaceHasBeenSet; }
    inline void SetColorSpace(ColorSpace value) { m_colorSpaceHasBeenSet = true; m_colorSpace = value; }
    inline VideoSelector& WithColorSpace(ColorSpace value) { SetColorSpace(value); return *this;}
    ///@}

    ///@{
    /**
     * There are two sources for color metadata, the input file and the job input
     * settings Color space and HDR master display information settings. The Color
     * space usage setting determines which takes precedence. Choose Force to use color
     * metadata from the input job settings. If you don't specify values for those
     * settings, the service defaults to using metadata from your input. FALLBACK -
     * Choose Fallback to use color metadata from the source when it is present. If
     * there's no color metadata in your input file, the service defaults to using
     * values you specify in the input settings.
     */
    inline ColorSpaceUsage GetColorSpaceUsage() const { return m_colorSpaceUsage; }
    inline bool ColorSpaceUsageHasBeenSet() const { return m_colorSpaceUsageHasBeenSet; }
    inline void SetColorSpaceUsage(ColorSpaceUsage value) { m_colorSpaceUsageHasBeenSet = true; m_colorSpaceUsage = value; }
    inline VideoSelector& WithColorSpaceUsage(ColorSpaceUsage value) { SetColorSpaceUsage(value); return *this;}
    ///@}

    ///@{
    /**
     * Set Embedded timecode override to Use MDPM when your AVCHD input contains
     * timecode tag data in the Modified Digital Video Pack Metadata. When you do, we
     * recommend you also set Timecode source to Embedded. Leave Embedded timecode
     * override blank, or set to None, when your input does not contain MDPM timecode.
     */
    inline EmbeddedTimecodeOverride GetEmbeddedTimecodeOverride() const { return m_embeddedTimecodeOverride; }
    inline bool EmbeddedTimecodeOverrideHasBeenSet() const { return m_embeddedTimecodeOverrideHasBeenSet; }
    inline void SetEmbeddedTimecodeOverride(EmbeddedTimecodeOverride value) { m_embeddedTimecodeOverrideHasBeenSet = true; m_embeddedTimecodeOverride = value; }
    inline VideoSelector& WithEmbeddedTimecodeOverride(EmbeddedTimecodeOverride value) { SetEmbeddedTimecodeOverride(value); return *this;}
    ///@}

    ///@{
    /**
     * Use these settings to provide HDR 10 metadata that is missing or inaccurate in
     * your input video. Appropriate values vary depending on the input video and must
     * be provided by a color grader. The color grader generates these values during
     * the HDR 10 mastering process. The valid range for each of these settings is 0 to
     * 50,000. Each increment represents 0.00002 in CIE1931 color coordinate. Related
     * settings - When you specify these values, you must also set Color space to HDR
     * 10. To specify whether the the values you specify here take precedence over the
     * values in the metadata of your input file, set Color space usage. To specify
     * whether color metadata is included in an output, set Color metadata. For more
     * information about MediaConvert HDR jobs, see
     * https://docs.aws.amazon.com/console/mediaconvert/hdr.
     */
    inline const Hdr10Metadata& GetHdr10Metadata() const { return m_hdr10Metadata; }
    inline bool Hdr10MetadataHasBeenSet() const { return m_hdr10MetadataHasBeenSet; }
    template<typename Hdr10MetadataT = Hdr10Metadata>
    void SetHdr10Metadata(Hdr10MetadataT&& value) { m_hdr10MetadataHasBeenSet = true; m_hdr10Metadata = std::forward<Hdr10MetadataT>(value); }
    template<typename Hdr10MetadataT = Hdr10Metadata>
    VideoSelector& WithHdr10Metadata(Hdr10MetadataT&& value) { SetHdr10Metadata(std::forward<Hdr10MetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify the maximum mastering display luminance. Enter an integer from 0 to
     * 2147483647, in units of 0.0001 nits. For example, enter 10000000 for 1000 nits.
     */
    inline int GetMaxLuminance() const { return m_maxLuminance; }
    inline bool MaxLuminanceHasBeenSet() const { return m_maxLuminanceHasBeenSet; }
    inline void SetMaxLuminance(int value) { m_maxLuminanceHasBeenSet = true; m_maxLuminance = value; }
    inline VideoSelector& WithMaxLuminance(int value) { SetMaxLuminance(value); return *this;}
    ///@}

    ///@{
    /**
     * Use this setting if your input has video and audio durations that don't align,
     * and your output or player has strict alignment requirements. Examples: Input
     * audio track has a delayed start. Input video track ends before audio ends. When
     * you set Pad video to Black, MediaConvert generates black video frames so that
     * output video and audio durations match. Black video frames are added at the
     * beginning or end, depending on your input. To keep the default behavior and not
     * generate black video, set Pad video to Disabled or leave blank.
     */
    inline PadVideo GetPadVideo() const { return m_padVideo; }
    inline bool PadVideoHasBeenSet() const { return m_padVideoHasBeenSet; }
    inline void SetPadVideo(PadVideo value) { m_padVideoHasBeenSet = true; m_padVideo = value; }
    inline VideoSelector& WithPadVideo(PadVideo value) { SetPadVideo(value); return *this;}
    ///@}

    ///@{
    /**
     * Use PID to select specific video data from an input file. Specify this value as
     * an integer; the system automatically converts it to the hexidecimal value. For
     * example, 257 selects PID 0x101. A PID, or packet identifier, is an identifier
     * for a set of data in an MPEG-2 transport stream container.
     */
    inline int GetPid() const { return m_pid; }
    inline bool PidHasBeenSet() const { return m_pidHasBeenSet; }
    inline void SetPid(int value) { m_pidHasBeenSet = true; m_pid = value; }
    inline VideoSelector& WithPid(int value) { SetPid(value); return *this;}
    ///@}

    ///@{
    /**
     * Selects a specific program from within a multi-program transport stream. Note
     * that Quad 4K is not currently supported.
     */
    inline int GetProgramNumber() const { return m_programNumber; }
    inline bool ProgramNumberHasBeenSet() const { return m_programNumberHasBeenSet; }
    inline void SetProgramNumber(int value) { m_programNumberHasBeenSet = true; m_programNumber = value; }
    inline VideoSelector& WithProgramNumber(int value) { SetProgramNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * Use Rotate to specify how the service rotates your video. You can choose
     * automatic rotation or specify a rotation. You can specify a clockwise rotation
     * of 0, 90, 180, or 270 degrees. If your input video container is .mov or .mp4 and
     * your input has rotation metadata, you can choose Automatic to have the service
     * rotate your video according to the rotation specified in the metadata. The
     * rotation must be within one degree of 90, 180, or 270 degrees. If the rotation
     * metadata specifies any other rotation, the service will default to no rotation.
     * By default, the service does no rotation, even if your input video has rotation
     * metadata. The service doesn't pass through rotation metadata.
     */
    inline InputRotate GetRotate() const { return m_rotate; }
    inline bool RotateHasBeenSet() const { return m_rotateHasBeenSet; }
    inline void SetRotate(InputRotate value) { m_rotateHasBeenSet = true; m_rotate = value; }
    inline VideoSelector& WithRotate(InputRotate value) { SetRotate(value); return *this;}
    ///@}

    ///@{
    /**
     * If the sample range metadata in your input video is accurate, or if you don't
     * know about sample range, keep the default value, Follow, for this setting. When
     * you do, the service automatically detects your input sample range. If your input
     * video has metadata indicating the wrong sample range, specify the accurate
     * sample range here. When you do, MediaConvert ignores any sample range
     * information in the input metadata. Regardless of whether MediaConvert uses the
     * input sample range or the sample range that you specify, MediaConvert uses the
     * sample range for transcoding and also writes it to the output metadata.
     */
    inline InputSampleRange GetSampleRange() const { return m_sampleRange; }
    inline bool SampleRangeHasBeenSet() const { return m_sampleRangeHasBeenSet; }
    inline void SetSampleRange(InputSampleRange value) { m_sampleRangeHasBeenSet = true; m_sampleRange = value; }
    inline VideoSelector& WithSampleRange(InputSampleRange value) { SetSampleRange(value); return *this;}
    ///@}

    ///@{
    /**
     * Choose the video selector type for your HLS input. Use to specify which video
     * rendition MediaConvert uses from your HLS input. To have MediaConvert
     * automatically use the highest bitrate rendition from your HLS input: Keep the
     * default value, Auto. To manually specify a rendition: Choose Stream. Then enter
     * the unique stream number in the Streams array, starting at 1, corresponding to
     * the stream order in the manifest.
     */
    inline VideoSelectorType GetSelectorType() const { return m_selectorType; }
    inline bool SelectorTypeHasBeenSet() const { return m_selectorTypeHasBeenSet; }
    inline void SetSelectorType(VideoSelectorType value) { m_selectorTypeHasBeenSet = true; m_selectorType = value; }
    inline VideoSelector& WithSelectorType(VideoSelectorType value) { SetSelectorType(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify a stream for MediaConvert to use from your HLS input. Enter an integer
     * corresponding to the stream order in your HLS manifest.
     */
    inline const Aws::Vector<int>& GetStreams() const { return m_streams; }
    inline bool StreamsHasBeenSet() const { return m_streamsHasBeenSet; }
    template<typename StreamsT = Aws::Vector<int>>
    void SetStreams(StreamsT&& value) { m_streamsHasBeenSet = true; m_streams = std::forward<StreamsT>(value); }
    template<typename StreamsT = Aws::Vector<int>>
    VideoSelector& WithStreams(StreamsT&& value) { SetStreams(std::forward<StreamsT>(value)); return *this;}
    inline VideoSelector& AddStreams(int value) { m_streamsHasBeenSet = true; m_streams.push_back(value); return *this; }
    ///@}
  private:

    AlphaBehavior m_alphaBehavior{AlphaBehavior::NOT_SET};
    bool m_alphaBehaviorHasBeenSet = false;

    ColorSpace m_colorSpace{ColorSpace::NOT_SET};
    bool m_colorSpaceHasBeenSet = false;

    ColorSpaceUsage m_colorSpaceUsage{ColorSpaceUsage::NOT_SET};
    bool m_colorSpaceUsageHasBeenSet = false;

    EmbeddedTimecodeOverride m_embeddedTimecodeOverride{EmbeddedTimecodeOverride::NOT_SET};
    bool m_embeddedTimecodeOverrideHasBeenSet = false;

    Hdr10Metadata m_hdr10Metadata;
    bool m_hdr10MetadataHasBeenSet = false;

    int m_maxLuminance{0};
    bool m_maxLuminanceHasBeenSet = false;

    PadVideo m_padVideo{PadVideo::NOT_SET};
    bool m_padVideoHasBeenSet = false;

    int m_pid{0};
    bool m_pidHasBeenSet = false;

    int m_programNumber{0};
    bool m_programNumberHasBeenSet = false;

    InputRotate m_rotate{InputRotate::NOT_SET};
    bool m_rotateHasBeenSet = false;

    InputSampleRange m_sampleRange{InputSampleRange::NOT_SET};
    bool m_sampleRangeHasBeenSet = false;

    VideoSelectorType m_selectorType{VideoSelectorType::NOT_SET};
    bool m_selectorTypeHasBeenSet = false;

    Aws::Vector<int> m_streams;
    bool m_streamsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
