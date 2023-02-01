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


    /**
     * <p>The ad break configuration settings.</p>
     */
    inline const Aws::Vector<AdBreak>& GetAdBreaks() const{ return m_adBreaks; }

    /**
     * <p>The ad break configuration settings.</p>
     */
    inline bool AdBreaksHasBeenSet() const { return m_adBreaksHasBeenSet; }

    /**
     * <p>The ad break configuration settings.</p>
     */
    inline void SetAdBreaks(const Aws::Vector<AdBreak>& value) { m_adBreaksHasBeenSet = true; m_adBreaks = value; }

    /**
     * <p>The ad break configuration settings.</p>
     */
    inline void SetAdBreaks(Aws::Vector<AdBreak>&& value) { m_adBreaksHasBeenSet = true; m_adBreaks = std::move(value); }

    /**
     * <p>The ad break configuration settings.</p>
     */
    inline UpdateProgramRequest& WithAdBreaks(const Aws::Vector<AdBreak>& value) { SetAdBreaks(value); return *this;}

    /**
     * <p>The ad break configuration settings.</p>
     */
    inline UpdateProgramRequest& WithAdBreaks(Aws::Vector<AdBreak>&& value) { SetAdBreaks(std::move(value)); return *this;}

    /**
     * <p>The ad break configuration settings.</p>
     */
    inline UpdateProgramRequest& AddAdBreaks(const AdBreak& value) { m_adBreaksHasBeenSet = true; m_adBreaks.push_back(value); return *this; }

    /**
     * <p>The ad break configuration settings.</p>
     */
    inline UpdateProgramRequest& AddAdBreaks(AdBreak&& value) { m_adBreaksHasBeenSet = true; m_adBreaks.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of the channel for this Program.</p>
     */
    inline const Aws::String& GetChannelName() const{ return m_channelName; }

    /**
     * <p>The name of the channel for this Program.</p>
     */
    inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }

    /**
     * <p>The name of the channel for this Program.</p>
     */
    inline void SetChannelName(const Aws::String& value) { m_channelNameHasBeenSet = true; m_channelName = value; }

    /**
     * <p>The name of the channel for this Program.</p>
     */
    inline void SetChannelName(Aws::String&& value) { m_channelNameHasBeenSet = true; m_channelName = std::move(value); }

    /**
     * <p>The name of the channel for this Program.</p>
     */
    inline void SetChannelName(const char* value) { m_channelNameHasBeenSet = true; m_channelName.assign(value); }

    /**
     * <p>The name of the channel for this Program.</p>
     */
    inline UpdateProgramRequest& WithChannelName(const Aws::String& value) { SetChannelName(value); return *this;}

    /**
     * <p>The name of the channel for this Program.</p>
     */
    inline UpdateProgramRequest& WithChannelName(Aws::String&& value) { SetChannelName(std::move(value)); return *this;}

    /**
     * <p>The name of the channel for this Program.</p>
     */
    inline UpdateProgramRequest& WithChannelName(const char* value) { SetChannelName(value); return *this;}


    /**
     * <p>The name of the Program.</p>
     */
    inline const Aws::String& GetProgramName() const{ return m_programName; }

    /**
     * <p>The name of the Program.</p>
     */
    inline bool ProgramNameHasBeenSet() const { return m_programNameHasBeenSet; }

    /**
     * <p>The name of the Program.</p>
     */
    inline void SetProgramName(const Aws::String& value) { m_programNameHasBeenSet = true; m_programName = value; }

    /**
     * <p>The name of the Program.</p>
     */
    inline void SetProgramName(Aws::String&& value) { m_programNameHasBeenSet = true; m_programName = std::move(value); }

    /**
     * <p>The name of the Program.</p>
     */
    inline void SetProgramName(const char* value) { m_programNameHasBeenSet = true; m_programName.assign(value); }

    /**
     * <p>The name of the Program.</p>
     */
    inline UpdateProgramRequest& WithProgramName(const Aws::String& value) { SetProgramName(value); return *this;}

    /**
     * <p>The name of the Program.</p>
     */
    inline UpdateProgramRequest& WithProgramName(Aws::String&& value) { SetProgramName(std::move(value)); return *this;}

    /**
     * <p>The name of the Program.</p>
     */
    inline UpdateProgramRequest& WithProgramName(const char* value) { SetProgramName(value); return *this;}


    /**
     * <p>The schedule configuration settings.</p>
     */
    inline const UpdateProgramScheduleConfiguration& GetScheduleConfiguration() const{ return m_scheduleConfiguration; }

    /**
     * <p>The schedule configuration settings.</p>
     */
    inline bool ScheduleConfigurationHasBeenSet() const { return m_scheduleConfigurationHasBeenSet; }

    /**
     * <p>The schedule configuration settings.</p>
     */
    inline void SetScheduleConfiguration(const UpdateProgramScheduleConfiguration& value) { m_scheduleConfigurationHasBeenSet = true; m_scheduleConfiguration = value; }

    /**
     * <p>The schedule configuration settings.</p>
     */
    inline void SetScheduleConfiguration(UpdateProgramScheduleConfiguration&& value) { m_scheduleConfigurationHasBeenSet = true; m_scheduleConfiguration = std::move(value); }

    /**
     * <p>The schedule configuration settings.</p>
     */
    inline UpdateProgramRequest& WithScheduleConfiguration(const UpdateProgramScheduleConfiguration& value) { SetScheduleConfiguration(value); return *this;}

    /**
     * <p>The schedule configuration settings.</p>
     */
    inline UpdateProgramRequest& WithScheduleConfiguration(UpdateProgramScheduleConfiguration&& value) { SetScheduleConfiguration(std::move(value)); return *this;}

  private:

    Aws::Vector<AdBreak> m_adBreaks;
    bool m_adBreaksHasBeenSet = false;

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
