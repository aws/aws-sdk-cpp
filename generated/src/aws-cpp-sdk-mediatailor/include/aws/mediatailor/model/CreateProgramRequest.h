/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/mediatailor/MediaTailorRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediatailor/model/ScheduleConfiguration.h>
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
  class CreateProgramRequest : public MediaTailorRequest
  {
  public:
    AWS_MEDIATAILOR_API CreateProgramRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateProgram"; }

    AWS_MEDIATAILOR_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ad break configuration settings.</p>
     */
    inline const Aws::Vector<AdBreak>& GetAdBreaks() const{ return m_adBreaks; }
    inline bool AdBreaksHasBeenSet() const { return m_adBreaksHasBeenSet; }
    inline void SetAdBreaks(const Aws::Vector<AdBreak>& value) { m_adBreaksHasBeenSet = true; m_adBreaks = value; }
    inline void SetAdBreaks(Aws::Vector<AdBreak>&& value) { m_adBreaksHasBeenSet = true; m_adBreaks = std::move(value); }
    inline CreateProgramRequest& WithAdBreaks(const Aws::Vector<AdBreak>& value) { SetAdBreaks(value); return *this;}
    inline CreateProgramRequest& WithAdBreaks(Aws::Vector<AdBreak>&& value) { SetAdBreaks(std::move(value)); return *this;}
    inline CreateProgramRequest& AddAdBreaks(const AdBreak& value) { m_adBreaksHasBeenSet = true; m_adBreaks.push_back(value); return *this; }
    inline CreateProgramRequest& AddAdBreaks(AdBreak&& value) { m_adBreaksHasBeenSet = true; m_adBreaks.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of AudienceMedia defined in program.</p>
     */
    inline const Aws::Vector<AudienceMedia>& GetAudienceMedia() const{ return m_audienceMedia; }
    inline bool AudienceMediaHasBeenSet() const { return m_audienceMediaHasBeenSet; }
    inline void SetAudienceMedia(const Aws::Vector<AudienceMedia>& value) { m_audienceMediaHasBeenSet = true; m_audienceMedia = value; }
    inline void SetAudienceMedia(Aws::Vector<AudienceMedia>&& value) { m_audienceMediaHasBeenSet = true; m_audienceMedia = std::move(value); }
    inline CreateProgramRequest& WithAudienceMedia(const Aws::Vector<AudienceMedia>& value) { SetAudienceMedia(value); return *this;}
    inline CreateProgramRequest& WithAudienceMedia(Aws::Vector<AudienceMedia>&& value) { SetAudienceMedia(std::move(value)); return *this;}
    inline CreateProgramRequest& AddAudienceMedia(const AudienceMedia& value) { m_audienceMediaHasBeenSet = true; m_audienceMedia.push_back(value); return *this; }
    inline CreateProgramRequest& AddAudienceMedia(AudienceMedia&& value) { m_audienceMediaHasBeenSet = true; m_audienceMedia.push_back(std::move(value)); return *this; }
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
    inline CreateProgramRequest& WithChannelName(const Aws::String& value) { SetChannelName(value); return *this;}
    inline CreateProgramRequest& WithChannelName(Aws::String&& value) { SetChannelName(std::move(value)); return *this;}
    inline CreateProgramRequest& WithChannelName(const char* value) { SetChannelName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the LiveSource for this Program.</p>
     */
    inline const Aws::String& GetLiveSourceName() const{ return m_liveSourceName; }
    inline bool LiveSourceNameHasBeenSet() const { return m_liveSourceNameHasBeenSet; }
    inline void SetLiveSourceName(const Aws::String& value) { m_liveSourceNameHasBeenSet = true; m_liveSourceName = value; }
    inline void SetLiveSourceName(Aws::String&& value) { m_liveSourceNameHasBeenSet = true; m_liveSourceName = std::move(value); }
    inline void SetLiveSourceName(const char* value) { m_liveSourceNameHasBeenSet = true; m_liveSourceName.assign(value); }
    inline CreateProgramRequest& WithLiveSourceName(const Aws::String& value) { SetLiveSourceName(value); return *this;}
    inline CreateProgramRequest& WithLiveSourceName(Aws::String&& value) { SetLiveSourceName(std::move(value)); return *this;}
    inline CreateProgramRequest& WithLiveSourceName(const char* value) { SetLiveSourceName(value); return *this;}
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
    inline CreateProgramRequest& WithProgramName(const Aws::String& value) { SetProgramName(value); return *this;}
    inline CreateProgramRequest& WithProgramName(Aws::String&& value) { SetProgramName(std::move(value)); return *this;}
    inline CreateProgramRequest& WithProgramName(const char* value) { SetProgramName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schedule configuration settings.</p>
     */
    inline const ScheduleConfiguration& GetScheduleConfiguration() const{ return m_scheduleConfiguration; }
    inline bool ScheduleConfigurationHasBeenSet() const { return m_scheduleConfigurationHasBeenSet; }
    inline void SetScheduleConfiguration(const ScheduleConfiguration& value) { m_scheduleConfigurationHasBeenSet = true; m_scheduleConfiguration = value; }
    inline void SetScheduleConfiguration(ScheduleConfiguration&& value) { m_scheduleConfigurationHasBeenSet = true; m_scheduleConfiguration = std::move(value); }
    inline CreateProgramRequest& WithScheduleConfiguration(const ScheduleConfiguration& value) { SetScheduleConfiguration(value); return *this;}
    inline CreateProgramRequest& WithScheduleConfiguration(ScheduleConfiguration&& value) { SetScheduleConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the source location.</p>
     */
    inline const Aws::String& GetSourceLocationName() const{ return m_sourceLocationName; }
    inline bool SourceLocationNameHasBeenSet() const { return m_sourceLocationNameHasBeenSet; }
    inline void SetSourceLocationName(const Aws::String& value) { m_sourceLocationNameHasBeenSet = true; m_sourceLocationName = value; }
    inline void SetSourceLocationName(Aws::String&& value) { m_sourceLocationNameHasBeenSet = true; m_sourceLocationName = std::move(value); }
    inline void SetSourceLocationName(const char* value) { m_sourceLocationNameHasBeenSet = true; m_sourceLocationName.assign(value); }
    inline CreateProgramRequest& WithSourceLocationName(const Aws::String& value) { SetSourceLocationName(value); return *this;}
    inline CreateProgramRequest& WithSourceLocationName(Aws::String&& value) { SetSourceLocationName(std::move(value)); return *this;}
    inline CreateProgramRequest& WithSourceLocationName(const char* value) { SetSourceLocationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name that's used to refer to a VOD source.</p>
     */
    inline const Aws::String& GetVodSourceName() const{ return m_vodSourceName; }
    inline bool VodSourceNameHasBeenSet() const { return m_vodSourceNameHasBeenSet; }
    inline void SetVodSourceName(const Aws::String& value) { m_vodSourceNameHasBeenSet = true; m_vodSourceName = value; }
    inline void SetVodSourceName(Aws::String&& value) { m_vodSourceNameHasBeenSet = true; m_vodSourceName = std::move(value); }
    inline void SetVodSourceName(const char* value) { m_vodSourceNameHasBeenSet = true; m_vodSourceName.assign(value); }
    inline CreateProgramRequest& WithVodSourceName(const Aws::String& value) { SetVodSourceName(value); return *this;}
    inline CreateProgramRequest& WithVodSourceName(Aws::String&& value) { SetVodSourceName(std::move(value)); return *this;}
    inline CreateProgramRequest& WithVodSourceName(const char* value) { SetVodSourceName(value); return *this;}
    ///@}
  private:

    Aws::Vector<AdBreak> m_adBreaks;
    bool m_adBreaksHasBeenSet = false;

    Aws::Vector<AudienceMedia> m_audienceMedia;
    bool m_audienceMediaHasBeenSet = false;

    Aws::String m_channelName;
    bool m_channelNameHasBeenSet = false;

    Aws::String m_liveSourceName;
    bool m_liveSourceNameHasBeenSet = false;

    Aws::String m_programName;
    bool m_programNameHasBeenSet = false;

    ScheduleConfiguration m_scheduleConfiguration;
    bool m_scheduleConfigurationHasBeenSet = false;

    Aws::String m_sourceLocationName;
    bool m_sourceLocationNameHasBeenSet = false;

    Aws::String m_vodSourceName;
    bool m_vodSourceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
