/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/AudioChannelTag.h>
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
   * Specify the QuickTime audio channel layout tags for the audio channels in this
   * audio track. When you don't specify a value, MediaConvert labels your track as
   * Center (C) by default. To use Audio layout tagging, your output must be in a
   * QuickTime (MOV) container and your audio codec must be AAC, WAV, or
   * AIFF.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/AudioChannelTaggingSettings">AWS
   * API Reference</a></p>
   */
  class AudioChannelTaggingSettings
  {
  public:
    AWS_MEDIACONVERT_API AudioChannelTaggingSettings() = default;
    AWS_MEDIACONVERT_API AudioChannelTaggingSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API AudioChannelTaggingSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Specify the QuickTime audio channel layout tags for the audio channels in this
     * audio track. Enter channel layout tags in the same order as your output's audio
     * channel order. For example, if your output audio track has a left and a right
     * channel, enter Left (L) for the first channel and Right (R) for the second. If
     * your output has multiple single-channel audio tracks, enter a single channel
     * layout tag for each track.
     */
    inline AudioChannelTag GetChannelTag() const { return m_channelTag; }
    inline bool ChannelTagHasBeenSet() const { return m_channelTagHasBeenSet; }
    inline void SetChannelTag(AudioChannelTag value) { m_channelTagHasBeenSet = true; m_channelTag = value; }
    inline AudioChannelTaggingSettings& WithChannelTag(AudioChannelTag value) { SetChannelTag(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the QuickTime audio channel layout tags for the audio channels in this
     * audio track. Enter channel layout tags in the same order as your output's audio
     * channel order. For example, if your output audio track has a left and a right
     * channel, enter Left (L) for the first channel and Right (R) for the second. If
     * your output has multiple single-channel audio tracks, enter a single channel
     * layout tag for each track.
     */
    inline const Aws::Vector<AudioChannelTag>& GetChannelTags() const { return m_channelTags; }
    inline bool ChannelTagsHasBeenSet() const { return m_channelTagsHasBeenSet; }
    template<typename ChannelTagsT = Aws::Vector<AudioChannelTag>>
    void SetChannelTags(ChannelTagsT&& value) { m_channelTagsHasBeenSet = true; m_channelTags = std::forward<ChannelTagsT>(value); }
    template<typename ChannelTagsT = Aws::Vector<AudioChannelTag>>
    AudioChannelTaggingSettings& WithChannelTags(ChannelTagsT&& value) { SetChannelTags(std::forward<ChannelTagsT>(value)); return *this;}
    inline AudioChannelTaggingSettings& AddChannelTags(AudioChannelTag value) { m_channelTagsHasBeenSet = true; m_channelTags.push_back(value); return *this; }
    ///@}
  private:

    AudioChannelTag m_channelTag{AudioChannelTag::NOT_SET};
    bool m_channelTagHasBeenSet = false;

    Aws::Vector<AudioChannelTag> m_channelTags;
    bool m_channelTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
