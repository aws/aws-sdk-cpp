/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/JourneyLimits.h>
#include <aws/pinpoint/model/QuietTime.h>
#include <aws/pinpoint/model/JourneySchedule.h>
#include <aws/pinpoint/model/StartCondition.h>
#include <aws/pinpoint/model/State.h>
#include <aws/pinpoint/model/JourneyChannelSettings.h>
#include <aws/pinpoint/model/OpenHours.h>
#include <aws/pinpoint/model/ClosedDays.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint/model/Activity.h>
#include <aws/pinpoint/model/__TimezoneEstimationMethodsElement.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Provides information about the status, configuration, and other settings for
   * a journey.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/JourneyResponse">AWS
   * API Reference</a></p>
   */
  class JourneyResponse
  {
  public:
    AWS_PINPOINT_API JourneyResponse() = default;
    AWS_PINPOINT_API JourneyResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API JourneyResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A map that contains a set of Activity objects, one object for each activity
     * in the journey. For each Activity object, the key is the unique identifier
     * (string) for an activity and the value is the settings for the activity.</p>
     */
    inline const Aws::Map<Aws::String, Activity>& GetActivities() const { return m_activities; }
    inline bool ActivitiesHasBeenSet() const { return m_activitiesHasBeenSet; }
    template<typename ActivitiesT = Aws::Map<Aws::String, Activity>>
    void SetActivities(ActivitiesT&& value) { m_activitiesHasBeenSet = true; m_activities = std::forward<ActivitiesT>(value); }
    template<typename ActivitiesT = Aws::Map<Aws::String, Activity>>
    JourneyResponse& WithActivities(ActivitiesT&& value) { SetActivities(std::forward<ActivitiesT>(value)); return *this;}
    template<typename ActivitiesKeyT = Aws::String, typename ActivitiesValueT = Activity>
    JourneyResponse& AddActivities(ActivitiesKeyT&& key, ActivitiesValueT&& value) {
      m_activitiesHasBeenSet = true; m_activities.emplace(std::forward<ActivitiesKeyT>(key), std::forward<ActivitiesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the application that the journey applies to.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    JourneyResponse& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date, in ISO 8601 format, when the journey was created.</p>
     */
    inline const Aws::String& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::String>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::String>
    JourneyResponse& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the journey.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    JourneyResponse& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date, in ISO 8601 format, when the journey was last modified.</p>
     */
    inline const Aws::String& GetLastModifiedDate() const { return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    template<typename LastModifiedDateT = Aws::String>
    void SetLastModifiedDate(LastModifiedDateT&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::forward<LastModifiedDateT>(value); }
    template<typename LastModifiedDateT = Aws::String>
    JourneyResponse& WithLastModifiedDate(LastModifiedDateT&& value) { SetLastModifiedDate(std::forward<LastModifiedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The messaging and entry limits for the journey.</p>
     */
    inline const JourneyLimits& GetLimits() const { return m_limits; }
    inline bool LimitsHasBeenSet() const { return m_limitsHasBeenSet; }
    template<typename LimitsT = JourneyLimits>
    void SetLimits(LimitsT&& value) { m_limitsHasBeenSet = true; m_limits = std::forward<LimitsT>(value); }
    template<typename LimitsT = JourneyLimits>
    JourneyResponse& WithLimits(LimitsT&& value) { SetLimits(std::forward<LimitsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the journey's scheduled start and end times use each
     * participant's local time. If this value is true, the schedule uses each
     * participant's local time.</p>
     */
    inline bool GetLocalTime() const { return m_localTime; }
    inline bool LocalTimeHasBeenSet() const { return m_localTimeHasBeenSet; }
    inline void SetLocalTime(bool value) { m_localTimeHasBeenSet = true; m_localTime = value; }
    inline JourneyResponse& WithLocalTime(bool value) { SetLocalTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the journey.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    JourneyResponse& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The quiet time settings for the journey. Quiet time is a specific time range
     * when a journey doesn't send messages to participants, if all the following
     * conditions are met:</p> <ul><li><p>The EndpointDemographic.Timezone property of
     * the endpoint for the participant is set to a valid value.</p></li> <li><p>The
     * current time in the participant's time zone is later than or equal to the time
     * specified by the QuietTime.Start property for the journey.</p></li> <li><p>The
     * current time in the participant's time zone is earlier than or equal to the time
     * specified by the QuietTime.End property for the journey.</p></li></ul> <p>If any
     * of the preceding conditions isn't met, the participant will receive messages
     * from the journey, even if quiet time is enabled.</p>
     */
    inline const QuietTime& GetQuietTime() const { return m_quietTime; }
    inline bool QuietTimeHasBeenSet() const { return m_quietTimeHasBeenSet; }
    template<typename QuietTimeT = QuietTime>
    void SetQuietTime(QuietTimeT&& value) { m_quietTimeHasBeenSet = true; m_quietTime = std::forward<QuietTimeT>(value); }
    template<typename QuietTimeT = QuietTime>
    JourneyResponse& WithQuietTime(QuietTimeT&& value) { SetQuietTime(std::forward<QuietTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The frequency with which Amazon Pinpoint evaluates segment and event data for
     * the journey, as a duration in ISO 8601 format.</p>
     */
    inline const Aws::String& GetRefreshFrequency() const { return m_refreshFrequency; }
    inline bool RefreshFrequencyHasBeenSet() const { return m_refreshFrequencyHasBeenSet; }
    template<typename RefreshFrequencyT = Aws::String>
    void SetRefreshFrequency(RefreshFrequencyT&& value) { m_refreshFrequencyHasBeenSet = true; m_refreshFrequency = std::forward<RefreshFrequencyT>(value); }
    template<typename RefreshFrequencyT = Aws::String>
    JourneyResponse& WithRefreshFrequency(RefreshFrequencyT&& value) { SetRefreshFrequency(std::forward<RefreshFrequencyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schedule settings for the journey.</p>
     */
    inline const JourneySchedule& GetSchedule() const { return m_schedule; }
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }
    template<typename ScheduleT = JourneySchedule>
    void SetSchedule(ScheduleT&& value) { m_scheduleHasBeenSet = true; m_schedule = std::forward<ScheduleT>(value); }
    template<typename ScheduleT = JourneySchedule>
    JourneyResponse& WithSchedule(ScheduleT&& value) { SetSchedule(std::forward<ScheduleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the first activity in the journey.</p>
     */
    inline const Aws::String& GetStartActivity() const { return m_startActivity; }
    inline bool StartActivityHasBeenSet() const { return m_startActivityHasBeenSet; }
    template<typename StartActivityT = Aws::String>
    void SetStartActivity(StartActivityT&& value) { m_startActivityHasBeenSet = true; m_startActivity = std::forward<StartActivityT>(value); }
    template<typename StartActivityT = Aws::String>
    JourneyResponse& WithStartActivity(StartActivityT&& value) { SetStartActivity(std::forward<StartActivityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The segment that defines which users are participants in the journey.</p>
     */
    inline const StartCondition& GetStartCondition() const { return m_startCondition; }
    inline bool StartConditionHasBeenSet() const { return m_startConditionHasBeenSet; }
    template<typename StartConditionT = StartCondition>
    void SetStartCondition(StartConditionT&& value) { m_startConditionHasBeenSet = true; m_startCondition = std::forward<StartConditionT>(value); }
    template<typename StartConditionT = StartCondition>
    JourneyResponse& WithStartCondition(StartConditionT&& value) { SetStartCondition(std::forward<StartConditionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the journey. Possible values are:</p> <ul><li><p>DRAFT
     * - The journey is being developed and hasn't been published yet.</p></li>
     * <li><p>ACTIVE - The journey has been developed and published. Depending on the
     * journey's schedule, the journey may currently be running or scheduled to start
     * running at a later time. If a journey's status is ACTIVE, you can't add, change,
     * or remove activities from it.</p></li> <li><p>COMPLETED - The journey has been
     * published and has finished running. All participants have entered the journey
     * and no participants are waiting to complete the journey or any activities in the
     * journey.</p></li> <li><p>CANCELLED - The journey has been stopped. If a
     * journey's status is CANCELLED, you can't add, change, or remove activities or
     * segment settings from the journey.</p></li> <li><p>CLOSED - The journey has been
     * published and has started running. It may have also passed its scheduled end
     * time, or passed its scheduled start time and a refresh frequency hasn't been
     * specified for it. If a journey's status is CLOSED, you can't add participants to
     * it, and no existing participants can enter the journey for the first time.
     * However, any existing participants who are currently waiting to start an
     * activity may continue the journey.</p></li></ul>
     */
    inline State GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(State value) { m_stateHasBeenSet = true; m_state = value; }
    inline JourneyResponse& WithState(State value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This object is not used or supported.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    JourneyResponse& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    JourneyResponse& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Indicates whether endpoints in quiet hours should enter a wait activity until
     * quiet hours have elapsed.</p>
     */
    inline bool GetWaitForQuietTime() const { return m_waitForQuietTime; }
    inline bool WaitForQuietTimeHasBeenSet() const { return m_waitForQuietTimeHasBeenSet; }
    inline void SetWaitForQuietTime(bool value) { m_waitForQuietTimeHasBeenSet = true; m_waitForQuietTime = value; }
    inline JourneyResponse& WithWaitForQuietTime(bool value) { SetWaitForQuietTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the journey participants should be refreshed when a segment
     * is updated.</p>
     */
    inline bool GetRefreshOnSegmentUpdate() const { return m_refreshOnSegmentUpdate; }
    inline bool RefreshOnSegmentUpdateHasBeenSet() const { return m_refreshOnSegmentUpdateHasBeenSet; }
    inline void SetRefreshOnSegmentUpdate(bool value) { m_refreshOnSegmentUpdateHasBeenSet = true; m_refreshOnSegmentUpdate = value; }
    inline JourneyResponse& WithRefreshOnSegmentUpdate(bool value) { SetRefreshOnSegmentUpdate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The channel-specific configurations for the journey.</p>
     */
    inline const JourneyChannelSettings& GetJourneyChannelSettings() const { return m_journeyChannelSettings; }
    inline bool JourneyChannelSettingsHasBeenSet() const { return m_journeyChannelSettingsHasBeenSet; }
    template<typename JourneyChannelSettingsT = JourneyChannelSettings>
    void SetJourneyChannelSettings(JourneyChannelSettingsT&& value) { m_journeyChannelSettingsHasBeenSet = true; m_journeyChannelSettings = std::forward<JourneyChannelSettingsT>(value); }
    template<typename JourneyChannelSettingsT = JourneyChannelSettings>
    JourneyResponse& WithJourneyChannelSettings(JourneyChannelSettingsT&& value) { SetJourneyChannelSettings(std::forward<JourneyChannelSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if journey has Advance Quiet Time enabled. This flag should be set
     * to true in order to allow using OpenHours and ClosedDays.</p>
     */
    inline bool GetSendingSchedule() const { return m_sendingSchedule; }
    inline bool SendingScheduleHasBeenSet() const { return m_sendingScheduleHasBeenSet; }
    inline void SetSendingSchedule(bool value) { m_sendingScheduleHasBeenSet = true; m_sendingSchedule = value; }
    inline JourneyResponse& WithSendingSchedule(bool value) { SetSendingSchedule(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when a journey can send messages. QuietTime should be configured
     * first and SendingSchedule should be set to true.</p>
     */
    inline const OpenHours& GetOpenHours() const { return m_openHours; }
    inline bool OpenHoursHasBeenSet() const { return m_openHoursHasBeenSet; }
    template<typename OpenHoursT = OpenHours>
    void SetOpenHours(OpenHoursT&& value) { m_openHoursHasBeenSet = true; m_openHours = std::forward<OpenHoursT>(value); }
    template<typename OpenHoursT = OpenHours>
    JourneyResponse& WithOpenHours(OpenHoursT&& value) { SetOpenHours(std::forward<OpenHoursT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when a journey will not send messages. QuietTime should be
     * configured first and SendingSchedule should be set to true.</p>
     */
    inline const ClosedDays& GetClosedDays() const { return m_closedDays; }
    inline bool ClosedDaysHasBeenSet() const { return m_closedDaysHasBeenSet; }
    template<typename ClosedDaysT = ClosedDays>
    void SetClosedDays(ClosedDaysT&& value) { m_closedDaysHasBeenSet = true; m_closedDays = std::forward<ClosedDaysT>(value); }
    template<typename ClosedDaysT = ClosedDays>
    JourneyResponse& WithClosedDays(ClosedDaysT&& value) { SetClosedDays(std::forward<ClosedDaysT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of time zone estimation methods, if any, to use for determining an
     * <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/apireference/apps-application-id-endpoints-endpoint-id.html">Endpoints</a>
     * time zone if the Endpoint does not have a value for the Demographic.Timezone
     * attribute.</p> <ul> <li><p>PHONE_NUMBER - A time zone is determined based on the
     * Endpoint.Address and Endpoint.Location.Country.</p></li> <li><p>POSTAL_CODE - A
     * time zone is determined based on the Endpoint.Location.PostalCode and
     * Endpoint.Location.Country.</p> <p>POSTAL_CODE detection is only supported
     * in the United States, United Kingdom, Australia, New Zealand, Canada, France,
     * Italy, Spain, Germany and in regions where Amazon Pinpoint is
     * available.</p></li> </ul>
     */
    inline const Aws::Vector<__TimezoneEstimationMethodsElement>& GetTimezoneEstimationMethods() const { return m_timezoneEstimationMethods; }
    inline bool TimezoneEstimationMethodsHasBeenSet() const { return m_timezoneEstimationMethodsHasBeenSet; }
    template<typename TimezoneEstimationMethodsT = Aws::Vector<__TimezoneEstimationMethodsElement>>
    void SetTimezoneEstimationMethods(TimezoneEstimationMethodsT&& value) { m_timezoneEstimationMethodsHasBeenSet = true; m_timezoneEstimationMethods = std::forward<TimezoneEstimationMethodsT>(value); }
    template<typename TimezoneEstimationMethodsT = Aws::Vector<__TimezoneEstimationMethodsElement>>
    JourneyResponse& WithTimezoneEstimationMethods(TimezoneEstimationMethodsT&& value) { SetTimezoneEstimationMethods(std::forward<TimezoneEstimationMethodsT>(value)); return *this;}
    inline JourneyResponse& AddTimezoneEstimationMethods(__TimezoneEstimationMethodsElement value) { m_timezoneEstimationMethodsHasBeenSet = true; m_timezoneEstimationMethods.push_back(value); return *this; }
    ///@}
  private:

    Aws::Map<Aws::String, Activity> m_activities;
    bool m_activitiesHasBeenSet = false;

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet = false;

    JourneyLimits m_limits;
    bool m_limitsHasBeenSet = false;

    bool m_localTime{false};
    bool m_localTimeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    QuietTime m_quietTime;
    bool m_quietTimeHasBeenSet = false;

    Aws::String m_refreshFrequency;
    bool m_refreshFrequencyHasBeenSet = false;

    JourneySchedule m_schedule;
    bool m_scheduleHasBeenSet = false;

    Aws::String m_startActivity;
    bool m_startActivityHasBeenSet = false;

    StartCondition m_startCondition;
    bool m_startConditionHasBeenSet = false;

    State m_state{State::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    bool m_waitForQuietTime{false};
    bool m_waitForQuietTimeHasBeenSet = false;

    bool m_refreshOnSegmentUpdate{false};
    bool m_refreshOnSegmentUpdateHasBeenSet = false;

    JourneyChannelSettings m_journeyChannelSettings;
    bool m_journeyChannelSettingsHasBeenSet = false;

    bool m_sendingSchedule{false};
    bool m_sendingScheduleHasBeenSet = false;

    OpenHours m_openHours;
    bool m_openHoursHasBeenSet = false;

    ClosedDays m_closedDays;
    bool m_closedDaysHasBeenSet = false;

    Aws::Vector<__TimezoneEstimationMethodsElement> m_timezoneEstimationMethods;
    bool m_timezoneEstimationMethodsHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
