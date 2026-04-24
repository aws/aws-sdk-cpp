/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mwaa-serverless/MWAAServerless_EXPORTS.h>
#include <aws/mwaa-serverless/model/DefinitionS3Location.h>
#include <aws/mwaa-serverless/model/ScheduleConfiguration.h>

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
 * <p>Summary information about a workflow version, including identification and
 * configuration details.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-serverless-2024-07-26/WorkflowVersionSummary">AWS
 * API Reference</a></p>
 */
class WorkflowVersionSummary {
 public:
  AWS_MWAASERVERLESS_API WorkflowVersionSummary() = default;
  AWS_MWAASERVERLESS_API WorkflowVersionSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_MWAASERVERLESS_API WorkflowVersionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MWAASERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The version identifier of the workflow version.</p>
   */
  inline const Aws::String& GetWorkflowVersion() const { return m_workflowVersion; }
  inline bool WorkflowVersionHasBeenSet() const { return m_workflowVersionHasBeenSet; }
  template <typename WorkflowVersionT = Aws::String>
  void SetWorkflowVersion(WorkflowVersionT&& value) {
    m_workflowVersionHasBeenSet = true;
    m_workflowVersion = std::forward<WorkflowVersionT>(value);
  }
  template <typename WorkflowVersionT = Aws::String>
  WorkflowVersionSummary& WithWorkflowVersion(WorkflowVersionT&& value) {
    SetWorkflowVersion(std::forward<WorkflowVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the workflow that contains this
   * version.</p>
   */
  inline const Aws::String& GetWorkflowArn() const { return m_workflowArn; }
  inline bool WorkflowArnHasBeenSet() const { return m_workflowArnHasBeenSet; }
  template <typename WorkflowArnT = Aws::String>
  void SetWorkflowArn(WorkflowArnT&& value) {
    m_workflowArnHasBeenSet = true;
    m_workflowArn = std::forward<WorkflowArnT>(value);
  }
  template <typename WorkflowArnT = Aws::String>
  WorkflowVersionSummary& WithWorkflowArn(WorkflowArnT&& value) {
    SetWorkflowArn(std::forward<WorkflowArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Boolean flag that indicates whether this is the latest version of the
   * workflow.</p>
   */
  inline bool GetIsLatestVersion() const { return m_isLatestVersion; }
  inline bool IsLatestVersionHasBeenSet() const { return m_isLatestVersionHasBeenSet; }
  inline void SetIsLatestVersion(bool value) {
    m_isLatestVersionHasBeenSet = true;
    m_isLatestVersion = value;
  }
  inline WorkflowVersionSummary& WithIsLatestVersion(bool value) {
    SetIsLatestVersion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the workflow version was created, in ISO 8601 date-time
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
  WorkflowVersionSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the workflow version was last modified, in ISO 8601
   * date-time format.</p>
   */
  inline const Aws::Utils::DateTime& GetModifiedAt() const { return m_modifiedAt; }
  inline bool ModifiedAtHasBeenSet() const { return m_modifiedAtHasBeenSet; }
  template <typename ModifiedAtT = Aws::Utils::DateTime>
  void SetModifiedAt(ModifiedAtT&& value) {
    m_modifiedAtHasBeenSet = true;
    m_modifiedAt = std::forward<ModifiedAtT>(value);
  }
  template <typename ModifiedAtT = Aws::Utils::DateTime>
  WorkflowVersionSummary& WithModifiedAt(ModifiedAtT&& value) {
    SetModifiedAt(std::forward<ModifiedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon S3 location of the workflow definition file for this version.</p>
   */
  inline const DefinitionS3Location& GetDefinitionS3Location() const { return m_definitionS3Location; }
  inline bool DefinitionS3LocationHasBeenSet() const { return m_definitionS3LocationHasBeenSet; }
  template <typename DefinitionS3LocationT = DefinitionS3Location>
  void SetDefinitionS3Location(DefinitionS3LocationT&& value) {
    m_definitionS3LocationHasBeenSet = true;
    m_definitionS3Location = std::forward<DefinitionS3LocationT>(value);
  }
  template <typename DefinitionS3LocationT = DefinitionS3Location>
  WorkflowVersionSummary& WithDefinitionS3Location(DefinitionS3LocationT&& value) {
    SetDefinitionS3Location(std::forward<DefinitionS3LocationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The schedule configuration for this workflow version.</p>
   */
  inline const ScheduleConfiguration& GetScheduleConfiguration() const { return m_scheduleConfiguration; }
  inline bool ScheduleConfigurationHasBeenSet() const { return m_scheduleConfigurationHasBeenSet; }
  template <typename ScheduleConfigurationT = ScheduleConfiguration>
  void SetScheduleConfiguration(ScheduleConfigurationT&& value) {
    m_scheduleConfigurationHasBeenSet = true;
    m_scheduleConfiguration = std::forward<ScheduleConfigurationT>(value);
  }
  template <typename ScheduleConfigurationT = ScheduleConfiguration>
  WorkflowVersionSummary& WithScheduleConfiguration(ScheduleConfigurationT&& value) {
    SetScheduleConfiguration(std::forward<ScheduleConfigurationT>(value));
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
  WorkflowVersionSummary& WithTriggerMode(TriggerModeT&& value) {
    SetTriggerMode(std::forward<TriggerModeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_workflowVersion;

  Aws::String m_workflowArn;

  bool m_isLatestVersion{false};

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_modifiedAt{};

  DefinitionS3Location m_definitionS3Location;

  ScheduleConfiguration m_scheduleConfiguration;

  Aws::String m_triggerMode;
  bool m_workflowVersionHasBeenSet = false;
  bool m_workflowArnHasBeenSet = false;
  bool m_isLatestVersionHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_modifiedAtHasBeenSet = false;
  bool m_definitionS3LocationHasBeenSet = false;
  bool m_scheduleConfigurationHasBeenSet = false;
  bool m_triggerModeHasBeenSet = false;
};

}  // namespace Model
}  // namespace MWAAServerless
}  // namespace Aws
