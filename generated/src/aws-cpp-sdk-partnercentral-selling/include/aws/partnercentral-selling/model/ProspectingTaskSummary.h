/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralSelling {
namespace Model {

/**
 * <p>A summary of a single prospecting task, returned by
 * <code>ListProspectingFromEngagementTasks</code>. Contains key metrics and status
 * information without the full per-engagement detail available from
 * <code>GetProspectingFromEngagementTask</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/ProspectingTaskSummary">AWS
 * API Reference</a></p>
 */
class ProspectingTaskSummary {
 public:
  AWS_PARTNERCENTRALSELLING_API ProspectingTaskSummary() = default;
  AWS_PARTNERCENTRALSELLING_API ProspectingTaskSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API ProspectingTaskSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the task. Use this value with
   * <code>GetProspectingFromEngagementTask</code> to retrieve full task details.</p>
   */
  inline const Aws::String& GetTaskId() const { return m_taskId; }
  inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }
  template <typename TaskIdT = Aws::String>
  void SetTaskId(TaskIdT&& value) {
    m_taskIdHasBeenSet = true;
    m_taskId = std::forward<TaskIdT>(value);
  }
  template <typename TaskIdT = Aws::String>
  ProspectingTaskSummary& WithTaskId(TaskIdT&& value) {
    SetTaskId(std::forward<TaskIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the task.</p>
   */
  inline const Aws::String& GetTaskArn() const { return m_taskArn; }
  inline bool TaskArnHasBeenSet() const { return m_taskArnHasBeenSet; }
  template <typename TaskArnT = Aws::String>
  void SetTaskArn(TaskArnT&& value) {
    m_taskArnHasBeenSet = true;
    m_taskArn = std::forward<TaskArnT>(value);
  }
  template <typename TaskArnT = Aws::String>
  ProspectingTaskSummary& WithTaskArn(TaskArnT&& value) {
    SetTaskArn(std::forward<TaskArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The descriptive name of the task provided when it was created.</p>
   */
  inline const Aws::String& GetTaskName() const { return m_taskName; }
  inline bool TaskNameHasBeenSet() const { return m_taskNameHasBeenSet; }
  template <typename TaskNameT = Aws::String>
  void SetTaskName(TaskNameT&& value) {
    m_taskNameHasBeenSet = true;
    m_taskName = std::forward<TaskNameT>(value);
  }
  template <typename TaskNameT = Aws::String>
  ProspectingTaskSummary& WithTaskName(TaskNameT&& value) {
    SetTaskName(std::forward<TaskNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp indicating when the task was initiated. The format follows ISO
   * 8601 date-time notation.</p>
   */
  inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
  inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
  template <typename StartTimeT = Aws::Utils::DateTime>
  void SetStartTime(StartTimeT&& value) {
    m_startTimeHasBeenSet = true;
    m_startTime = std::forward<StartTimeT>(value);
  }
  template <typename StartTimeT = Aws::Utils::DateTime>
  ProspectingTaskSummary& WithStartTime(StartTimeT&& value) {
    SetStartTime(std::forward<StartTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp indicating when the task finished processing. This field is
   * absent if the task is still in progress. The format follows ISO 8601 date-time
   * notation.</p>
   */
  inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
  inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
  template <typename EndTimeT = Aws::Utils::DateTime>
  void SetEndTime(EndTimeT&& value) {
    m_endTimeHasBeenSet = true;
    m_endTime = std::forward<EndTimeT>(value);
  }
  template <typename EndTimeT = Aws::Utils::DateTime>
  ProspectingTaskSummary& WithEndTime(EndTimeT&& value) {
    SetEndTime(std::forward<EndTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total number of engagements included in the task.</p>
   */
  inline int GetTotalEngagementCount() const { return m_totalEngagementCount; }
  inline bool TotalEngagementCountHasBeenSet() const { return m_totalEngagementCountHasBeenSet; }
  inline void SetTotalEngagementCount(int value) {
    m_totalEngagementCountHasBeenSet = true;
    m_totalEngagementCount = value;
  }
  inline ProspectingTaskSummary& WithTotalEngagementCount(int value) {
    SetTotalEngagementCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of engagements that have been successfully converted into
   * prospecting leads.</p>
   */
  inline int GetCompletedEngagementCount() const { return m_completedEngagementCount; }
  inline bool CompletedEngagementCountHasBeenSet() const { return m_completedEngagementCountHasBeenSet; }
  inline void SetCompletedEngagementCount(int value) {
    m_completedEngagementCountHasBeenSet = true;
    m_completedEngagementCount = value;
  }
  inline ProspectingTaskSummary& WithCompletedEngagementCount(int value) {
    SetCompletedEngagementCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of engagements that failed to be converted. Retrieve the full task
   * details using <code>GetProspectingFromEngagementTask</code> for per-engagement
   * error information.</p>
   */
  inline int GetFailedEngagementCount() const { return m_failedEngagementCount; }
  inline bool FailedEngagementCountHasBeenSet() const { return m_failedEngagementCountHasBeenSet; }
  inline void SetFailedEngagementCount(int value) {
    m_failedEngagementCountHasBeenSet = true;
    m_failedEngagementCount = value;
  }
  inline ProspectingTaskSummary& WithFailedEngagementCount(int value) {
    SetFailedEngagementCount(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_taskId;

  Aws::String m_taskArn;

  Aws::String m_taskName;

  Aws::Utils::DateTime m_startTime{};

  Aws::Utils::DateTime m_endTime{};

  int m_totalEngagementCount{0};

  int m_completedEngagementCount{0};

  int m_failedEngagementCount{0};
  bool m_taskIdHasBeenSet = false;
  bool m_taskArnHasBeenSet = false;
  bool m_taskNameHasBeenSet = false;
  bool m_startTimeHasBeenSet = false;
  bool m_endTimeHasBeenSet = false;
  bool m_totalEngagementCountHasBeenSet = false;
  bool m_completedEngagementCountHasBeenSet = false;
  bool m_failedEngagementCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
