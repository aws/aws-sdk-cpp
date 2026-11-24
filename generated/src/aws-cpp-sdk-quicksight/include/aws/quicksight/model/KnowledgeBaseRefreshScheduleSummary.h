/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/KnowledgeBaseRefreshFrequency.h>
#include <aws/quicksight/model/ScheduleState.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {

/**
 * <p>A summary of a knowledge base refresh schedule, including its identifier,
 * frequency, start time, and state. The
 * <code>DescribeKnowledgeBaseRefreshSchedule</code> and
 * <code>ListKnowledgeBaseRefreshSchedules</code> operations return this
 * summary.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/KnowledgeBaseRefreshScheduleSummary">AWS
 * API Reference</a></p>
 */
class KnowledgeBaseRefreshScheduleSummary {
 public:
  AWS_QUICKSIGHT_API KnowledgeBaseRefreshScheduleSummary() = default;
  AWS_QUICKSIGHT_API KnowledgeBaseRefreshScheduleSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API KnowledgeBaseRefreshScheduleSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier for the refresh schedule.</p>
   */
  inline const Aws::String& GetScheduleId() const { return m_scheduleId; }
  inline bool ScheduleIdHasBeenSet() const { return m_scheduleIdHasBeenSet; }
  template <typename ScheduleIdT = Aws::String>
  void SetScheduleId(ScheduleIdT&& value) {
    m_scheduleIdHasBeenSet = true;
    m_scheduleId = std::forward<ScheduleIdT>(value);
  }
  template <typename ScheduleIdT = Aws::String>
  KnowledgeBaseRefreshScheduleSummary& WithScheduleId(ScheduleIdT&& value) {
    SetScheduleId(std::forward<ScheduleIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The frequency configuration for the refresh schedule. The frequency
   * configuration specifies how often the schedule runs and, for weekly or monthly
   * schedules, the day on which it runs.</p>
   */
  inline const KnowledgeBaseRefreshFrequency& GetScheduleFrequency() const { return m_scheduleFrequency; }
  inline bool ScheduleFrequencyHasBeenSet() const { return m_scheduleFrequencyHasBeenSet; }
  template <typename ScheduleFrequencyT = KnowledgeBaseRefreshFrequency>
  void SetScheduleFrequency(ScheduleFrequencyT&& value) {
    m_scheduleFrequencyHasBeenSet = true;
    m_scheduleFrequency = std::forward<ScheduleFrequencyT>(value);
  }
  template <typename ScheduleFrequencyT = KnowledgeBaseRefreshFrequency>
  KnowledgeBaseRefreshScheduleSummary& WithScheduleFrequency(ScheduleFrequencyT&& value) {
    SetScheduleFrequency(std::forward<ScheduleFrequencyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time, in ISO 8601 format, after which the schedule can start
   * refreshing the knowledge base.</p>
   */
  inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
  inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
  template <typename StartTimeT = Aws::Utils::DateTime>
  void SetStartTime(StartTimeT&& value) {
    m_startTimeHasBeenSet = true;
    m_startTime = std::forward<StartTimeT>(value);
  }
  template <typename StartTimeT = Aws::Utils::DateTime>
  KnowledgeBaseRefreshScheduleSummary& WithStartTime(StartTimeT&& value) {
    SetStartTime(std::forward<StartTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current state of the refresh schedule. A schedule that isn't
   * <code>ENABLED</code> doesn't run refreshes.</p>
   */
  inline ScheduleState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(ScheduleState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline KnowledgeBaseRefreshScheduleSummary& WithState(ScheduleState value) {
    SetState(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_scheduleId;

  KnowledgeBaseRefreshFrequency m_scheduleFrequency;

  Aws::Utils::DateTime m_startTime{};

  ScheduleState m_state{ScheduleState::NOT_SET};
  bool m_scheduleIdHasBeenSet = false;
  bool m_scheduleFrequencyHasBeenSet = false;
  bool m_startTimeHasBeenSet = false;
  bool m_stateHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
