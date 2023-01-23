/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/mediatailor/MediaTailorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediatailor/model/SlateSource.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediatailor/model/PlaybackMode.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/mediatailor/model/Tier.h>
#include <aws/mediatailor/model/RequestOutputItem.h>
#include <utility>

namespace Aws
{
namespace MediaTailor
{
namespace Model
{

  /**
   */
  class CreateChannelRequest : public MediaTailorRequest
  {
  public:
    AWS_MEDIATAILOR_API CreateChannelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateChannel"; }

    AWS_MEDIATAILOR_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the channel.</p>
     */
    inline const Aws::String& GetChannelName() const{ return m_channelName; }

    /**
     * <p>The name of the channel.</p>
     */
    inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }

    /**
     * <p>The name of the channel.</p>
     */
    inline void SetChannelName(const Aws::String& value) { m_channelNameHasBeenSet = true; m_channelName = value; }

    /**
     * <p>The name of the channel.</p>
     */
    inline void SetChannelName(Aws::String&& value) { m_channelNameHasBeenSet = true; m_channelName = std::move(value); }

    /**
     * <p>The name of the channel.</p>
     */
    inline void SetChannelName(const char* value) { m_channelNameHasBeenSet = true; m_channelName.assign(value); }

    /**
     * <p>The name of the channel.</p>
     */
    inline CreateChannelRequest& WithChannelName(const Aws::String& value) { SetChannelName(value); return *this;}

    /**
     * <p>The name of the channel.</p>
     */
    inline CreateChannelRequest& WithChannelName(Aws::String&& value) { SetChannelName(std::move(value)); return *this;}

    /**
     * <p>The name of the channel.</p>
     */
    inline CreateChannelRequest& WithChannelName(const char* value) { SetChannelName(value); return *this;}


    /**
     * <p>The slate used to fill gaps between programs in the schedule. You must
     * configure filler slate if your channel uses the <code>LINEAR</code>
     * <code>PlaybackMode</code>. MediaTailor doesn't support filler slate for channels
     * using the <code>LOOP</code> <code>PlaybackMode</code>.</p>
     */
    inline const SlateSource& GetFillerSlate() const{ return m_fillerSlate; }

    /**
     * <p>The slate used to fill gaps between programs in the schedule. You must
     * configure filler slate if your channel uses the <code>LINEAR</code>
     * <code>PlaybackMode</code>. MediaTailor doesn't support filler slate for channels
     * using the <code>LOOP</code> <code>PlaybackMode</code>.</p>
     */
    inline bool FillerSlateHasBeenSet() const { return m_fillerSlateHasBeenSet; }

    /**
     * <p>The slate used to fill gaps between programs in the schedule. You must
     * configure filler slate if your channel uses the <code>LINEAR</code>
     * <code>PlaybackMode</code>. MediaTailor doesn't support filler slate for channels
     * using the <code>LOOP</code> <code>PlaybackMode</code>.</p>
     */
    inline void SetFillerSlate(const SlateSource& value) { m_fillerSlateHasBeenSet = true; m_fillerSlate = value; }

    /**
     * <p>The slate used to fill gaps between programs in the schedule. You must
     * configure filler slate if your channel uses the <code>LINEAR</code>
     * <code>PlaybackMode</code>. MediaTailor doesn't support filler slate for channels
     * using the <code>LOOP</code> <code>PlaybackMode</code>.</p>
     */
    inline void SetFillerSlate(SlateSource&& value) { m_fillerSlateHasBeenSet = true; m_fillerSlate = std::move(value); }

    /**
     * <p>The slate used to fill gaps between programs in the schedule. You must
     * configure filler slate if your channel uses the <code>LINEAR</code>
     * <code>PlaybackMode</code>. MediaTailor doesn't support filler slate for channels
     * using the <code>LOOP</code> <code>PlaybackMode</code>.</p>
     */
    inline CreateChannelRequest& WithFillerSlate(const SlateSource& value) { SetFillerSlate(value); return *this;}

