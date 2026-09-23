/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/FrameControl.h>
#include <aws/mediaconvert/model/PassthroughSegmentationMode.h>
#include <aws/mediaconvert/model/VideoSelectorMode.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaConvert {
namespace Model {

/**
 * Optional settings when you set Codec to the value Passthrough.<p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/PassthroughSettings">AWS
 * API Reference</a></p>
 */
class PassthroughSettings {
 public:
  AWS_MEDIACONVERT_API PassthroughSettings() = default;
  AWS_MEDIACONVERT_API PassthroughSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONVERT_API PassthroughSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * Choose how MediaConvert handles start and end times for input clipping with
   * video passthrough. Your input video codec must be H.264 or H.265 to use IFRAME.
   * To clip at the nearest IDR-frame: Choose Nearest IDR. If an IDR-frame is not
   * found at the frame that you specify, MediaConvert uses the next compatible
   * IDR-frame. Note that your output may be shorter than your input clip duration.
   * To clip at the nearest I-frame: Choose Nearest I-frame. If an I-frame is not
   * found at the frame that you specify, MediaConvert uses the next compatible
   * I-frame. Note that your output may be shorter than your input clip duration. We
   * only recommend this setting for special workflows, and when you choose this
   * setting your output may not be compatible with most players.
   */
  inline FrameControl GetFrameControl() const { return m_frameControl; }
  inline bool FrameControlHasBeenSet() const { return m_frameControlHasBeenSet; }
  inline void SetFrameControl(FrameControl value) {
    m_frameControlHasBeenSet = true;
    m_frameControl = value;
  }
  inline PassthroughSettings& WithFrameControl(FrameControl value) {
    SetFrameControl(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Specify how many input GOPs MediaConvert places in each output segment when you
   * set Passthrough segmentation mode to GOP count. For example, if your input has a
   * closed GOP every 1.92 seconds and you specify 2, each output segment is 3.84
   * seconds. In this mode, output segment duration is determined by your input GOP
   * structure rather than by your configured Segment length or Fragment length, so
   * segment durations are consistent only when your input GOP cadence is constant.
   * Segments at input discontinuities or ad avails may contain fewer GOPs.
   */
  inline int GetGopsPerSegment() const { return m_gopsPerSegment; }
  inline bool GopsPerSegmentHasBeenSet() const { return m_gopsPerSegmentHasBeenSet; }
  inline void SetGopsPerSegment(int value) {
    m_gopsPerSegmentHasBeenSet = true;
    m_gopsPerSegment = value;
  }
  inline PassthroughSettings& WithGopsPerSegment(int value) {
    SetGopsPerSegment(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Choose how MediaConvert determines segment boundaries when you passthrough video
   * to a segmented ABR output (HLS, DASH, or CMAF). This setting applies only to ABR
   * outputs. Keep the default value, Auto, to let MediaConvert choose based on your
   * input: when your input is a segmented HLS or DASH source, MediaConvert
   * reproduces your input's own segment boundaries, with one output segment per
   * input segment; for all other inputs, MediaConvert places boundaries by duration,
   * cutting at the first eligible IDR-frame at or after each configured Segment
   * length or Fragment length target. Choose Duration based to always place
   * boundaries by duration, at the first eligible IDR-frame at or after each
   * configured Segment length or Fragment length target, regardless of your input.
   * When your input GOP duration does not evenly divide your target segment length,
   * output segment durations will vary. Choose GOP count to place a fixed number of
   * input GOPs in every segment, and specify GOPs per segment. Every segment
   * contains the same number of input GOPs, which produces consistent segment
   * durations when your input GOP cadence is constant. In this mode MediaConvert
   * ignores your configured Segment length and Fragment length for video boundary
   * placement. Ad avails and input discontinuities are still honored as segment
   * boundaries.
   */
  inline PassthroughSegmentationMode GetSegmentationMode() const { return m_segmentationMode; }
  inline bool SegmentationModeHasBeenSet() const { return m_segmentationModeHasBeenSet; }
  inline void SetSegmentationMode(PassthroughSegmentationMode value) {
    m_segmentationModeHasBeenSet = true;
    m_segmentationMode = value;
  }
  inline PassthroughSettings& WithSegmentationMode(PassthroughSegmentationMode value) {
    SetSegmentationMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * AUTO will select the highest bitrate input in the video selector source.
   * REMUX_ALL will passthrough all the selected streams in the video selector
   * source. When selecting streams from multiple renditions (i.e. using Stream video
   * selector type): REMUX_ALL will only remux all streams selected, and AUTO will
   * use the highest bitrate video stream among the selected streams as source.
   */
  inline VideoSelectorMode GetVideoSelectorMode() const { return m_videoSelectorMode; }
  inline bool VideoSelectorModeHasBeenSet() const { return m_videoSelectorModeHasBeenSet; }
  inline void SetVideoSelectorMode(VideoSelectorMode value) {
    m_videoSelectorModeHasBeenSet = true;
    m_videoSelectorMode = value;
  }
  inline PassthroughSettings& WithVideoSelectorMode(VideoSelectorMode value) {
    SetVideoSelectorMode(value);
    return *this;
  }
  ///@}
 private:
  FrameControl m_frameControl{FrameControl::NOT_SET};

  int m_gopsPerSegment{0};

  PassthroughSegmentationMode m_segmentationMode{PassthroughSegmentationMode::NOT_SET};

  VideoSelectorMode m_videoSelectorMode{VideoSelectorMode::NOT_SET};
  bool m_frameControlHasBeenSet = false;
  bool m_gopsPerSegmentHasBeenSet = false;
  bool m_segmentationModeHasBeenSet = false;
  bool m_videoSelectorModeHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
