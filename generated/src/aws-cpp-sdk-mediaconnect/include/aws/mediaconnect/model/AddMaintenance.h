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
   * <p> Create a maintenance setting for a flow.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/AddMaintenance">AWS
   * API Reference</a></p>
   */
  class AddMaintenance
  {
  public:
    AWS_MEDIACONNECT_API AddMaintenance() = default;
    AWS_MEDIACONNECT_API AddMaintenance(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API AddMaintenance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> A day of a week when the maintenance will happen. </p>
     */
    inline MaintenanceDay GetMaintenanceDay() const { return m_maintenanceDay; }
    inline bool MaintenanceDayHasBeenSet() const { return m_maintenanceDayHasBeenSet; }
    inline void SetMaintenanceDay(MaintenanceDay value) { m_maintenanceDayHasBeenSet = true; m_maintenanceDay = value; }
    inline AddMaintenance& WithMaintenanceDay(MaintenanceDay value) { SetMaintenanceDay(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> UTC time when the maintenance will happen. </p> <p>Use 24-hour HH:MM format.
     * </p> <p>Minutes must be 00. </p> <p>Example: 13:00. </p> <p>The default value is
     * 02:00.</p>
     */
    inline const Aws::String& GetMaintenanceStartHour() const { return m_maintenanceStartHour; }
    inline bool MaintenanceStartHourHasBeenSet() const { return m_maintenanceStartHourHasBeenSet; }
    template<typename MaintenanceStartHourT = Aws::String>
    void SetMaintenanceStartHour(MaintenanceStartHourT&& value) { m_maintenanceStartHourHasBeenSet = true; m_maintenanceStartHour = std::forward<MaintenanceStartHourT>(value); }
    template<typename MaintenanceStartHourT = Aws::String>
    AddMaintenance& WithMaintenanceStartHour(MaintenanceStartHourT&& value) { SetMaintenanceStartHour(std::forward<MaintenanceStartHourT>(value)); return *this;}
    ///@}
  private:

    MaintenanceDay m_maintenanceDay{MaintenanceDay::NOT_SET};
    bool m_maintenanceDayHasBeenSet = false;

    Aws::String m_maintenanceStartHour;
    bool m_maintenanceStartHourHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