    /**
     * <p>The slate used to fill gaps between programs in the schedule. You must
     * configure filler slate if your channel uses the <code>LINEAR</code>
     * <code>PlaybackMode</code>. MediaTailor doesn't support filler slate for channels
     * using the <code>LOOP</code> <code>PlaybackMode</code>.</p>
     */
    inline CreateChannelRequest& WithFillerSlate(SlateSource&& value) { SetFillerSlate(std::move(value)); return *this;}


    /**
     * <p>The channel's output properties.</p>
     */
    inline const Aws::Vector<RequestOutputItem>& GetOutputs() const{ return m_outputs; }

    /**
     * <p>The channel's output properties.</p>
     */
    inline bool OutputsHasBeenSet() const { return m_outputsHasBeenSet; }

    /**
     * <p>The channel's output properties.</p>
     */
    inline void SetOutputs(const Aws::Vector<RequestOutputItem>& value) { m_outputsHasBeenSet = true; m_outputs = value; }

    /**
     * <p>The channel's output properties.</p>
     */
    inline void SetOutputs(Aws::Vector<RequestOutputItem>&& value) { m_outputsHasBeenSet = true; m_outputs = std::move(value); }

    /**
     * <p>The channel's output properties.</p>
     */
    inline CreateChannelRequest& WithOutputs(const Aws::Vector<RequestOutputItem>& value) { SetOutputs(value); return *this;}

    /**
     * <p>The channel's output properties.</p>
     */
    inline CreateChannelRequest& WithOutputs(Aws::Vector<RequestOutputItem>&& value) { SetOutputs(std::move(value)); return *this;}

    /**
     * <p>The channel's output properties.</p>
     */
    inline CreateChannelRequest& AddOutputs(const RequestOutputItem& value) { m_outputsHasBeenSet = true; m_outputs.push_back(value); return *this; }

    /**
     * <p>The channel's output properties.</p>
     */
    inline CreateChannelRequest& AddOutputs(RequestOutputItem&& value) { m_outputsHasBeenSet = true; m_outputs.push_back(std::move(value)); return *this; }


    /**
     * <p>The type of playback mode to use for this channel.</p> <p>
     * <code>LINEAR</code> - The programs in the schedule play once back-to-back in the
     * schedule.</p> <p> <code>LOOP</code> - The programs in the schedule play
     * back-to-back in an endless loop. When the last program in the schedule stops
     * playing, playback loops back to the first program in the schedule.</p>
     */
    inline const PlaybackMode& GetPlaybackMode() const{ return m_playbackMode; }

    /**
     * <p>The type of playback mode to use for this channel.</p> <p>
     * <code>LINEAR</code> - The programs in the schedule play once back-to-back in the
     * schedule.</p> <p> <code>LOOP</code> - The programs in the schedule play
     * back-to-back in an endless loop. When the last program in the schedule stops
     * playing, playback loops back to the first program in the schedule.</p>
     */
    inline bool PlaybackModeHasBeenSet() const { return m_playbackModeHasBeenSet; }

    /**
     * <p>The type of playback mode to use for this channel.</p> <p>
     * <code>LINEAR</code> - The programs in the schedule play once back-to-back in the
     * schedule.</p> <p> <code>LOOP</code> - The programs in the schedule play
     * back-to-back in an endless loop. When the last program in the schedule stops
     * playing, playback loops back to the first program in the schedule.</p>
     */
    inline void SetPlaybackMode(const PlaybackMode& value) { m_playbackModeHasBeenSet = true; m_playbackMode = value; }

    /**
     * <p>The type of playback mode to use for this channel.</p> <p>
     * <code>LINEAR</code> - The programs in the schedule play once back-to-back in the
     * schedule.</p> <p> <code>LOOP</code> - The programs in the schedule play
     * back-to-back in an endless loop. When the last program in the schedule stops
     * playing, playback loops back to the first program in the schedule.</p>
     */
    inline void SetPlaybackMode(PlaybackMode&& value) { m_playbackModeHasBeenSet = true; m_playbackMode = std::move(value); }

