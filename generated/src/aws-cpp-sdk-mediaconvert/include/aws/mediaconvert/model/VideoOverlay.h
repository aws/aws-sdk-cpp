/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/VideoOverlayInput.h>
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
    AWS_MEDIACONVERT_API VideoOverlay();
    AWS_MEDIACONVERT_API VideoOverlay(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API VideoOverlay& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Enter the end timecode in the underlying input video for this overlay. Your
     * overlay will be active through this frame. To display your video overlay for the
     * duration of the underlying video: Leave blank. Use the format HH:MM:SS:FF or
     * HH:MM:SS;FF, where HH is the hour, MM is the minute, SS is the second, and FF is
     * the frame number. When entering this value, take into account your choice for
     * the underlying Input timecode source. For example, if you have embedded
     * timecodes that start at 01:00:00:00 and you want your overlay to end ten minutes
     * into the video, enter 01:10:00:00.
     */
    inline const Aws::String& GetEndTimecode() const{ return m_endTimecode; }

    /**
     * Enter the end timecode in the underlying input video for this overlay. Your
     * overlay will be active through this frame. To display your video overlay for the
     * duration of the underlying video: Leave blank. Use the format HH:MM:SS:FF or
     * HH:MM:SS;FF, where HH is the hour, MM is the minute, SS is the second, and FF is
     * the frame number. When entering this value, take into account your choice for
     * the underlying Input timecode source. For example, if you have embedded
     * timecodes that start at 01:00:00:00 and you want your overlay to end ten minutes
     * into the video, enter 01:10:00:00.
     */
    inline bool EndTimecodeHasBeenSet() const { return m_endTimecodeHasBeenSet; }

    /**
     * Enter the end timecode in the underlying input video for this overlay. Your
     * overlay will be active through this frame. To display your video overlay for the
     * duration of the underlying video: Leave blank. Use the format HH:MM:SS:FF or
     * HH:MM:SS;FF, where HH is the hour, MM is the minute, SS is the second, and FF is
     * the frame number. When entering this value, take into account your choice for
     * the underlying Input timecode source. For example, if you have embedded
     * timecodes that start at 01:00:00:00 and you want your overlay to end ten minutes
     * into the video, enter 01:10:00:00.
     */
    inline void SetEndTimecode(const Aws::String& value) { m_endTimecodeHasBeenSet = true; m_endTimecode = value; }

    /**
     * Enter the end timecode in the underlying input video for this overlay. Your
     * overlay will be active through this frame. To display your video overlay for the
     * duration of the underlying video: Leave blank. Use the format HH:MM:SS:FF or
     * HH:MM:SS;FF, where HH is the hour, MM is the minute, SS is the second, and FF is
     * the frame number. When entering this value, take into account your choice for
     * the underlying Input timecode source. For example, if you have embedded
     * timecodes that start at 01:00:00:00 and you want your overlay to end ten minutes
     * into the video, enter 01:10:00:00.
     */
    inline void SetEndTimecode(Aws::String&& value) { m_endTimecodeHasBeenSet = true; m_endTimecode = std::move(value); }

    /**
     * Enter the end timecode in the underlying input video for this overlay. Your
     * overlay will be active through this frame. To display your video overlay for the
     * duration of the underlying video: Leave blank. Use the format HH:MM:SS:FF or
     * HH:MM:SS;FF, where HH is the hour, MM is the minute, SS is the second, and FF is
     * the frame number. When entering this value, take into account your choice for
     * the underlying Input timecode source. For example, if you have embedded
     * timecodes that start at 01:00:00:00 and you want your overlay to end ten minutes
     * into the video, enter 01:10:00:00.
     */
    inline void SetEndTimecode(const char* value) { m_endTimecodeHasBeenSet = true; m_endTimecode.assign(value); }

    /**
     * Enter the end timecode in the underlying input video for this overlay. Your
     * overlay will be active through this frame. To display your video overlay for the
     * duration of the underlying video: Leave blank. Use the format HH:MM:SS:FF or
     * HH:MM:SS;FF, where HH is the hour, MM is the minute, SS is the second, and FF is
     * the frame number. When entering this value, take into account your choice for
     * the underlying Input timecode source. For example, if you have embedded
     * timecodes that start at 01:00:00:00 and you want your overlay to end ten minutes
     * into the video, enter 01:10:00:00.
     */
    inline VideoOverlay& WithEndTimecode(const Aws::String& value) { SetEndTimecode(value); return *this;}

    /**
     * Enter the end timecode in the underlying input video for this overlay. Your
     * overlay will be active through this frame. To display your video overlay for the
     * duration of the underlying video: Leave blank. Use the format HH:MM:SS:FF or
     * HH:MM:SS;FF, where HH is the hour, MM is the minute, SS is the second, and FF is
     * the frame number. When entering this value, take into account your choice for
     * the underlying Input timecode source. For example, if you have embedded
     * timecodes that start at 01:00:00:00 and you want your overlay to end ten minutes
     * into the video, enter 01:10:00:00.
     */
    inline VideoOverlay& WithEndTimecode(Aws::String&& value) { SetEndTimecode(std::move(value)); return *this;}

    /**
     * Enter the end timecode in the underlying input video for this overlay. Your
     * overlay will be active through this frame. To display your video overlay for the
     * duration of the underlying video: Leave blank. Use the format HH:MM:SS:FF or
     * HH:MM:SS;FF, where HH is the hour, MM is the minute, SS is the second, and FF is
     * the frame number. When entering this value, take into account your choice for
     * the underlying Input timecode source. For example, if you have embedded
     * timecodes that start at 01:00:00:00 and you want your overlay to end ten minutes
     * into the video, enter 01:10:00:00.
     */
    inline VideoOverlay& WithEndTimecode(const char* value) { SetEndTimecode(value); return *this;}


    /**
     * Input settings for Video overlay. You can include one or more video overlays in
     * sequence at different times that you specify.
     */
    inline const VideoOverlayInput& GetInput() const{ return m_input; }

    /**
     * Input settings for Video overlay. You can include one or more video overlays in
     * sequence at different times that you specify.
     */
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }

    /**
     * Input settings for Video overlay. You can include one or more video overlays in
     * sequence at different times that you specify.
     */
    inline void SetInput(const VideoOverlayInput& value) { m_inputHasBeenSet = true; m_input = value; }

    /**
     * Input settings for Video overlay. You can include one or more video overlays in
     * sequence at different times that you specify.
     */
    inline void SetInput(VideoOverlayInput&& value) { m_inputHasBeenSet = true; m_input = std::move(value); }

    /**
     * Input settings for Video overlay. You can include one or more video overlays in
     * sequence at different times that you specify.
     */
    inline VideoOverlay& WithInput(const VideoOverlayInput& value) { SetInput(value); return *this;}

    /**
     * Input settings for Video overlay. You can include one or more video overlays in
     * sequence at different times that you specify.
     */
    inline VideoOverlay& WithInput(VideoOverlayInput&& value) { SetInput(std::move(value)); return *this;}


    /**
     * Enter the start timecode in the underlying input video for this overlay. Your
     * overlay will be active starting with this frame. To display your video overlay
     * starting at the beginning of the underlying video: Leave blank. Use the format
     * HH:MM:SS:FF or HH:MM:SS;FF, where HH is the hour, MM is the minute, SS is the
     * second, and FF is the frame number. When entering this value, take into account
     * your choice for the underlying Input timecode source. For example, if you have
     * embedded timecodes that start at 01:00:00:00 and you want your overlay to begin
     * five minutes into the video, enter 01:05:00:00.
     */
    inline const Aws::String& GetStartTimecode() const{ return m_startTimecode; }

    /**
     * Enter the start timecode in the underlying input video for this overlay. Your
     * overlay will be active starting with this frame. To display your video overlay
     * starting at the beginning of the underlying video: Leave blank. Use the format
     * HH:MM:SS:FF or HH:MM:SS;FF, where HH is the hour, MM is the minute, SS is the
     * second, and FF is the frame number. When entering this value, take into account
     * your choice for the underlying Input timecode source. For example, if you have
     * embedded timecodes that start at 01:00:00:00 and you want your overlay to begin
     * five minutes into the video, enter 01:05:00:00.
     */
    inline bool StartTimecodeHasBeenSet() const { return m_startTimecodeHasBeenSet; }

    /**
     * Enter the start timecode in the underlying input video for this overlay. Your
     * overlay will be active starting with this frame. To display your video overlay
     * starting at the beginning of the underlying video: Leave blank. Use the format
     * HH:MM:SS:FF or HH:MM:SS;FF, where HH is the hour, MM is the minute, SS is the
     * second, and FF is the frame number. When entering this value, take into account
     * your choice for the underlying Input timecode source. For example, if you have
     * embedded timecodes that start at 01:00:00:00 and you want your overlay to begin
     * five minutes into the video, enter 01:05:00:00.
     */
    inline void SetStartTimecode(const Aws::String& value) { m_startTimecodeHasBeenSet = true; m_startTimecode = value; }

    /**
     * Enter the start timecode in the underlying input video for this overlay. Your
     * overlay will be active starting with this frame. To display your video overlay
     * starting at the beginning of the underlying video: Leave blank. Use the format
     * HH:MM:SS:FF or HH:MM:SS;FF, where HH is the hour, MM is the minute, SS is the
     * second, and FF is the frame number. When entering this value, take into account
     * your choice for the underlying Input timecode source. For example, if you have
     * embedded timecodes that start at 01:00:00:00 and you want your overlay to begin
     * five minutes into the video, enter 01:05:00:00.
     */
    inline void SetStartTimecode(Aws::String&& value) { m_startTimecodeHasBeenSet = true; m_startTimecode = std::move(value); }

    /**
     * Enter the start timecode in the underlying input video for this overlay. Your
     * overlay will be active starting with this frame. To display your video overlay
     * starting at the beginning of the underlying video: Leave blank. Use the format
     * HH:MM:SS:FF or HH:MM:SS;FF, where HH is the hour, MM is the minute, SS is the
     * second, and FF is the frame number. When entering this value, take into account
     * your choice for the underlying Input timecode source. For example, if you have
     * embedded timecodes that start at 01:00:00:00 and you want your overlay to begin
     * five minutes into the video, enter 01:05:00:00.
     */
    inline void SetStartTimecode(const char* value) { m_startTimecodeHasBeenSet = true; m_startTimecode.assign(value); }

    /**
     * Enter the start timecode in the underlying input video for this overlay. Your
     * overlay will be active starting with this frame. To display your video overlay
     * starting at the beginning of the underlying video: Leave blank. Use the format
     * HH:MM:SS:FF or HH:MM:SS;FF, where HH is the hour, MM is the minute, SS is the
     * second, and FF is the frame number. When entering this value, take into account
     * your choice for the underlying Input timecode source. For example, if you have
     * embedded timecodes that start at 01:00:00:00 and you want your overlay to begin
     * five minutes into the video, enter 01:05:00:00.
     */
    inline VideoOverlay& WithStartTimecode(const Aws::String& value) { SetStartTimecode(value); return *this;}

    /**
     * Enter the start timecode in the underlying input video for this overlay. Your
     * overlay will be active starting with this frame. To display your video overlay
     * starting at the beginning of the underlying video: Leave blank. Use the format
     * HH:MM:SS:FF or HH:MM:SS;FF, where HH is the hour, MM is the minute, SS is the
     * second, and FF is the frame number. When entering this value, take into account
     * your choice for the underlying Input timecode source. For example, if you have
     * embedded timecodes that start at 01:00:00:00 and you want your overlay to begin
     * five minutes into the video, enter 01:05:00:00.
     */
    inline VideoOverlay& WithStartTimecode(Aws::String&& value) { SetStartTimecode(std::move(value)); return *this;}

    /**
     * Enter the start timecode in the underlying input video for this overlay. Your
     * overlay will be active starting with this frame. To display your video overlay
     * starting at the beginning of the underlying video: Leave blank. Use the format
     * HH:MM:SS:FF or HH:MM:SS;FF, where HH is the hour, MM is the minute, SS is the
     * second, and FF is the frame number. When entering this value, take into account
     * your choice for the underlying Input timecode source. For example, if you have
     * embedded timecodes that start at 01:00:00:00 and you want your overlay to begin
     * five minutes into the video, enter 01:05:00:00.
     */
    inline VideoOverlay& WithStartTimecode(const char* value) { SetStartTimecode(value); return *this;}

  private:

    Aws::String m_endTimecode;
    bool m_endTimecodeHasBeenSet = false;

    VideoOverlayInput m_input;
    bool m_inputHasBeenSet = false;

    Aws::String m_startTimecode;
    bool m_startTimecodeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
