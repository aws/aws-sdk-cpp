﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/MaintenanceDay.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Placeholder documentation for MaintenanceStatus<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/MaintenanceStatus">AWS
   * API Reference</a></p>
   */
  class MaintenanceStatus
  {
  public:
    AWS_MEDIALIVE_API MaintenanceStatus();
    AWS_MEDIALIVE_API MaintenanceStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API MaintenanceStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The currently selected maintenance day.
     */
    inline const MaintenanceDay& GetMaintenanceDay() const{ return m_maintenanceDay; }
    inline bool MaintenanceDayHasBeenSet() const { return m_maintenanceDayHasBeenSet; }
    inline void SetMaintenanceDay(const MaintenanceDay& value) { m_maintenanceDayHasBeenSet = true; m_maintenanceDay = value; }
    inline void SetMaintenanceDay(MaintenanceDay&& value) { m_maintenanceDayHasBeenSet = true; m_maintenanceDay = std::move(value); }
    inline MaintenanceStatus& WithMaintenanceDay(const MaintenanceDay& value) { SetMaintenanceDay(value); return *this;}
    inline MaintenanceStatus& WithMaintenanceDay(MaintenanceDay&& value) { SetMaintenanceDay(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Maintenance is required by the displayed date and time. Date and time is in ISO.
     */
    inline const Aws::String& GetMaintenanceDeadline() const{ return m_maintenanceDeadline; }
    inline bool MaintenanceDeadlineHasBeenSet() const { return m_maintenanceDeadlineHasBeenSet; }
    inline void SetMaintenanceDeadline(const Aws::String& value) { m_maintenanceDeadlineHasBeenSet = true; m_maintenanceDeadline = value; }
    inline void SetMaintenanceDeadline(Aws::String&& value) { m_maintenanceDeadlineHasBeenSet = true; m_maintenanceDeadline = std::move(value); }
    inline void SetMaintenanceDeadline(const char* value) { m_maintenanceDeadlineHasBeenSet = true; m_maintenanceDeadline.assign(value); }
    inline MaintenanceStatus& WithMaintenanceDeadline(const Aws::String& value) { SetMaintenanceDeadline(value); return *this;}
    inline MaintenanceStatus& WithMaintenanceDeadline(Aws::String&& value) { SetMaintenanceDeadline(std::move(value)); return *this;}
    inline MaintenanceStatus& WithMaintenanceDeadline(const char* value) { SetMaintenanceDeadline(value); return *this;}
    ///@}

    ///@{
    /**
     * The currently scheduled maintenance date and time. Date and time is in ISO.
     */
    inline const Aws::String& GetMaintenanceScheduledDate() const{ return m_maintenanceScheduledDate; }
    inline bool MaintenanceScheduledDateHasBeenSet() const { return m_maintenanceScheduledDateHasBeenSet; }
    inline void SetMaintenanceScheduledDate(const Aws::String& value) { m_maintenanceScheduledDateHasBeenSet = true; m_maintenanceScheduledDate = value; }
    inline void SetMaintenanceScheduledDate(Aws::String&& value) { m_maintenanceScheduledDateHasBeenSet = true; m_maintenanceScheduledDate = std::move(value); }
    inline void SetMaintenanceScheduledDate(const char* value) { m_maintenanceScheduledDateHasBeenSet = true; m_maintenanceScheduledDate.assign(value); }
    inline MaintenanceStatus& WithMaintenanceScheduledDate(const Aws::String& value) { SetMaintenanceScheduledDate(value); return *this;}
    inline MaintenanceStatus& WithMaintenanceScheduledDate(Aws::String&& value) { SetMaintenanceScheduledDate(std::move(value)); return *this;}
    inline MaintenanceStatus& WithMaintenanceScheduledDate(const char* value) { SetMaintenanceScheduledDate(value); return *this;}
    ///@}

    ///@{
    /**
     * The currently selected maintenance start time. Time is in UTC.
     */
    inline const Aws::String& GetMaintenanceStartTime() const{ return m_maintenanceStartTime; }
    inline bool MaintenanceStartTimeHasBeenSet() const { return m_maintenanceStartTimeHasBeenSet; }
    inline void SetMaintenanceStartTime(const Aws::String& value) { m_maintenanceStartTimeHasBeenSet = true; m_maintenanceStartTime = value; }
    inline void SetMaintenanceStartTime(Aws::String&& value) { m_maintenanceStartTimeHasBeenSet = true; m_maintenanceStartTime = std::move(value); }
    inline void SetMaintenanceStartTime(const char* value) { m_maintenanceStartTimeHasBeenSet = true; m_maintenanceStartTime.assign(value); }
    inline MaintenanceStatus& WithMaintenanceStartTime(const Aws::String& value) { SetMaintenanceStartTime(value); return *this;}
    inline MaintenanceStatus& WithMaintenanceStartTime(Aws::String&& value) { SetMaintenanceStartTime(std::move(value)); return *this;}
    inline MaintenanceStatus& WithMaintenanceStartTime(const char* value) { SetMaintenanceStartTime(value); return *this;}
    ///@}
  private:

    MaintenanceDay m_maintenanceDay;
    bool m_maintenanceDayHasBeenSet = false;

    Aws::String m_maintenanceDeadline;
    bool m_maintenanceDeadlineHasBeenSet = false;

    Aws::String m_maintenanceScheduledDate;
    bool m_maintenanceScheduledDateHasBeenSet = false;

    Aws::String m_maintenanceStartTime;
    bool m_maintenanceStartTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
