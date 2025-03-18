/**
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
   * Placeholder documentation for MaintenanceUpdateSettings<p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/MaintenanceUpdateSettings">AWS
   * API Reference</a></p>
   */
  class MaintenanceUpdateSettings
  {
  public:
    AWS_MEDIALIVE_API MaintenanceUpdateSettings() = default;
    AWS_MEDIALIVE_API MaintenanceUpdateSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API MaintenanceUpdateSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Choose one day of the week for maintenance. The chosen day is used for all
     * future maintenance windows.
     */
    inline MaintenanceDay GetMaintenanceDay() const { return m_maintenanceDay; }
    inline bool MaintenanceDayHasBeenSet() const { return m_maintenanceDayHasBeenSet; }
    inline void SetMaintenanceDay(MaintenanceDay value) { m_maintenanceDayHasBeenSet = true; m_maintenanceDay = value; }
    inline MaintenanceUpdateSettings& WithMaintenanceDay(MaintenanceDay value) { SetMaintenanceDay(value); return *this;}
    ///@}

    ///@{
    /**
     * Choose a specific date for maintenance to occur. The chosen date is used for the
     * next maintenance window only.
     */
    inline const Aws::String& GetMaintenanceScheduledDate() const { return m_maintenanceScheduledDate; }
    inline bool MaintenanceScheduledDateHasBeenSet() const { return m_maintenanceScheduledDateHasBeenSet; }
    template<typename MaintenanceScheduledDateT = Aws::String>
    void SetMaintenanceScheduledDate(MaintenanceScheduledDateT&& value) { m_maintenanceScheduledDateHasBeenSet = true; m_maintenanceScheduledDate = std::forward<MaintenanceScheduledDateT>(value); }
    template<typename MaintenanceScheduledDateT = Aws::String>
    MaintenanceUpdateSettings& WithMaintenanceScheduledDate(MaintenanceScheduledDateT&& value) { SetMaintenanceScheduledDate(std::forward<MaintenanceScheduledDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Choose the hour that maintenance will start. The chosen time is used for all
     * future maintenance windows.
     */
    inline const Aws::String& GetMaintenanceStartTime() const { return m_maintenanceStartTime; }
    inline bool MaintenanceStartTimeHasBeenSet() const { return m_maintenanceStartTimeHasBeenSet; }
    template<typename MaintenanceStartTimeT = Aws::String>
    void SetMaintenanceStartTime(MaintenanceStartTimeT&& value) { m_maintenanceStartTimeHasBeenSet = true; m_maintenanceStartTime = std::forward<MaintenanceStartTimeT>(value); }
    template<typename MaintenanceStartTimeT = Aws::String>
    MaintenanceUpdateSettings& WithMaintenanceStartTime(MaintenanceStartTimeT&& value) { SetMaintenanceStartTime(std::forward<MaintenanceStartTimeT>(value)); return *this;}
    ///@}
  private:

    MaintenanceDay m_maintenanceDay{MaintenanceDay::NOT_SET};
    bool m_maintenanceDayHasBeenSet = false;

    Aws::String m_maintenanceScheduledDate;
    bool m_maintenanceScheduledDateHasBeenSet = false;

    Aws::String m_maintenanceStartTime;
    bool m_maintenanceStartTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
