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
    AWS_MEDIACONVERT_API OutputDetail();
    AWS_MEDIACONVERT_API OutputDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API OutputDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Duration in milliseconds
     */
    inline int GetDurationInMs() const{ return m_durationInMs; }

    /**
     * Duration in milliseconds
     */
    inline bool DurationInMsHasBeenSet() const { return m_durationInMsHasBeenSet; }

    /**
     * Duration in milliseconds
     */
    inline void SetDurationInMs(int value) { m_durationInMsHasBeenSet = true; m_durationInMs = value; }

    /**
     * Duration in milliseconds
     */
    inline OutputDetail& WithDurationInMs(int value) { SetDurationInMs(value); return *this;}


    /**
     * Contains details about the output's video stream
     */
    inline const VideoDetail& GetVideoDetails() const{ return m_videoDetails; }

    /**
     * Contains details about the output's video stream
     */
    inline bool VideoDetailsHasBeenSet() const { return m_videoDetailsHasBeenSet; }

    /**
     * Contains details about the output's video stream
     */
    inline void SetVideoDetails(const VideoDetail& value) { m_videoDetailsHasBeenSet = true; m_videoDetails = value; }

    /**
     * Contains details about the output's video stream
     */
    inline void SetVideoDetails(VideoDetail&& value) { m_videoDetailsHasBeenSet = true; m_videoDetails = std::move(value); }

    /**
     * Contains details about the output's video stream
     */
    inline OutputDetail& WithVideoDetails(const VideoDetail& value) { SetVideoDetails(value); return *this;}

    /**
     * Contains details about the output's video stream
     */
    inline OutputDetail& WithVideoDetails(VideoDetail&& value) { SetVideoDetails(std::move(value)); return *this;}

  private:

    int m_durationInMs;
    bool m_durationInMsHasBeenSet = false;

    VideoDetail m_videoDetails;
    bool m_videoDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
