/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * An array containing track mapping information.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/TrackMapping">AWS
   * API Reference</a></p>
   */
  class TrackMapping
  {
  public:
    AWS_MEDIACONVERT_API TrackMapping() = default;
    AWS_MEDIACONVERT_API TrackMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API TrackMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The index numbers of the audio tracks in your media file.
     */
    inline const Aws::Vector<int>& GetAudioTrackIndexes() const { return m_audioTrackIndexes; }
    inline bool AudioTrackIndexesHasBeenSet() const { return m_audioTrackIndexesHasBeenSet; }
    template<typename AudioTrackIndexesT = Aws::Vector<int>>
    void SetAudioTrackIndexes(AudioTrackIndexesT&& value) { m_audioTrackIndexesHasBeenSet = true; m_audioTrackIndexes = std::forward<AudioTrackIndexesT>(value); }
    template<typename AudioTrackIndexesT = Aws::Vector<int>>
    TrackMapping& WithAudioTrackIndexes(AudioTrackIndexesT&& value) { SetAudioTrackIndexes(std::forward<AudioTrackIndexesT>(value)); return *this;}
    inline TrackMapping& AddAudioTrackIndexes(int value) { m_audioTrackIndexesHasBeenSet = true; m_audioTrackIndexes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * The index numbers of the data tracks in your media file.
     */
    inline const Aws::Vector<int>& GetDataTrackIndexes() const { return m_dataTrackIndexes; }
    inline bool DataTrackIndexesHasBeenSet() const { return m_dataTrackIndexesHasBeenSet; }
    template<typename DataTrackIndexesT = Aws::Vector<int>>
    void SetDataTrackIndexes(DataTrackIndexesT&& value) { m_dataTrackIndexesHasBeenSet = true; m_dataTrackIndexes = std::forward<DataTrackIndexesT>(value); }
    template<typename DataTrackIndexesT = Aws::Vector<int>>
    TrackMapping& WithDataTrackIndexes(DataTrackIndexesT&& value) { SetDataTrackIndexes(std::forward<DataTrackIndexesT>(value)); return *this;}
    inline TrackMapping& AddDataTrackIndexes(int value) { m_dataTrackIndexesHasBeenSet = true; m_dataTrackIndexes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * The index numbers of the video tracks in your media file.
     */
    inline const Aws::Vector<int>& GetVideoTrackIndexes() const { return m_videoTrackIndexes; }
    inline bool VideoTrackIndexesHasBeenSet() const { return m_videoTrackIndexesHasBeenSet; }
    template<typename VideoTrackIndexesT = Aws::Vector<int>>
    void SetVideoTrackIndexes(VideoTrackIndexesT&& value) { m_videoTrackIndexesHasBeenSet = true; m_videoTrackIndexes = std::forward<VideoTrackIndexesT>(value); }
    template<typename VideoTrackIndexesT = Aws::Vector<int>>
    TrackMapping& WithVideoTrackIndexes(VideoTrackIndexesT&& value) { SetVideoTrackIndexes(std::forward<VideoTrackIndexesT>(value)); return *this;}
    inline TrackMapping& AddVideoTrackIndexes(int value) { m_videoTrackIndexesHasBeenSet = true; m_videoTrackIndexes.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<int> m_audioTrackIndexes;
    bool m_audioTrackIndexesHasBeenSet = false;

    Aws::Vector<int> m_dataTrackIndexes;
    bool m_dataTrackIndexesHasBeenSet = false;

    Aws::Vector<int> m_videoTrackIndexes;
    bool m_videoTrackIndexesHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
