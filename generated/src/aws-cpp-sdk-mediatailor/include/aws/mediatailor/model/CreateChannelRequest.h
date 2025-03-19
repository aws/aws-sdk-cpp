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
#include <aws/mediatailor/model/TimeShiftConfiguration.h>
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
    AWS_MEDIATAILOR_API CreateChannelRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateChannel"; }

    AWS_MEDIATAILOR_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the channel.</p>
     */
    inline const Aws::String& GetChannelName() const { return m_channelName; }
    inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }
    template<typename ChannelNameT = Aws::String>
    void SetChannelName(ChannelNameT&& value) { m_channelNameHasBeenSet = true; m_channelName = std::forward<ChannelNameT>(value); }
    template<typename ChannelNameT = Aws::String>
    CreateChannelRequest& WithChannelName(ChannelNameT&& value) { SetChannelName(std::forward<ChannelNameT>(value)); return *this;}
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
    CreateChannelRequest& WithFillerSlate(FillerSlateT&& value) { SetFillerSlate(std::forward<FillerSlateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The channel's output properties.</p>
     */
    inline const Aws::Vector<RequestOutputItem>& GetOutputs() const { return m_outputs; }
    inline bool OutputsHasBeenSet() const { return m_outputsHasBeenSet; }
    template<typename OutputsT = Aws::Vector<RequestOutputItem>>
    void SetOutputs(OutputsT&& value) { m_outputsHasBeenSet = true; m_outputs = std::forward<OutputsT>(value); }
    template<typename OutputsT = Aws::Vector<RequestOutputItem>>
    CreateChannelRequest& WithOutputs(OutputsT&& value) { SetOutputs(std::forward<OutputsT>(value)); return *this;}
    template<typename OutputsT = RequestOutputItem>
    CreateChannelRequest& AddOutputs(OutputsT&& value) { m_outputsHasBeenSet = true; m_outputs.emplace_back(std::forward<OutputsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of playback mode to use for this channel.</p> <p>
     * <code>LINEAR</code> - The programs in the schedule play once back-to-back in the
     * schedule.</p> <p> <code>LOOP</code> - The programs in the schedule play
     * back-to-back in an endless loop. When the last program in the schedule stops
     * playing, playback loops back to the first program in the schedule.</p>
     */
    inline PlaybackMode GetPlaybackMode() const { return m_playbackMode; }
    inline bool PlaybackModeHasBeenSet() const { return m_playbackModeHasBeenSet; }
    inline void SetPlaybackMode(PlaybackMode value) { m_playbackModeHasBeenSet = true; m_playbackMode = value; }
    inline CreateChannelRequest& WithPlaybackMode(PlaybackMode value) { SetPlaybackMode(value); return *this;}
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
    CreateChannelRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateChannelRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The tier of the channel.</p>
     */
    inline Tier GetTier() const { return m_tier; }
    inline bool TierHasBeenSet() const { return m_tierHasBeenSet; }
    inline void SetTier(Tier value) { m_tierHasBeenSet = true; m_tier = value; }
    inline CreateChannelRequest& WithTier(Tier value) { SetTier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time-shifted viewing configuration you want to associate to the channel.
     * </p>
     */
    inline const TimeShiftConfiguration& GetTimeShiftConfiguration() const { return m_timeShiftConfiguration; }
    inline bool TimeShiftConfigurationHasBeenSet() const { return m_timeShiftConfigurationHasBeenSet; }
    template<typename TimeShiftConfigurationT = TimeShiftConfiguration>
    void SetTimeShiftConfiguration(TimeShiftConfigurationT&& value) { m_timeShiftConfigurationHasBeenSet = true; m_timeShiftConfiguration = std::forward<TimeShiftConfigurationT>(value); }
    template<typename TimeShiftConfigurationT = TimeShiftConfiguration>
    CreateChannelRequest& WithTimeShiftConfiguration(TimeShiftConfigurationT&& value) { SetTimeShiftConfiguration(std::forward<TimeShiftConfigurationT>(value)); return *this;}
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
    CreateChannelRequest& WithAudiences(AudiencesT&& value) { SetAudiences(std::forward<AudiencesT>(value)); return *this;}
    template<typename AudiencesT = Aws::String>
    CreateChannelRequest& AddAudiences(AudiencesT&& value) { m_audiencesHasBeenSet = true; m_audiences.emplace_back(std::forward<AudiencesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_channelName;
    bool m_channelNameHasBeenSet = false;

    SlateSource m_fillerSlate;
    bool m_fillerSlateHasBeenSet = false;

    Aws::Vector<RequestOutputItem> m_outputs;
    bool m_outputsHasBeenSet = false;

    PlaybackMode m_playbackMode{PlaybackMode::NOT_SET};
    bool m_playbackModeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Tier m_tier{Tier::NOT_SET};
    bool m_tierHasBeenSet = false;

    TimeShiftConfiguration m_timeShiftConfiguration;
    bool m_timeShiftConfigurationHasBeenSet = false;

    Aws::Vector<Aws::String> m_audiences;
    bool m_audiencesHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
