/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityagent/SecurityAgentRequest.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/AWSResources.h>
#include <aws/securityagent/model/CodeReviewSettings.h>

#include <utility>

namespace Aws {
namespace SecurityAgent {
namespace Model {

/**
 * <p>Input for creating a new agent space</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/CreateAgentSpaceInput">AWS
 * API Reference</a></p>
 */
class CreateAgentSpaceRequest : public SecurityAgentRequest {
 public:
  AWS_SECURITYAGENT_API CreateAgentSpaceRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateAgentSpace"; }

  AWS_SECURITYAGENT_API Aws::String SerializePayload() const override;

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
  CreateAgentSpaceRequest& WithName(NameT&& value) {
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
  CreateAgentSpaceRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>AWS resource configurations associated with the agent space</p>
   */
  inline const AWSResources& GetAwsResources() const { return m_awsResources; }
  inline bool AwsResourcesHasBeenSet() const { return m_awsResourcesHasBeenSet; }
  template <typename AwsResourcesT = AWSResources>
  void SetAwsResources(AwsResourcesT&& value) {
    m_awsResourcesHasBeenSet = true;
    m_awsResources = std::forward<AwsResourcesT>(value);
  }
  template <typename AwsResourcesT = AWSResources>
  CreateAgentSpaceRequest& WithAwsResources(AwsResourcesT&& value) {
    SetAwsResources(std::forward<AwsResourcesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Target domain IDs to associate with the agent space</p>
   */
  inline const Aws::Vector<Aws::String>& GetTargetDomainIds() const { return m_targetDomainIds; }
  inline bool TargetDomainIdsHasBeenSet() const { return m_targetDomainIdsHasBeenSet; }
  template <typename TargetDomainIdsT = Aws::Vector<Aws::String>>
  void SetTargetDomainIds(TargetDomainIdsT&& value) {
    m_targetDomainIdsHasBeenSet = true;
    m_targetDomainIds = std::forward<TargetDomainIdsT>(value);
  }
  template <typename TargetDomainIdsT = Aws::Vector<Aws::String>>
  CreateAgentSpaceRequest& WithTargetDomainIds(TargetDomainIdsT&& value) {
    SetTargetDomainIds(std::forward<TargetDomainIdsT>(value));
    return *this;
  }
  template <typename TargetDomainIdsT = Aws::String>
  CreateAgentSpaceRequest& AddTargetDomainIds(TargetDomainIdsT&& value) {
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
  CreateAgentSpaceRequest& WithCodeReviewSettings(CodeReviewSettingsT&& value) {
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
  CreateAgentSpaceRequest& WithKmsKeyId(KmsKeyIdT&& value) {
    SetKmsKeyId(std::forward<KmsKeyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Tags to associate with the agent space</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateAgentSpaceRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateAgentSpaceRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_description;

  AWSResources m_awsResources;

  Aws::Vector<Aws::String> m_targetDomainIds;

  CodeReviewSettings m_codeReviewSettings;

  Aws::String m_kmsKeyId;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_awsResourcesHasBeenSet = false;
  bool m_targetDomainIdsHasBeenSet = false;
  bool m_codeReviewSettingsHasBeenSet = false;
  bool m_kmsKeyIdHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
