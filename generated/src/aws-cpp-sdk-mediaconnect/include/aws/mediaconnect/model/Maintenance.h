/**
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
   * <p> The maintenance setting of a flow.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/Maintenance">AWS
   * API Reference</a></p>
   */
  class Maintenance
  {
  public:
    AWS_MEDIACONNECT_API Maintenance() = default;
    AWS_MEDIACONNECT_API Maintenance(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Maintenance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> A day of a week when the maintenance will happen. Use
     * Monday/Tuesday/Wednesday/Thursday/Friday/Saturday/Sunday.</p>
     */
    inline MaintenanceDay GetMaintenanceDay() const { return m_maintenanceDay; }
    inline bool MaintenanceDayHasBeenSet() const { return m_maintenanceDayHasBeenSet; }
    inline void SetMaintenanceDay(MaintenanceDay value) { m_maintenanceDayHasBeenSet = true; m_maintenanceDay = value; }
    inline Maintenance& WithMaintenanceDay(MaintenanceDay value) { SetMaintenanceDay(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Maintenance has to be performed before this deadline in ISO UTC format.
     * Example: 2021-01-30T08:30:00Z.</p>
     */
    inline const Aws::String& GetMaintenanceDeadline() const { return m_maintenanceDeadline; }
    inline bool MaintenanceDeadlineHasBeenSet() const { return m_maintenanceDeadlineHasBeenSet; }
    template<typename MaintenanceDeadlineT = Aws::String>
    void SetMaintenanceDeadline(MaintenanceDeadlineT&& value) { m_maintenanceDeadlineHasBeenSet = true; m_maintenanceDeadline = std::forward<MaintenanceDeadlineT>(value); }
    template<typename MaintenanceDeadlineT = Aws::String>
    Maintenance& WithMaintenanceDeadline(MaintenanceDeadlineT&& value) { SetMaintenanceDeadline(std::forward<MaintenanceDeadlineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A scheduled date in ISO UTC format when the maintenance will happen. Use
     * YYYY-MM-DD format. Example: 2021-01-30.</p>
     */
    inline const Aws::String& GetMaintenanceScheduledDate() const { return m_maintenanceScheduledDate; }
    inline bool MaintenanceScheduledDateHasBeenSet() const { return m_maintenanceScheduledDateHasBeenSet; }
    template<typename MaintenanceScheduledDateT = Aws::String>
    void SetMaintenanceScheduledDate(MaintenanceScheduledDateT&& value) { m_maintenanceScheduledDateHasBeenSet = true; m_maintenanceScheduledDate = std::forward<MaintenanceScheduledDateT>(value); }
    template<typename MaintenanceScheduledDateT = Aws::String>
    Maintenance& WithMaintenanceScheduledDate(MaintenanceScheduledDateT&& value) { SetMaintenanceScheduledDate(std::forward<MaintenanceScheduledDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> UTC time when the maintenance will happen. Use 24-hour HH:MM format. Minutes
     * must be 00. Example: 13:00. The default value is 02:00.</p>
     */
    inline const Aws::String& GetMaintenanceStartHour() const { return m_maintenanceStartHour; }
    inline bool MaintenanceStartHourHasBeenSet() const { return m_maintenanceStartHourHasBeenSet; }
    template<typename MaintenanceStartHourT = Aws::String>
    void SetMaintenanceStartHour(MaintenanceStartHourT&& value) { m_maintenanceStartHourHasBeenSet = true; m_maintenanceStartHour = std::forward<MaintenanceStartHourT>(value); }
    template<typename MaintenanceStartHourT = Aws::String>
    Maintenance& WithMaintenanceStartHour(MaintenanceStartHourT&& value) { SetMaintenanceStartHour(std::forward<MaintenanceStartHourT>(value)); return *this;}
    ///@}
  private:

    MaintenanceDay m_maintenanceDay{MaintenanceDay::NOT_SET};
    bool m_maintenanceDayHasBeenSet = false;

    Aws::String m_maintenanceDeadline;
    bool m_maintenanceDeadlineHasBeenSet = false;

    Aws::String m_maintenanceScheduledDate;
    bool m_maintenanceScheduledDateHasBeenSet = false;

    Aws::String m_maintenanceStartHour;
    bool m_maintenanceStartHourHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
