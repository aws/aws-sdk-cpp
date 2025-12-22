/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/nova-act/NovaAct_EXPORTS.h>
#include <aws/nova-act/model/ActStatus.h>
#include <aws/nova-act/model/TraceLocation.h>

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
 * <p>Summary information about an act, including its status and execution
 * timing.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/nova-act-2025-08-22/ActSummary">AWS
 * API Reference</a></p>
 */
class ActSummary {
 public:
  AWS_NOVAACT_API ActSummary() = default;
  AWS_NOVAACT_API ActSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_NOVAACT_API ActSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NOVAACT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the workflow run containing this act.</p>
   */
  inline const Aws::String& GetWorkflowRunId() const { return m_workflowRunId; }
  inline bool WorkflowRunIdHasBeenSet() const { return m_workflowRunIdHasBeenSet; }
  template <typename WorkflowRunIdT = Aws::String>
  void SetWorkflowRunId(WorkflowRunIdT&& value) {
    m_workflowRunIdHasBeenSet = true;
    m_workflowRunId = std::forward<WorkflowRunIdT>(value);
  }
  template <typename WorkflowRunIdT = Aws::String>
  ActSummary& WithWorkflowRunId(WorkflowRunIdT&& value) {
    SetWorkflowRunId(std::forward<WorkflowRunIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the session containing this act.</p>
   */
  inline const Aws::String& GetSessionId() const { return m_sessionId; }
  inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
  template <typename SessionIdT = Aws::String>
  void SetSessionId(SessionIdT&& value) {
    m_sessionIdHasBeenSet = true;
    m_sessionId = std::forward<SessionIdT>(value);
  }
  template <typename SessionIdT = Aws::String>
  ActSummary& WithSessionId(SessionIdT&& value) {
    SetSessionId(std::forward<SessionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the act.</p>
   */
  inline const Aws::String& GetActId() const { return m_actId; }
  inline bool ActIdHasBeenSet() const { return m_actIdHasBeenSet; }
  template <typename ActIdT = Aws::String>
  void SetActId(ActIdT&& value) {
    m_actIdHasBeenSet = true;
    m_actId = std::forward<ActIdT>(value);
  }
  template <typename ActIdT = Aws::String>
  ActSummary& WithActId(ActIdT&& value) {
    SetActId(std::forward<ActIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current execution status of the act.</p>
   */
  inline ActStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ActStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ActSummary& WithStatus(ActStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the act started execution.</p>
   */
  inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
  inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
  template <typename StartedAtT = Aws::Utils::DateTime>
  void SetStartedAt(StartedAtT&& value) {
    m_startedAtHasBeenSet = true;
    m_startedAt = std::forward<StartedAtT>(value);
  }
  template <typename StartedAtT = Aws::Utils::DateTime>
  ActSummary& WithStartedAt(StartedAtT&& value) {
    SetStartedAt(std::forward<StartedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the act completed execution, if applicable.</p>
   */
  inline const Aws::Utils::DateTime& GetEndedAt() const { return m_endedAt; }
  inline bool EndedAtHasBeenSet() const { return m_endedAtHasBeenSet; }
  template <typename EndedAtT = Aws::Utils::DateTime>
  void SetEndedAt(EndedAtT&& value) {
    m_endedAtHasBeenSet = true;
    m_endedAt = std::forward<EndedAtT>(value);
  }
  template <typename EndedAtT = Aws::Utils::DateTime>
  ActSummary& WithEndedAt(EndedAtT&& value) {
    SetEndedAt(std::forward<EndedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The location where trace information for this act is stored.</p>
   */
  inline const TraceLocation& GetTraceLocation() const { return m_traceLocation; }
  inline bool TraceLocationHasBeenSet() const { return m_traceLocationHasBeenSet; }
  template <typename TraceLocationT = TraceLocation>
  void SetTraceLocation(TraceLocationT&& value) {
    m_traceLocationHasBeenSet = true;
    m_traceLocation = std::forward<TraceLocationT>(value);
  }
  template <typename TraceLocationT = TraceLocation>
  ActSummary& WithTraceLocation(TraceLocationT&& value) {
    SetTraceLocation(std::forward<TraceLocationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_workflowRunId;

  Aws::String m_sessionId;

  Aws::String m_actId;

  ActStatus m_status{ActStatus::NOT_SET};

  Aws::Utils::DateTime m_startedAt{};

  Aws::Utils::DateTime m_endedAt{};

  TraceLocation m_traceLocation;
  bool m_workflowRunIdHasBeenSet = false;
  bool m_sessionIdHasBeenSet = false;
  bool m_actIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_startedAtHasBeenSet = false;
  bool m_endedAtHasBeenSet = false;
  bool m_traceLocationHasBeenSet = false;
};

}  // namespace Model
}  // namespace NovaAct
}  // namespace Aws
