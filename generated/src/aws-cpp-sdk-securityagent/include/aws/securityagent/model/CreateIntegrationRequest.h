/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgentRequest.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/Provider.h>
#include <aws/securityagent/model/ProviderInput.h>

#include <utility>

namespace Aws {
namespace SecurityAgent {
namespace Model {

/**
 */
class CreateIntegrationRequest : public SecurityAgentRequest {
 public:
  AWS_SECURITYAGENT_API CreateIntegrationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateIntegration"; }

  AWS_SECURITYAGENT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The integration provider. Currently, only GITHUB is supported.</p>
   */
  inline Provider GetProvider() const { return m_provider; }
  inline bool ProviderHasBeenSet() const { return m_providerHasBeenSet; }
  inline void SetProvider(Provider value) {
    m_providerHasBeenSet = true;
    m_provider = value;
  }
  inline CreateIntegrationRequest& WithProvider(Provider value) {
    SetProvider(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The provider-specific input required to create the integration.</p>
   */
  inline const ProviderInput& GetInput() const { return m_input; }
  inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }
  template <typename InputT = ProviderInput>
  void SetInput(InputT&& value) {
    m_inputHasBeenSet = true;
    m_input = std::forward<InputT>(value);
  }
  template <typename InputT = ProviderInput>
  CreateIntegrationRequest& WithInput(InputT&& value) {
    SetInput(std::forward<InputT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display name for the integration.</p>
   */
  inline const Aws::String& GetIntegrationDisplayName() const { return m_integrationDisplayName; }
  inline bool IntegrationDisplayNameHasBeenSet() const { return m_integrationDisplayNameHasBeenSet; }
  template <typename IntegrationDisplayNameT = Aws::String>
  void SetIntegrationDisplayName(IntegrationDisplayNameT&& value) {
    m_integrationDisplayNameHasBeenSet = true;
    m_integrationDisplayName = std::forward<IntegrationDisplayNameT>(value);
  }
  template <typename IntegrationDisplayNameT = Aws::String>
  CreateIntegrationRequest& WithIntegrationDisplayName(IntegrationDisplayNameT&& value) {
    SetIntegrationDisplayName(std::forward<IntegrationDisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the AWS KMS key to use for encrypting data associated with
   * the integration.</p>
   */
  inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
  inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
  template <typename KmsKeyIdT = Aws::String>
  void SetKmsKeyId(KmsKeyIdT&& value) {
    m_kmsKeyIdHasBeenSet = true;
    m_kmsKeyId = std::forward<KmsKeyIdT>(value);
  }
  template <typename KmsKeyIdT = Aws::String>
  CreateIntegrationRequest& WithKmsKeyId(KmsKeyIdT&& value) {
    SetKmsKeyId(std::forward<KmsKeyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags to associate with the integration.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateIntegrationRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateIntegrationRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of an active private connection used to reach a self-hosted provider
   * instance over private networking. Specify this when the instance is not publicly
   * reachable.</p>
   */
  inline const Aws::String& GetPrivateConnectionName() const { return m_privateConnectionName; }
  inline bool PrivateConnectionNameHasBeenSet() const { return m_privateConnectionNameHasBeenSet; }
  template <typename PrivateConnectionNameT = Aws::String>
  void SetPrivateConnectionName(PrivateConnectionNameT&& value) {
    m_privateConnectionNameHasBeenSet = true;
    m_privateConnectionName = std::forward<PrivateConnectionNameT>(value);
  }
  template <typename PrivateConnectionNameT = Aws::String>
  CreateIntegrationRequest& WithPrivateConnectionName(PrivateConnectionNameT&& value) {
    SetPrivateConnectionName(std::forward<PrivateConnectionNameT>(value));
    return *this;
  }
  ///@}
 private:
  Provider m_provider{Provider::NOT_SET};

  ProviderInput m_input;

  Aws::String m_integrationDisplayName;

  Aws::String m_kmsKeyId;

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_privateConnectionName;
  bool m_providerHasBeenSet = false;
  bool m_inputHasBeenSet = false;
  bool m_integrationDisplayNameHasBeenSet = false;
  bool m_kmsKeyIdHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_privateConnectionNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
