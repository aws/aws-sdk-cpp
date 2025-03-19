/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/mediatailor/model/SlateSource.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/mediatailor/model/LogConfigurationForChannel.h>
#include <aws/mediatailor/model/ResponseOutputItem.h>
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
namespace MediaTailor
{
namespace Model
{

  /**
   * <p>The configuration parameters for a channel. For information about MediaTailor
   * channels, see <a
   * href="https://docs.aws.amazon.com/mediatailor/latest/ug/channel-assembly-channels.html">Working
   * with channels</a> in the <i>MediaTailor User Guide</i>.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/Channel">AWS
   * API Reference</a></p>
   */
  class Channel
  {
  public:
    AWS_MEDIATAILOR_API Channel() = default;
    AWS_MEDIATAILOR_API Channel(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Channel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the channel.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Channel& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the channel.</p>
     */
    inline const Aws::String& GetChannelName() const { return m_channelName; }
    inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }
    template<typename ChannelNameT = Aws::String>
    void SetChannelName(ChannelNameT&& value) { m_channelNameHasBeenSet = true; m_channelName = std::forward<ChannelNameT>(value); }
    template<typename ChannelNameT = Aws::String>
    Channel& WithChannelName(ChannelNameT&& value) { SetChannelName(std::forward<ChannelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the state whether the channel is running or not.</p>
     */
    inline const Aws::String& GetChannelState() const { return m_channelState; }
    inline bool ChannelStateHasBeenSet() const { return m_channelStateHasBeenSet; }
    template<typename ChannelStateT = Aws::String>
    void SetChannelState(ChannelStateT&& value) { m_channelStateHasBeenSet = true; m_channelState = std::forward<ChannelStateT>(value); }
    template<typename ChannelStateT = Aws::String>
    Channel& WithChannelState(ChannelStateT&& value) { SetChannelState(std::forward<ChannelStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the channel was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    Channel& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The slate used to fill gaps between programs in the schedule. You must
     * configure filler slate if your channel uses the <code>LINEAR</code>
     * <code>PlaybackMode</code>. MediaTailor doesn't support filler slate for channels
     * using the <code>LOOP</code> <code>PlaybackMode</code>.</p>
     */
    inline const SlateSource& GetFillerSlate() const { return m_fillerSlate; }
    inline bool FillerSlateHasBeenSet() const { return m_fillerSlateHasBeenSet; }
    template<typename FillerSlateT = SlateSource>
    void SetFillerSlate(FillerSlateT&& value) { m_fillerSlateHasBeenSet = true; m_fillerSlate = std::forward<FillerSlateT>(value); }
    template<typename FillerSlateT = SlateSource>
    Channel& WithFillerSlate(FillerSlateT&& value) { SetFillerSlate(std::forward<FillerSlateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the channel was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    Channel& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The channel's output properties.</p>
     */
    inline const Aws::Vector<ResponseOutputItem>& GetOutputs() const { return m_outputs; }
    inline bool OutputsHasBeenSet() const { return m_outputsHasBeenSet; }
    template<typename OutputsT = Aws::Vector<ResponseOutputItem>>
    void SetOutputs(OutputsT&& value) { m_outputsHasBeenSet = true; m_outputs = std::forward<OutputsT>(value); }
    template<typename OutputsT = Aws::Vector<ResponseOutputItem>>
    Channel& WithOutputs(OutputsT&& value) { SetOutputs(std::forward<OutputsT>(value)); return *this;}
    template<typename OutputsT = ResponseOutputItem>
    Channel& AddOutputs(OutputsT&& value) { m_outputsHasBeenSet = true; m_outputs.emplace_back(std::forward<OutputsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of playback mode for this channel.</p> <p> <code>LINEAR</code> -
     * Programs play back-to-back only once.</p> <p> <code>LOOP</code> - Programs play
     * back-to-back in an endless loop. When the last program in the schedule plays,
     * playback loops back to the first program in the schedule.</p>
     */
    inline const Aws::String& GetPlaybackMode() const { return m_playbackMode; }
    inline bool PlaybackModeHasBeenSet() const { return m_playbackModeHasBeenSet; }
    template<typename PlaybackModeT = Aws::String>
    void SetPlaybackMode(PlaybackModeT&& value) { m_playbackModeHasBeenSet = true; m_playbackMode = std::forward<PlaybackModeT>(value); }
    template<typename PlaybackModeT = Aws::String>
    Channel& WithPlaybackMode(PlaybackModeT&& value) { SetPlaybackMode(std::forward<PlaybackModeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to assign to the channel. Tags are key-value pairs that you can
     * associate with Amazon resources to help with organization, access control, and
     * cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    Channel& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    Channel& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The tier for this channel. STANDARD tier channels can contain live
     * programs.</p>
     */
    inline const Aws::String& GetTier() const { return m_tier; }
    inline bool TierHasBeenSet() const { return m_tierHasBeenSet; }
    template<typename TierT = Aws::String>
    void SetTier(TierT&& value) { m_tierHasBeenSet = true; m_tier = std::forward<TierT>(value); }
    template<typename TierT = Aws::String>
    Channel& WithTier(TierT&& value) { SetTier(std::forward<TierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The log configuration.</p>
     */
    inline const LogConfigurationForChannel& GetLogConfiguration() const { return m_logConfiguration; }
    inline bool LogConfigurationHasBeenSet() const { return m_logConfigurationHasBeenSet; }
    template<typename LogConfigurationT = LogConfigurationForChannel>
    void SetLogConfiguration(LogConfigurationT&& value) { m_logConfigurationHasBeenSet = true; m_logConfiguration = std::forward<LogConfigurationT>(value); }
    template<typename LogConfigurationT = LogConfigurationForChannel>
    Channel& WithLogConfiguration(LogConfigurationT&& value) { SetLogConfiguration(std::forward<LogConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of audiences defined in channel.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAudiences() const { return m_audiences; }
    inline bool AudiencesHasBeenSet() const { return m_audiencesHasBeenSet; }
    template<typename AudiencesT = Aws::Vector<Aws::String>>
    void SetAudiences(AudiencesT&& value) { m_audiencesHasBeenSet = true; m_audiences = std::forward<AudiencesT>(value); }
    template<typename AudiencesT = Aws::Vector<Aws::String>>
    Channel& WithAudiences(AudiencesT&& value) { SetAudiences(std::forward<AudiencesT>(value)); return *this;}
    template<typename AudiencesT = Aws::String>
    Channel& AddAudiences(AudiencesT&& value) { m_audiencesHasBeenSet = true; m_audiences.emplace_back(std::forward<AudiencesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_channelName;
    bool m_channelNameHasBeenSet = false;

    Aws::String m_channelState;
    bool m_channelStateHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    SlateSource m_fillerSlate;
    bool m_fillerSlateHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::Vector<ResponseOutputItem> m_outputs;
    bool m_outputsHasBeenSet = false;

    Aws::String m_playbackMode;
    bool m_playbackModeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_tier;
    bool m_tierHasBeenSet = false;

    LogConfigurationForChannel m_logConfiguration;
    bool m_logConfigurationHasBeenSet = false;

    Aws::Vector<Aws::String> m_audiences;
    bool m_audiencesHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
