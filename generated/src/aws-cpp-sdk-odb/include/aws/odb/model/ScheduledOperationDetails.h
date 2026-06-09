/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/DayOfWeek.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace odb {
namespace Model {

/**
 * <p>The scheduled start and stop times for an Autonomous Database on a specific
 * day of the week.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/ScheduledOperationDetails">AWS
 * API Reference</a></p>
 */
class ScheduledOperationDetails {
 public:
  AWS_ODB_API ScheduledOperationDetails() = default;
  AWS_ODB_API ScheduledOperationDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API ScheduledOperationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The day of the week on which the scheduled operation occurs.</p>
   */
  inline const DayOfWeek& GetDayOfWeek() const { return m_dayOfWeek; }
  inline bool DayOfWeekHasBeenSet() const { return m_dayOfWeekHasBeenSet; }
  template <typename DayOfWeekT = DayOfWeek>
  void SetDayOfWeek(DayOfWeekT&& value) {
    m_dayOfWeekHasBeenSet = true;
    m_dayOfWeek = std::forward<DayOfWeekT>(value);
  }
  template <typename DayOfWeekT = DayOfWeek>
  ScheduledOperationDetails& WithDayOfWeek(DayOfWeekT&& value) {
    SetDayOfWeek(std::forward<DayOfWeekT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scheduled start time for the Autonomous Database, in UTC.</p>
   */
  inline const Aws::String& GetScheduledStartTime() const { return m_scheduledStartTime; }
  inline bool ScheduledStartTimeHasBeenSet() const { return m_scheduledStartTimeHasBeenSet; }
  template <typename ScheduledStartTimeT = Aws::String>
  void SetScheduledStartTime(ScheduledStartTimeT&& value) {
    m_scheduledStartTimeHasBeenSet = true;
    m_scheduledStartTime = std::forward<ScheduledStartTimeT>(value);
  }
  template <typename ScheduledStartTimeT = Aws::String>
  ScheduledOperationDetails& WithScheduledStartTime(ScheduledStartTimeT&& value) {
    SetScheduledStartTime(std::forward<ScheduledStartTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scheduled stop time for the Autonomous Database, in UTC.</p>
   */
  inline const Aws::String& GetScheduledStopTime() const { return m_scheduledStopTime; }
  inline bool ScheduledStopTimeHasBeenSet() const { return m_scheduledStopTimeHasBeenSet; }
  template <typename ScheduledStopTimeT = Aws::String>
  void SetScheduledStopTime(ScheduledStopTimeT&& value) {
    m_scheduledStopTimeHasBeenSet = true;
    m_scheduledStopTime = std::forward<ScheduledStopTimeT>(value);
  }
  template <typename ScheduledStopTimeT = Aws::String>
  ScheduledOperationDetails& WithScheduledStopTime(ScheduledStopTimeT&& value) {
    SetScheduledStopTime(std::forward<ScheduledStopTimeT>(value));
    return *this;
  }
  ///@}
 private:
  DayOfWeek m_dayOfWeek;

  Aws::String m_scheduledStartTime;

  Aws::String m_scheduledStopTime;
  bool m_dayOfWeekHasBeenSet = false;
  bool m_scheduledStartTimeHasBeenSet = false;
  bool m_scheduledStopTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
