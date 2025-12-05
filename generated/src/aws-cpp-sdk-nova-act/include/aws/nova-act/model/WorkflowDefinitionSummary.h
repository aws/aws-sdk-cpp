/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/nova-act/NovaAct_EXPORTS.h>
#include <aws/nova-act/model/WorkflowDefinitionStatus.h>

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
 * <p>Summary information about a workflow definition, used in list
 * operations.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/nova-act-2025-08-22/WorkflowDefinitionSummary">AWS
 * API Reference</a></p>
 */
class WorkflowDefinitionSummary {
 public:
  AWS_NOVAACT_API WorkflowDefinitionSummary() = default;
  AWS_NOVAACT_API WorkflowDefinitionSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_NOVAACT_API WorkflowDefinitionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NOVAACT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the workflow definition.</p>
   */
  inline const Aws::String& GetWorkflowDefinitionArn() const { return m_workflowDefinitionArn; }
  inline bool WorkflowDefinitionArnHasBeenSet() const { return m_workflowDefinitionArnHasBeenSet; }
  template <typename WorkflowDefinitionArnT = Aws::String>
  void SetWorkflowDefinitionArn(WorkflowDefinitionArnT&& value) {
    m_workflowDefinitionArnHasBeenSet = true;
    m_workflowDefinitionArn = std::forward<WorkflowDefinitionArnT>(value);
  }
  template <typename WorkflowDefinitionArnT = Aws::String>
  WorkflowDefinitionSummary& WithWorkflowDefinitionArn(WorkflowDefinitionArnT&& value) {
    SetWorkflowDefinitionArn(std::forward<WorkflowDefinitionArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the workflow definition.</p>
   */
  inline const Aws::String& GetWorkflowDefinitionName() const { return m_workflowDefinitionName; }
  inline bool WorkflowDefinitionNameHasBeenSet() const { return m_workflowDefinitionNameHasBeenSet; }
  template <typename WorkflowDefinitionNameT = Aws::String>
  void SetWorkflowDefinitionName(WorkflowDefinitionNameT&& value) {
    m_workflowDefinitionNameHasBeenSet = true;
    m_workflowDefinitionName = std::forward<WorkflowDefinitionNameT>(value);
  }
  template <typename WorkflowDefinitionNameT = Aws::String>
  WorkflowDefinitionSummary& WithWorkflowDefinitionName(WorkflowDefinitionNameT&& value) {
    SetWorkflowDefinitionName(std::forward<WorkflowDefinitionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the workflow definition was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  WorkflowDefinitionSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the workflow definition.</p>
   */
  inline WorkflowDefinitionStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(WorkflowDefinitionStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline WorkflowDefinitionSummary& WithStatus(WorkflowDefinitionStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_workflowDefinitionArn;

  Aws::String m_workflowDefinitionName;

  Aws::Utils::DateTime m_createdAt{};

  WorkflowDefinitionStatus m_status{WorkflowDefinitionStatus::NOT_SET};
  bool m_workflowDefinitionArnHasBeenSet = false;
  bool m_workflowDefinitionNameHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace NovaAct
}  // namespace Aws
