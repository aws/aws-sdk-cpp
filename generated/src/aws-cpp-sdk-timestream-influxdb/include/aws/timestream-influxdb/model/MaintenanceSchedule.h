/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/timestream-influxdb/TimestreamInfluxDB_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace TimestreamInfluxDB {
namespace Model {

/**
 * <p>Specifies the maintenance schedule for a DB instance or cluster, defining
 * when maintenance operations such as patching can be performed.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-influxdb-2023-01-27/MaintenanceSchedule">AWS
 * API Reference</a></p>
 */
class MaintenanceSchedule {
 public:
  AWS_TIMESTREAMINFLUXDB_API MaintenanceSchedule() = default;
  AWS_TIMESTREAMINFLUXDB_API MaintenanceSchedule(Aws::Utils::Json::JsonView jsonValue);
  AWS_TIMESTREAMINFLUXDB_API MaintenanceSchedule& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_TIMESTREAMINFLUXDB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The IANA timezone identifier for the maintenance window. Format: Region/City
   * or UTC. For example, America/New_York or UTC.</p>
   */
  inline const Aws::String& GetTimezone() const { return m_timezone; }
  inline bool TimezoneHasBeenSet() const { return m_timezoneHasBeenSet; }
  template <typename TimezoneT = Aws::String>
  void SetTimezone(TimezoneT&& value) {
    m_timezoneHasBeenSet = true;
    m_timezone = std::forward<TimezoneT>(value);
  }
  template <typename TimezoneT = Aws::String>
  MaintenanceSchedule& WithTimezone(TimezoneT&& value) {
    SetTimezone(std::forward<TimezoneT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The preferred maintenance window in the format ddd:HH:MM-ddd:HH:MM (UTC). Day
   * must be one of: Mon, Tue, Wed, Thu, Fri, Sat, Sun. For example,
   * Sun:02:00-Sun:06:00. Provide an empty string to let the system choose a
   * window.</p>
   */
  inline const Aws::String& GetPreferredMaintenanceWindow() const { return m_preferredMaintenanceWindow; }
  inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }
  template <typename PreferredMaintenanceWindowT = Aws::String>
  void SetPreferredMaintenanceWindow(PreferredMaintenanceWindowT&& value) {
    m_preferredMaintenanceWindowHasBeenSet = true;
    m_preferredMaintenanceWindow = std::forward<PreferredMaintenanceWindowT>(value);
  }
  template <typename PreferredMaintenanceWindowT = Aws::String>
  MaintenanceSchedule& WithPreferredMaintenanceWindow(PreferredMaintenanceWindowT&& value) {
    SetPreferredMaintenanceWindow(std::forward<PreferredMaintenanceWindowT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_timezone;

  Aws::String m_preferredMaintenanceWindow;
  bool m_timezoneHasBeenSet = false;
  bool m_preferredMaintenanceWindowHasBeenSet = false;
};

}  // namespace Model
}  // namespace TimestreamInfluxDB
}  // namespace Aws
