/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediatailor/model/ScheduleEntryType.h>
#include <aws/mediatailor/model/ScheduleAdBreak.h>
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
   * <p>The properties for a schedule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/ScheduleEntry">AWS
   * API Reference</a></p>
   */
  class ScheduleEntry
  {
  public:
    AWS_MEDIATAILOR_API ScheduleEntry();
    AWS_MEDIATAILOR_API ScheduleEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API ScheduleEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The approximate duration of this program, in seconds.</p>
     */
    inline long long GetApproximateDurationSeconds() const{ return m_approximateDurationSeconds; }
    inline bool ApproximateDurationSecondsHasBeenSet() const { return m_approximateDurationSecondsHasBeenSet; }
    inline void SetApproximateDurationSeconds(long long value) { m_approximateDurationSecondsHasBeenSet = true; m_approximateDurationSeconds = value; }
    inline ScheduleEntry& WithApproximateDurationSeconds(long long value) { SetApproximateDurationSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The approximate time that the program will start playing.</p>
     */
    inline const Aws::Utils::DateTime& GetApproximateStartTime() const{ return m_approximateStartTime; }
    inline bool ApproximateStartTimeHasBeenSet() const { return m_approximateStartTimeHasBeenSet; }
    inline void SetApproximateStartTime(const Aws::Utils::DateTime& value) { m_approximateStartTimeHasBeenSet = true; m_approximateStartTime = value; }
    inline void SetApproximateStartTime(Aws::Utils::DateTime&& value) { m_approximateStartTimeHasBeenSet = true; m_approximateStartTime = std::move(value); }
    inline ScheduleEntry& WithApproximateStartTime(const Aws::Utils::DateTime& value) { SetApproximateStartTime(value); return *this;}
    inline ScheduleEntry& WithApproximateStartTime(Aws::Utils::DateTime&& value) { SetApproximateStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the program.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ScheduleEntry& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ScheduleEntry& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ScheduleEntry& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of audiences defined in ScheduleEntry.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAudiences() const{ return m_audiences; }
    inline bool AudiencesHasBeenSet() const { return m_audiencesHasBeenSet; }
    inline void SetAudiences(const Aws::Vector<Aws::String>& value) { m_audiencesHasBeenSet = true; m_audiences = value; }
    inline void SetAudiences(Aws::Vector<Aws::String>&& value) { m_audiencesHasBeenSet = true; m_audiences = std::move(value); }
    inline ScheduleEntry& WithAudiences(const Aws::Vector<Aws::String>& value) { SetAudiences(value); return *this;}
    inline ScheduleEntry& WithAudiences(Aws::Vector<Aws::String>&& value) { SetAudiences(std::move(value)); return *this;}
    inline ScheduleEntry& AddAudiences(const Aws::String& value) { m_audiencesHasBeenSet = true; m_audiences.push_back(value); return *this; }
    inline ScheduleEntry& AddAudiences(Aws::String&& value) { m_audiencesHasBeenSet = true; m_audiences.push_back(std::move(value)); return *this; }
    inline ScheduleEntry& AddAudiences(const char* value) { m_audiencesHasBeenSet = true; m_audiences.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the channel that uses this schedule.</p>
     */
    inline const Aws::String& GetChannelName() const{ return m_channelName; }
    inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }
    inline void SetChannelName(const Aws::String& value) { m_channelNameHasBeenSet = true; m_channelName = value; }
    inline void SetChannelName(Aws::String&& value) { m_channelNameHasBeenSet = true; m_channelName = std::move(value); }
    inline void SetChannelName(const char* value) { m_channelNameHasBeenSet = true; m_channelName.assign(value); }
    inline ScheduleEntry& WithChannelName(const Aws::String& value) { SetChannelName(value); return *this;}
    inline ScheduleEntry& WithChannelName(Aws::String&& value) { SetChannelName(std::move(value)); return *this;}
    inline ScheduleEntry& WithChannelName(const char* value) { SetChannelName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the live source used for the program.</p>
     */
    inline const Aws::String& GetLiveSourceName() const{ return m_liveSourceName; }
    inline bool LiveSourceNameHasBeenSet() const { return m_liveSourceNameHasBeenSet; }
    inline void SetLiveSourceName(const Aws::String& value) { m_liveSourceNameHasBeenSet = true; m_liveSourceName = value; }
    inline void SetLiveSourceName(Aws::String&& value) { m_liveSourceNameHasBeenSet = true; m_liveSourceName = std::move(value); }
    inline void SetLiveSourceName(const char* value) { m_liveSourceNameHasBeenSet = true; m_liveSourceName.assign(value); }
    inline ScheduleEntry& WithLiveSourceName(const Aws::String& value) { SetLiveSourceName(value); return *this;}
    inline ScheduleEntry& WithLiveSourceName(Aws::String&& value) { SetLiveSourceName(std::move(value)); return *this;}
    inline ScheduleEntry& WithLiveSourceName(const char* value) { SetLiveSourceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the program.</p>
     */
    inline const Aws::String& GetProgramName() const{ return m_programName; }
    inline bool ProgramNameHasBeenSet() const { return m_programNameHasBeenSet; }
    inline void SetProgramName(const Aws::String& value) { m_programNameHasBeenSet = true; m_programName = value; }
    inline void SetProgramName(Aws::String&& value) { m_programNameHasBeenSet = true; m_programName = std::move(value); }
    inline void SetProgramName(const char* value) { m_programNameHasBeenSet = true; m_programName.assign(value); }
    inline ScheduleEntry& WithProgramName(const Aws::String& value) { SetProgramName(value); return *this;}
    inline ScheduleEntry& WithProgramName(Aws::String&& value) { SetProgramName(std::move(value)); return *this;}
    inline ScheduleEntry& WithProgramName(const char* value) { SetProgramName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schedule's ad break properties.</p>
     */
    inline const Aws::Vector<ScheduleAdBreak>& GetScheduleAdBreaks() const{ return m_scheduleAdBreaks; }
    inline bool ScheduleAdBreaksHasBeenSet() const { return m_scheduleAdBreaksHasBeenSet; }
    inline void SetScheduleAdBreaks(const Aws::Vector<ScheduleAdBreak>& value) { m_scheduleAdBreaksHasBeenSet = true; m_scheduleAdBreaks = value; }
    inline void SetScheduleAdBreaks(Aws::Vector<ScheduleAdBreak>&& value) { m_scheduleAdBreaksHasBeenSet = true; m_scheduleAdBreaks = std::move(value); }
    inline ScheduleEntry& WithScheduleAdBreaks(const Aws::Vector<ScheduleAdBreak>& value) { SetScheduleAdBreaks(value); return *this;}
    inline ScheduleEntry& WithScheduleAdBreaks(Aws::Vector<ScheduleAdBreak>&& value) { SetScheduleAdBreaks(std::move(value)); return *this;}
    inline ScheduleEntry& AddScheduleAdBreaks(const ScheduleAdBreak& value) { m_scheduleAdBreaksHasBeenSet = true; m_scheduleAdBreaks.push_back(value); return *this; }
    inline ScheduleEntry& AddScheduleAdBreaks(ScheduleAdBreak&& value) { m_scheduleAdBreaksHasBeenSet = true; m_scheduleAdBreaks.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of schedule entry.</p>
     */
    inline const ScheduleEntryType& GetScheduleEntryType() const{ return m_scheduleEntryType; }
    inline bool ScheduleEntryTypeHasBeenSet() const { return m_scheduleEntryTypeHasBeenSet; }
    inline void SetScheduleEntryType(const ScheduleEntryType& value) { m_scheduleEntryTypeHasBeenSet = true; m_scheduleEntryType = value; }
    inline void SetScheduleEntryType(ScheduleEntryType&& value) { m_scheduleEntryTypeHasBeenSet = true; m_scheduleEntryType = std::move(value); }
    inline ScheduleEntry& WithScheduleEntryType(const ScheduleEntryType& value) { SetScheduleEntryType(value); return *this;}
    inline ScheduleEntry& WithScheduleEntryType(ScheduleEntryType&& value) { SetScheduleEntryType(std::move(value)); return *this;}
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
    inline ScheduleEntry& WithSourceLocationName(const Aws::String& value) { SetSourceLocationName(value); return *this;}
    inline ScheduleEntry& WithSourceLocationName(Aws::String&& value) { SetSourceLocationName(std::move(value)); return *this;}
    inline ScheduleEntry& WithSourceLocationName(const char* value) { SetSourceLocationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the VOD source.</p>
     */
    inline const Aws::String& GetVodSourceName() const{ return m_vodSourceName; }
    inline bool VodSourceNameHasBeenSet() const { return m_vodSourceNameHasBeenSet; }
    inline void SetVodSourceName(const Aws::String& value) { m_vodSourceNameHasBeenSet = true; m_vodSourceName = value; }
    inline void SetVodSourceName(Aws::String&& value) { m_vodSourceNameHasBeenSet = true; m_vodSourceName = std::move(value); }
    inline void SetVodSourceName(const char* value) { m_vodSourceNameHasBeenSet = true; m_vodSourceName.assign(value); }
    inline ScheduleEntry& WithVodSourceName(const Aws::String& value) { SetVodSourceName(value); return *this;}
    inline ScheduleEntry& WithVodSourceName(Aws::String&& value) { SetVodSourceName(std::move(value)); return *this;}
    inline ScheduleEntry& WithVodSourceName(const char* value) { SetVodSourceName(value); return *this;}
    ///@}
  private:

    long long m_approximateDurationSeconds;
    bool m_approximateDurationSecondsHasBeenSet = false;

    Aws::Utils::DateTime m_approximateStartTime;
    bool m_approximateStartTimeHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Vector<Aws::String> m_audiences;
    bool m_audiencesHasBeenSet = false;

    Aws::String m_channelName;
    bool m_channelNameHasBeenSet = false;

    Aws::String m_liveSourceName;
    bool m_liveSourceNameHasBeenSet = false;

    Aws::String m_programName;
    bool m_programNameHasBeenSet = false;

    Aws::Vector<ScheduleAdBreak> m_scheduleAdBreaks;
    bool m_scheduleAdBreaksHasBeenSet = false;

    ScheduleEntryType m_scheduleEntryType;
    bool m_scheduleEntryTypeHasBeenSet = false;

    Aws::String m_sourceLocationName;
    bool m_sourceLocationNameHasBeenSet = false;

    Aws::String m_vodSourceName;
    bool m_vodSourceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
