/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaConnect {
namespace Model {

/**
 * <p>Defines a specific time window for maintenance operations.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/WindowMaintenanceSchedule">AWS
 * API Reference</a></p>
 */
class WindowMaintenanceSchedule {
 public:
  AWS_MEDIACONNECT_API WindowMaintenanceSchedule() = default;
  AWS_MEDIACONNECT_API WindowMaintenanceSchedule(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API WindowMaintenanceSchedule& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The start time of the maintenance window.</p>
   */
  inline const Aws::Utils::DateTime& GetStart() const { return m_start; }
  inline bool StartHasBeenSet() const { return m_startHasBeenSet; }
  template <typename StartT = Aws::Utils::DateTime>
  void SetStart(StartT&& value) {
    m_startHasBeenSet = true;
    m_start = std::forward<StartT>(value);
  }
  template <typename StartT = Aws::Utils::DateTime>
  WindowMaintenanceSchedule& WithStart(StartT&& value) {
    SetStart(std::forward<StartT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The end time of the maintenance window.</p>
   */
  inline const Aws::Utils::DateTime& GetEnd() const { return m_end; }
  inline bool EndHasBeenSet() const { return m_endHasBeenSet; }
  template <typename EndT = Aws::Utils::DateTime>
  void SetEnd(EndT&& value) {
    m_endHasBeenSet = true;
    m_end = std::forward<EndT>(value);
  }
  template <typename EndT = Aws::Utils::DateTime>
  WindowMaintenanceSchedule& WithEnd(EndT&& value) {
    SetEnd(std::forward<EndT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the maintenance window is scheduled to occur.</p>
   */
  inline const Aws::Utils::DateTime& GetScheduledTime() const { return m_scheduledTime; }
  inline bool ScheduledTimeHasBeenSet() const { return m_scheduledTimeHasBeenSet; }
  template <typename ScheduledTimeT = Aws::Utils::DateTime>
  void SetScheduledTime(ScheduledTimeT&& value) {
    m_scheduledTimeHasBeenSet = true;
    m_scheduledTime = std::forward<ScheduledTimeT>(value);
  }
  template <typename ScheduledTimeT = Aws::Utils::DateTime>
  WindowMaintenanceSchedule& WithScheduledTime(ScheduledTimeT&& value) {
    SetScheduledTime(std::forward<ScheduledTimeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_start{};
  bool m_startHasBeenSet = false;

  Aws::Utils::DateTime m_end{};
  bool m_endHasBeenSet = false;

  Aws::Utils::DateTime m_scheduledTime{};
  bool m_scheduledTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
