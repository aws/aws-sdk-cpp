/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/AudioExtractionType.h>
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
   * <p>Details about an audio source, including its identifier, format, and time
   * information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/AudioSourceDetails">AWS
   * API Reference</a></p>
   */
  class AudioSourceDetails
  {
  public:
    AWS_QBUSINESS_API AudioSourceDetails();
    AWS_QBUSINESS_API AudioSourceDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API AudioSourceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Unique identifier for the audio media file.</p>
     */
    inline const Aws::String& GetMediaId() const{ return m_mediaId; }
    inline bool MediaIdHasBeenSet() const { return m_mediaIdHasBeenSet; }
    inline void SetMediaId(const Aws::String& value) { m_mediaIdHasBeenSet = true; m_mediaId = value; }
    inline void SetMediaId(Aws::String&& value) { m_mediaIdHasBeenSet = true; m_mediaId = std::move(value); }
    inline void SetMediaId(const char* value) { m_mediaIdHasBeenSet = true; m_mediaId.assign(value); }
    inline AudioSourceDetails& WithMediaId(const Aws::String& value) { SetMediaId(value); return *this;}
    inline AudioSourceDetails& WithMediaId(Aws::String&& value) { SetMediaId(std::move(value)); return *this;}
    inline AudioSourceDetails& WithMediaId(const char* value) { SetMediaId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The MIME type of the audio file (e.g., audio/mp3, audio/wav).</p>
     */
    inline const Aws::String& GetMediaMimeType() const{ return m_mediaMimeType; }
    inline bool MediaMimeTypeHasBeenSet() const { return m_mediaMimeTypeHasBeenSet; }
    inline void SetMediaMimeType(const Aws::String& value) { m_mediaMimeTypeHasBeenSet = true; m_mediaMimeType = value; }
    inline void SetMediaMimeType(Aws::String&& value) { m_mediaMimeTypeHasBeenSet = true; m_mediaMimeType = std::move(value); }
    inline void SetMediaMimeType(const char* value) { m_mediaMimeTypeHasBeenSet = true; m_mediaMimeType.assign(value); }
    inline AudioSourceDetails& WithMediaMimeType(const Aws::String& value) { SetMediaMimeType(value); return *this;}
    inline AudioSourceDetails& WithMediaMimeType(Aws::String&& value) { SetMediaMimeType(std::move(value)); return *this;}
    inline AudioSourceDetails& WithMediaMimeType(const char* value) { SetMediaMimeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The starting timestamp in milliseconds for the relevant audio segment.</p>
     */
    inline long long GetStartTimeMilliseconds() const{ return m_startTimeMilliseconds; }
    inline bool StartTimeMillisecondsHasBeenSet() const { return m_startTimeMillisecondsHasBeenSet; }
    inline void SetStartTimeMilliseconds(long long value) { m_startTimeMillisecondsHasBeenSet = true; m_startTimeMilliseconds = value; }
    inline AudioSourceDetails& WithStartTimeMilliseconds(long long value) { SetStartTimeMilliseconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ending timestamp in milliseconds for the relevant audio segment.</p>
     */
    inline long long GetEndTimeMilliseconds() const{ return m_endTimeMilliseconds; }
    inline bool EndTimeMillisecondsHasBeenSet() const { return m_endTimeMillisecondsHasBeenSet; }
    inline void SetEndTimeMilliseconds(long long value) { m_endTimeMillisecondsHasBeenSet = true; m_endTimeMilliseconds = value; }
    inline AudioSourceDetails& WithEndTimeMilliseconds(long long value) { SetEndTimeMilliseconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of audio extraction performed on the content.</p>
     */
    inline const AudioExtractionType& GetAudioExtractionType() const{ return m_audioExtractionType; }
    inline bool AudioExtractionTypeHasBeenSet() const { return m_audioExtractionTypeHasBeenSet; }
    inline void SetAudioExtractionType(const AudioExtractionType& value) { m_audioExtractionTypeHasBeenSet = true; m_audioExtractionType = value; }
    inline void SetAudioExtractionType(AudioExtractionType&& value) { m_audioExtractionTypeHasBeenSet = true; m_audioExtractionType = std::move(value); }
    inline AudioSourceDetails& WithAudioExtractionType(const AudioExtractionType& value) { SetAudioExtractionType(value); return *this;}
    inline AudioSourceDetails& WithAudioExtractionType(AudioExtractionType&& value) { SetAudioExtractionType(std::move(value)); return *this;}
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

    AudioExtractionType m_audioExtractionType;
    bool m_audioExtractionTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
