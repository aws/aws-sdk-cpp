/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mwaa-serverless/MWAAServerless_EXPORTS.h>
#include <aws/mwaa-serverless/model/DefinitionS3Location.h>
#include <aws/mwaa-serverless/model/EncryptionConfiguration.h>
#include <aws/mwaa-serverless/model/LoggingConfiguration.h>
#include <aws/mwaa-serverless/model/NetworkConfiguration.h>
#include <aws/mwaa-serverless/model/ScheduleConfiguration.h>
#include <aws/mwaa-serverless/model/WorkflowStatus.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace MWAAServerless {
namespace Model {
class GetWorkflowResult {
 public:
  AWS_MWAASERVERLESS_API GetWorkflowResult() = default;
  AWS_MWAASERVERLESS_API GetWorkflowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_MWAASERVERLESS_API GetWorkflowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the workflow.</p>
   */
  inline const Aws::String& GetWorkflowArn() const { return m_workflowArn; }
  template <typename WorkflowArnT = Aws::String>
  void SetWorkflowArn(WorkflowArnT&& value) {
    m_workflowArnHasBeenSet = true;
    m_workflowArn = std::forward<WorkflowArnT>(value);
  }
  template <typename WorkflowArnT = Aws::String>
  GetWorkflowResult& WithWorkflowArn(WorkflowArnT&& value) {
    SetWorkflowArn(std::forward<WorkflowArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version identifier of the workflow.</p>
   */
  inline const Aws::String& GetWorkflowVersion() const { return m_workflowVersion; }
  template <typename WorkflowVersionT = Aws::String>
  void SetWorkflowVersion(WorkflowVersionT&& value) {
    m_workflowVersionHasBeenSet = true;
    m_workflowVersion = std::forward<WorkflowVersionT>(value);
  }
  template <typename WorkflowVersionT = Aws::String>
  GetWorkflowResult& WithWorkflowVersion(WorkflowVersionT&& value) {
    SetWorkflowVersion(std::forward<WorkflowVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the workflow.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  GetWorkflowResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the workflow.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  GetWorkflowResult& WithDescription(DescriptionT&& value) {
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
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetWorkflowResult& WithCreatedAt(CreatedAtT&& value) {
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
  template <typename ModifiedAtT = Aws::Utils::DateTime>
  void SetModifiedAt(ModifiedAtT&& value) {
    m_modifiedAtHasBeenSet = true;
    m_modifiedAt = std::forward<ModifiedAtT>(value);
  }
  template <typename ModifiedAtT = Aws::Utils::DateTime>
  GetWorkflowResult& WithModifiedAt(ModifiedAtT&& value) {
    SetModifiedAt(std::forward<ModifiedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The encryption configuration for the workflow.</p>
   */
  inline const EncryptionConfiguration& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
  template <typename EncryptionConfigurationT = EncryptionConfiguration>
  void SetEncryptionConfiguration(EncryptionConfigurationT&& value) {
    m_encryptionConfigurationHasBeenSet = true;
    m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value);
  }
  template <typename EncryptionConfigurationT = EncryptionConfiguration>
  GetWorkflowResult& WithEncryptionConfiguration(EncryptionConfigurationT&& value) {
    SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The logging configuration for the workflow.</p>
   */
  inline const LoggingConfiguration& GetLoggingConfiguration() const { return m_loggingConfiguration; }
  template <typename LoggingConfigurationT = LoggingConfiguration>
  void SetLoggingConfiguration(LoggingConfigurationT&& value) {
    m_loggingConfigurationHasBeenSet = true;
    m_loggingConfiguration = std::forward<LoggingConfigurationT>(value);
  }
  template <typename LoggingConfigurationT = LoggingConfiguration>
  GetWorkflowResult& WithLoggingConfiguration(LoggingConfigurationT&& value) {
    SetLoggingConfiguration(std::forward<LoggingConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the Amazon Managed Workflows for Apache Airflow Serverless
   * engine that this workflow uses.</p>
   */
  inline int GetEngineVersion() const { return m_engineVersion; }
  inline void SetEngineVersion(int value) {
    m_engineVersionHasBeenSet = true;
    m_engineVersion = value;
  }
  inline GetWorkflowResult& WithEngineVersion(int value) {
    SetEngineVersion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the workflow.</p>
   */
  inline WorkflowStatus GetWorkflowStatus() const { return m_workflowStatus; }
  inline void SetWorkflowStatus(WorkflowStatus value) {
    m_workflowStatusHasBeenSet = true;
    m_workflowStatus = value;
  }
  inline GetWorkflowResult& WithWorkflowStatus(WorkflowStatus value) {
    SetWorkflowStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon S3 location of the workflow definition file.</p>
   */
  inline const DefinitionS3Location& GetDefinitionS3Location() const { return m_definitionS3Location; }
  template <typename DefinitionS3LocationT = DefinitionS3Location>
  void SetDefinitionS3Location(DefinitionS3LocationT&& value) {
    m_definitionS3LocationHasBeenSet = true;
    m_definitionS3Location = std::forward<DefinitionS3LocationT>(value);
  }
  template <typename DefinitionS3LocationT = DefinitionS3Location>
  GetWorkflowResult& WithDefinitionS3Location(DefinitionS3LocationT&& value) {
    SetDefinitionS3Location(std::forward<DefinitionS3LocationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The schedule configuration for the workflow, including cron expressions for
   * automated execution. Amazon Managed Workflows for Apache Airflow Serverless uses
   * EventBridge Scheduler for cost-effective, timezone-aware scheduling. When a
   * workflow includes schedule information in its YAML definition, the service
   * automatically configures the appropriate triggers for automated execution. Only
   * one version of a workflow can have an active schedule at any given time.</p>
   */
  inline const ScheduleConfiguration& GetScheduleConfiguration() const { return m_scheduleConfiguration; }
  template <typename ScheduleConfigurationT = ScheduleConfiguration>
  void SetScheduleConfiguration(ScheduleConfigurationT&& value) {
    m_scheduleConfigurationHasBeenSet = true;
    m_scheduleConfiguration = std::forward<ScheduleConfigurationT>(value);
  }
  template <typename ScheduleConfigurationT = ScheduleConfiguration>
  GetWorkflowResult& WithScheduleConfiguration(ScheduleConfigurationT&& value) {
    SetScheduleConfiguration(std::forward<ScheduleConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM role used for workflow
   * execution.</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  GetWorkflowResult& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The network configuration for the workflow execution environment.</p>
   */
  inline const NetworkConfiguration& GetNetworkConfiguration() const { return m_networkConfiguration; }
  template <typename NetworkConfigurationT = NetworkConfiguration>
  void SetNetworkConfiguration(NetworkConfigurationT&& value) {
    m_networkConfigurationHasBeenSet = true;
    m_networkConfiguration = std::forward<NetworkConfigurationT>(value);
  }
  template <typename NetworkConfigurationT = NetworkConfiguration>
  GetWorkflowResult& WithNetworkConfiguration(NetworkConfigurationT&& value) {
    SetNetworkConfiguration(std::forward<NetworkConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The trigger mode for the workflow execution.</p>
   */
  inline const Aws::String& GetTriggerMode() const { return m_triggerMode; }
  template <typename TriggerModeT = Aws::String>
  void SetTriggerMode(TriggerModeT&& value) {
    m_triggerModeHasBeenSet = true;
    m_triggerMode = std::forward<TriggerModeT>(value);
  }
  template <typename TriggerModeT = Aws::String>
  GetWorkflowResult& WithTriggerMode(TriggerModeT&& value) {
    SetTriggerMode(std::forward<TriggerModeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The workflow definition content.</p>
   */
  inline const Aws::String& GetWorkflowDefinition() const { return m_workflowDefinition; }
  template <typename WorkflowDefinitionT = Aws::String>
  void SetWorkflowDefinition(WorkflowDefinitionT&& value) {
    m_workflowDefinitionHasBeenSet = true;
    m_workflowDefinition = std::forward<WorkflowDefinitionT>(value);
  }
  template <typename WorkflowDefinitionT = Aws::String>
  GetWorkflowResult& WithWorkflowDefinition(WorkflowDefinitionT&& value) {
    SetWorkflowDefinition(std::forward<WorkflowDefinitionT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetWorkflowResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
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

  EncryptionConfiguration m_encryptionConfiguration;

  LoggingConfiguration m_loggingConfiguration;

  int m_engineVersion{0};

  WorkflowStatus m_workflowStatus{WorkflowStatus::NOT_SET};

  DefinitionS3Location m_definitionS3Location;

  ScheduleConfiguration m_scheduleConfiguration;

  Aws::String m_roleArn;

  NetworkConfiguration m_networkConfiguration;

  Aws::String m_triggerMode;

  Aws::String m_workflowDefinition;

  Aws::String m_requestId;
  bool m_workflowArnHasBeenSet = false;
  bool m_workflowVersionHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_modifiedAtHasBeenSet = false;
  bool m_encryptionConfigurationHasBeenSet = false;
  bool m_loggingConfigurationHasBeenSet = false;
  bool m_engineVersionHasBeenSet = false;
  bool m_workflowStatusHasBeenSet = false;
  bool m_definitionS3LocationHasBeenSet = false;
  bool m_scheduleConfigurationHasBeenSet = false;
  bool m_roleArnHasBeenSet = false;
  bool m_networkConfigurationHasBeenSet = false;
  bool m_triggerModeHasBeenSet = false;
  bool m_workflowDefinitionHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace MWAAServerless
}  // namespace Aws
