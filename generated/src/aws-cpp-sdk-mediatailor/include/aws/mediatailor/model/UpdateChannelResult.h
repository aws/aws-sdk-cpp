/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediatailor/model/ChannelState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/mediatailor/model/SlateSource.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/mediatailor/model/ResponseOutputItem.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MediaTailor
{
namespace Model
{
  class UpdateChannelResult
  {
  public:
    AWS_MEDIATAILOR_API UpdateChannelResult();
    AWS_MEDIATAILOR_API UpdateChannelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIATAILOR_API UpdateChannelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) associated with the channel.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the channel.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the channel.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the channel.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the channel.</p>
     */
    inline UpdateChannelResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) associated with the channel.</p>
     */
    inline UpdateChannelResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) associated with the channel.</p>
     */
    inline UpdateChannelResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the channel.</p>
     */
    inline const Aws::String& GetChannelName() const{ return m_channelName; }

    /**
     * <p>The name of the channel.</p>
     */
    inline void SetChannelName(const Aws::String& value) { m_channelName = value; }

    /**
     * <p>The name of the channel.</p>
     */
    inline void SetChannelName(Aws::String&& value) { m_channelName = std::move(value); }

    /**
     * <p>The name of the channel.</p>
     */
    inline void SetChannelName(const char* value) { m_channelName.assign(value); }

    /**
     * <p>The name of the channel.</p>
     */
    inline UpdateChannelResult& WithChannelName(const Aws::String& value) { SetChannelName(value); return *this;}

    /**
     * <p>The name of the channel.</p>
     */
    inline UpdateChannelResult& WithChannelName(Aws::String&& value) { SetChannelName(std::move(value)); return *this;}

    /**
     * <p>The name of the channel.</p>
     */
    inline UpdateChannelResult& WithChannelName(const char* value) { SetChannelName(value); return *this;}


    /**
     * <p>Returns the state whether the channel is running or not.</p>
     */
    inline const ChannelState& GetChannelState() const{ return m_channelState; }

    /**
     * <p>Returns the state whether the channel is running or not.</p>
     */
    inline void SetChannelState(const ChannelState& value) { m_channelState = value; }

    /**
     * <p>Returns the state whether the channel is running or not.</p>
     */
    inline void SetChannelState(ChannelState&& value) { m_channelState = std::move(value); }

    /**
     * <p>Returns the state whether the channel is running or not.</p>
     */
    inline UpdateChannelResult& WithChannelState(const ChannelState& value) { SetChannelState(value); return *this;}

    /**
     * <p>Returns the state whether the channel is running or not.</p>
     */
    inline UpdateChannelResult& WithChannelState(ChannelState&& value) { SetChannelState(std::move(value)); return *this;}


    /**
     * <p>The timestamp of when the channel was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The timestamp of when the channel was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The timestamp of when the channel was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The timestamp of when the channel was created.</p>
     */
    inline UpdateChannelResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The timestamp of when the channel was created.</p>
     */
    inline UpdateChannelResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


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
    inline void SetFillerSlate(const SlateSource& value) { m_fillerSlate = value; }

    /**
     * <p>The slate used to fill gaps between programs in the schedule. You must
     * configure filler slate if your channel uses the <code>LINEAR</code>
     * <code>PlaybackMode</code>. MediaTailor doesn't support filler slate for channels
     * using the <code>LOOP</code> <code>PlaybackMode</code>.</p>
     */
    inline void SetFillerSlate(SlateSource&& value) { m_fillerSlate = std::move(value); }

    /**
     * <p>The slate used to fill gaps between programs in the schedule. You must
     * configure filler slate if your channel uses the <code>LINEAR</code>
     * <code>PlaybackMode</code>. MediaTailor doesn't support filler slate for channels
     * using the <code>LOOP</code> <code>PlaybackMode</code>.</p>
     */
    inline UpdateChannelResult& WithFillerSlate(const SlateSource& value) { SetFillerSlate(value); return *this;}

    /**
     * <p>The slate used to fill gaps between programs in the schedule. You must
     * configure filler slate if your channel uses the <code>LINEAR</code>
     * <code>PlaybackMode</code>. MediaTailor doesn't support filler slate for channels
     * using the <code>LOOP</code> <code>PlaybackMode</code>.</p>
     */
    inline UpdateChannelResult& WithFillerSlate(SlateSource&& value) { SetFillerSlate(std::move(value)); return *this;}


    /**
     * <p>The timestamp that indicates when the channel was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The timestamp that indicates when the channel was last modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }

    /**
     * <p>The timestamp that indicates when the channel was last modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }

    /**
     * <p>The timestamp that indicates when the channel was last modified.</p>
     */
    inline UpdateChannelResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The timestamp that indicates when the channel was last modified.</p>
     */
    inline UpdateChannelResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>The channel's output properties.</p>
     */
    inline const Aws::Vector<ResponseOutputItem>& GetOutputs() const{ return m_outputs; }

    /**
     * <p>The channel's output properties.</p>
     */
    inline void SetOutputs(const Aws::Vector<ResponseOutputItem>& value) { m_outputs = value; }

    /**
     * <p>The channel's output properties.</p>
     */
    inline void SetOutputs(Aws::Vector<ResponseOutputItem>&& value) { m_outputs = std::move(value); }

    /**
     * <p>The channel's output properties.</p>
     */
    inline UpdateChannelResult& WithOutputs(const Aws::Vector<ResponseOutputItem>& value) { SetOutputs(value); return *this;}

    /**
     * <p>The channel's output properties.</p>
     */
    inline UpdateChannelResult& WithOutputs(Aws::Vector<ResponseOutputItem>&& value) { SetOutputs(std::move(value)); return *this;}

    /**
     * <p>The channel's output properties.</p>
     */
    inline UpdateChannelResult& AddOutputs(const ResponseOutputItem& value) { m_outputs.push_back(value); return *this; }

    /**
     * <p>The channel's output properties.</p>
     */
    inline UpdateChannelResult& AddOutputs(ResponseOutputItem&& value) { m_outputs.push_back(std::move(value)); return *this; }


    /**
     * <p>The type of playback mode for this channel.</p> <p> <code>LINEAR</code> -
     * Programs play back-to-back only once.</p> <p> <code>LOOP</code> - Programs play
     * back-to-back in an endless loop. When the last program in the schedule plays,
     * playback loops back to the first program in the schedule.</p>
     */
    inline const Aws::String& GetPlaybackMode() const{ return m_playbackMode; }

    /**
     * <p>The type of playback mode for this channel.</p> <p> <code>LINEAR</code> -
     * Programs play back-to-back only once.</p> <p> <code>LOOP</code> - Programs play
     * back-to-back in an endless loop. When the last program in the schedule plays,
     * playback loops back to the first program in the schedule.</p>
     */
    inline void SetPlaybackMode(const Aws::String& value) { m_playbackMode = value; }

    /**
     * <p>The type of playback mode for this channel.</p> <p> <code>LINEAR</code> -
     * Programs play back-to-back only once.</p> <p> <code>LOOP</code> - Programs play
     * back-to-back in an endless loop. When the last program in the schedule plays,
     * playback loops back to the first program in the schedule.</p>
     */
    inline void SetPlaybackMode(Aws::String&& value) { m_playbackMode = std::move(value); }

    /**
     * <p>The type of playback mode for this channel.</p> <p> <code>LINEAR</code> -
     * Programs play back-to-back only once.</p> <p> <code>LOOP</code> - Programs play
     * back-to-back in an endless loop. When the last program in the schedule plays,
     * playback loops back to the first program in the schedule.</p>
     */
    inline void SetPlaybackMode(const char* value) { m_playbackMode.assign(value); }

    /**
     * <p>The type of playback mode for this channel.</p> <p> <code>LINEAR</code> -
     * Programs play back-to-back only once.</p> <p> <code>LOOP</code> - Programs play
     * back-to-back in an endless loop. When the last program in the schedule plays,
     * playback loops back to the first program in the schedule.</p>
     */
    inline UpdateChannelResult& WithPlaybackMode(const Aws::String& value) { SetPlaybackMode(value); return *this;}

    /**
     * <p>The type of playback mode for this channel.</p> <p> <code>LINEAR</code> -
     * Programs play back-to-back only once.</p> <p> <code>LOOP</code> - Programs play
     * back-to-back in an endless loop. When the last program in the schedule plays,
     * playback loops back to the first program in the schedule.</p>
     */
    inline UpdateChannelResult& WithPlaybackMode(Aws::String&& value) { SetPlaybackMode(std::move(value)); return *this;}

    /**
     * <p>The type of playback mode for this channel.</p> <p> <code>LINEAR</code> -
     * Programs play back-to-back only once.</p> <p> <code>LOOP</code> - Programs play
     * back-to-back in an endless loop. When the last program in the schedule plays,
     * playback loops back to the first program in the schedule.</p>
     */
    inline UpdateChannelResult& WithPlaybackMode(const char* value) { SetPlaybackMode(value); return *this;}


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
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>The tags to assign to the channel. Tags are key-value pairs that you can
     * associate with Amazon resources to help with organization, access control, and
     * cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>The tags to assign to the channel. Tags are key-value pairs that you can
     * associate with Amazon resources to help with organization, access control, and
     * cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline UpdateChannelResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to assign to the channel. Tags are key-value pairs that you can
     * associate with Amazon resources to help with organization, access control, and
     * cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline UpdateChannelResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to assign to the channel. Tags are key-value pairs that you can
     * associate with Amazon resources to help with organization, access control, and
     * cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline UpdateChannelResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags to assign to the channel. Tags are key-value pairs that you can
     * associate with Amazon resources to help with organization, access control, and
     * cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline UpdateChannelResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to assign to the channel. Tags are key-value pairs that you can
     * associate with Amazon resources to help with organization, access control, and
     * cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline UpdateChannelResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to assign to the channel. Tags are key-value pairs that you can
     * associate with Amazon resources to help with organization, access control, and
     * cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline UpdateChannelResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags to assign to the channel. Tags are key-value pairs that you can
     * associate with Amazon resources to help with organization, access control, and
     * cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline UpdateChannelResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to assign to the channel. Tags are key-value pairs that you can
     * associate with Amazon resources to help with organization, access control, and
     * cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline UpdateChannelResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to assign to the channel. Tags are key-value pairs that you can
     * associate with Amazon resources to help with organization, access control, and
     * cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline UpdateChannelResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    /**
     * <p>The tier associated with this Channel.</p>
     */
    inline const Aws::String& GetTier() const{ return m_tier; }

    /**
     * <p>The tier associated with this Channel.</p>
     */
    inline void SetTier(const Aws::String& value) { m_tier = value; }

    /**
     * <p>The tier associated with this Channel.</p>
     */
    inline void SetTier(Aws::String&& value) { m_tier = std::move(value); }

    /**
     * <p>The tier associated with this Channel.</p>
     */
    inline void SetTier(const char* value) { m_tier.assign(value); }

    /**
     * <p>The tier associated with this Channel.</p>
     */
    inline UpdateChannelResult& WithTier(const Aws::String& value) { SetTier(value); return *this;}

    /**
     * <p>The tier associated with this Channel.</p>
     */
    inline UpdateChannelResult& WithTier(Aws::String&& value) { SetTier(std::move(value)); return *this;}

    /**
     * <p>The tier associated with this Channel.</p>
     */
    inline UpdateChannelResult& WithTier(const char* value) { SetTier(value); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_channelName;

    ChannelState m_channelState;

    Aws::Utils::DateTime m_creationTime;

    SlateSource m_fillerSlate;

    Aws::Utils::DateTime m_lastModifiedTime;

    Aws::Vector<ResponseOutputItem> m_outputs;

    Aws::String m_playbackMode;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_tier;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
