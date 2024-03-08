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
    AWS_MEDIACONVERT_API AudioChannelTaggingSettings();
    AWS_MEDIACONVERT_API AudioChannelTaggingSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API AudioChannelTaggingSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Specify the QuickTime audio channel layout tags for the audio channels in this
     * audio track. Enter channel layout tags in the same order as your output's audio
     * channel order. For example, if your output audio track has a left and a right
     * channel, enter Left (L) for the first channel and Right (R) for the second. If
     * your output has multiple single-channel audio tracks, enter a single channel
     * layout tag for each track.
     */
    inline const AudioChannelTag& GetChannelTag() const{ return m_channelTag; }

    /**
     * Specify the QuickTime audio channel layout tags for the audio channels in this
     * audio track. Enter channel layout tags in the same order as your output's audio
     * channel order. For example, if your output audio track has a left and a right
     * channel, enter Left (L) for the first channel and Right (R) for the second. If
     * your output has multiple single-channel audio tracks, enter a single channel
     * layout tag for each track.
     */
    inline bool ChannelTagHasBeenSet() const { return m_channelTagHasBeenSet; }

    /**
     * Specify the QuickTime audio channel layout tags for the audio channels in this
     * audio track. Enter channel layout tags in the same order as your output's audio
     * channel order. For example, if your output audio track has a left and a right
     * channel, enter Left (L) for the first channel and Right (R) for the second. If
     * your output has multiple single-channel audio tracks, enter a single channel
     * layout tag for each track.
     */
    inline void SetChannelTag(const AudioChannelTag& value) { m_channelTagHasBeenSet = true; m_channelTag = value; }

    /**
     * Specify the QuickTime audio channel layout tags for the audio channels in this
     * audio track. Enter channel layout tags in the same order as your output's audio
     * channel order. For example, if your output audio track has a left and a right
     * channel, enter Left (L) for the first channel and Right (R) for the second. If
     * your output has multiple single-channel audio tracks, enter a single channel
     * layout tag for each track.
     */
    inline void SetChannelTag(AudioChannelTag&& value) { m_channelTagHasBeenSet = true; m_channelTag = std::move(value); }

    /**
     * Specify the QuickTime audio channel layout tags for the audio channels in this
     * audio track. Enter channel layout tags in the same order as your output's audio
     * channel order. For example, if your output audio track has a left and a right
     * channel, enter Left (L) for the first channel and Right (R) for the second. If
     * your output has multiple single-channel audio tracks, enter a single channel
     * layout tag for each track.
     */
    inline AudioChannelTaggingSettings& WithChannelTag(const AudioChannelTag& value) { SetChannelTag(value); return *this;}

    /**
     * Specify the QuickTime audio channel layout tags for the audio channels in this
     * audio track. Enter channel layout tags in the same order as your output's audio
     * channel order. For example, if your output audio track has a left and a right
     * channel, enter Left (L) for the first channel and Right (R) for the second. If
     * your output has multiple single-channel audio tracks, enter a single channel
     * layout tag for each track.
     */
    inline AudioChannelTaggingSettings& WithChannelTag(AudioChannelTag&& value) { SetChannelTag(std::move(value)); return *this;}


    /**
     * Specify the QuickTime audio channel layout tags for the audio channels in this
     * audio track. Enter channel layout tags in the same order as your output's audio
     * channel order. For example, if your output audio track has a left and a right
     * channel, enter Left (L) for the first channel and Right (R) for the second. If
     * your output has multiple single-channel audio tracks, enter a single channel
     * layout tag for each track.
     */
    inline const Aws::Vector<AudioChannelTag>& GetChannelTags() const{ return m_channelTags; }

    /**
     * Specify the QuickTime audio channel layout tags for the audio channels in this
     * audio track. Enter channel layout tags in the same order as your output's audio
     * channel order. For example, if your output audio track has a left and a right
     * channel, enter Left (L) for the first channel and Right (R) for the second. If
     * your output has multiple single-channel audio tracks, enter a single channel
     * layout tag for each track.
     */
    inline bool ChannelTagsHasBeenSet() const { return m_channelTagsHasBeenSet; }

    /**
     * Specify the QuickTime audio channel layout tags for the audio channels in this
     * audio track. Enter channel layout tags in the same order as your output's audio
     * channel order. For example, if your output audio track has a left and a right
     * channel, enter Left (L) for the first channel and Right (R) for the second. If
     * your output has multiple single-channel audio tracks, enter a single channel
     * layout tag for each track.
     */
    inline void SetChannelTags(const Aws::Vector<AudioChannelTag>& value) { m_channelTagsHasBeenSet = true; m_channelTags = value; }

    /**
     * Specify the QuickTime audio channel layout tags for the audio channels in this
     * audio track. Enter channel layout tags in the same order as your output's audio
     * channel order. For example, if your output audio track has a left and a right
     * channel, enter Left (L) for the first channel and Right (R) for the second. If
     * your output has multiple single-channel audio tracks, enter a single channel
     * layout tag for each track.
     */
    inline void SetChannelTags(Aws::Vector<AudioChannelTag>&& value) { m_channelTagsHasBeenSet = true; m_channelTags = std::move(value); }

    /**
     * Specify the QuickTime audio channel layout tags for the audio channels in this
     * audio track. Enter channel layout tags in the same order as your output's audio
     * channel order. For example, if your output audio track has a left and a right
     * channel, enter Left (L) for the first channel and Right (R) for the second. If
     * your output has multiple single-channel audio tracks, enter a single channel
     * layout tag for each track.
     */
    inline AudioChannelTaggingSettings& WithChannelTags(const Aws::Vector<AudioChannelTag>& value) { SetChannelTags(value); return *this;}

    /**
     * Specify the QuickTime audio channel layout tags for the audio channels in this
     * audio track. Enter channel layout tags in the same order as your output's audio
     * channel order. For example, if your output audio track has a left and a right
     * channel, enter Left (L) for the first channel and Right (R) for the second. If
     * your output has multiple single-channel audio tracks, enter a single channel
     * layout tag for each track.
     */
    inline AudioChannelTaggingSettings& WithChannelTags(Aws::Vector<AudioChannelTag>&& value) { SetChannelTags(std::move(value)); return *this;}

    /**
     * Specify the QuickTime audio channel layout tags for the audio channels in this
     * audio track. Enter channel layout tags in the same order as your output's audio
     * channel order. For example, if your output audio track has a left and a right
     * channel, enter Left (L) for the first channel and Right (R) for the second. If
     * your output has multiple single-channel audio tracks, enter a single channel
     * layout tag for each track.
     */
    inline AudioChannelTaggingSettings& AddChannelTags(const AudioChannelTag& value) { m_channelTagsHasBeenSet = true; m_channelTags.push_back(value); return *this; }

    /**
     * Specify the QuickTime audio channel layout tags for the audio channels in this
     * audio track. Enter channel layout tags in the same order as your output's audio
     * channel order. For example, if your output audio track has a left and a right
     * channel, enter Left (L) for the first channel and Right (R) for the second. If
     * your output has multiple single-channel audio tracks, enter a single channel
     * layout tag for each track.
     */
    inline AudioChannelTaggingSettings& AddChannelTags(AudioChannelTag&& value) { m_channelTagsHasBeenSet = true; m_channelTags.push_back(std::move(value)); return *this; }

  private:

    AudioChannelTag m_channelTag;
    bool m_channelTagHasBeenSet = false;

    Aws::Vector<AudioChannelTag> m_channelTags;
    bool m_channelTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