    /**
     * <p>The type of playback mode to use for this channel.</p> <p>
     * <code>LINEAR</code> - The programs in the schedule play once back-to-back in the
     * schedule.</p> <p> <code>LOOP</code> - The programs in the schedule play
     * back-to-back in an endless loop. When the last program in the schedule stops
     * playing, playback loops back to the first program in the schedule.</p>
     */
    inline CreateChannelRequest& WithPlaybackMode(const PlaybackMode& value) { SetPlaybackMode(value); return *this;}

    /**
     * <p>The type of playback mode to use for this channel.</p> <p>
     * <code>LINEAR</code> - The programs in the schedule play once back-to-back in the
     * schedule.</p> <p> <code>LOOP</code> - The programs in the schedule play
     * back-to-back in an endless loop. When the last program in the schedule stops
     * playing, playback loops back to the first program in the schedule.</p>
     */
    inline CreateChannelRequest& WithPlaybackMode(PlaybackMode&& value) { SetPlaybackMode(std::move(value)); return *this;}


    /**
     * <p>The tags to assign to the channel. Tags are key-value pairs that you can
     * associate with Amazon resources to help with organization, access control, and
     * cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to assign to the channel. Tags are key-value pairs that you can
     * associate with Amazon resources to help with organization, access control, and
     * cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to assign to the channel. Tags are key-value pairs that you can
     * associate with Amazon resources to help with organization, access control, and
     * cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to assign to the channel. Tags are key-value pairs that you can
     * associate with Amazon resources to help with organization, access control, and
     * cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to assign to the channel. Tags are key-value pairs that you can
     * associate with Amazon resources to help with organization, access control, and
     * cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline CreateChannelRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to assign to the channel. Tags are key-value pairs that you can
     * associate with Amazon resources to help with organization, access control, and
     * cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline CreateChannelRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to assign to the channel. Tags are key-value pairs that you can
     * associate with Amazon resources to help with organization, access control, and
     * cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline CreateChannelRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags to assign to the channel. Tags are key-value pairs that you can
     * associate with Amazon resources to help with organization, access control, and
     * cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline CreateChannelRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to assign to the channel. Tags are key-value pairs that you can
     * associate with Amazon resources to help with organization, access control, and
     * cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline CreateChannelRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to assign to the channel. Tags are key-value pairs that you can
     * associate with Amazon resources to help with organization, access control, and
     * cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline CreateChannelRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags to assign to the channel. Tags are key-value pairs that you can
     * associate with Amazon resources to help with organization, access control, and
     * cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline CreateChannelRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to assign to the channel. Tags are key-value pairs that you can
     * associate with Amazon resources to help with organization, access control, and
     * cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline CreateChannelRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to assign to the channel. Tags are key-value pairs that you can
     * associate with Amazon resources to help with organization, access control, and
     * cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline CreateChannelRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The tier of the channel.</p>
     */
    inline const Tier& GetTier() const{ return m_tier; }

    /**
     * <p>The tier of the channel.</p>
     */
    inline bool TierHasBeenSet() const { return m_tierHasBeenSet; }

    /**
     * <p>The tier of the channel.</p>
     */
    inline void SetTier(const Tier& value) { m_tierHasBeenSet = true; m_tier = value; }

    /**
     * <p>The tier of the channel.</p>
     */
    inline void SetTier(Tier&& value) { m_tierHasBeenSet = true; m_tier = std::move(value); }

    /**
     * <p>The tier of the channel.</p>
     */
    inline CreateChannelRequest& WithTier(const Tier& value) { SetTier(value); return *this;}

    /**
     * <p>The tier of the channel.</p>
     */
    inline CreateChannelRequest& WithTier(Tier&& value) { SetTier(std::move(value)); return *this;}

  private:

    Aws::String m_channelName;
    bool m_channelNameHasBeenSet = false;

    SlateSource m_fillerSlate;
    bool m_fillerSlateHasBeenSet = false;

    Aws::Vector<RequestOutputItem> m_outputs;
    bool m_outputsHasBeenSet = false;

    PlaybackMode m_playbackMode;
    bool m_playbackModeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Tier m_tier;
    bool m_tierHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
