/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
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
   * To transcode only portions of your input, include one input clip for each part
   * of your input that you want in your output. All input clips that you specify
   * will be included in every output of the job. For more information, see
   * https://docs.aws.amazon.com/mediaconvert/latest/ug/assembling-multiple-inputs-and-input-clips.html.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/InputClipping">AWS
   * API Reference</a></p>
   */
  class InputClipping
  {
  public:
    AWS_MEDIACONVERT_API InputClipping();
    AWS_MEDIACONVERT_API InputClipping(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API InputClipping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Set End timecode (EndTimecode) to the end of the portion of the input you are
     * clipping. The frame corresponding to the End timecode value is included in the
     * clip. Start timecode or End timecode may be left blank, but not both. Use the
     * format HH:MM:SS:FF or HH:MM:SS;FF, where HH is the hour, MM is the minute, SS is
     * the second, and FF is the frame number. When choosing this value, take into
     * account your setting for timecode source under input settings
     * (InputTimecodeSource). For example, if you have embedded timecodes that start at
     * 01:00:00:00 and you want your clip to end six minutes into the video, use
     * 01:06:00:00.
     */
    inline const Aws::String& GetEndTimecode() const{ return m_endTimecode; }

    /**
     * Set End timecode (EndTimecode) to the end of the portion of the input you are
     * clipping. The frame corresponding to the End timecode value is included in the
     * clip. Start timecode or End timecode may be left blank, but not both. Use the
     * format HH:MM:SS:FF or HH:MM:SS;FF, where HH is the hour, MM is the minute, SS is
     * the second, and FF is the frame number. When choosing this value, take into
     * account your setting for timecode source under input settings
     * (InputTimecodeSource). For example, if you have embedded timecodes that start at
     * 01:00:00:00 and you want your clip to end six minutes into the video, use
     * 01:06:00:00.
     */
    inline bool EndTimecodeHasBeenSet() const { return m_endTimecodeHasBeenSet; }

    /**
     * Set End timecode (EndTimecode) to the end of the portion of the input you are
     * clipping. The frame corresponding to the End timecode value is included in the
     * clip. Start timecode or End timecode may be left blank, but not both. Use the
     * format HH:MM:SS:FF or HH:MM:SS;FF, where HH is the hour, MM is the minute, SS is
     * the second, and FF is the frame number. When choosing this value, take into
     * account your setting for timecode source under input settings
     * (InputTimecodeSource). For example, if you have embedded timecodes that start at
     * 01:00:00:00 and you want your clip to end six minutes into the video, use
     * 01:06:00:00.
     */
    inline void SetEndTimecode(const Aws::String& value) { m_endTimecodeHasBeenSet = true; m_endTimecode = value; }

    /**
     * Set End timecode (EndTimecode) to the end of the portion of the input you are
     * clipping. The frame corresponding to the End timecode value is included in the
     * clip. Start timecode or End timecode may be left blank, but not both. Use the
     * format HH:MM:SS:FF or HH:MM:SS;FF, where HH is the hour, MM is the minute, SS is
     * the second, and FF is the frame number. When choosing this value, take into
     * account your setting for timecode source under input settings
     * (InputTimecodeSource). For example, if you have embedded timecodes that start at
     * 01:00:00:00 and you want your clip to end six minutes into the video, use
     * 01:06:00:00.
     */
    inline void SetEndTimecode(Aws::String&& value) { m_endTimecodeHasBeenSet = true; m_endTimecode = std::move(value); }

    /**
     * Set End timecode (EndTimecode) to the end of the portion of the input you are
     * clipping. The frame corresponding to the End timecode value is included in the
     * clip. Start timecode or End timecode may be left blank, but not both. Use the
     * format HH:MM:SS:FF or HH:MM:SS;FF, where HH is the hour, MM is the minute, SS is
     * the second, and FF is the frame number. When choosing this value, take into
     * account your setting for timecode source under input settings
     * (InputTimecodeSource). For example, if you have embedded timecodes that start at
     * 01:00:00:00 and you want your clip to end six minutes into the video, use
     * 01:06:00:00.
     */
    inline void SetEndTimecode(const char* value) { m_endTimecodeHasBeenSet = true; m_endTimecode.assign(value); }

    /**
     * Set End timecode (EndTimecode) to the end of the portion of the input you are
     * clipping. The frame corresponding to the End timecode value is included in the
     * clip. Start timecode or End timecode may be left blank, but not both. Use the
     * format HH:MM:SS:FF or HH:MM:SS;FF, where HH is the hour, MM is the minute, SS is
     * the second, and FF is the frame number. When choosing this value, take into
     * account your setting for timecode source under input settings
     * (InputTimecodeSource). For example, if you have embedded timecodes that start at
     * 01:00:00:00 and you want your clip to end six minutes into the video, use
     * 01:06:00:00.
     */
    inline InputClipping& WithEndTimecode(const Aws::String& value) { SetEndTimecode(value); return *this;}

    /**
     * Set End timecode (EndTimecode) to the end of the portion of the input you are
     * clipping. The frame corresponding to the End timecode value is included in the
     * clip. Start timecode or End timecode may be left blank, but not both. Use the
     * format HH:MM:SS:FF or HH:MM:SS;FF, where HH is the hour, MM is the minute, SS is
     * the second, and FF is the frame number. When choosing this value, take into
     * account your setting for timecode source under input settings
     * (InputTimecodeSource). For example, if you have embedded timecodes that start at
     * 01:00:00:00 and you want your clip to end six minutes into the video, use
     * 01:06:00:00.
     */
    inline InputClipping& WithEndTimecode(Aws::String&& value) { SetEndTimecode(std::move(value)); return *this;}

    /**
     * Set End timecode (EndTimecode) to the end of the portion of the input you are
     * clipping. The frame corresponding to the End timecode value is included in the
     * clip. Start timecode or End timecode may be left blank, but not both. Use the
     * format HH:MM:SS:FF or HH:MM:SS;FF, where HH is the hour, MM is the minute, SS is
     * the second, and FF is the frame number. When choosing this value, take into
     * account your setting for timecode source under input settings
     * (InputTimecodeSource). For example, if you have embedded timecodes that start at
     * 01:00:00:00 and you want your clip to end six minutes into the video, use
     * 01:06:00:00.
     */
    inline InputClipping& WithEndTimecode(const char* value) { SetEndTimecode(value); return *this;}


    /**
     * Set Start timecode (StartTimecode) to the beginning of the portion of the input
     * you are clipping. The frame corresponding to the Start timecode value is
     * included in the clip. Start timecode or End timecode may be left blank, but not
     * both. Use the format HH:MM:SS:FF or HH:MM:SS;FF, where HH is the hour, MM is the
     * minute, SS is the second, and FF is the frame number. When choosing this value,
     * take into account your setting for Input timecode source. For example, if you
     * have embedded timecodes that start at 01:00:00:00 and you want your clip to
     * begin five minutes into the video, use 01:05:00:00.
     */
    inline const Aws::String& GetStartTimecode() const{ return m_startTimecode; }

    /**
     * Set Start timecode (StartTimecode) to the beginning of the portion of the input
     * you are clipping. The frame corresponding to the Start timecode value is
     * included in the clip. Start timecode or End timecode may be left blank, but not
     * both. Use the format HH:MM:SS:FF or HH:MM:SS;FF, where HH is the hour, MM is the
     * minute, SS is the second, and FF is the frame number. When choosing this value,
     * take into account your setting for Input timecode source. For example, if you
     * have embedded timecodes that start at 01:00:00:00 and you want your clip to
     * begin five minutes into the video, use 01:05:00:00.
     */
    inline bool StartTimecodeHasBeenSet() const { return m_startTimecodeHasBeenSet; }

    /**
     * Set Start timecode (StartTimecode) to the beginning of the portion of the input
     * you are clipping. The frame corresponding to the Start timecode value is
     * included in the clip. Start timecode or End timecode may be left blank, but not
     * both. Use the format HH:MM:SS:FF or HH:MM:SS;FF, where HH is the hour, MM is the
     * minute, SS is the second, and FF is the frame number. When choosing this value,
     * take into account your setting for Input timecode source. For example, if you
     * have embedded timecodes that start at 01:00:00:00 and you want your clip to
     * begin five minutes into the video, use 01:05:00:00.
     */
    inline void SetStartTimecode(const Aws::String& value) { m_startTimecodeHasBeenSet = true; m_startTimecode = value; }

    /**
     * Set Start timecode (StartTimecode) to the beginning of the portion of the input
     * you are clipping. The frame corresponding to the Start timecode value is
     * included in the clip. Start timecode or End timecode may be left blank, but not
     * both. Use the format HH:MM:SS:FF or HH:MM:SS;FF, where HH is the hour, MM is the
     * minute, SS is the second, and FF is the frame number. When choosing this value,
     * take into account your setting for Input timecode source. For example, if you
     * have embedded timecodes that start at 01:00:00:00 and you want your clip to
     * begin five minutes into the video, use 01:05:00:00.
     */
    inline void SetStartTimecode(Aws::String&& value) { m_startTimecodeHasBeenSet = true; m_startTimecode = std::move(value); }

    /**
     * Set Start timecode (StartTimecode) to the beginning of the portion of the input
     * you are clipping. The frame corresponding to the Start timecode value is
     * included in the clip. Start timecode or End timecode may be left blank, but not
     * both. Use the format HH:MM:SS:FF or HH:MM:SS;FF, where HH is the hour, MM is the
     * minute, SS is the second, and FF is the frame number. When choosing this value,
     * take into account your setting for Input timecode source. For example, if you
     * have embedded timecodes that start at 01:00:00:00 and you want your clip to
     * begin five minutes into the video, use 01:05:00:00.
     */
    inline void SetStartTimecode(const char* value) { m_startTimecodeHasBeenSet = true; m_startTimecode.assign(value); }

    /**
     * Set Start timecode (StartTimecode) to the beginning of the portion of the input
     * you are clipping. The frame corresponding to the Start timecode value is
     * included in the clip. Start timecode or End timecode may be left blank, but not
     * both. Use the format HH:MM:SS:FF or HH:MM:SS;FF, where HH is the hour, MM is the
     * minute, SS is the second, and FF is the frame number. When choosing this value,
     * take into account your setting for Input timecode source. For example, if you
     * have embedded timecodes that start at 01:00:00:00 and you want your clip to
     * begin five minutes into the video, use 01:05:00:00.
     */
    inline InputClipping& WithStartTimecode(const Aws::String& value) { SetStartTimecode(value); return *this;}

    /**
     * Set Start timecode (StartTimecode) to the beginning of the portion of the input
     * you are clipping. The frame corresponding to the Start timecode value is
     * included in the clip. Start timecode or End timecode may be left blank, but not
     * both. Use the format HH:MM:SS:FF or HH:MM:SS;FF, where HH is the hour, MM is the
     * minute, SS is the second, and FF is the frame number. When choosing this value,
     * take into account your setting for Input timecode source. For example, if you
     * have embedded timecodes that start at 01:00:00:00 and you want your clip to
     * begin five minutes into the video, use 01:05:00:00.
     */
    inline InputClipping& WithStartTimecode(Aws::String&& value) { SetStartTimecode(std::move(value)); return *this;}

    /**
     * Set Start timecode (StartTimecode) to the beginning of the portion of the input
     * you are clipping. The frame corresponding to the Start timecode value is
     * included in the clip. Start timecode or End timecode may be left blank, but not
     * both. Use the format HH:MM:SS:FF or HH:MM:SS;FF, where HH is the hour, MM is the
     * minute, SS is the second, and FF is the frame number. When choosing this value,
     * take into account your setting for Input timecode source. For example, if you
     * have embedded timecodes that start at 01:00:00:00 and you want your clip to
     * begin five minutes into the video, use 01:05:00:00.
     */
    inline InputClipping& WithStartTimecode(const char* value) { SetStartTimecode(value); return *this;}

  private:

    Aws::String m_endTimecode;
    bool m_endTimecodeHasBeenSet = false;

    Aws::String m_startTimecode;
    bool m_startTimecodeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
