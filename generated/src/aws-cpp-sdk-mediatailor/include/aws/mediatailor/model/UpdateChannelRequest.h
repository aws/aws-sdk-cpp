﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/mediatailor/MediaTailorRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediatailor/model/SlateSource.h>
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
    AWS_MEDIATAILOR_API UpdateChannelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateChannel"; }

    AWS_MEDIATAILOR_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The list of audiences defined in channel.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAudiences() const{ return m_audiences; }
    inline bool AudiencesHasBeenSet() const { return m_audiencesHasBeenSet; }
    inline void SetAudiences(const Aws::Vector<Aws::String>& value) { m_audiencesHasBeenSet = true; m_audiences = value; }
    inline void SetAudiences(Aws::Vector<Aws::String>&& value) { m_audiencesHasBeenSet = true; m_audiences = std::move(value); }
    inline UpdateChannelRequest& WithAudiences(const Aws::Vector<Aws::String>& value) { SetAudiences(value); return *this;}
    inline UpdateChannelRequest& WithAudiences(Aws::Vector<Aws::String>&& value) { SetAudiences(std::move(value)); return *this;}
    inline UpdateChannelRequest& AddAudiences(const Aws::String& value) { m_audiencesHasBeenSet = true; m_audiences.push_back(value); return *this; }
    inline UpdateChannelRequest& AddAudiences(Aws::String&& value) { m_audiencesHasBeenSet = true; m_audiences.push_back(std::move(value)); return *this; }
    inline UpdateChannelRequest& AddAudiences(const char* value) { m_audiencesHasBeenSet = true; m_audiences.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the channel.</p>
     */
    inline const Aws::String& GetChannelName() const{ return m_channelName; }
    inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }
    inline void SetChannelName(const Aws::String& value) { m_channelNameHasBeenSet = true; m_channelName = value; }
    inline void SetChannelName(Aws::String&& value) { m_channelNameHasBeenSet = true; m_channelName = std::move(value); }
    inline void SetChannelName(const char* value) { m_channelNameHasBeenSet = true; m_channelName.assign(value); }
    inline UpdateChannelRequest& WithChannelName(const Aws::String& value) { SetChannelName(value); return *this;}
    inline UpdateChannelRequest& WithChannelName(Aws::String&& value) { SetChannelName(std::move(value)); return *this;}
    inline UpdateChannelRequest& WithChannelName(const char* value) { SetChannelName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The slate used to fill gaps between programs in the schedule. You must
     * configure filler slate if your channel uses the <code>LINEAR</code>
     * <code>PlaybackMode</code>. MediaTailor doesn't support filler slate for channels
     * using the <code>LOOP</code> <code>PlaybackMode</code>.</p>
     */
    inline const SlateSource& GetFillerSlate() const{ return m_fillerSlate; }
    inline bool FillerSlateHasBeenSet() const { return m_fillerSlateHasBeenSet; }
    inline void SetFillerSlate(const SlateSource& value) { m_fillerSlateHasBeenSet = true; m_fillerSlate = value; }
    inline void SetFillerSlate(SlateSource&& value) { m_fillerSlateHasBeenSet = true; m_fillerSlate = std::move(value); }
    inline UpdateChannelRequest& WithFillerSlate(const SlateSource& value) { SetFillerSlate(value); return *this;}
    inline UpdateChannelRequest& WithFillerSlate(SlateSource&& value) { SetFillerSlate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The channel's output properties.</p>
     */
    inline const Aws::Vector<RequestOutputItem>& GetOutputs() const{ return m_outputs; }
    inline bool OutputsHasBeenSet() const { return m_outputsHasBeenSet; }
    inline void SetOutputs(const Aws::Vector<RequestOutputItem>& value) { m_outputsHasBeenSet = true; m_outputs = value; }
    inline void SetOutputs(Aws::Vector<RequestOutputItem>&& value) { m_outputsHasBeenSet = true; m_outputs = std::move(value); }
    inline UpdateChannelRequest& WithOutputs(const Aws::Vector<RequestOutputItem>& value) { SetOutputs(value); return *this;}
    inline UpdateChannelRequest& WithOutputs(Aws::Vector<RequestOutputItem>&& value) { SetOutputs(std::move(value)); return *this;}
    inline UpdateChannelRequest& AddOutputs(const RequestOutputItem& value) { m_outputsHasBeenSet = true; m_outputs.push_back(value); return *this; }
    inline UpdateChannelRequest& AddOutputs(RequestOutputItem&& value) { m_outputsHasBeenSet = true; m_outputs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The time-shifted viewing configuration you want to associate to the channel.
     * </p>
     */
    inline const TimeShiftConfiguration& GetTimeShiftConfiguration() const{ return m_timeShiftConfiguration; }
    inline bool TimeShiftConfigurationHasBeenSet() const { return m_timeShiftConfigurationHasBeenSet; }
    inline void SetTimeShiftConfiguration(const TimeShiftConfiguration& value) { m_timeShiftConfigurationHasBeenSet = true; m_timeShiftConfiguration = value; }
    inline void SetTimeShiftConfiguration(TimeShiftConfiguration&& value) { m_timeShiftConfigurationHasBeenSet = true; m_timeShiftConfiguration = std::move(value); }
    inline UpdateChannelRequest& WithTimeShiftConfiguration(const TimeShiftConfiguration& value) { SetTimeShiftConfiguration(value); return *this;}
    inline UpdateChannelRequest& WithTimeShiftConfiguration(TimeShiftConfiguration&& value) { SetTimeShiftConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_audiences;
    bool m_audiencesHasBeenSet = false;

    Aws::String m_channelName;
    bool m_channelNameHasBeenSet = false;

    SlateSource m_fillerSlate;
    bool m_fillerSlateHasBeenSet = false;

    Aws::Vector<RequestOutputItem> m_outputs;
    bool m_outputsHasBeenSet = false;

    TimeShiftConfiguration m_timeShiftConfiguration;
    bool m_timeShiftConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
