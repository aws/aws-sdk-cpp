/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mwaa-serverless/MWAAServerlessRequest.h>
#include <aws/mwaa-serverless/MWAAServerless_EXPORTS.h>
#include <aws/mwaa-serverless/model/DefinitionS3Location.h>
#include <aws/mwaa-serverless/model/LoggingConfiguration.h>
#include <aws/mwaa-serverless/model/NetworkConfiguration.h>

#include <utility>

namespace Aws {
namespace MWAAServerless {
namespace Model {

/**
 */
class UpdateWorkflowRequest : public MWAAServerlessRequest {
 public:
  AWS_MWAASERVERLESS_API UpdateWorkflowRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateWorkflow"; }

  AWS_MWAASERVERLESS_API Aws::String SerializePayload() const override;

  AWS_MWAASERVERLESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the workflow you want to update.</p>
   */
  inline const Aws::String& GetWorkflowArn() const { return m_workflowArn; }
  inline bool WorkflowArnHasBeenSet() const { return m_workflowArnHasBeenSet; }
  template <typename WorkflowArnT = Aws::String>
  void SetWorkflowArn(WorkflowArnT&& value) {
    m_workflowArnHasBeenSet = true;
    m_workflowArn = std::forward<WorkflowArnT>(value);
  }
  template <typename WorkflowArnT = Aws::String>
  UpdateWorkflowRequest& WithWorkflowArn(WorkflowArnT&& value) {
    SetWorkflowArn(std::forward<WorkflowArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon S3 location where the updated workflow definition file is
   * stored.</p>
   */
  inline const DefinitionS3Location& GetDefinitionS3Location() const { return m_definitionS3Location; }
  inline bool DefinitionS3LocationHasBeenSet() const { return m_definitionS3LocationHasBeenSet; }
  template <typename DefinitionS3LocationT = DefinitionS3Location>
  void SetDefinitionS3Location(DefinitionS3LocationT&& value) {
    m_definitionS3LocationHasBeenSet = true;
    m_definitionS3Location = std::forward<DefinitionS3LocationT>(value);
  }
  template <typename DefinitionS3LocationT = DefinitionS3Location>
  UpdateWorkflowRequest& WithDefinitionS3Location(DefinitionS3LocationT&& value) {
    SetDefinitionS3Location(std::forward<DefinitionS3LocationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM role that Amazon Managed Workflows
   * for Apache Airflow Serverless assumes when it executes the updated workflow.</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  UpdateWorkflowRequest& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An updated description for the workflow.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdateWorkflowRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Updated logging configuration for the workflow.</p>
   */
  inline const LoggingConfiguration& GetLoggingConfiguration() const { return m_loggingConfiguration; }
  inline bool LoggingConfigurationHasBeenSet() const { return m_loggingConfigurationHasBeenSet; }
  template <typename LoggingConfigurationT = LoggingConfiguration>
  void SetLoggingConfiguration(LoggingConfigurationT&& value) {
    m_loggingConfigurationHasBeenSet = true;
    m_loggingConfiguration = std::forward<LoggingConfigurationT>(value);
  }
  template <typename LoggingConfigurationT = LoggingConfiguration>
  UpdateWorkflowRequest& WithLoggingConfiguration(LoggingConfigurationT&& value) {
    SetLoggingConfiguration(std::forward<LoggingConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the Amazon Managed Workflows for Apache Airflow Serverless
   * engine that you want to use for the updated workflow.</p>
   */
  inline int GetEngineVersion() const { return m_engineVersion; }
  inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
  inline void SetEngineVersion(int value) {
    m_engineVersionHasBeenSet = true;
    m_engineVersion = value;
  }
  inline UpdateWorkflowRequest& WithEngineVersion(int value) {
    SetEngineVersion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Updated network configuration for the workflow execution environment.</p>
   */
  inline const NetworkConfiguration& GetNetworkConfiguration() const { return m_networkConfiguration; }
  inline bool NetworkConfigurationHasBeenSet() const { return m_networkConfigurationHasBeenSet; }
  template <typename NetworkConfigurationT = NetworkConfiguration>
  void SetNetworkConfiguration(NetworkConfigurationT&& value) {
    m_networkConfigurationHasBeenSet = true;
    m_networkConfiguration = std::forward<NetworkConfigurationT>(value);
  }
  template <typename NetworkConfigurationT = NetworkConfiguration>
  UpdateWorkflowRequest& WithNetworkConfiguration(NetworkConfigurationT&& value) {
    SetNetworkConfiguration(std::forward<NetworkConfigurationT>(value));
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
  UpdateWorkflowRequest& WithTriggerMode(TriggerModeT&& value) {
    SetTriggerMode(std::forward<TriggerModeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_workflowArn;

  DefinitionS3Location m_definitionS3Location;

  Aws::String m_roleArn;

  Aws::String m_description;

  LoggingConfiguration m_loggingConfiguration;

  int m_engineVersion{0};

  NetworkConfiguration m_networkConfiguration;

  Aws::String m_triggerMode;
  bool m_workflowArnHasBeenSet = false;
  bool m_definitionS3LocationHasBeenSet = false;
  bool m_roleArnHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_loggingConfigurationHasBeenSet = false;
  bool m_engineVersionHasBeenSet = false;
  bool m_networkConfigurationHasBeenSet = false;
  bool m_triggerModeHasBeenSet = false;
};

}  // namespace Model
}  // namespace MWAAServerless
}  // namespace Aws
