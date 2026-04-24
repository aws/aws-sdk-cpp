/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/AWSResources.h>
#include <aws/securityagent/model/CodeReviewSettings.h>

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
 * <p>Agent space structure</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/AgentSpace">AWS
 * API Reference</a></p>
 */
class AgentSpace {
 public:
  AWS_SECURITYAGENT_API AgentSpace() = default;
  AWS_SECURITYAGENT_API AgentSpace(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API AgentSpace& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Unique identifier of the agent space</p>
   */
  inline const Aws::String& GetAgentSpaceId() const { return m_agentSpaceId; }
  inline bool AgentSpaceIdHasBeenSet() const { return m_agentSpaceIdHasBeenSet; }
  template <typename AgentSpaceIdT = Aws::String>
  void SetAgentSpaceId(AgentSpaceIdT&& value) {
    m_agentSpaceIdHasBeenSet = true;
    m_agentSpaceId = std::forward<AgentSpaceIdT>(value);
  }
  template <typename AgentSpaceIdT = Aws::String>
  AgentSpace& WithAgentSpaceId(AgentSpaceIdT&& value) {
    SetAgentSpaceId(std::forward<AgentSpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Name of the agent space</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  AgentSpace& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Description of the agent space</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  AgentSpace& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>AWS resource configurations</p>
   */
  inline const AWSResources& GetAwsResources() const { return m_awsResources; }
  inline bool AwsResourcesHasBeenSet() const { return m_awsResourcesHasBeenSet; }
  template <typename AwsResourcesT = AWSResources>
  void SetAwsResources(AwsResourcesT&& value) {
    m_awsResourcesHasBeenSet = true;
    m_awsResources = std::forward<AwsResourcesT>(value);
  }
  template <typename AwsResourcesT = AWSResources>
  AgentSpace& WithAwsResources(AwsResourcesT&& value) {
    SetAwsResources(std::forward<AwsResourcesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>List of target domain IDs registered with the agent space</p>
   */
  inline const Aws::Vector<Aws::String>& GetTargetDomainIds() const { return m_targetDomainIds; }
  inline bool TargetDomainIdsHasBeenSet() const { return m_targetDomainIdsHasBeenSet; }
  template <typename TargetDomainIdsT = Aws::Vector<Aws::String>>
  void SetTargetDomainIds(TargetDomainIdsT&& value) {
    m_targetDomainIdsHasBeenSet = true;
    m_targetDomainIds = std::forward<TargetDomainIdsT>(value);
  }
  template <typename TargetDomainIdsT = Aws::Vector<Aws::String>>
  AgentSpace& WithTargetDomainIds(TargetDomainIdsT&& value) {
    SetTargetDomainIds(std::forward<TargetDomainIdsT>(value));
    return *this;
  }
  template <typename TargetDomainIdsT = Aws::String>
  AgentSpace& AddTargetDomainIds(TargetDomainIdsT&& value) {
    m_targetDomainIdsHasBeenSet = true;
    m_targetDomainIds.emplace_back(std::forward<TargetDomainIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration for code review analysis, including controls scanning and
   * general purpose scanning settings</p>
   */
  inline const CodeReviewSettings& GetCodeReviewSettings() const { return m_codeReviewSettings; }
  inline bool CodeReviewSettingsHasBeenSet() const { return m_codeReviewSettingsHasBeenSet; }
  template <typename CodeReviewSettingsT = CodeReviewSettings>
  void SetCodeReviewSettings(CodeReviewSettingsT&& value) {
    m_codeReviewSettingsHasBeenSet = true;
    m_codeReviewSettings = std::forward<CodeReviewSettingsT>(value);
  }
  template <typename CodeReviewSettingsT = CodeReviewSettings>
  AgentSpace& WithCodeReviewSettings(CodeReviewSettingsT&& value) {
    SetCodeReviewSettings(std::forward<CodeReviewSettingsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Identifier of the KMS key used to encrypt data. Can be a key ID, key ARN,
   * alias name, or alias ARN. If not specified, an AWS managed key is used.</p>
   */
  inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
  inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
  template <typename KmsKeyIdT = Aws::String>
  void SetKmsKeyId(KmsKeyIdT&& value) {
    m_kmsKeyIdHasBeenSet = true;
    m_kmsKeyId = std::forward<KmsKeyIdT>(value);
  }
  template <typename KmsKeyIdT = Aws::String>
  AgentSpace& WithKmsKeyId(KmsKeyIdT&& value) {
    SetKmsKeyId(std::forward<KmsKeyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Timestamp when the agent space was created</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  AgentSpace& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Timestamp when the agent space was last updated</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  AgentSpace& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_agentSpaceId;

  Aws::String m_name;

  Aws::String m_description;

  AWSResources m_awsResources;

  Aws::Vector<Aws::String> m_targetDomainIds;

  CodeReviewSettings m_codeReviewSettings;

  Aws::String m_kmsKeyId;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_agentSpaceIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_awsResourcesHasBeenSet = false;
  bool m_targetDomainIdsHasBeenSet = false;
  bool m_codeReviewSettingsHasBeenSet = false;
  bool m_kmsKeyIdHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
