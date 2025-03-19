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
    AWS_QBUSINESS_API AudioSourceDetails() = default;
    AWS_QBUSINESS_API AudioSourceDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API AudioSourceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Unique identifier for the audio media file.</p>
     */
    inline const Aws::String& GetMediaId() const { return m_mediaId; }
    inline bool MediaIdHasBeenSet() const { return m_mediaIdHasBeenSet; }
    template<typename MediaIdT = Aws::String>
    void SetMediaId(MediaIdT&& value) { m_mediaIdHasBeenSet = true; m_mediaId = std::forward<MediaIdT>(value); }
    template<typename MediaIdT = Aws::String>
    AudioSourceDetails& WithMediaId(MediaIdT&& value) { SetMediaId(std::forward<MediaIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The MIME type of the audio file (e.g., audio/mp3, audio/wav).</p>
     */
    inline const Aws::String& GetMediaMimeType() const { return m_mediaMimeType; }
    inline bool MediaMimeTypeHasBeenSet() const { return m_mediaMimeTypeHasBeenSet; }
    template<typename MediaMimeTypeT = Aws::String>
    void SetMediaMimeType(MediaMimeTypeT&& value) { m_mediaMimeTypeHasBeenSet = true; m_mediaMimeType = std::forward<MediaMimeTypeT>(value); }
    template<typename MediaMimeTypeT = Aws::String>
    AudioSourceDetails& WithMediaMimeType(MediaMimeTypeT&& value) { SetMediaMimeType(std::forward<MediaMimeTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The starting timestamp in milliseconds for the relevant audio segment.</p>
     */
    inline long long GetStartTimeMilliseconds() const { return m_startTimeMilliseconds; }
    inline bool StartTimeMillisecondsHasBeenSet() const { return m_startTimeMillisecondsHasBeenSet; }
    inline void SetStartTimeMilliseconds(long long value) { m_startTimeMillisecondsHasBeenSet = true; m_startTimeMilliseconds = value; }
    inline AudioSourceDetails& WithStartTimeMilliseconds(long long value) { SetStartTimeMilliseconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ending timestamp in milliseconds for the relevant audio segment.</p>
     */
    inline long long GetEndTimeMilliseconds() const { return m_endTimeMilliseconds; }
    inline bool EndTimeMillisecondsHasBeenSet() const { return m_endTimeMillisecondsHasBeenSet; }
    inline void SetEndTimeMilliseconds(long long value) { m_endTimeMillisecondsHasBeenSet = true; m_endTimeMilliseconds = value; }
    inline AudioSourceDetails& WithEndTimeMilliseconds(long long value) { SetEndTimeMilliseconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of audio extraction performed on the content.</p>
     */
    inline AudioExtractionType GetAudioExtractionType() const { return m_audioExtractionType; }
    inline bool AudioExtractionTypeHasBeenSet() const { return m_audioExtractionTypeHasBeenSet; }
    inline void SetAudioExtractionType(AudioExtractionType value) { m_audioExtractionTypeHasBeenSet = true; m_audioExtractionType = value; }
    inline AudioSourceDetails& WithAudioExtractionType(AudioExtractionType value) { SetAudioExtractionType(value); return *this;}
    ///@}
  private:

    Aws::String m_mediaId;
    bool m_mediaIdHasBeenSet = false;

    Aws::String m_mediaMimeType;
    bool m_mediaMimeTypeHasBeenSet = false;

    long long m_startTimeMilliseconds{0};
    bool m_startTimeMillisecondsHasBeenSet = false;

    long long m_endTimeMilliseconds{0};
    bool m_endTimeMillisecondsHasBeenSet = false;

    AudioExtractionType m_audioExtractionType{AudioExtractionType::NOT_SET};
    bool m_audioExtractionTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
