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
  class UpdateChannelRequest : public MediaTailorRequest
  {
  public:
    AWS_MEDIATAILOR_API UpdateChannelRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateChannel"; }

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
    UpdateChannelRequest& WithChannelName(ChannelNameT&& value) { SetChannelName(std::forward<ChannelNameT>(value)); return *this;}
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
    UpdateChannelRequest& WithFillerSlate(FillerSlateT&& value) { SetFillerSlate(std::forward<FillerSlateT>(value)); return *this;}
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
    UpdateChannelRequest& WithOutputs(OutputsT&& value) { SetOutputs(std::forward<OutputsT>(value)); return *this;}
    template<typename OutputsT = RequestOutputItem>
    UpdateChannelRequest& AddOutputs(OutputsT&& value) { m_outputsHasBeenSet = true; m_outputs.emplace_back(std::forward<OutputsT>(value)); return *this; }
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
    UpdateChannelRequest& WithTimeShiftConfiguration(TimeShiftConfigurationT&& value) { SetTimeShiftConfiguration(std::forward<TimeShiftConfigurationT>(value)); return *this;}
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
    UpdateChannelRequest& WithAudiences(AudiencesT&& value) { SetAudiences(std::forward<AudiencesT>(value)); return *this;}
    template<typename AudiencesT = Aws::String>
    UpdateChannelRequest& AddAudiences(AudiencesT&& value) { m_audiencesHasBeenSet = true; m_audiences.emplace_back(std::forward<AudiencesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_channelName;
    bool m_channelNameHasBeenSet = false;

    SlateSource m_fillerSlate;
    bool m_fillerSlateHasBeenSet = false;

    Aws::Vector<RequestOutputItem> m_outputs;
    bool m_outputsHasBeenSet = false;

    TimeShiftConfiguration m_timeShiftConfiguration;
    bool m_timeShiftConfigurationHasBeenSet = false;

    Aws::Vector<Aws::String> m_audiences;
    bool m_audiencesHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
