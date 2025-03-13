/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/VideoSelectorPid.h>
#include <aws/medialive/model/VideoSelectorProgramId.h>
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
   * Video Selector Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/VideoSelectorSettings">AWS
   * API Reference</a></p>
   */
  class VideoSelectorSettings
  {
  public:
    AWS_MEDIALIVE_API VideoSelectorSettings() = default;
    AWS_MEDIALIVE_API VideoSelectorSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API VideoSelectorSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const VideoSelectorPid& GetVideoSelectorPid() const { return m_videoSelectorPid; }
    inline bool VideoSelectorPidHasBeenSet() const { return m_videoSelectorPidHasBeenSet; }
    template<typename VideoSelectorPidT = VideoSelectorPid>
    void SetVideoSelectorPid(VideoSelectorPidT&& value) { m_videoSelectorPidHasBeenSet = true; m_videoSelectorPid = std::forward<VideoSelectorPidT>(value); }
    template<typename VideoSelectorPidT = VideoSelectorPid>
    VideoSelectorSettings& WithVideoSelectorPid(VideoSelectorPidT&& value) { SetVideoSelectorPid(std::forward<VideoSelectorPidT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const VideoSelectorProgramId& GetVideoSelectorProgramId() const { return m_videoSelectorProgramId; }
    inline bool VideoSelectorProgramIdHasBeenSet() const { return m_videoSelectorProgramIdHasBeenSet; }
    template<typename VideoSelectorProgramIdT = VideoSelectorProgramId>
    void SetVideoSelectorProgramId(VideoSelectorProgramIdT&& value) { m_videoSelectorProgramIdHasBeenSet = true; m_videoSelectorProgramId = std::forward<VideoSelectorProgramIdT>(value); }
    template<typename VideoSelectorProgramIdT = VideoSelectorProgramId>
    VideoSelectorSettings& WithVideoSelectorProgramId(VideoSelectorProgramIdT&& value) { SetVideoSelectorProgramId(std::forward<VideoSelectorProgramIdT>(value)); return *this;}
    ///@}
  private:

    VideoSelectorPid m_videoSelectorPid;
    bool m_videoSelectorPidHasBeenSet = false;

    VideoSelectorProgramId m_videoSelectorProgramId;
    bool m_videoSelectorProgramIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
