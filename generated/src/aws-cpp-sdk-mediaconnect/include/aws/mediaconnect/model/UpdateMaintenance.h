﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/MaintenanceDay.h>
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
namespace MediaConnect
{
namespace Model
{

  /**
   * Update maintenance setting for a flow<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UpdateMaintenance">AWS
   * API Reference</a></p>
   */
  class UpdateMaintenance
  {
  public:
    AWS_MEDIACONNECT_API UpdateMaintenance() = default;
    AWS_MEDIACONNECT_API UpdateMaintenance(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API UpdateMaintenance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * A day of a week when the maintenance will happen. use
     * Monday/Tuesday/Wednesday/Thursday/Friday/Saturday/Sunday.
     */
    inline MaintenanceDay GetMaintenanceDay() const { return m_maintenanceDay; }
    inline bool MaintenanceDayHasBeenSet() const { return m_maintenanceDayHasBeenSet; }
    inline void SetMaintenanceDay(MaintenanceDay value) { m_maintenanceDayHasBeenSet = true; m_maintenanceDay = value; }
    inline UpdateMaintenance& WithMaintenanceDay(MaintenanceDay value) { SetMaintenanceDay(value); return *this;}
    ///@}

    ///@{
    /**
     * A scheduled date in ISO UTC format when the maintenance will happen. Use
     * YYYY-MM-DD format. Example: 2021-01-30.
     */
    inline const Aws::String& GetMaintenanceScheduledDate() const { return m_maintenanceScheduledDate; }
    inline bool MaintenanceScheduledDateHasBeenSet() const { return m_maintenanceScheduledDateHasBeenSet; }
    template<typename MaintenanceScheduledDateT = Aws::String>
    void SetMaintenanceScheduledDate(MaintenanceScheduledDateT&& value) { m_maintenanceScheduledDateHasBeenSet = true; m_maintenanceScheduledDate = std::forward<MaintenanceScheduledDateT>(value); }
    template<typename MaintenanceScheduledDateT = Aws::String>
    UpdateMaintenance& WithMaintenanceScheduledDate(MaintenanceScheduledDateT&& value) { SetMaintenanceScheduledDate(std::forward<MaintenanceScheduledDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * UTC time when the maintenance will happen. Use 24-hour HH:MM format. Minutes
     * must be 00. Example: 13:00. The default value is 02:00.
     */
    inline const Aws::String& GetMaintenanceStartHour() const { return m_maintenanceStartHour; }
    inline bool MaintenanceStartHourHasBeenSet() const { return m_maintenanceStartHourHasBeenSet; }
    template<typename MaintenanceStartHourT = Aws::String>
    void SetMaintenanceStartHour(MaintenanceStartHourT&& value) { m_maintenanceStartHourHasBeenSet = true; m_maintenanceStartHour = std::forward<MaintenanceStartHourT>(value); }
    template<typename MaintenanceStartHourT = Aws::String>
    UpdateMaintenance& WithMaintenanceStartHour(MaintenanceStartHourT&& value) { SetMaintenanceStartHour(std::forward<MaintenanceStartHourT>(value)); return *this;}
    ///@}
  private:

    MaintenanceDay m_maintenanceDay{MaintenanceDay::NOT_SET};
    bool m_maintenanceDayHasBeenSet = false;

    Aws::String m_maintenanceScheduledDate;
    bool m_maintenanceScheduledDateHasBeenSet = false;

    Aws::String m_maintenanceStartHour;
    bool m_maintenanceStartHourHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
