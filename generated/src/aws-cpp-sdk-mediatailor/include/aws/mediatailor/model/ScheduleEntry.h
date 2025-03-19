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
    AWS_MEDIATAILOR_API ScheduleEntry() = default;
    AWS_MEDIATAILOR_API ScheduleEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API ScheduleEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The approximate duration of this program, in seconds.</p>
     */
    inline long long GetApproximateDurationSeconds() const { return m_approximateDurationSeconds; }
    inline bool ApproximateDurationSecondsHasBeenSet() const { return m_approximateDurationSecondsHasBeenSet; }
    inline void SetApproximateDurationSeconds(long long value) { m_approximateDurationSecondsHasBeenSet = true; m_approximateDurationSeconds = value; }
    inline ScheduleEntry& WithApproximateDurationSeconds(long long value) { SetApproximateDurationSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The approximate time that the program will start playing.</p>
     */
    inline const Aws::Utils::DateTime& GetApproximateStartTime() const { return m_approximateStartTime; }
    inline bool ApproximateStartTimeHasBeenSet() const { return m_approximateStartTimeHasBeenSet; }
    template<typename ApproximateStartTimeT = Aws::Utils::DateTime>
    void SetApproximateStartTime(ApproximateStartTimeT&& value) { m_approximateStartTimeHasBeenSet = true; m_approximateStartTime = std::forward<ApproximateStartTimeT>(value); }
    template<typename ApproximateStartTimeT = Aws::Utils::DateTime>
    ScheduleEntry& WithApproximateStartTime(ApproximateStartTimeT&& value) { SetApproximateStartTime(std::forward<ApproximateStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the program.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ScheduleEntry& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the channel that uses this schedule.</p>
     */
    inline const Aws::String& GetChannelName() const { return m_channelName; }
    inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }
    template<typename ChannelNameT = Aws::String>
    void SetChannelName(ChannelNameT&& value) { m_channelNameHasBeenSet = true; m_channelName = std::forward<ChannelNameT>(value); }
    template<typename ChannelNameT = Aws::String>
    ScheduleEntry& WithChannelName(ChannelNameT&& value) { SetChannelName(std::forward<ChannelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the live source used for the program.</p>
     */
    inline const Aws::String& GetLiveSourceName() const { return m_liveSourceName; }
    inline bool LiveSourceNameHasBeenSet() const { return m_liveSourceNameHasBeenSet; }
    template<typename LiveSourceNameT = Aws::String>
    void SetLiveSourceName(LiveSourceNameT&& value) { m_liveSourceNameHasBeenSet = true; m_liveSourceName = std::forward<LiveSourceNameT>(value); }
    template<typename LiveSourceNameT = Aws::String>
    ScheduleEntry& WithLiveSourceName(LiveSourceNameT&& value) { SetLiveSourceName(std::forward<LiveSourceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the program.</p>
     */
    inline const Aws::String& GetProgramName() const { return m_programName; }
    inline bool ProgramNameHasBeenSet() const { return m_programNameHasBeenSet; }
    template<typename ProgramNameT = Aws::String>
    void SetProgramName(ProgramNameT&& value) { m_programNameHasBeenSet = true; m_programName = std::forward<ProgramNameT>(value); }
    template<typename ProgramNameT = Aws::String>
    ScheduleEntry& WithProgramName(ProgramNameT&& value) { SetProgramName(std::forward<ProgramNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schedule's ad break properties.</p>
     */
    inline const Aws::Vector<ScheduleAdBreak>& GetScheduleAdBreaks() const { return m_scheduleAdBreaks; }
    inline bool ScheduleAdBreaksHasBeenSet() const { return m_scheduleAdBreaksHasBeenSet; }
    template<typename ScheduleAdBreaksT = Aws::Vector<ScheduleAdBreak>>
    void SetScheduleAdBreaks(ScheduleAdBreaksT&& value) { m_scheduleAdBreaksHasBeenSet = true; m_scheduleAdBreaks = std::forward<ScheduleAdBreaksT>(value); }
    template<typename ScheduleAdBreaksT = Aws::Vector<ScheduleAdBreak>>
    ScheduleEntry& WithScheduleAdBreaks(ScheduleAdBreaksT&& value) { SetScheduleAdBreaks(std::forward<ScheduleAdBreaksT>(value)); return *this;}
    template<typename ScheduleAdBreaksT = ScheduleAdBreak>
    ScheduleEntry& AddScheduleAdBreaks(ScheduleAdBreaksT&& value) { m_scheduleAdBreaksHasBeenSet = true; m_scheduleAdBreaks.emplace_back(std::forward<ScheduleAdBreaksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of schedule entry.</p>
     */
    inline ScheduleEntryType GetScheduleEntryType() const { return m_scheduleEntryType; }
    inline bool ScheduleEntryTypeHasBeenSet() const { return m_scheduleEntryTypeHasBeenSet; }
    inline void SetScheduleEntryType(ScheduleEntryType value) { m_scheduleEntryTypeHasBeenSet = true; m_scheduleEntryType = value; }
    inline ScheduleEntry& WithScheduleEntryType(ScheduleEntryType value) { SetScheduleEntryType(value); return *this;}
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
    ScheduleEntry& WithSourceLocationName(SourceLocationNameT&& value) { SetSourceLocationName(std::forward<SourceLocationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the VOD source.</p>
     */
    inline const Aws::String& GetVodSourceName() const { return m_vodSourceName; }
    inline bool VodSourceNameHasBeenSet() const { return m_vodSourceNameHasBeenSet; }
    template<typename VodSourceNameT = Aws::String>
    void SetVodSourceName(VodSourceNameT&& value) { m_vodSourceNameHasBeenSet = true; m_vodSourceName = std::forward<VodSourceNameT>(value); }
    template<typename VodSourceNameT = Aws::String>
    ScheduleEntry& WithVodSourceName(VodSourceNameT&& value) { SetVodSourceName(std::forward<VodSourceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of audiences defined in ScheduleEntry.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAudiences() const { return m_audiences; }
    inline bool AudiencesHasBeenSet() const { return m_audiencesHasBeenSet; }
    template<typename AudiencesT = Aws::Vector<Aws::String>>
    void SetAudiences(AudiencesT&& value) { m_audiencesHasBeenSet = true; m_audiences = std::forward<AudiencesT>(value); }
    template<typename AudiencesT = Aws::Vector<Aws::String>>
    ScheduleEntry& WithAudiences(AudiencesT&& value) { SetAudiences(std::forward<AudiencesT>(value)); return *this;}
    template<typename AudiencesT = Aws::String>
    ScheduleEntry& AddAudiences(AudiencesT&& value) { m_audiencesHasBeenSet = true; m_audiences.emplace_back(std::forward<AudiencesT>(value)); return *this; }
    ///@}
  private:

    long long m_approximateDurationSeconds{0};
    bool m_approximateDurationSecondsHasBeenSet = false;

    Aws::Utils::DateTime m_approximateStartTime{};
    bool m_approximateStartTimeHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_channelName;
    bool m_channelNameHasBeenSet = false;

    Aws::String m_liveSourceName;
    bool m_liveSourceNameHasBeenSet = false;

    Aws::String m_programName;
    bool m_programNameHasBeenSet = false;

    Aws::Vector<ScheduleAdBreak> m_scheduleAdBreaks;
    bool m_scheduleAdBreaksHasBeenSet = false;

    ScheduleEntryType m_scheduleEntryType{ScheduleEntryType::NOT_SET};
    bool m_scheduleEntryTypeHasBeenSet = false;

    Aws::String m_sourceLocationName;
    bool m_sourceLocationNameHasBeenSet = false;

    Aws::String m_vodSourceName;
    bool m_vodSourceNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_audiences;
    bool m_audiencesHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
