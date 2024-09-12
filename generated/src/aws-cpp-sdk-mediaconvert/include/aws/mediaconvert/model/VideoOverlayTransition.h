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
    AWS_MEDIACONVERT_API VideoOverlayTransition();
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
    inline const VideoOverlayPosition& GetEndPosition() const{ return m_endPosition; }
    inline bool EndPositionHasBeenSet() const { return m_endPositionHasBeenSet; }
    inline void SetEndPosition(const VideoOverlayPosition& value) { m_endPositionHasBeenSet = true; m_endPosition = value; }
    inline void SetEndPosition(VideoOverlayPosition&& value) { m_endPositionHasBeenSet = true; m_endPosition = std::move(value); }
    inline VideoOverlayTransition& WithEndPosition(const VideoOverlayPosition& value) { SetEndPosition(value); return *this;}
    inline VideoOverlayTransition& WithEndPosition(VideoOverlayPosition&& value) { SetEndPosition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify the timecode for when this transition ends. Use the format HH:MM:SS:FF
     * or HH:MM:SS;FF, where HH is the hour, MM is the minute, SS is the second, and FF
     * is the frame number. When entering this value, take into account your choice for
     * Timecode source.
     */
    inline const Aws::String& GetEndTimecode() const{ return m_endTimecode; }
    inline bool EndTimecodeHasBeenSet() const { return m_endTimecodeHasBeenSet; }
    inline void SetEndTimecode(const Aws::String& value) { m_endTimecodeHasBeenSet = true; m_endTimecode = value; }
    inline void SetEndTimecode(Aws::String&& value) { m_endTimecodeHasBeenSet = true; m_endTimecode = std::move(value); }
    inline void SetEndTimecode(const char* value) { m_endTimecodeHasBeenSet = true; m_endTimecode.assign(value); }
    inline VideoOverlayTransition& WithEndTimecode(const Aws::String& value) { SetEndTimecode(value); return *this;}
    inline VideoOverlayTransition& WithEndTimecode(Aws::String&& value) { SetEndTimecode(std::move(value)); return *this;}
    inline VideoOverlayTransition& WithEndTimecode(const char* value) { SetEndTimecode(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the timecode for when this transition begins. Use the format HH:MM:SS:FF
     * or HH:MM:SS;FF, where HH is the hour, MM is the minute, SS is the second, and FF
     * is the frame number. When entering this value, take into account your choice for
     * Timecode source.
     */
    inline const Aws::String& GetStartTimecode() const{ return m_startTimecode; }
    inline bool StartTimecodeHasBeenSet() const { return m_startTimecodeHasBeenSet; }
    inline void SetStartTimecode(const Aws::String& value) { m_startTimecodeHasBeenSet = true; m_startTimecode = value; }
    inline void SetStartTimecode(Aws::String&& value) { m_startTimecodeHasBeenSet = true; m_startTimecode = std::move(value); }
    inline void SetStartTimecode(const char* value) { m_startTimecodeHasBeenSet = true; m_startTimecode.assign(value); }
    inline VideoOverlayTransition& WithStartTimecode(const Aws::String& value) { SetStartTimecode(value); return *this;}
    inline VideoOverlayTransition& WithStartTimecode(Aws::String&& value) { SetStartTimecode(std::move(value)); return *this;}
    inline VideoOverlayTransition& WithStartTimecode(const char* value) { SetStartTimecode(value); return *this;}
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
