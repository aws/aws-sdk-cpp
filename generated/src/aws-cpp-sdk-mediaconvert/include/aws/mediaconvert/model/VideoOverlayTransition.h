/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/VideoOverlayPosition.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * Specify one or more Transitions for your video overlay. Use Transitions to
   * reposition or resize your overlay over time. To use the same position and size
   * for the duration of your video overlay: Leave blank. To specify a Transition:
   * Enter a value for Start timecode, End Timecode, X Position, Y Position, Width,
   * or Height.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/VideoOverlayTransition">AWS
   * API Reference</a></p>
   */
  class VideoOverlayTransition
  {
  public:
    AWS_MEDIACONVERT_API VideoOverlayTransition() = default;
    AWS_MEDIACONVERT_API VideoOverlayTransition(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API VideoOverlayTransition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Specify the ending position for this transition, relative to the base input
     * video's frame. Your video overlay will move smoothly to this position, beginning
     * at this transition's Start timecode and ending at this transition's End
     * timecode.
     */
    inline const VideoOverlayPosition& GetEndPosition() const { return m_endPosition; }
    inline bool EndPositionHasBeenSet() const { return m_endPositionHasBeenSet; }
    template<typename EndPositionT = VideoOverlayPosition>
    void SetEndPosition(EndPositionT&& value) { m_endPositionHasBeenSet = true; m_endPosition = std::forward<EndPositionT>(value); }
    template<typename EndPositionT = VideoOverlayPosition>
    VideoOverlayTransition& WithEndPosition(EndPositionT&& value) { SetEndPosition(std::forward<EndPositionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify the timecode for when this transition ends. Use the format HH:MM:SS:FF
     * or HH:MM:SS;FF, where HH is the hour, MM is the minute, SS is the second, and FF
     * is the frame number. When entering this value, take into account your choice for
     * Timecode source.
     */
    inline const Aws::String& GetEndTimecode() const { return m_endTimecode; }
    inline bool EndTimecodeHasBeenSet() const { return m_endTimecodeHasBeenSet; }
    template<typename EndTimecodeT = Aws::String>
    void SetEndTimecode(EndTimecodeT&& value) { m_endTimecodeHasBeenSet = true; m_endTimecode = std::forward<EndTimecodeT>(value); }
    template<typename EndTimecodeT = Aws::String>
    VideoOverlayTransition& WithEndTimecode(EndTimecodeT&& value) { SetEndTimecode(std::forward<EndTimecodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify the timecode for when this transition begins. Use the format HH:MM:SS:FF
     * or HH:MM:SS;FF, where HH is the hour, MM is the minute, SS is the second, and FF
     * is the frame number. When entering this value, take into account your choice for
     * Timecode source.
     */
    inline const Aws::String& GetStartTimecode() const { return m_startTimecode; }
    inline bool StartTimecodeHasBeenSet() const { return m_startTimecodeHasBeenSet; }
    template<typename StartTimecodeT = Aws::String>
    void SetStartTimecode(StartTimecodeT&& value) { m_startTimecodeHasBeenSet = true; m_startTimecode = std::forward<StartTimecodeT>(value); }
    template<typename StartTimecodeT = Aws::String>
    VideoOverlayTransition& WithStartTimecode(StartTimecodeT&& value) { SetStartTimecode(std::forward<StartTimecodeT>(value)); return *this;}
    ///@}
  private:

    VideoOverlayPosition m_endPosition;
    bool m_endPositionHasBeenSet = false;

    Aws::String m_endTimecode;
    bool m_endTimecodeHasBeenSet = false;

    Aws::String m_startTimecode;
    bool m_startTimecodeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
