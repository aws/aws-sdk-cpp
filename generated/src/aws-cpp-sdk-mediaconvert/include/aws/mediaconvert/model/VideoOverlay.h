/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/VideoOverlayCrop.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/VideoOverlayPosition.h>
#include <aws/mediaconvert/model/VideoOverlayInput.h>
#include <aws/mediaconvert/model/VideoOverlayPlayBackMode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconvert/model/VideoOverlayTransition.h>
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
   * Overlay one or more videos on top of your input video. For more information, see
   * https://docs.aws.amazon.com/mediaconvert/latest/ug/video-overlays.html<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/VideoOverlay">AWS
   * API Reference</a></p>
   */
  class VideoOverlay
  {
  public:
    AWS_MEDIACONVERT_API VideoOverlay() = default;
    AWS_MEDIACONVERT_API VideoOverlay(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API VideoOverlay& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Specify a rectangle of content to crop and use from your video overlay's input
     * video. When you do, MediaConvert uses the cropped dimensions that you specify
     * under X offset, Y offset, Width, and Height.
     */
    inline const VideoOverlayCrop& GetCrop() const { return m_crop; }
    inline bool CropHasBeenSet() const { return m_cropHasBeenSet; }
    template<typename CropT = VideoOverlayCrop>
    void SetCrop(CropT&& value) { m_cropHasBeenSet = true; m_crop = std::forward<CropT>(value); }
    template<typename CropT = VideoOverlayCrop>
    VideoOverlay& WithCrop(CropT&& value) { SetCrop(std::forward<CropT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Enter the end timecode in the base input video for this overlay. Your overlay
     * will be active through this frame. To display your video overlay for the
     * duration of the base input video: Leave blank. Use the format HH:MM:SS:FF or
     * HH:MM:SS;FF, where HH is the hour, MM is the minute, SS isthe second, and FF is
     * the frame number. When entering this value, take into account your choice for
     * the base input video's timecode source. For example, if you have embedded
     * timecodes that start at 01:00:00:00 and you want your overlay to end ten minutes
     * into the video, enter 01:10:00:00.
     */
    inline const Aws::String& GetEndTimecode() const { return m_endTimecode; }
    inline bool EndTimecodeHasBeenSet() const { return m_endTimecodeHasBeenSet; }
    template<typename EndTimecodeT = Aws::String>
    void SetEndTimecode(EndTimecodeT&& value) { m_endTimecodeHasBeenSet = true; m_endTimecode = std::forward<EndTimecodeT>(value); }
    template<typename EndTimecodeT = Aws::String>
    VideoOverlay& WithEndTimecode(EndTimecodeT&& value) { SetEndTimecode(std::forward<EndTimecodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify the Initial position of your video overlay. To specify the Initial
     * position of your video overlay, including distance from the left or top edge of
     * the base input video's frame, or size: Enter a value for X position, Y position,
     * Width, or Height. To use the full frame of the base input video: Leave blank.
     */
    inline const VideoOverlayPosition& GetInitialPosition() const { return m_initialPosition; }
    inline bool InitialPositionHasBeenSet() const { return m_initialPositionHasBeenSet; }
    template<typename InitialPositionT = VideoOverlayPosition>
    void SetInitialPosition(InitialPositionT&& value) { m_initialPositionHasBeenSet = true; m_initialPosition = std::forward<InitialPositionT>(value); }
    template<typename InitialPositionT = VideoOverlayPosition>
    VideoOverlay& WithInitialPosition(InitialPositionT&& value) { SetInitialPosition(std::forward<InitialPositionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Input settings for Video overlay. You can include one or more video overlays in
     * sequence at different times that you specify.
     */
    inline const VideoOverlayInput& GetInput() const { return m_input; }
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }
    template<typename InputT = VideoOverlayInput>
    void SetInput(InputT&& value) { m_inputHasBeenSet = true; m_input = std::forward<InputT>(value); }
    template<typename InputT = VideoOverlayInput>
    VideoOverlay& WithInput(InputT&& value) { SetInput(std::forward<InputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify whether your video overlay repeats or plays only once. To repeat your
     * video overlay on a loop: Keep the default value, Repeat. Your overlay will
     * repeat for the duration of the base input video. To playback your video overlay
     * only once: Choose Once. With either option, you can end playback at a time that
     * you specify by entering a value for End timecode.
     */
    inline VideoOverlayPlayBackMode GetPlayback() const { return m_playback; }
    inline bool PlaybackHasBeenSet() const { return m_playbackHasBeenSet; }
    inline void SetPlayback(VideoOverlayPlayBackMode value) { m_playbackHasBeenSet = true; m_playback = value; }
    inline VideoOverlay& WithPlayback(VideoOverlayPlayBackMode value) { SetPlayback(value); return *this;}
    ///@}

    ///@{
    /**
     * Enter the start timecode in the base input video for this overlay. Your overlay
     * will be active starting with this frame. To display your video overlay starting
     * at the beginning of the base input video: Leave blank. Use the format
     * HH:MM:SS:FF or HH:MM:SS;FF, where HH is the hour, MM is the minute, SS is the
     * second, and FF is the frame number. When entering this value, take into account
     * your choice for the base input video's timecode source. For example, if you have
     * embedded timecodes that start at 01:00:00:00 and you want your overlay to begin
     * five minutes into the video, enter 01:05:00:00.
     */
    inline const Aws::String& GetStartTimecode() const { return m_startTimecode; }
    inline bool StartTimecodeHasBeenSet() const { return m_startTimecodeHasBeenSet; }
    template<typename StartTimecodeT = Aws::String>
    void SetStartTimecode(StartTimecodeT&& value) { m_startTimecodeHasBeenSet = true; m_startTimecode = std::forward<StartTimecodeT>(value); }
    template<typename StartTimecodeT = Aws::String>
    VideoOverlay& WithStartTimecode(StartTimecodeT&& value) { SetStartTimecode(std::forward<StartTimecodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify one or more transitions for your video overlay. Use Transitions to
     * reposition or resize your overlay over time. To use the same position and size
     * for the duration of your video overlay: Leave blank. To specify a Transition:
     * Enter a value for Start timecode, End Timecode, X Position, Y Position, Width,
     * or Height.
     */
    inline const Aws::Vector<VideoOverlayTransition>& GetTransitions() const { return m_transitions; }
    inline bool TransitionsHasBeenSet() const { return m_transitionsHasBeenSet; }
    template<typename TransitionsT = Aws::Vector<VideoOverlayTransition>>
    void SetTransitions(TransitionsT&& value) { m_transitionsHasBeenSet = true; m_transitions = std::forward<TransitionsT>(value); }
    template<typename TransitionsT = Aws::Vector<VideoOverlayTransition>>
    VideoOverlay& WithTransitions(TransitionsT&& value) { SetTransitions(std::forward<TransitionsT>(value)); return *this;}
    template<typename TransitionsT = VideoOverlayTransition>
    VideoOverlay& AddTransitions(TransitionsT&& value) { m_transitionsHasBeenSet = true; m_transitions.emplace_back(std::forward<TransitionsT>(value)); return *this; }
    ///@}
  private:

    VideoOverlayCrop m_crop;
    bool m_cropHasBeenSet = false;

    Aws::String m_endTimecode;
    bool m_endTimecodeHasBeenSet = false;

    VideoOverlayPosition m_initialPosition;
    bool m_initialPositionHasBeenSet = false;

    VideoOverlayInput m_input;
    bool m_inputHasBeenSet = false;

    VideoOverlayPlayBackMode m_playback{VideoOverlayPlayBackMode::NOT_SET};
    bool m_playbackHasBeenSet = false;

    Aws::String m_startTimecode;
    bool m_startTimecodeHasBeenSet = false;

    Aws::Vector<VideoOverlayTransition> m_transitions;
    bool m_transitionsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
