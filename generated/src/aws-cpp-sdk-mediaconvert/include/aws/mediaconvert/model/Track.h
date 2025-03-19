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
    AWS_MEDIACONVERT_API Track() = default;
    AWS_MEDIACONVERT_API Track(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Track& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Properties specific to audio tracks.
     */
    inline const AudioProperties& GetAudioProperties() const { return m_audioProperties; }
    inline bool AudioPropertiesHasBeenSet() const { return m_audioPropertiesHasBeenSet; }
    template<typename AudioPropertiesT = AudioProperties>
    void SetAudioProperties(AudioPropertiesT&& value) { m_audioPropertiesHasBeenSet = true; m_audioProperties = std::forward<AudioPropertiesT>(value); }
    template<typename AudioPropertiesT = AudioProperties>
    Track& WithAudioProperties(AudioPropertiesT&& value) { SetAudioProperties(std::forward<AudioPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The codec used for the track.
     */
    inline Codec GetCodec() const { return m_codec; }
    inline bool CodecHasBeenSet() const { return m_codecHasBeenSet; }
    inline void SetCodec(Codec value) { m_codecHasBeenSet = true; m_codec = value; }
    inline Track& WithCodec(Codec value) { SetCodec(value); return *this;}
    ///@}

    ///@{
    /**
     * Properties specific to data tracks.
     */
    inline const DataProperties& GetDataProperties() const { return m_dataProperties; }
    inline bool DataPropertiesHasBeenSet() const { return m_dataPropertiesHasBeenSet; }
    template<typename DataPropertiesT = DataProperties>
    void SetDataProperties(DataPropertiesT&& value) { m_dataPropertiesHasBeenSet = true; m_dataProperties = std::forward<DataPropertiesT>(value); }
    template<typename DataPropertiesT = DataProperties>
    Track& WithDataProperties(DataPropertiesT&& value) { SetDataProperties(std::forward<DataPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The duration of the track in seconds.
     */
    inline double GetDuration() const { return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(double value) { m_durationHasBeenSet = true; m_duration = value; }
    inline Track& WithDuration(double value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * The index of the track.
     */
    inline int GetIndex() const { return m_index; }
    inline bool IndexHasBeenSet() const { return m_indexHasBeenSet; }
    inline void SetIndex(int value) { m_indexHasBeenSet = true; m_index = value; }
    inline Track& WithIndex(int value) { SetIndex(value); return *this;}
    ///@}

    ///@{
    /**
     * The type of the track (video, audio, or data).
     */
    inline TrackType GetTrackType() const { return m_trackType; }
    inline bool TrackTypeHasBeenSet() const { return m_trackTypeHasBeenSet; }
    inline void SetTrackType(TrackType value) { m_trackTypeHasBeenSet = true; m_trackType = value; }
    inline Track& WithTrackType(TrackType value) { SetTrackType(value); return *this;}
    ///@}

    ///@{
    /**
     * Properties specific to video tracks.
     */
    inline const VideoProperties& GetVideoProperties() const { return m_videoProperties; }
    inline bool VideoPropertiesHasBeenSet() const { return m_videoPropertiesHasBeenSet; }
    template<typename VideoPropertiesT = VideoProperties>
    void SetVideoProperties(VideoPropertiesT&& value) { m_videoPropertiesHasBeenSet = true; m_videoProperties = std::forward<VideoPropertiesT>(value); }
    template<typename VideoPropertiesT = VideoProperties>
    Track& WithVideoProperties(VideoPropertiesT&& value) { SetVideoProperties(std::forward<VideoPropertiesT>(value)); return *this;}
    ///@}
  private:

    AudioProperties m_audioProperties;
    bool m_audioPropertiesHasBeenSet = false;

    Codec m_codec{Codec::NOT_SET};
    bool m_codecHasBeenSet = false;

    DataProperties m_dataProperties;
    bool m_dataPropertiesHasBeenSet = false;

    double m_duration{0.0};
    bool m_durationHasBeenSet = false;

    int m_index{0};
    bool m_indexHasBeenSet = false;

    TrackType m_trackType{TrackType::NOT_SET};
    bool m_trackTypeHasBeenSet = false;

    VideoProperties m_videoProperties;
    bool m_videoPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
