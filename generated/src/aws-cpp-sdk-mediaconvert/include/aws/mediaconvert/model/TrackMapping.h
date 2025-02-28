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
   * Track mapping information.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/TrackMapping">AWS
   * API Reference</a></p>
   */
  class TrackMapping
  {
  public:
    AWS_MEDIACONVERT_API TrackMapping();
    AWS_MEDIACONVERT_API TrackMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API TrackMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The indexes of the audio tracks.
     */
    inline const Aws::Vector<int>& GetAudioTrackIndexes() const{ return m_audioTrackIndexes; }
    inline bool AudioTrackIndexesHasBeenSet() const { return m_audioTrackIndexesHasBeenSet; }
    inline void SetAudioTrackIndexes(const Aws::Vector<int>& value) { m_audioTrackIndexesHasBeenSet = true; m_audioTrackIndexes = value; }
    inline void SetAudioTrackIndexes(Aws::Vector<int>&& value) { m_audioTrackIndexesHasBeenSet = true; m_audioTrackIndexes = std::move(value); }
    inline TrackMapping& WithAudioTrackIndexes(const Aws::Vector<int>& value) { SetAudioTrackIndexes(value); return *this;}
    inline TrackMapping& WithAudioTrackIndexes(Aws::Vector<int>&& value) { SetAudioTrackIndexes(std::move(value)); return *this;}
    inline TrackMapping& AddAudioTrackIndexes(int value) { m_audioTrackIndexesHasBeenSet = true; m_audioTrackIndexes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * The indexes of the data tracks.
     */
    inline const Aws::Vector<int>& GetDataTrackIndexes() const{ return m_dataTrackIndexes; }
    inline bool DataTrackIndexesHasBeenSet() const { return m_dataTrackIndexesHasBeenSet; }
    inline void SetDataTrackIndexes(const Aws::Vector<int>& value) { m_dataTrackIndexesHasBeenSet = true; m_dataTrackIndexes = value; }
    inline void SetDataTrackIndexes(Aws::Vector<int>&& value) { m_dataTrackIndexesHasBeenSet = true; m_dataTrackIndexes = std::move(value); }
    inline TrackMapping& WithDataTrackIndexes(const Aws::Vector<int>& value) { SetDataTrackIndexes(value); return *this;}
    inline TrackMapping& WithDataTrackIndexes(Aws::Vector<int>&& value) { SetDataTrackIndexes(std::move(value)); return *this;}
    inline TrackMapping& AddDataTrackIndexes(int value) { m_dataTrackIndexesHasBeenSet = true; m_dataTrackIndexes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * The indexes of the video tracks.
     */
    inline const Aws::Vector<int>& GetVideoTrackIndexes() const{ return m_videoTrackIndexes; }
    inline bool VideoTrackIndexesHasBeenSet() const { return m_videoTrackIndexesHasBeenSet; }
    inline void SetVideoTrackIndexes(const Aws::Vector<int>& value) { m_videoTrackIndexesHasBeenSet = true; m_videoTrackIndexes = value; }
    inline void SetVideoTrackIndexes(Aws::Vector<int>&& value) { m_videoTrackIndexesHasBeenSet = true; m_videoTrackIndexes = std::move(value); }
    inline TrackMapping& WithVideoTrackIndexes(const Aws::Vector<int>& value) { SetVideoTrackIndexes(value); return *this;}
    inline TrackMapping& WithVideoTrackIndexes(Aws::Vector<int>&& value) { SetVideoTrackIndexes(std::move(value)); return *this;}
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
