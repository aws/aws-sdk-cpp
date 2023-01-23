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
#include <aws/pinpoint/model/Activity.h>
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
    AWS_PINPOINT_API JourneyResponse();
    AWS_PINPOINT_API JourneyResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API JourneyResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A map that contains a set of Activity objects, one object for each activity
     * in the journey. For each Activity object, the key is the unique identifier
     * (string) for an activity and the value is the settings for the activity.</p>
     */
    inline const Aws::Map<Aws::String, Activity>& GetActivities() const{ return m_activities; }

    /**
     * <p>A map that contains a set of Activity objects, one object for each activity
     * in the journey. For each Activity object, the key is the unique identifier
     * (string) for an activity and the value is the settings for the activity.</p>
     */
    inline bool ActivitiesHasBeenSet() const { return m_activitiesHasBeenSet; }

    /**
     * <p>A map that contains a set of Activity objects, one object for each activity
     * in the journey. For each Activity object, the key is the unique identifier
     * (string) for an activity and the value is the settings for the activity.</p>
     */
    inline void SetActivities(const Aws::Map<Aws::String, Activity>& value) { m_activitiesHasBeenSet = true; m_activities = value; }

    /**
     * <p>A map that contains a set of Activity objects, one object for each activity
     * in the journey. For each Activity object, the key is the unique identifier
     * (string) for an activity and the value is the settings for the activity.</p>
     */
    inline void SetActivities(Aws::Map<Aws::String, Activity>&& value) { m_activitiesHasBeenSet = true; m_activities = std::move(value); }

    /**
     * <p>A map that contains a set of Activity objects, one object for each activity
     * in the journey. For each Activity object, the key is the unique identifier
     * (string) for an activity and the value is the settings for the activity.</p>
     */
    inline JourneyResponse& WithActivities(const Aws::Map<Aws::String, Activity>& value) { SetActivities(value); return *this;}

    /**
     * <p>A map that contains a set of Activity objects, one object for each activity
     * in the journey. For each Activity object, the key is the unique identifier
     * (string) for an activity and the value is the settings for the activity.</p>
     */
    inline JourneyResponse& WithActivities(Aws::Map<Aws::String, Activity>&& value) { SetActivities(std::move(value)); return *this;}

    /**
     * <p>A map that contains a set of Activity objects, one object for each activity
     * in the journey. For each Activity object, the key is the unique identifier
     * (string) for an activity and the value is the settings for the activity.</p>
     */
    inline JourneyResponse& AddActivities(const Aws::String& key, const Activity& value) { m_activitiesHasBeenSet = true; m_activities.emplace(key, value); return *this; }

    /**
     * <p>A map that contains a set of Activity objects, one object for each activity
     * in the journey. For each Activity object, the key is the unique identifier
     * (string) for an activity and the value is the settings for the activity.</p>
     */
    inline JourneyResponse& AddActivities(Aws::String&& key, const Activity& value) { m_activitiesHasBeenSet = true; m_activities.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map that contains a set of Activity objects, one object for each activity
     * in the journey. For each Activity object, the key is the unique identifier
     * (string) for an activity and the value is the settings for the activity.</p>
     */
    inline JourneyResponse& AddActivities(const Aws::String& key, Activity&& value) { m_activitiesHasBeenSet = true; m_activities.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map that contains a set of Activity objects, one object for each activity
     * in the journey. For each Activity object, the key is the unique identifier
     * (string) for an activity and the value is the settings for the activity.</p>
     */
    inline JourneyResponse& AddActivities(Aws::String&& key, Activity&& value) { m_activitiesHasBeenSet = true; m_activities.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map that contains a set of Activity objects, one object for each activity
     * in the journey. For each Activity object, the key is the unique identifier
     * (string) for an activity and the value is the settings for the activity.</p>
     */
    inline JourneyResponse& AddActivities(const char* key, Activity&& value) { m_activitiesHasBeenSet = true; m_activities.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map that contains a set of Activity objects, one object for each activity
     * in the journey. For each Activity object, the key is the unique identifier
     * (string) for an activity and the value is the settings for the activity.</p>
     */
    inline JourneyResponse& AddActivities(const char* key, const Activity& value) { m_activitiesHasBeenSet = true; m_activities.emplace(key, value); return *this; }


    /**
     * <p>The unique identifier for the application that the journey applies to.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The unique identifier for the application that the journey applies to.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The unique identifier for the application that the journey applies to.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The unique identifier for the application that the journey applies to.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The unique identifier for the application that the journey applies to.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The unique identifier for the application that the journey applies to.</p>
     */
    inline JourneyResponse& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The unique identifier for the application that the journey applies to.</p>
     */
    inline JourneyResponse& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the application that the journey applies to.</p>
     */
    inline JourneyResponse& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The date, in ISO 8601 format, when the journey was created.</p>
     */
    inline const Aws::String& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date, in ISO 8601 format, when the journey was created.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The date, in ISO 8601 format, when the journey was created.</p>
     */
    inline void SetCreationDate(const Aws::String& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The date, in ISO 8601 format, when the journey was created.</p>
     */
    inline void SetCreationDate(Aws::String&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The date, in ISO 8601 format, when the journey was created.</p>
     */
    inline void SetCreationDate(const char* value) { m_creationDateHasBeenSet = true; m_creationDate.assign(value); }

    /**
     * <p>The date, in ISO 8601 format, when the journey was created.</p>
     */
    inline JourneyResponse& WithCreationDate(const Aws::String& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date, in ISO 8601 format, when the journey was created.</p>
     */
    inline JourneyResponse& WithCreationDate(Aws::String&& value) { SetCreationDate(std::move(value)); return *this;}

    /**
     * <p>The date, in ISO 8601 format, when the journey was created.</p>
     */
    inline JourneyResponse& WithCreationDate(const char* value) { SetCreationDate(value); return *this;}


    /**
     * <p>The unique identifier for the journey.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier for the journey.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique identifier for the journey.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier for the journey.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique identifier for the journey.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier for the journey.</p>
     */
    inline JourneyResponse& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier for the journey.</p>
     */
    inline JourneyResponse& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the journey.</p>
     */
    inline JourneyResponse& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The date, in ISO 8601 format, when the journey was last modified.</p>
     */
    inline const Aws::String& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * <p>The date, in ISO 8601 format, when the journey was last modified.</p>
     */
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }

    /**
     * <p>The date, in ISO 8601 format, when the journey was last modified.</p>
     */
    inline void SetLastModifiedDate(const Aws::String& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }

    /**
     * <p>The date, in ISO 8601 format, when the journey was last modified.</p>
     */
    inline void SetLastModifiedDate(Aws::String&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }

    /**
     * <p>The date, in ISO 8601 format, when the journey was last modified.</p>
     */
    inline void SetLastModifiedDate(const char* value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate.assign(value); }

    /**
     * <p>The date, in ISO 8601 format, when the journey was last modified.</p>
     */
    inline JourneyResponse& WithLastModifiedDate(const Aws::String& value) { SetLastModifiedDate(value); return *this;}

    /**
     * <p>The date, in ISO 8601 format, when the journey was last modified.</p>
     */
    inline JourneyResponse& WithLastModifiedDate(Aws::String&& value) { SetLastModifiedDate(std::move(value)); return *this;}

    /**
     * <p>The date, in ISO 8601 format, when the journey was last modified.</p>
     */
    inline JourneyResponse& WithLastModifiedDate(const char* value) { SetLastModifiedDate(value); return *this;}


    /**
     * <p>The messaging and entry limits for the journey.</p>
     */
    inline const JourneyLimits& GetLimits() const{ return m_limits; }

    /**
     * <p>The messaging and entry limits for the journey.</p>
     */
    inline bool LimitsHasBeenSet() const { return m_limitsHasBeenSet; }

    /**
     * <p>The messaging and entry limits for the journey.</p>
     */
    inline void SetLimits(const JourneyLimits& value) { m_limitsHasBeenSet = true; m_limits = value; }

    /**
     * <p>The messaging and entry limits for the journey.</p>
     */
    inline void SetLimits(JourneyLimits&& value) { m_limitsHasBeenSet = true; m_limits = std::move(value); }

    /**
     * <p>The messaging and entry limits for the journey.</p>
     */
    inline JourneyResponse& WithLimits(const JourneyLimits& value) { SetLimits(value); return *this;}

    /**
     * <p>The messaging and entry limits for the journey.</p>
     */
    inline JourneyResponse& WithLimits(JourneyLimits&& value) { SetLimits(std::move(value)); return *this;}


    /**
     * <p>Specifies whether the journey's scheduled start and end times use each
     * participant's local time. If this value is true, the schedule uses each
     * participant's local time.</p>
     */
    inline bool GetLocalTime() const{ return m_localTime; }

    /**
     * <p>Specifies whether the journey's scheduled start and end times use each
     * participant's local time. If this value is true, the schedule uses each
     * participant's local time.</p>
     */
    inline bool LocalTimeHasBeenSet() const { return m_localTimeHasBeenSet; }

    /**
     * <p>Specifies whether the journey's scheduled start and end times use each
     * participant's local time. If this value is true, the schedule uses each
     * participant's local time.</p>
     */
    inline void SetLocalTime(bool value) { m_localTimeHasBeenSet = true; m_localTime = value; }

    /**
     * <p>Specifies whether the journey's scheduled start and end times use each
     * participant's local time. If this value is true, the schedule uses each
     * participant's local time.</p>
     */
    inline JourneyResponse& WithLocalTime(bool value) { SetLocalTime(value); return *this;}


    /**
     * <p>The name of the journey.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the journey.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the journey.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the journey.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the journey.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the journey.</p>
     */
    inline JourneyResponse& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the journey.</p>
     */
    inline JourneyResponse& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the journey.</p>
     */
    inline JourneyResponse& WithName(const char* value) { SetName(value); return *this;}


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
    inline const QuietTime& GetQuietTime() const{ return m_quietTime; }

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
    inline bool QuietTimeHasBeenSet() const { return m_quietTimeHasBeenSet; }

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
    inline void SetQuietTime(const QuietTime& value) { m_quietTimeHasBeenSet = true; m_quietTime = value; }

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
    inline void SetQuietTime(QuietTime&& value) { m_quietTimeHasBeenSet = true; m_quietTime = std::move(value); }

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
    inline JourneyResponse& WithQuietTime(const QuietTime& value) { SetQuietTime(value); return *this;}

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
    inline JourneyResponse& WithQuietTime(QuietTime&& value) { SetQuietTime(std::move(value)); return *this;}


    /**
     * <p>The frequency with which Amazon Pinpoint evaluates segment and event data for
     * the journey, as a duration in ISO 8601 format.</p>
     */
    inline const Aws::String& GetRefreshFrequency() const{ return m_refreshFrequency; }

    /**
     * <p>The frequency with which Amazon Pinpoint evaluates segment and event data for
     * the journey, as a duration in ISO 8601 format.</p>
     */
    inline bool RefreshFrequencyHasBeenSet() const { return m_refreshFrequencyHasBeenSet; }

    /**
     * <p>The frequency with which Amazon Pinpoint evaluates segment and event data for
     * the journey, as a duration in ISO 8601 format.</p>
     */
    inline void SetRefreshFrequency(const Aws::String& value) { m_refreshFrequencyHasBeenSet = true; m_refreshFrequency = value; }

    /**
     * <p>The frequency with which Amazon Pinpoint evaluates segment and event data for
     * the journey, as a duration in ISO 8601 format.</p>
     */
    inline void SetRefreshFrequency(Aws::String&& value) { m_refreshFrequencyHasBeenSet = true; m_refreshFrequency = std::move(value); }

    /**
     * <p>The frequency with which Amazon Pinpoint evaluates segment and event data for
     * the journey, as a duration in ISO 8601 format.</p>
     */
    inline void SetRefreshFrequency(const char* value) { m_refreshFrequencyHasBeenSet = true; m_refreshFrequency.assign(value); }

    /**
     * <p>The frequency with which Amazon Pinpoint evaluates segment and event data for
     * the journey, as a duration in ISO 8601 format.</p>
     */
    inline JourneyResponse& WithRefreshFrequency(const Aws::String& value) { SetRefreshFrequency(value); return *this;}

    /**
     * <p>The frequency with which Amazon Pinpoint evaluates segment and event data for
     * the journey, as a duration in ISO 8601 format.</p>
     */
    inline JourneyResponse& WithRefreshFrequency(Aws::String&& value) { SetRefreshFrequency(std::move(value)); return *this;}

    /**
     * <p>The frequency with which Amazon Pinpoint evaluates segment and event data for
     * the journey, as a duration in ISO 8601 format.</p>
     */
    inline JourneyResponse& WithRefreshFrequency(const char* value) { SetRefreshFrequency(value); return *this;}


    /**
     * <p>The schedule settings for the journey.</p>
     */
    inline const JourneySchedule& GetSchedule() const{ return m_schedule; }

    /**
     * <p>The schedule settings for the journey.</p>
     */
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }

    /**
     * <p>The schedule settings for the journey.</p>
     */
    inline void SetSchedule(const JourneySchedule& value) { m_scheduleHasBeenSet = true; m_schedule = value; }

    /**
     * <p>The schedule settings for the journey.</p>
     */
    inline void SetSchedule(JourneySchedule&& value) { m_scheduleHasBeenSet = true; m_schedule = std::move(value); }

    /**
     * <p>The schedule settings for the journey.</p>
     */
    inline JourneyResponse& WithSchedule(const JourneySchedule& value) { SetSchedule(value); return *this;}

    /**
     * <p>The schedule settings for the journey.</p>
     */
    inline JourneyResponse& WithSchedule(JourneySchedule&& value) { SetSchedule(std::move(value)); return *this;}


    /**
     * <p>The unique identifier for the first activity in the journey.</p>
     */
    inline const Aws::String& GetStartActivity() const{ return m_startActivity; }

    /**
     * <p>The unique identifier for the first activity in the journey.</p>
     */
    inline bool StartActivityHasBeenSet() const { return m_startActivityHasBeenSet; }

    /**
     * <p>The unique identifier for the first activity in the journey.</p>
     */
    inline void SetStartActivity(const Aws::String& value) { m_startActivityHasBeenSet = true; m_startActivity = value; }

    /**
     * <p>The unique identifier for the first activity in the journey.</p>
     */
    inline void SetStartActivity(Aws::String&& value) { m_startActivityHasBeenSet = true; m_startActivity = std::move(value); }

    /**
     * <p>The unique identifier for the first activity in the journey.</p>
     */
    inline void SetStartActivity(const char* value) { m_startActivityHasBeenSet = true; m_startActivity.assign(value); }

    /**
     * <p>The unique identifier for the first activity in the journey.</p>
     */
    inline JourneyResponse& WithStartActivity(const Aws::String& value) { SetStartActivity(value); return *this;}

    /**
     * <p>The unique identifier for the first activity in the journey.</p>
     */
    inline JourneyResponse& WithStartActivity(Aws::String&& value) { SetStartActivity(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the first activity in the journey.</p>
     */
    inline JourneyResponse& WithStartActivity(const char* value) { SetStartActivity(value); return *this;}


    /**
     * <p>The segment that defines which users are participants in the journey.</p>
     */
    inline const StartCondition& GetStartCondition() const{ return m_startCondition; }

    /**
     * <p>The segment that defines which users are participants in the journey.</p>
     */
    inline bool StartConditionHasBeenSet() const { return m_startConditionHasBeenSet; }

    /**
     * <p>The segment that defines which users are participants in the journey.</p>
     */
    inline void SetStartCondition(const StartCondition& value) { m_startConditionHasBeenSet = true; m_startCondition = value; }

    /**
     * <p>The segment that defines which users are participants in the journey.</p>
     */
    inline void SetStartCondition(StartCondition&& value) { m_startConditionHasBeenSet = true; m_startCondition = std::move(value); }

    /**
     * <p>The segment that defines which users are participants in the journey.</p>
     */
    inline JourneyResponse& WithStartCondition(const StartCondition& value) { SetStartCondition(value); return *this;}

    /**
     * <p>The segment that defines which users are participants in the journey.</p>
     */
    inline JourneyResponse& WithStartCondition(StartCondition&& value) { SetStartCondition(std::move(value)); return *this;}


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
    inline const State& GetState() const{ return m_state; }

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
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

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
    inline void SetState(const State& value) { m_stateHasBeenSet = true; m_state = value; }

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
    inline void SetState(State&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

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
    inline JourneyResponse& WithState(const State& value) { SetState(value); return *this;}

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
    inline JourneyResponse& WithState(State&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>This object is not used or supported.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>This object is not used or supported.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>This object is not used or supported.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>This object is not used or supported.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>This object is not used or supported.</p>
     */
    inline JourneyResponse& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>This object is not used or supported.</p>
     */
    inline JourneyResponse& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>This object is not used or supported.</p>
     */
    inline JourneyResponse& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>This object is not used or supported.</p>
     */
    inline JourneyResponse& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>This object is not used or supported.</p>
     */
    inline JourneyResponse& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>This object is not used or supported.</p>
     */
    inline JourneyResponse& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>This object is not used or supported.</p>
     */
    inline JourneyResponse& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>This object is not used or supported.</p>
     */
    inline JourneyResponse& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>This object is not used or supported.</p>
     */
    inline JourneyResponse& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>Specifies whether endpoints in quiet hours should enter a wait till the end
     * of their quiet hours.</p>
     */
    inline bool GetWaitForQuietTime() const{ return m_waitForQuietTime; }

    /**
     * <p>Specifies whether endpoints in quiet hours should enter a wait till the end
     * of their quiet hours.</p>
     */
    inline bool WaitForQuietTimeHasBeenSet() const { return m_waitForQuietTimeHasBeenSet; }

    /**
     * <p>Specifies whether endpoints in quiet hours should enter a wait till the end
     * of their quiet hours.</p>
     */
    inline void SetWaitForQuietTime(bool value) { m_waitForQuietTimeHasBeenSet = true; m_waitForQuietTime = value; }

    /**
     * <p>Specifies whether endpoints in quiet hours should enter a wait till the end
     * of their quiet hours.</p>
     */
    inline JourneyResponse& WithWaitForQuietTime(bool value) { SetWaitForQuietTime(value); return *this;}


    /**
     * <p>Specifies whether a journey should be refreshed on segment update.</p>
     */
    inline bool GetRefreshOnSegmentUpdate() const{ return m_refreshOnSegmentUpdate; }

    /**
     * <p>Specifies whether a journey should be refreshed on segment update.</p>
     */
    inline bool RefreshOnSegmentUpdateHasBeenSet() const { return m_refreshOnSegmentUpdateHasBeenSet; }

    /**
     * <p>Specifies whether a journey should be refreshed on segment update.</p>
     */
    inline void SetRefreshOnSegmentUpdate(bool value) { m_refreshOnSegmentUpdateHasBeenSet = true; m_refreshOnSegmentUpdate = value; }

    /**
     * <p>Specifies whether a journey should be refreshed on segment update.</p>
     */
    inline JourneyResponse& WithRefreshOnSegmentUpdate(bool value) { SetRefreshOnSegmentUpdate(value); return *this;}


    /**
     * <p>The channel-specific configurations for the journey.</p>
     */
    inline const JourneyChannelSettings& GetJourneyChannelSettings() const{ return m_journeyChannelSettings; }

    /**
     * <p>The channel-specific configurations for the journey.</p>
     */
    inline bool JourneyChannelSettingsHasBeenSet() const { return m_journeyChannelSettingsHasBeenSet; }

    /**
     * <p>The channel-specific configurations for the journey.</p>
     */
    inline void SetJourneyChannelSettings(const JourneyChannelSettings& value) { m_journeyChannelSettingsHasBeenSet = true; m_journeyChannelSettings = value; }

    /**
     * <p>The channel-specific configurations for the journey.</p>
     */
    inline void SetJourneyChannelSettings(JourneyChannelSettings&& value) { m_journeyChannelSettingsHasBeenSet = true; m_journeyChannelSettings = std::move(value); }

    /**
     * <p>The channel-specific configurations for the journey.</p>
     */
    inline JourneyResponse& WithJourneyChannelSettings(const JourneyChannelSettings& value) { SetJourneyChannelSettings(value); return *this;}

    /**
     * <p>The channel-specific configurations for the journey.</p>
     */
    inline JourneyResponse& WithJourneyChannelSettings(JourneyChannelSettings&& value) { SetJourneyChannelSettings(std::move(value)); return *this;}


    /**
     * <p>Indicates if journey have Advance Quiet Time (OpenHours and ClosedDays). This
     * flag should be set to true in order to allow (OpenHours and ClosedDays)</p>
     */
    inline bool GetSendingSchedule() const{ return m_sendingSchedule; }

    /**
     * <p>Indicates if journey have Advance Quiet Time (OpenHours and ClosedDays). This
     * flag should be set to true in order to allow (OpenHours and ClosedDays)</p>
     */
    inline bool SendingScheduleHasBeenSet() const { return m_sendingScheduleHasBeenSet; }

    /**
     * <p>Indicates if journey have Advance Quiet Time (OpenHours and ClosedDays). This
     * flag should be set to true in order to allow (OpenHours and ClosedDays)</p>
     */
    inline void SetSendingSchedule(bool value) { m_sendingScheduleHasBeenSet = true; m_sendingSchedule = value; }

    /**
     * <p>Indicates if journey have Advance Quiet Time (OpenHours and ClosedDays). This
     * flag should be set to true in order to allow (OpenHours and ClosedDays)</p>
     */
    inline JourneyResponse& WithSendingSchedule(bool value) { SetSendingSchedule(value); return *this;}


    /**
     * <p>The time when journey allow to send messages. QuietTime should be configured
     * first and SendingSchedule should be set to true.</p>
     */
    inline const OpenHours& GetOpenHours() const{ return m_openHours; }

    /**
     * <p>The time when journey allow to send messages. QuietTime should be configured
     * first and SendingSchedule should be set to true.</p>
     */
    inline bool OpenHoursHasBeenSet() const { return m_openHoursHasBeenSet; }

    /**
     * <p>The time when journey allow to send messages. QuietTime should be configured
     * first and SendingSchedule should be set to true.</p>
     */
    inline void SetOpenHours(const OpenHours& value) { m_openHoursHasBeenSet = true; m_openHours = value; }

    /**
     * <p>The time when journey allow to send messages. QuietTime should be configured
     * first and SendingSchedule should be set to true.</p>
     */
    inline void SetOpenHours(OpenHours&& value) { m_openHoursHasBeenSet = true; m_openHours = std::move(value); }

    /**
     * <p>The time when journey allow to send messages. QuietTime should be configured
     * first and SendingSchedule should be set to true.</p>
     */
    inline JourneyResponse& WithOpenHours(const OpenHours& value) { SetOpenHours(value); return *this;}

    /**
     * <p>The time when journey allow to send messages. QuietTime should be configured
     * first and SendingSchedule should be set to true.</p>
     */
    inline JourneyResponse& WithOpenHours(OpenHours&& value) { SetOpenHours(std::move(value)); return *this;}


    /**
     * <p>The time when journey will stop sending messages. QuietTime should be
     * configured first and SendingSchedule should be set to true.</p>
     */
    inline const ClosedDays& GetClosedDays() const{ return m_closedDays; }

    /**
     * <p>The time when journey will stop sending messages. QuietTime should be
     * configured first and SendingSchedule should be set to true.</p>
     */
    inline bool ClosedDaysHasBeenSet() const { return m_closedDaysHasBeenSet; }

    /**
     * <p>The time when journey will stop sending messages. QuietTime should be
     * configured first and SendingSchedule should be set to true.</p>
     */
    inline void SetClosedDays(const ClosedDays& value) { m_closedDaysHasBeenSet = true; m_closedDays = value; }

    /**
     * <p>The time when journey will stop sending messages. QuietTime should be
     * configured first and SendingSchedule should be set to true.</p>
     */
    inline void SetClosedDays(ClosedDays&& value) { m_closedDaysHasBeenSet = true; m_closedDays = std::move(value); }

    /**
     * <p>The time when journey will stop sending messages. QuietTime should be
     * configured first and SendingSchedule should be set to true.</p>
     */
    inline JourneyResponse& WithClosedDays(const ClosedDays& value) { SetClosedDays(value); return *this;}

    /**
     * <p>The time when journey will stop sending messages. QuietTime should be
     * configured first and SendingSchedule should be set to true.</p>
     */
    inline JourneyResponse& WithClosedDays(ClosedDays&& value) { SetClosedDays(std::move(value)); return *this;}

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

    bool m_localTime;
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

    State m_state;
    bool m_stateHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    bool m_waitForQuietTime;
    bool m_waitForQuietTimeHasBeenSet = false;

    bool m_refreshOnSegmentUpdate;
    bool m_refreshOnSegmentUpdateHasBeenSet = false;

    JourneyChannelSettings m_journeyChannelSettings;
    bool m_journeyChannelSettingsHasBeenSet = false;

    bool m_sendingSchedule;
    bool m_sendingScheduleHasBeenSet = false;

    OpenHours m_openHours;
    bool m_openHoursHasBeenSet = false;

    ClosedDays m_closedDays;
    bool m_closedDaysHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
