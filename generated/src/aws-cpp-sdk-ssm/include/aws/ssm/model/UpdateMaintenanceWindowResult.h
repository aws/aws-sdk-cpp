/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SSM
{
namespace Model
{
  class UpdateMaintenanceWindowResult
  {
  public:
    AWS_SSM_API UpdateMaintenanceWindowResult();
    AWS_SSM_API UpdateMaintenanceWindowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API UpdateMaintenanceWindowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the created maintenance window.</p>
     */
    inline const Aws::String& GetWindowId() const{ return m_windowId; }
    inline void SetWindowId(const Aws::String& value) { m_windowId = value; }
    inline void SetWindowId(Aws::String&& value) { m_windowId = std::move(value); }
    inline void SetWindowId(const char* value) { m_windowId.assign(value); }
    inline UpdateMaintenanceWindowResult& WithWindowId(const Aws::String& value) { SetWindowId(value); return *this;}
    inline UpdateMaintenanceWindowResult& WithWindowId(Aws::String&& value) { SetWindowId(std::move(value)); return *this;}
    inline UpdateMaintenanceWindowResult& WithWindowId(const char* value) { SetWindowId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the maintenance window.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline UpdateMaintenanceWindowResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateMaintenanceWindowResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateMaintenanceWindowResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional description of the update.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline UpdateMaintenanceWindowResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateMaintenanceWindowResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateMaintenanceWindowResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in ISO-8601 Extended format, for when the maintenance
     * window is scheduled to become active. The maintenance window won't run before
     * this specified time.</p>
     */
    inline const Aws::String& GetStartDate() const{ return m_startDate; }
    inline void SetStartDate(const Aws::String& value) { m_startDate = value; }
    inline void SetStartDate(Aws::String&& value) { m_startDate = std::move(value); }
    inline void SetStartDate(const char* value) { m_startDate.assign(value); }
    inline UpdateMaintenanceWindowResult& WithStartDate(const Aws::String& value) { SetStartDate(value); return *this;}
    inline UpdateMaintenanceWindowResult& WithStartDate(Aws::String&& value) { SetStartDate(std::move(value)); return *this;}
    inline UpdateMaintenanceWindowResult& WithStartDate(const char* value) { SetStartDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in ISO-8601 Extended format, for when the maintenance
     * window is scheduled to become inactive. The maintenance window won't run after
     * this specified time.</p>
     */
    inline const Aws::String& GetEndDate() const{ return m_endDate; }
    inline void SetEndDate(const Aws::String& value) { m_endDate = value; }
    inline void SetEndDate(Aws::String&& value) { m_endDate = std::move(value); }
    inline void SetEndDate(const char* value) { m_endDate.assign(value); }
    inline UpdateMaintenanceWindowResult& WithEndDate(const Aws::String& value) { SetEndDate(value); return *this;}
    inline UpdateMaintenanceWindowResult& WithEndDate(Aws::String&& value) { SetEndDate(std::move(value)); return *this;}
    inline UpdateMaintenanceWindowResult& WithEndDate(const char* value) { SetEndDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schedule of the maintenance window in the form of a cron or rate
     * expression.</p>
     */
    inline const Aws::String& GetSchedule() const{ return m_schedule; }
    inline void SetSchedule(const Aws::String& value) { m_schedule = value; }
    inline void SetSchedule(Aws::String&& value) { m_schedule = std::move(value); }
    inline void SetSchedule(const char* value) { m_schedule.assign(value); }
    inline UpdateMaintenanceWindowResult& WithSchedule(const Aws::String& value) { SetSchedule(value); return *this;}
    inline UpdateMaintenanceWindowResult& WithSchedule(Aws::String&& value) { SetSchedule(std::move(value)); return *this;}
    inline UpdateMaintenanceWindowResult& WithSchedule(const char* value) { SetSchedule(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time zone that the scheduled maintenance window executions are based on,
     * in Internet Assigned Numbers Authority (IANA) format. For example:
     * "America/Los_Angeles", "UTC", or "Asia/Seoul". For more information, see the <a
     * href="https://www.iana.org/time-zones">Time Zone Database</a> on the IANA
     * website.</p>
     */
    inline const Aws::String& GetScheduleTimezone() const{ return m_scheduleTimezone; }
    inline void SetScheduleTimezone(const Aws::String& value) { m_scheduleTimezone = value; }
    inline void SetScheduleTimezone(Aws::String&& value) { m_scheduleTimezone = std::move(value); }
    inline void SetScheduleTimezone(const char* value) { m_scheduleTimezone.assign(value); }
    inline UpdateMaintenanceWindowResult& WithScheduleTimezone(const Aws::String& value) { SetScheduleTimezone(value); return *this;}
    inline UpdateMaintenanceWindowResult& WithScheduleTimezone(Aws::String&& value) { SetScheduleTimezone(std::move(value)); return *this;}
    inline UpdateMaintenanceWindowResult& WithScheduleTimezone(const char* value) { SetScheduleTimezone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days to wait to run a maintenance window after the scheduled
     * cron expression date and time.</p>
     */
    inline int GetScheduleOffset() const{ return m_scheduleOffset; }
    inline void SetScheduleOffset(int value) { m_scheduleOffset = value; }
    inline UpdateMaintenanceWindowResult& WithScheduleOffset(int value) { SetScheduleOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration of the maintenance window in hours.</p>
     */
    inline int GetDuration() const{ return m_duration; }
    inline void SetDuration(int value) { m_duration = value; }
    inline UpdateMaintenanceWindowResult& WithDuration(int value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of hours before the end of the maintenance window that Amazon Web
     * Services Systems Manager stops scheduling new tasks for execution.</p>
     */
    inline int GetCutoff() const{ return m_cutoff; }
    inline void SetCutoff(int value) { m_cutoff = value; }
    inline UpdateMaintenanceWindowResult& WithCutoff(int value) { SetCutoff(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether targets must be registered with the maintenance window before tasks
     * can be defined for those targets.</p>
     */
    inline bool GetAllowUnassociatedTargets() const{ return m_allowUnassociatedTargets; }
    inline void SetAllowUnassociatedTargets(bool value) { m_allowUnassociatedTargets = value; }
    inline UpdateMaintenanceWindowResult& WithAllowUnassociatedTargets(bool value) { SetAllowUnassociatedTargets(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the maintenance window is enabled.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }
    inline void SetEnabled(bool value) { m_enabled = value; }
    inline UpdateMaintenanceWindowResult& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateMaintenanceWindowResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateMaintenanceWindowResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateMaintenanceWindowResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_windowId;

    Aws::String m_name;

    Aws::String m_description;

    Aws::String m_startDate;

    Aws::String m_endDate;

    Aws::String m_schedule;

    Aws::String m_scheduleTimezone;

    int m_scheduleOffset;

    int m_duration;

    int m_cutoff;

    bool m_allowUnassociatedTargets;

    bool m_enabled;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
