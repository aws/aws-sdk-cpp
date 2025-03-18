/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/VideoDetail.h>
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
   * Details regarding output<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/OutputDetail">AWS
   * API Reference</a></p>
   */
  class OutputDetail
  {
  public:
    AWS_MEDIACONVERT_API OutputDetail() = default;
    AWS_MEDIACONVERT_API OutputDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API OutputDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Duration in milliseconds
     */
    inline int GetDurationInMs() const { return m_durationInMs; }
    inline bool DurationInMsHasBeenSet() const { return m_durationInMsHasBeenSet; }
    inline void SetDurationInMs(int value) { m_durationInMsHasBeenSet = true; m_durationInMs = value; }
    inline OutputDetail& WithDurationInMs(int value) { SetDurationInMs(value); return *this;}
    ///@}

    ///@{
    /**
     * Contains details about the output's video stream
     */
    inline const VideoDetail& GetVideoDetails() const { return m_videoDetails; }
    inline bool VideoDetailsHasBeenSet() const { return m_videoDetailsHasBeenSet; }
    template<typename VideoDetailsT = VideoDetail>
    void SetVideoDetails(VideoDetailsT&& value) { m_videoDetailsHasBeenSet = true; m_videoDetails = std::forward<VideoDetailsT>(value); }
    template<typename VideoDetailsT = VideoDetail>
    OutputDetail& WithVideoDetails(VideoDetailsT&& value) { SetVideoDetails(std::forward<VideoDetailsT>(value)); return *this;}
    ///@}
  private:

    int m_durationInMs{0};
    bool m_durationInMsHasBeenSet = false;

    VideoDetail m_videoDetails;
    bool m_videoDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
