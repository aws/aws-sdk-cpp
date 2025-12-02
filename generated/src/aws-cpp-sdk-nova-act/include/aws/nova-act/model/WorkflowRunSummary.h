/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/nova-act/NovaAct_EXPORTS.h>
#include <aws/nova-act/model/TraceLocation.h>
#include <aws/nova-act/model/WorkflowRunStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace NovaAct {
namespace Model {

/**
 * <p>Summary information about a workflow run, including execution status and
 * timing.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/nova-act-2025-08-22/WorkflowRunSummary">AWS
 * API Reference</a></p>
 */
class WorkflowRunSummary {
 public:
  AWS_NOVAACT_API WorkflowRunSummary() = default;
  AWS_NOVAACT_API WorkflowRunSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_NOVAACT_API WorkflowRunSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NOVAACT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the workflow run.</p>
   */
  inline const Aws::String& GetWorkflowRunArn() const { return m_workflowRunArn; }
  inline bool WorkflowRunArnHasBeenSet() const { return m_workflowRunArnHasBeenSet; }
  template <typename WorkflowRunArnT = Aws::String>
  void SetWorkflowRunArn(WorkflowRunArnT&& value) {
    m_workflowRunArnHasBeenSet = true;
    m_workflowRunArn = std::forward<WorkflowRunArnT>(value);
  }
  template <typename WorkflowRunArnT = Aws::String>
  WorkflowRunSummary& WithWorkflowRunArn(WorkflowRunArnT&& value) {
    SetWorkflowRunArn(std::forward<WorkflowRunArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the workflow run.</p>
   */
  inline const Aws::String& GetWorkflowRunId() const { return m_workflowRunId; }
  inline bool WorkflowRunIdHasBeenSet() const { return m_workflowRunIdHasBeenSet; }
  template <typename WorkflowRunIdT = Aws::String>
  void SetWorkflowRunId(WorkflowRunIdT&& value) {
    m_workflowRunIdHasBeenSet = true;
    m_workflowRunId = std::forward<WorkflowRunIdT>(value);
  }
  template <typename WorkflowRunIdT = Aws::String>
  WorkflowRunSummary& WithWorkflowRunId(WorkflowRunIdT&& value) {
    SetWorkflowRunId(std::forward<WorkflowRunIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current execution status of the workflow run.</p>
   */
  inline WorkflowRunStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(WorkflowRunStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline WorkflowRunSummary& WithStatus(WorkflowRunStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the workflow run started execution.</p>
   */
  inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
  inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
  template <typename StartedAtT = Aws::Utils::DateTime>
  void SetStartedAt(StartedAtT&& value) {
    m_startedAtHasBeenSet = true;
    m_startedAt = std::forward<StartedAtT>(value);
  }
  template <typename StartedAtT = Aws::Utils::DateTime>
  WorkflowRunSummary& WithStartedAt(StartedAtT&& value) {
    SetStartedAt(std::forward<StartedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the workflow run completed execution, if applicable.</p>
   */
  inline const Aws::Utils::DateTime& GetEndedAt() const { return m_endedAt; }
  inline bool EndedAtHasBeenSet() const { return m_endedAtHasBeenSet; }
  template <typename EndedAtT = Aws::Utils::DateTime>
  void SetEndedAt(EndedAtT&& value) {
    m_endedAtHasBeenSet = true;
    m_endedAt = std::forward<EndedAtT>(value);
  }
  template <typename EndedAtT = Aws::Utils::DateTime>
  WorkflowRunSummary& WithEndedAt(EndedAtT&& value) {
    SetEndedAt(std::forward<EndedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The location where trace information for this workflow run is stored.</p>
   */
  inline const TraceLocation& GetTraceLocation() const { return m_traceLocation; }
  inline bool TraceLocationHasBeenSet() const { return m_traceLocationHasBeenSet; }
  template <typename TraceLocationT = TraceLocation>
  void SetTraceLocation(TraceLocationT&& value) {
    m_traceLocationHasBeenSet = true;
    m_traceLocation = std::forward<TraceLocationT>(value);
  }
  template <typename TraceLocationT = TraceLocation>
  WorkflowRunSummary& WithTraceLocation(TraceLocationT&& value) {
    SetTraceLocation(std::forward<TraceLocationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_workflowRunArn;
  bool m_workflowRunArnHasBeenSet = false;

  Aws::String m_workflowRunId;
  bool m_workflowRunIdHasBeenSet = false;

  WorkflowRunStatus m_status{WorkflowRunStatus::NOT_SET};
  bool m_statusHasBeenSet = false;

  Aws::Utils::DateTime m_startedAt{};
  bool m_startedAtHasBeenSet = false;

  Aws::Utils::DateTime m_endedAt{};
  bool m_endedAtHasBeenSet = false;

  TraceLocation m_traceLocation;
  bool m_traceLocationHasBeenSet = false;
};

}  // namespace Model
}  // namespace NovaAct
}  // namespace Aws
