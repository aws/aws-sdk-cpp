/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mwaa-serverless/MWAAServerless_EXPORTS.h>
#include <aws/mwaa-serverless/model/WorkflowStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MWAAServerless {
namespace Model {

/**
 * <p>Summary information about a workflow, including basic identification and
 * metadata.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-serverless-2024-07-26/WorkflowSummary">AWS
 * API Reference</a></p>
 */
class WorkflowSummary {
 public:
  AWS_MWAASERVERLESS_API WorkflowSummary() = default;
  AWS_MWAASERVERLESS_API WorkflowSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_MWAASERVERLESS_API WorkflowSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MWAASERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the workflow.</p>
   */
  inline const Aws::String& GetWorkflowArn() const { return m_workflowArn; }
  inline bool WorkflowArnHasBeenSet() const { return m_workflowArnHasBeenSet; }
  template <typename WorkflowArnT = Aws::String>
  void SetWorkflowArn(WorkflowArnT&& value) {
    m_workflowArnHasBeenSet = true;
    m_workflowArn = std::forward<WorkflowArnT>(value);
  }
  template <typename WorkflowArnT = Aws::String>
  WorkflowSummary& WithWorkflowArn(WorkflowArnT&& value) {
    SetWorkflowArn(std::forward<WorkflowArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version identifier of the workflow.</p>
   */
  inline const Aws::String& GetWorkflowVersion() const { return m_workflowVersion; }
  inline bool WorkflowVersionHasBeenSet() const { return m_workflowVersionHasBeenSet; }
  template <typename WorkflowVersionT = Aws::String>
  void SetWorkflowVersion(WorkflowVersionT&& value) {
    m_workflowVersionHasBeenSet = true;
    m_workflowVersion = std::forward<WorkflowVersionT>(value);
  }
  template <typename WorkflowVersionT = Aws::String>
  WorkflowSummary& WithWorkflowVersion(WorkflowVersionT&& value) {
    SetWorkflowVersion(std::forward<WorkflowVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the workflow.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  WorkflowSummary& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the workflow.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  WorkflowSummary& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the workflow was created, in ISO 8601 date-time
   * format.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  WorkflowSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the workflow was last modified, in ISO 8601 date-time
   * format.</p>
   */
  inline const Aws::Utils::DateTime& GetModifiedAt() const { return m_modifiedAt; }
  inline bool ModifiedAtHasBeenSet() const { return m_modifiedAtHasBeenSet; }
  template <typename ModifiedAtT = Aws::Utils::DateTime>
  void SetModifiedAt(ModifiedAtT&& value) {
    m_modifiedAtHasBeenSet = true;
    m_modifiedAt = std::forward<ModifiedAtT>(value);
  }
  template <typename ModifiedAtT = Aws::Utils::DateTime>
  WorkflowSummary& WithModifiedAt(ModifiedAtT&& value) {
    SetModifiedAt(std::forward<ModifiedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the workflow.</p>
   */
  inline WorkflowStatus GetWorkflowStatus() const { return m_workflowStatus; }
  inline bool WorkflowStatusHasBeenSet() const { return m_workflowStatusHasBeenSet; }
  inline void SetWorkflowStatus(WorkflowStatus value) {
    m_workflowStatusHasBeenSet = true;
    m_workflowStatus = value;
  }
  inline WorkflowSummary& WithWorkflowStatus(WorkflowStatus value) {
    SetWorkflowStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The trigger mode for the workflow execution.</p>
   */
  inline const Aws::String& GetTriggerMode() const { return m_triggerMode; }
  inline bool TriggerModeHasBeenSet() const { return m_triggerModeHasBeenSet; }
  template <typename TriggerModeT = Aws::String>
  void SetTriggerMode(TriggerModeT&& value) {
    m_triggerModeHasBeenSet = true;
    m_triggerMode = std::forward<TriggerModeT>(value);
  }
  template <typename TriggerModeT = Aws::String>
  WorkflowSummary& WithTriggerMode(TriggerModeT&& value) {
    SetTriggerMode(std::forward<TriggerModeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_workflowArn;

  Aws::String m_workflowVersion;

  Aws::String m_name;

  Aws::String m_description;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_modifiedAt{};

  WorkflowStatus m_workflowStatus{WorkflowStatus::NOT_SET};

  Aws::String m_triggerMode;
  bool m_workflowArnHasBeenSet = false;
  bool m_workflowVersionHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_modifiedAtHasBeenSet = false;
  bool m_workflowStatusHasBeenSet = false;
  bool m_triggerModeHasBeenSet = false;
};

}  // namespace Model
}  // namespace MWAAServerless
}  // namespace Aws
