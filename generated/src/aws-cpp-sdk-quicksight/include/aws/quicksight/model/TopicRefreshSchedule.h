﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/TopicScheduleType.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>A structure that represents a topic refresh schedule.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TopicRefreshSchedule">AWS
   * API Reference</a></p>
   */
  class TopicRefreshSchedule
  {
  public:
    AWS_QUICKSIGHT_API TopicRefreshSchedule();
    AWS_QUICKSIGHT_API TopicRefreshSchedule(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TopicRefreshSchedule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A Boolean value that controls whether to schedule is enabled.</p>
     */
    inline bool GetIsEnabled() const{ return m_isEnabled; }
    inline bool IsEnabledHasBeenSet() const { return m_isEnabledHasBeenSet; }
    inline void SetIsEnabled(bool value) { m_isEnabledHasBeenSet = true; m_isEnabled = value; }
    inline TopicRefreshSchedule& WithIsEnabled(bool value) { SetIsEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value that controls whether to schedule runs at the same schedule
     * that is specified in SPICE dataset.</p>
     */
    inline bool GetBasedOnSpiceSchedule() const{ return m_basedOnSpiceSchedule; }
    inline bool BasedOnSpiceScheduleHasBeenSet() const { return m_basedOnSpiceScheduleHasBeenSet; }
    inline void SetBasedOnSpiceSchedule(bool value) { m_basedOnSpiceScheduleHasBeenSet = true; m_basedOnSpiceSchedule = value; }
    inline TopicRefreshSchedule& WithBasedOnSpiceSchedule(bool value) { SetBasedOnSpiceSchedule(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The starting date and time for the refresh schedule.</p>
     */
    inline const Aws::Utils::DateTime& GetStartingAt() const{ return m_startingAt; }
    inline bool StartingAtHasBeenSet() const { return m_startingAtHasBeenSet; }
    inline void SetStartingAt(const Aws::Utils::DateTime& value) { m_startingAtHasBeenSet = true; m_startingAt = value; }
    inline void SetStartingAt(Aws::Utils::DateTime&& value) { m_startingAtHasBeenSet = true; m_startingAt = std::move(value); }
    inline TopicRefreshSchedule& WithStartingAt(const Aws::Utils::DateTime& value) { SetStartingAt(value); return *this;}
    inline TopicRefreshSchedule& WithStartingAt(Aws::Utils::DateTime&& value) { SetStartingAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timezone that you want the refresh schedule to use.</p>
     */
    inline const Aws::String& GetTimezone() const{ return m_timezone; }
    inline bool TimezoneHasBeenSet() const { return m_timezoneHasBeenSet; }
    inline void SetTimezone(const Aws::String& value) { m_timezoneHasBeenSet = true; m_timezone = value; }
    inline void SetTimezone(Aws::String&& value) { m_timezoneHasBeenSet = true; m_timezone = std::move(value); }
    inline void SetTimezone(const char* value) { m_timezoneHasBeenSet = true; m_timezone.assign(value); }
    inline TopicRefreshSchedule& WithTimezone(const Aws::String& value) { SetTimezone(value); return *this;}
    inline TopicRefreshSchedule& WithTimezone(Aws::String&& value) { SetTimezone(std::move(value)); return *this;}
    inline TopicRefreshSchedule& WithTimezone(const char* value) { SetTimezone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time of day when the refresh should run, for example, Monday-Sunday.</p>
     */
    inline const Aws::String& GetRepeatAt() const{ return m_repeatAt; }
    inline bool RepeatAtHasBeenSet() const { return m_repeatAtHasBeenSet; }
    inline void SetRepeatAt(const Aws::String& value) { m_repeatAtHasBeenSet = true; m_repeatAt = value; }
    inline void SetRepeatAt(Aws::String&& value) { m_repeatAtHasBeenSet = true; m_repeatAt = std::move(value); }
    inline void SetRepeatAt(const char* value) { m_repeatAtHasBeenSet = true; m_repeatAt.assign(value); }
    inline TopicRefreshSchedule& WithRepeatAt(const Aws::String& value) { SetRepeatAt(value); return *this;}
    inline TopicRefreshSchedule& WithRepeatAt(Aws::String&& value) { SetRepeatAt(std::move(value)); return *this;}
    inline TopicRefreshSchedule& WithRepeatAt(const char* value) { SetRepeatAt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of refresh schedule. Valid values for this structure are
     * <code>HOURLY</code>, <code>DAILY</code>, <code>WEEKLY</code>, and
     * <code>MONTHLY</code>.</p>
     */
    inline const TopicScheduleType& GetTopicScheduleType() const{ return m_topicScheduleType; }
    inline bool TopicScheduleTypeHasBeenSet() const { return m_topicScheduleTypeHasBeenSet; }
    inline void SetTopicScheduleType(const TopicScheduleType& value) { m_topicScheduleTypeHasBeenSet = true; m_topicScheduleType = value; }
    inline void SetTopicScheduleType(TopicScheduleType&& value) { m_topicScheduleTypeHasBeenSet = true; m_topicScheduleType = std::move(value); }
    inline TopicRefreshSchedule& WithTopicScheduleType(const TopicScheduleType& value) { SetTopicScheduleType(value); return *this;}
    inline TopicRefreshSchedule& WithTopicScheduleType(TopicScheduleType&& value) { SetTopicScheduleType(std::move(value)); return *this;}
    ///@}
  private:

    bool m_isEnabled;
    bool m_isEnabledHasBeenSet = false;

    bool m_basedOnSpiceSchedule;
    bool m_basedOnSpiceScheduleHasBeenSet = false;

    Aws::Utils::DateTime m_startingAt;
    bool m_startingAtHasBeenSet = false;

    Aws::String m_timezone;
    bool m_timezoneHasBeenSet = false;

    Aws::String m_repeatAt;
    bool m_repeatAtHasBeenSet = false;

    TopicScheduleType m_topicScheduleType;
    bool m_topicScheduleTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
