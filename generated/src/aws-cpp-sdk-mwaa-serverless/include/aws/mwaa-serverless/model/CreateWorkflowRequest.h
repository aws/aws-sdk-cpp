/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mwaa-serverless/MWAAServerlessRequest.h>
#include <aws/mwaa-serverless/MWAAServerless_EXPORTS.h>
#include <aws/mwaa-serverless/model/DefinitionS3Location.h>
#include <aws/mwaa-serverless/model/EncryptionConfiguration.h>
#include <aws/mwaa-serverless/model/LoggingConfiguration.h>
#include <aws/mwaa-serverless/model/NetworkConfiguration.h>

#include <utility>

namespace Aws {
namespace MWAAServerless {
namespace Model {

/**
 */
class CreateWorkflowRequest : public MWAAServerlessRequest {
 public:
  AWS_MWAASERVERLESS_API CreateWorkflowRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateWorkflow"; }

  AWS_MWAASERVERLESS_API Aws::String SerializePayload() const override;

  AWS_MWAASERVERLESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The name of the workflow. You must use unique workflow names within your
   * Amazon Web Services account. The service generates a unique identifier that is
   * appended to ensure temporal uniqueness across the account lifecycle.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateWorkflowRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request. This token prevents duplicate workflow creation
   * requests.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateWorkflowRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon S3 location where the workflow definition file is stored. This
   * must point to a valid YAML file that defines the workflow structure using
   * supported Amazon Web Services operators and tasks. Amazon Managed Workflows for
   * Apache Airflow Serverless takes a snapshot of the definition at creation time,
   * so subsequent changes to the Amazon S3 object will not affect the workflow
   * unless you create a new version. In your YAML definition, include task
   * dependencies, scheduling information, and operator configurations that are
   * compatible with the Amazon Managed Workflows for Apache Airflow Serverless
   * execution environment.</p>
   */
  inline const DefinitionS3Location& GetDefinitionS3Location() const { return m_definitionS3Location; }
  inline bool DefinitionS3LocationHasBeenSet() const { return m_definitionS3LocationHasBeenSet; }
  template <typename DefinitionS3LocationT = DefinitionS3Location>
  void SetDefinitionS3Location(DefinitionS3LocationT&& value) {
    m_definitionS3LocationHasBeenSet = true;
    m_definitionS3Location = std::forward<DefinitionS3LocationT>(value);
  }
  template <typename DefinitionS3LocationT = DefinitionS3Location>
  CreateWorkflowRequest& WithDefinitionS3Location(DefinitionS3LocationT&& value) {
    SetDefinitionS3Location(std::forward<DefinitionS3LocationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM role that Amazon Managed Workflows
   * for Apache Airflow Serverless assumes when executing the workflow. This role
   * must have the necessary permissions to access the required Amazon Web Services
   * services and resources that your workflow tasks will interact with. The role is
   * used for task execution in the isolated, multi-tenant environment and should
   * follow the principle of least privilege. Amazon Managed Workflows for Apache
   * Airflow Serverless validates role access during workflow creation but runtime
   * permission checks are performed by the target services.</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  CreateWorkflowRequest& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional description of the workflow that you can use to provide
   * additional context about the workflow's purpose and functionality.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateWorkflowRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for encrypting workflow data at rest and in transit.
   * Specifies the encryption type and optional KMS key for customer-managed
   * encryption.</p>
   */
  inline const EncryptionConfiguration& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
  inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
  template <typename EncryptionConfigurationT = EncryptionConfiguration>
  void SetEncryptionConfiguration(EncryptionConfigurationT&& value) {
    m_encryptionConfigurationHasBeenSet = true;
    m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value);
  }
  template <typename EncryptionConfigurationT = EncryptionConfiguration>
  CreateWorkflowRequest& WithEncryptionConfiguration(EncryptionConfigurationT&& value) {
    SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for workflow logging. Specifies the CloudWatch log group
   * where workflow execution logs are stored. Amazon Managed Workflows for Apache
   * Airflow Serverless automatically exports worker logs and task-level information
   * to the specified log group in your account using remote logging functionality.
   * This provides comprehensive observability for debugging and monitoring workflow
   * execution across the distributed, serverless environment.</p>
   */
  inline const LoggingConfiguration& GetLoggingConfiguration() const { return m_loggingConfiguration; }
  inline bool LoggingConfigurationHasBeenSet() const { return m_loggingConfigurationHasBeenSet; }
  template <typename LoggingConfigurationT = LoggingConfiguration>
  void SetLoggingConfiguration(LoggingConfigurationT&& value) {
    m_loggingConfigurationHasBeenSet = true;
    m_loggingConfiguration = std::forward<LoggingConfigurationT>(value);
  }
  template <typename LoggingConfigurationT = LoggingConfiguration>
  CreateWorkflowRequest& WithLoggingConfiguration(LoggingConfigurationT&& value) {
    SetLoggingConfiguration(std::forward<LoggingConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the Amazon Managed Workflows for Apache Airflow Serverless
   * engine that you want to use for this workflow. This determines the feature set,
   * supported operators, and execution environment capabilities available to your
   * workflow. Amazon Managed Workflows for Apache Airflow Serverless maintains
   * backward compatibility across versions while introducing new features and
   * improvements. Currently supports version 1 with plans for additional versions as
   * the service evolves.</p>
   */
  inline int GetEngineVersion() const { return m_engineVersion; }
  inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
  inline void SetEngineVersion(int value) {
    m_engineVersionHasBeenSet = true;
    m_engineVersion = value;
  }
  inline CreateWorkflowRequest& WithEngineVersion(int value) {
    SetEngineVersion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Network configuration for the workflow execution environment, including VPC
   * security groups and subnets for secure network access. When specified, Amazon
   * Managed Workflows for Apache Airflow Serverless deploys ECS worker tasks in your
   * customer VPC to provide secure connectivity to your resources. If not specified,
   * tasks run in the service's default worker VPC with network isolation from other
   * customers. This configuration enables secure access to VPC-only resources like
   * RDS databases or private endpoints.</p>
   */
  inline const NetworkConfiguration& GetNetworkConfiguration() const { return m_networkConfiguration; }
  inline bool NetworkConfigurationHasBeenSet() const { return m_networkConfigurationHasBeenSet; }
  template <typename NetworkConfigurationT = NetworkConfiguration>
  void SetNetworkConfiguration(NetworkConfigurationT&& value) {
    m_networkConfigurationHasBeenSet = true;
    m_networkConfiguration = std::forward<NetworkConfigurationT>(value);
  }
  template <typename NetworkConfigurationT = NetworkConfiguration>
  CreateWorkflowRequest& WithNetworkConfiguration(NetworkConfigurationT&& value) {
    SetNetworkConfiguration(std::forward<NetworkConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of tags to assign to the workflow resource. Tags are key-value pairs
   * that are used for resource organization and cost allocation.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateWorkflowRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateWorkflowRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
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
  CreateWorkflowRequest& WithTriggerMode(TriggerModeT&& value) {
    SetTriggerMode(std::forward<TriggerModeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  DefinitionS3Location m_definitionS3Location;

  Aws::String m_roleArn;

  Aws::String m_description;

  EncryptionConfiguration m_encryptionConfiguration;

  LoggingConfiguration m_loggingConfiguration;

  int m_engineVersion{0};

  NetworkConfiguration m_networkConfiguration;

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_triggerMode;
  bool m_nameHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_definitionS3LocationHasBeenSet = false;
  bool m_roleArnHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_encryptionConfigurationHasBeenSet = false;
  bool m_loggingConfigurationHasBeenSet = false;
  bool m_engineVersionHasBeenSet = false;
  bool m_networkConfigurationHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_triggerModeHasBeenSet = false;
};

}  // namespace Model
}  // namespace MWAAServerless
}  // namespace Aws
