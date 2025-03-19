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
    AWS_MEDIATAILOR_API CreateProgramRequest() = default;

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
    inline const Aws::Vector<AdBreak>& GetAdBreaks() const { return m_adBreaks; }
    inline bool AdBreaksHasBeenSet() const { return m_adBreaksHasBeenSet; }
    template<typename AdBreaksT = Aws::Vector<AdBreak>>
    void SetAdBreaks(AdBreaksT&& value) { m_adBreaksHasBeenSet = true; m_adBreaks = std::forward<AdBreaksT>(value); }
    template<typename AdBreaksT = Aws::Vector<AdBreak>>
    CreateProgramRequest& WithAdBreaks(AdBreaksT&& value) { SetAdBreaks(std::forward<AdBreaksT>(value)); return *this;}
    template<typename AdBreaksT = AdBreak>
    CreateProgramRequest& AddAdBreaks(AdBreaksT&& value) { m_adBreaksHasBeenSet = true; m_adBreaks.emplace_back(std::forward<AdBreaksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the channel for this Program.</p>
     */
    inline const Aws::String& GetChannelName() const { return m_channelName; }
    inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }
    template<typename ChannelNameT = Aws::String>
    void SetChannelName(ChannelNameT&& value) { m_channelNameHasBeenSet = true; m_channelName = std::forward<ChannelNameT>(value); }
    template<typename ChannelNameT = Aws::String>
    CreateProgramRequest& WithChannelName(ChannelNameT&& value) { SetChannelName(std::forward<ChannelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the LiveSource for this Program.</p>
     */
    inline const Aws::String& GetLiveSourceName() const { return m_liveSourceName; }
    inline bool LiveSourceNameHasBeenSet() const { return m_liveSourceNameHasBeenSet; }
    template<typename LiveSourceNameT = Aws::String>
    void SetLiveSourceName(LiveSourceNameT&& value) { m_liveSourceNameHasBeenSet = true; m_liveSourceName = std::forward<LiveSourceNameT>(value); }
    template<typename LiveSourceNameT = Aws::String>
    CreateProgramRequest& WithLiveSourceName(LiveSourceNameT&& value) { SetLiveSourceName(std::forward<LiveSourceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Program.</p>
     */
    inline const Aws::String& GetProgramName() const { return m_programName; }
    inline bool ProgramNameHasBeenSet() const { return m_programNameHasBeenSet; }
    template<typename ProgramNameT = Aws::String>
    void SetProgramName(ProgramNameT&& value) { m_programNameHasBeenSet = true; m_programName = std::forward<ProgramNameT>(value); }
    template<typename ProgramNameT = Aws::String>
    CreateProgramRequest& WithProgramName(ProgramNameT&& value) { SetProgramName(std::forward<ProgramNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schedule configuration settings.</p>
     */
    inline const ScheduleConfiguration& GetScheduleConfiguration() const { return m_scheduleConfiguration; }
    inline bool ScheduleConfigurationHasBeenSet() const { return m_scheduleConfigurationHasBeenSet; }
    template<typename ScheduleConfigurationT = ScheduleConfiguration>
    void SetScheduleConfiguration(ScheduleConfigurationT&& value) { m_scheduleConfigurationHasBeenSet = true; m_scheduleConfiguration = std::forward<ScheduleConfigurationT>(value); }
    template<typename ScheduleConfigurationT = ScheduleConfiguration>
    CreateProgramRequest& WithScheduleConfiguration(ScheduleConfigurationT&& value) { SetScheduleConfiguration(std::forward<ScheduleConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the source location.</p>
     */
    inline const Aws::String& GetSourceLocationName() const { return m_sourceLocationName; }
    inline bool SourceLocationNameHasBeenSet() const { return m_sourceLocationNameHasBeenSet; }
    template<typename SourceLocationNameT = Aws::String>
    void SetSourceLocationName(SourceLocationNameT&& value) { m_sourceLocationNameHasBeenSet = true; m_sourceLocationName = std::forward<SourceLocationNameT>(value); }
    template<typename SourceLocationNameT = Aws::String>
    CreateProgramRequest& WithSourceLocationName(SourceLocationNameT&& value) { SetSourceLocationName(std::forward<SourceLocationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name that's used to refer to a VOD source.</p>
     */
    inline const Aws::String& GetVodSourceName() const { return m_vodSourceName; }
    inline bool VodSourceNameHasBeenSet() const { return m_vodSourceNameHasBeenSet; }
    template<typename VodSourceNameT = Aws::String>
    void SetVodSourceName(VodSourceNameT&& value) { m_vodSourceNameHasBeenSet = true; m_vodSourceName = std::forward<VodSourceNameT>(value); }
    template<typename VodSourceNameT = Aws::String>
    CreateProgramRequest& WithVodSourceName(VodSourceNameT&& value) { SetVodSourceName(std::forward<VodSourceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of AudienceMedia defined in program.</p>
     */
    inline const Aws::Vector<AudienceMedia>& GetAudienceMedia() const { return m_audienceMedia; }
    inline bool AudienceMediaHasBeenSet() const { return m_audienceMediaHasBeenSet; }
    template<typename AudienceMediaT = Aws::Vector<AudienceMedia>>
    void SetAudienceMedia(AudienceMediaT&& value) { m_audienceMediaHasBeenSet = true; m_audienceMedia = std::forward<AudienceMediaT>(value); }
    template<typename AudienceMediaT = Aws::Vector<AudienceMedia>>
    CreateProgramRequest& WithAudienceMedia(AudienceMediaT&& value) { SetAudienceMedia(std::forward<AudienceMediaT>(value)); return *this;}
    template<typename AudienceMediaT = AudienceMedia>
    CreateProgramRequest& AddAudienceMedia(AudienceMediaT&& value) { m_audienceMediaHasBeenSet = true; m_audienceMedia.emplace_back(std::forward<AudienceMediaT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<AdBreak> m_adBreaks;
    bool m_adBreaksHasBeenSet = false;

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

    Aws::Vector<AudienceMedia> m_audienceMedia;
    bool m_audienceMediaHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
