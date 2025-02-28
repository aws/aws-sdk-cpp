/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/AudioProperties.h>
#include <aws/mediaconvert/model/Codec.h>
#include <aws/mediaconvert/model/DataProperties.h>
#include <aws/mediaconvert/model/TrackType.h>
#include <aws/mediaconvert/model/VideoProperties.h>
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
   * The track information such as codec, duration, etc.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/Track">AWS
   * API Reference</a></p>
   */
  class Track
  {
  public:
    AWS_MEDIACONVERT_API Track();
    AWS_MEDIACONVERT_API Track(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Track& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Properties specific to audio tracks.
     */
    inline const AudioProperties& GetAudioProperties() const{ return m_audioProperties; }
    inline bool AudioPropertiesHasBeenSet() const { return m_audioPropertiesHasBeenSet; }
    inline void SetAudioProperties(const AudioProperties& value) { m_audioPropertiesHasBeenSet = true; m_audioProperties = value; }
    inline void SetAudioProperties(AudioProperties&& value) { m_audioPropertiesHasBeenSet = true; m_audioProperties = std::move(value); }
    inline Track& WithAudioProperties(const AudioProperties& value) { SetAudioProperties(value); return *this;}
    inline Track& WithAudioProperties(AudioProperties&& value) { SetAudioProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The codec used for the track.
     */
    inline const Codec& GetCodec() const{ return m_codec; }
    inline bool CodecHasBeenSet() const { return m_codecHasBeenSet; }
    inline void SetCodec(const Codec& value) { m_codecHasBeenSet = true; m_codec = value; }
    inline void SetCodec(Codec&& value) { m_codecHasBeenSet = true; m_codec = std::move(value); }
    inline Track& WithCodec(const Codec& value) { SetCodec(value); return *this;}
    inline Track& WithCodec(Codec&& value) { SetCodec(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Properties specific to data tracks.
     */
    inline const DataProperties& GetDataProperties() const{ return m_dataProperties; }
    inline bool DataPropertiesHasBeenSet() const { return m_dataPropertiesHasBeenSet; }
    inline void SetDataProperties(const DataProperties& value) { m_dataPropertiesHasBeenSet = true; m_dataProperties = value; }
    inline void SetDataProperties(DataProperties&& value) { m_dataPropertiesHasBeenSet = true; m_dataProperties = std::move(value); }
    inline Track& WithDataProperties(const DataProperties& value) { SetDataProperties(value); return *this;}
    inline Track& WithDataProperties(DataProperties&& value) { SetDataProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The duration of the track in seconds.
     */
    inline double GetDuration() const{ return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(double value) { m_durationHasBeenSet = true; m_duration = value; }
    inline Track& WithDuration(double value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * The index of the track.
     */
    inline int GetIndex() const{ return m_index; }
    inline bool IndexHasBeenSet() const { return m_indexHasBeenSet; }
    inline void SetIndex(int value) { m_indexHasBeenSet = true; m_index = value; }
    inline Track& WithIndex(int value) { SetIndex(value); return *this;}
    ///@}

    ///@{
    /**
     * The type of the track (video, audio, or data).
     */
    inline const TrackType& GetTrackType() const{ return m_trackType; }
    inline bool TrackTypeHasBeenSet() const { return m_trackTypeHasBeenSet; }
    inline void SetTrackType(const TrackType& value) { m_trackTypeHasBeenSet = true; m_trackType = value; }
    inline void SetTrackType(TrackType&& value) { m_trackTypeHasBeenSet = true; m_trackType = std::move(value); }
    inline Track& WithTrackType(const TrackType& value) { SetTrackType(value); return *this;}
    inline Track& WithTrackType(TrackType&& value) { SetTrackType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Properties specific to video tracks.
     */
    inline const VideoProperties& GetVideoProperties() const{ return m_videoProperties; }
    inline bool VideoPropertiesHasBeenSet() const { return m_videoPropertiesHasBeenSet; }
    inline void SetVideoProperties(const VideoProperties& value) { m_videoPropertiesHasBeenSet = true; m_videoProperties = value; }
    inline void SetVideoProperties(VideoProperties&& value) { m_videoPropertiesHasBeenSet = true; m_videoProperties = std::move(value); }
    inline Track& WithVideoProperties(const VideoProperties& value) { SetVideoProperties(value); return *this;}
    inline Track& WithVideoProperties(VideoProperties&& value) { SetVideoProperties(std::move(value)); return *this;}
    ///@}
  private:

    AudioProperties m_audioProperties;
    bool m_audioPropertiesHasBeenSet = false;

    Codec m_codec;
    bool m_codecHasBeenSet = false;

    DataProperties m_dataProperties;
    bool m_dataPropertiesHasBeenSet = false;

    double m_duration;
    bool m_durationHasBeenSet = false;

    int m_index;
    bool m_indexHasBeenSet = false;

    TrackType m_trackType;
    bool m_trackTypeHasBeenSet = false;

    VideoProperties m_videoProperties;
    bool m_videoPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
