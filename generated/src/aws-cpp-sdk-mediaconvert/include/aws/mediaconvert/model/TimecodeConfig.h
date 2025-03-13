/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/TimecodeSource.h>
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
   * These settings control how the service handles timecodes throughout the job.
   * These settings don't affect input clipping.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/TimecodeConfig">AWS
   * API Reference</a></p>
   */
  class TimecodeConfig
  {
  public:
    AWS_MEDIACONVERT_API TimecodeConfig() = default;
    AWS_MEDIACONVERT_API TimecodeConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API TimecodeConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * If you use an editing platform that relies on an anchor timecode, use Anchor
     * Timecode to specify a timecode that will match the input video frame to the
     * output video frame. Use 24-hour format with frame number, (HH:MM:SS:FF) or
     * (HH:MM:SS;FF). This setting ignores frame rate conversion. System behavior for
     * Anchor Timecode varies depending on your setting for Source. * If Source is set
     * to Specified Start, the first input frame is the specified value in Start
     * Timecode. Anchor Timecode and Start Timecode are used calculate output timecode.
     * * If Source is set to Start at 0 the first frame is 00:00:00:00. * If Source is
     * set to Embedded, the first frame is the timecode value on the first input frame
     * of the input.
     */
    inline const Aws::String& GetAnchor() const { return m_anchor; }
    inline bool AnchorHasBeenSet() const { return m_anchorHasBeenSet; }
    template<typename AnchorT = Aws::String>
    void SetAnchor(AnchorT&& value) { m_anchorHasBeenSet = true; m_anchor = std::forward<AnchorT>(value); }
    template<typename AnchorT = Aws::String>
    TimecodeConfig& WithAnchor(AnchorT&& value) { SetAnchor(std::forward<AnchorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Use Source to set how timecodes are handled within this job. To make sure that
     * your video, audio, captions, and markers are synchronized and that time-based
     * features, such as image inserter, work correctly, choose the Timecode source
     * option that matches your assets. All timecodes are in a 24-hour format with
     * frame number (HH:MM:SS:FF). * Embedded - Use the timecode that is in the input
     * video. If no embedded timecode is in the source, the service will use Start at 0
     * instead. * Start at 0 - Set the timecode of the initial frame to 00:00:00:00. *
     * Specified Start - Set the timecode of the initial frame to a value other than
     * zero. You use Start timecode to provide this value.
     */
    inline TimecodeSource GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(TimecodeSource value) { m_sourceHasBeenSet = true; m_source = value; }
    inline TimecodeConfig& WithSource(TimecodeSource value) { SetSource(value); return *this;}
    ///@}

    ///@{
    /**
     * Only use when you set Source to Specified start. Use Start timecode to specify
     * the timecode for the initial frame. Use 24-hour format with frame number,
     * (HH:MM:SS:FF) or (HH:MM:SS;FF).
     */
    inline const Aws::String& GetStart() const { return m_start; }
    inline bool StartHasBeenSet() const { return m_startHasBeenSet; }
    template<typename StartT = Aws::String>
    void SetStart(StartT&& value) { m_startHasBeenSet = true; m_start = std::forward<StartT>(value); }
    template<typename StartT = Aws::String>
    TimecodeConfig& WithStart(StartT&& value) { SetStart(std::forward<StartT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Only applies to outputs that support program-date-time stamp. Use Timestamp
     * offset to overwrite the timecode date without affecting the time and frame
     * number. Provide the new date as a string in the format "yyyy-mm-dd". To use
     * Timestamp offset, you must also enable Insert program-date-time in the output
     * settings. For example, if the date part of your timecodes is 2002-1-25 and you
     * want to change it to one year later, set Timestamp offset to 2003-1-25.
     */
    inline const Aws::String& GetTimestampOffset() const { return m_timestampOffset; }
    inline bool TimestampOffsetHasBeenSet() const { return m_timestampOffsetHasBeenSet; }
    template<typename TimestampOffsetT = Aws::String>
    void SetTimestampOffset(TimestampOffsetT&& value) { m_timestampOffsetHasBeenSet = true; m_timestampOffset = std::forward<TimestampOffsetT>(value); }
    template<typename TimestampOffsetT = Aws::String>
    TimecodeConfig& WithTimestampOffset(TimestampOffsetT&& value) { SetTimestampOffset(std::forward<TimestampOffsetT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_anchor;
    bool m_anchorHasBeenSet = false;

    TimecodeSource m_source{TimecodeSource::NOT_SET};
    bool m_sourceHasBeenSet = false;

    Aws::String m_start;
    bool m_startHasBeenSet = false;

    Aws::String m_timestampOffset;
    bool m_timestampOffsetHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
