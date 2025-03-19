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
   * To transcode only portions of your video overlay, include one input clip for
   * each part of your video overlay that you want in your output.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/VideoOverlayInputClipping">AWS
   * API Reference</a></p>
   */
  class VideoOverlayInputClipping
  {
  public:
    AWS_MEDIACONVERT_API VideoOverlayInputClipping() = default;
    AWS_MEDIACONVERT_API VideoOverlayInputClipping(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API VideoOverlayInputClipping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Specify the timecode of the last frame to include in your video overlay's clip.
     * Use the format HH:MM:SS:FF or HH:MM:SS;FF, where HH is the hour, MM is the
     * minute, SS is the second, and FF is the frame number. When entering this value,
     * take into account your choice for Timecode source.
     */
    inline const Aws::String& GetEndTimecode() const { return m_endTimecode; }
    inline bool EndTimecodeHasBeenSet() const { return m_endTimecodeHasBeenSet; }
    template<typename EndTimecodeT = Aws::String>
    void SetEndTimecode(EndTimecodeT&& value) { m_endTimecodeHasBeenSet = true; m_endTimecode = std::forward<EndTimecodeT>(value); }
    template<typename EndTimecodeT = Aws::String>
    VideoOverlayInputClipping& WithEndTimecode(EndTimecodeT&& value) { SetEndTimecode(std::forward<EndTimecodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify the timecode of the first frame to include in your video overlay's clip.
     * Use the format HH:MM:SS:FF or HH:MM:SS;FF, where HH is the hour, MM is the
     * minute, SS is the second, and FF is the frame number. When entering this value,
     * take into account your choice for Timecode source.
     */
    inline const Aws::String& GetStartTimecode() const { return m_startTimecode; }
    inline bool StartTimecodeHasBeenSet() const { return m_startTimecodeHasBeenSet; }
    template<typename StartTimecodeT = Aws::String>
    void SetStartTimecode(StartTimecodeT&& value) { m_startTimecodeHasBeenSet = true; m_startTimecode = std::forward<StartTimecodeT>(value); }
    template<typename StartTimecodeT = Aws::String>
    VideoOverlayInputClipping& WithStartTimecode(StartTimecodeT&& value) { SetStartTimecode(std::forward<StartTimecodeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_endTimecode;
    bool m_endTimecodeHasBeenSet = false;

    Aws::String m_startTimecode;
    bool m_startTimecodeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
