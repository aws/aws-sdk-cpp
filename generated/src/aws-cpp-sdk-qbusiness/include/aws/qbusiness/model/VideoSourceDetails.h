/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/VideoExtractionType.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>Details about a video source, including its identifier, format, and time
   * information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/VideoSourceDetails">AWS
   * API Reference</a></p>
   */
  class VideoSourceDetails
  {
  public:
    AWS_QBUSINESS_API VideoSourceDetails();
    AWS_QBUSINESS_API VideoSourceDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API VideoSourceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Unique identifier for the video media file.</p>
     */
    inline const Aws::String& GetMediaId() const{ return m_mediaId; }
    inline bool MediaIdHasBeenSet() const { return m_mediaIdHasBeenSet; }
    inline void SetMediaId(const Aws::String& value) { m_mediaIdHasBeenSet = true; m_mediaId = value; }
    inline void SetMediaId(Aws::String&& value) { m_mediaIdHasBeenSet = true; m_mediaId = std::move(value); }
    inline void SetMediaId(const char* value) { m_mediaIdHasBeenSet = true; m_mediaId.assign(value); }
    inline VideoSourceDetails& WithMediaId(const Aws::String& value) { SetMediaId(value); return *this;}
    inline VideoSourceDetails& WithMediaId(Aws::String&& value) { SetMediaId(std::move(value)); return *this;}
    inline VideoSourceDetails& WithMediaId(const char* value) { SetMediaId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The MIME type of the video file (e.g., video/mp4, video/avi).</p>
     */
    inline const Aws::String& GetMediaMimeType() const{ return m_mediaMimeType; }
    inline bool MediaMimeTypeHasBeenSet() const { return m_mediaMimeTypeHasBeenSet; }
    inline void SetMediaMimeType(const Aws::String& value) { m_mediaMimeTypeHasBeenSet = true; m_mediaMimeType = value; }
    inline void SetMediaMimeType(Aws::String&& value) { m_mediaMimeTypeHasBeenSet = true; m_mediaMimeType = std::move(value); }
    inline void SetMediaMimeType(const char* value) { m_mediaMimeTypeHasBeenSet = true; m_mediaMimeType.assign(value); }
    inline VideoSourceDetails& WithMediaMimeType(const Aws::String& value) { SetMediaMimeType(value); return *this;}
    inline VideoSourceDetails& WithMediaMimeType(Aws::String&& value) { SetMediaMimeType(std::move(value)); return *this;}
    inline VideoSourceDetails& WithMediaMimeType(const char* value) { SetMediaMimeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The starting timestamp in milliseconds for the relevant video segment.</p>
     */
    inline long long GetStartTimeMilliseconds() const{ return m_startTimeMilliseconds; }
    inline bool StartTimeMillisecondsHasBeenSet() const { return m_startTimeMillisecondsHasBeenSet; }
    inline void SetStartTimeMilliseconds(long long value) { m_startTimeMillisecondsHasBeenSet = true; m_startTimeMilliseconds = value; }
    inline VideoSourceDetails& WithStartTimeMilliseconds(long long value) { SetStartTimeMilliseconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ending timestamp in milliseconds for the relevant video segment.</p>
     */
    inline long long GetEndTimeMilliseconds() const{ return m_endTimeMilliseconds; }
    inline bool EndTimeMillisecondsHasBeenSet() const { return m_endTimeMillisecondsHasBeenSet; }
    inline void SetEndTimeMilliseconds(long long value) { m_endTimeMillisecondsHasBeenSet = true; m_endTimeMilliseconds = value; }
    inline VideoSourceDetails& WithEndTimeMilliseconds(long long value) { SetEndTimeMilliseconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of video extraction performed on the content.</p>
     */
    inline const VideoExtractionType& GetVideoExtractionType() const{ return m_videoExtractionType; }
    inline bool VideoExtractionTypeHasBeenSet() const { return m_videoExtractionTypeHasBeenSet; }
    inline void SetVideoExtractionType(const VideoExtractionType& value) { m_videoExtractionTypeHasBeenSet = true; m_videoExtractionType = value; }
    inline void SetVideoExtractionType(VideoExtractionType&& value) { m_videoExtractionTypeHasBeenSet = true; m_videoExtractionType = std::move(value); }
    inline VideoSourceDetails& WithVideoExtractionType(const VideoExtractionType& value) { SetVideoExtractionType(value); return *this;}
    inline VideoSourceDetails& WithVideoExtractionType(VideoExtractionType&& value) { SetVideoExtractionType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_mediaId;
    bool m_mediaIdHasBeenSet = false;

    Aws::String m_mediaMimeType;
    bool m_mediaMimeTypeHasBeenSet = false;

    long long m_startTimeMilliseconds;
    bool m_startTimeMillisecondsHasBeenSet = false;

    long long m_endTimeMilliseconds;
    bool m_endTimeMillisecondsHasBeenSet = false;

    VideoExtractionType m_videoExtractionType;
    bool m_videoExtractionTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
