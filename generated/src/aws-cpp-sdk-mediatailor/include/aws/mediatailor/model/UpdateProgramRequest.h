/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/mediatailor/MediaTailorRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediatailor/model/UpdateProgramScheduleConfiguration.h>
#include <aws/mediatailor/model/AdBreak.h>
#include <aws/mediatailor/model/AudienceMedia.h>
#include <utility>

namespace Aws
{
namespace MediaTailor
{
namespace Model
{

  /**
   */
  class UpdateProgramRequest : public MediaTailorRequest
  {
  public:
    AWS_MEDIATAILOR_API UpdateProgramRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateProgram"; }

    AWS_MEDIATAILOR_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ad break configuration settings.</p>
     */
    inline const Aws::Vector<AdBreak>& GetAdBreaks() const{ return m_adBreaks; }
    inline bool AdBreaksHasBeenSet() const { return m_adBreaksHasBeenSet; }
    inline void SetAdBreaks(const Aws::Vector<AdBreak>& value) { m_adBreaksHasBeenSet = true; m_adBreaks = value; }
    inline void SetAdBreaks(Aws::Vector<AdBreak>&& value) { m_adBreaksHasBeenSet = true; m_adBreaks = std::move(value); }
    inline UpdateProgramRequest& WithAdBreaks(const Aws::Vector<AdBreak>& value) { SetAdBreaks(value); return *this;}
    inline UpdateProgramRequest& WithAdBreaks(Aws::Vector<AdBreak>&& value) { SetAdBreaks(std::move(value)); return *this;}
    inline UpdateProgramRequest& AddAdBreaks(const AdBreak& value) { m_adBreaksHasBeenSet = true; m_adBreaks.push_back(value); return *this; }
    inline UpdateProgramRequest& AddAdBreaks(AdBreak&& value) { m_adBreaksHasBeenSet = true; m_adBreaks.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of AudienceMedia defined in program.</p>
     */
    inline const Aws::Vector<AudienceMedia>& GetAudienceMedia() const{ return m_audienceMedia; }
    inline bool AudienceMediaHasBeenSet() const { return m_audienceMediaHasBeenSet; }
    inline void SetAudienceMedia(const Aws::Vector<AudienceMedia>& value) { m_audienceMediaHasBeenSet = true; m_audienceMedia = value; }
    inline void SetAudienceMedia(Aws::Vector<AudienceMedia>&& value) { m_audienceMediaHasBeenSet = true; m_audienceMedia = std::move(value); }
    inline UpdateProgramRequest& WithAudienceMedia(const Aws::Vector<AudienceMedia>& value) { SetAudienceMedia(value); return *this;}
    inline UpdateProgramRequest& WithAudienceMedia(Aws::Vector<AudienceMedia>&& value) { SetAudienceMedia(std::move(value)); return *this;}
    inline UpdateProgramRequest& AddAudienceMedia(const AudienceMedia& value) { m_audienceMediaHasBeenSet = true; m_audienceMedia.push_back(value); return *this; }
    inline UpdateProgramRequest& AddAudienceMedia(AudienceMedia&& value) { m_audienceMediaHasBeenSet = true; m_audienceMedia.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the channel for this Program.</p>
     */
    inline const Aws::String& GetChannelName() const{ return m_channelName; }
    inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }
    inline void SetChannelName(const Aws::String& value) { m_channelNameHasBeenSet = true; m_channelName = value; }
    inline void SetChannelName(Aws::String&& value) { m_channelNameHasBeenSet = true; m_channelName = std::move(value); }
    inline void SetChannelName(const char* value) { m_channelNameHasBeenSet = true; m_channelName.assign(value); }
    inline UpdateProgramRequest& WithChannelName(const Aws::String& value) { SetChannelName(value); return *this;}
    inline UpdateProgramRequest& WithChannelName(Aws::String&& value) { SetChannelName(std::move(value)); return *this;}
    inline UpdateProgramRequest& WithChannelName(const char* value) { SetChannelName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Program.</p>
     */
    inline const Aws::String& GetProgramName() const{ return m_programName; }
    inline bool ProgramNameHasBeenSet() const { return m_programNameHasBeenSet; }
    inline void SetProgramName(const Aws::String& value) { m_programNameHasBeenSet = true; m_programName = value; }
    inline void SetProgramName(Aws::String&& value) { m_programNameHasBeenSet = true; m_programName = std::move(value); }
    inline void SetProgramName(const char* value) { m_programNameHasBeenSet = true; m_programName.assign(value); }
    inline UpdateProgramRequest& WithProgramName(const Aws::String& value) { SetProgramName(value); return *this;}
    inline UpdateProgramRequest& WithProgramName(Aws::String&& value) { SetProgramName(std::move(value)); return *this;}
    inline UpdateProgramRequest& WithProgramName(const char* value) { SetProgramName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schedule configuration settings.</p>
     */
    inline const UpdateProgramScheduleConfiguration& GetScheduleConfiguration() const{ return m_scheduleConfiguration; }
    inline bool ScheduleConfigurationHasBeenSet() const { return m_scheduleConfigurationHasBeenSet; }
    inline void SetScheduleConfiguration(const UpdateProgramScheduleConfiguration& value) { m_scheduleConfigurationHasBeenSet = true; m_scheduleConfiguration = value; }
    inline void SetScheduleConfiguration(UpdateProgramScheduleConfiguration&& value) { m_scheduleConfigurationHasBeenSet = true; m_scheduleConfiguration = std::move(value); }
    inline UpdateProgramRequest& WithScheduleConfiguration(const UpdateProgramScheduleConfiguration& value) { SetScheduleConfiguration(value); return *this;}
    inline UpdateProgramRequest& WithScheduleConfiguration(UpdateProgramScheduleConfiguration&& value) { SetScheduleConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AdBreak> m_adBreaks;
    bool m_adBreaksHasBeenSet = false;

    Aws::Vector<AudienceMedia> m_audienceMedia;
    bool m_audienceMediaHasBeenSet = false;

    Aws::String m_channelName;
    bool m_channelNameHasBeenSet = false;

    Aws::String m_programName;
    bool m_programNameHasBeenSet = false;

    UpdateProgramScheduleConfiguration m_scheduleConfiguration;
    bool m_scheduleConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
