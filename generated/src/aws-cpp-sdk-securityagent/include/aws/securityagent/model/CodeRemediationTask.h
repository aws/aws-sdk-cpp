/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/CodeRemediationTaskDetails.h>
#include <aws/securityagent/model/CodeRemediationTaskStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecurityAgent {
namespace Model {

/**
 * <p>Information about task for code remediation</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/CodeRemediationTask">AWS
 * API Reference</a></p>
 */
class CodeRemediationTask {
 public:
  AWS_SECURITYAGENT_API CodeRemediationTask() = default;
  AWS_SECURITYAGENT_API CodeRemediationTask(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API CodeRemediationTask& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Current status of the code remediation task</p>
   */
  inline CodeRemediationTaskStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(CodeRemediationTaskStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline CodeRemediationTask& WithStatus(CodeRemediationTaskStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Reason for the current code remediation task status</p>
   */
  inline const Aws::String& GetStatusReason() const { return m_statusReason; }
  inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
  template <typename StatusReasonT = Aws::String>
  void SetStatusReason(StatusReasonT&& value) {
    m_statusReasonHasBeenSet = true;
    m_statusReason = std::forward<StatusReasonT>(value);
  }
  template <typename StatusReasonT = Aws::String>
  CodeRemediationTask& WithStatusReason(StatusReasonT&& value) {
    SetStatusReason(std::forward<StatusReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details of the code remediation for each repository</p>
   */
  inline const Aws::Vector<CodeRemediationTaskDetails>& GetTaskDetails() const { return m_taskDetails; }
  inline bool TaskDetailsHasBeenSet() const { return m_taskDetailsHasBeenSet; }
  template <typename TaskDetailsT = Aws::Vector<CodeRemediationTaskDetails>>
  void SetTaskDetails(TaskDetailsT&& value) {
    m_taskDetailsHasBeenSet = true;
    m_taskDetails = std::forward<TaskDetailsT>(value);
  }
  template <typename TaskDetailsT = Aws::Vector<CodeRemediationTaskDetails>>
  CodeRemediationTask& WithTaskDetails(TaskDetailsT&& value) {
    SetTaskDetails(std::forward<TaskDetailsT>(value));
    return *this;
  }
  template <typename TaskDetailsT = CodeRemediationTaskDetails>
  CodeRemediationTask& AddTaskDetails(TaskDetailsT&& value) {
    m_taskDetailsHasBeenSet = true;
    m_taskDetails.emplace_back(std::forward<TaskDetailsT>(value));
    return *this;
  }
  ///@}
 private:
  CodeRemediationTaskStatus m_status{CodeRemediationTaskStatus::NOT_SET};

  Aws::String m_statusReason;

  Aws::Vector<CodeRemediationTaskDetails> m_taskDetails;
  bool m_statusHasBeenSet = false;
  bool m_statusReasonHasBeenSet = false;
  bool m_taskDetailsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
