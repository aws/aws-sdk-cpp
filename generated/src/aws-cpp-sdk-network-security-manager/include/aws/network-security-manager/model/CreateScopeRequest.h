/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-security-manager/NetworkSecurityManagerRequest.h>
#include <aws/network-security-manager/NetworkSecurityManager_EXPORTS.h>
#include <aws/network-security-manager/model/ScopeConfiguration.h>

#include <utility>

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {

/**
 */
class CreateScopeRequest : public NetworkSecurityManagerRequest {
 public:
  AWS_NETWORKSECURITYMANAGER_API CreateScopeRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateScope"; }

  AWS_NETWORKSECURITYMANAGER_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>A unique, case-sensitive token that you provide to ensure that the operation
   * completes no more than one time. If you retry a request with the same client
   * token and the same parameters, the service returns the result of the original
   * successful request.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateScopeRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the scope.</p>
   */
  inline const Aws::String& GetScopeName() const { return m_scopeName; }
  inline bool ScopeNameHasBeenSet() const { return m_scopeNameHasBeenSet; }
  template <typename ScopeNameT = Aws::String>
  void SetScopeName(ScopeNameT&& value) {
    m_scopeNameHasBeenSet = true;
    m_scopeName = std::forward<ScopeNameT>(value);
  }
  template <typename ScopeNameT = Aws::String>
  CreateScopeRequest& WithScopeName(ScopeNameT&& value) {
    SetScopeName(std::forward<ScopeNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the scope.</p>
   */
  inline const Aws::String& GetScopeDescription() const { return m_scopeDescription; }
  inline bool ScopeDescriptionHasBeenSet() const { return m_scopeDescriptionHasBeenSet; }
  template <typename ScopeDescriptionT = Aws::String>
  void SetScopeDescription(ScopeDescriptionT&& value) {
    m_scopeDescriptionHasBeenSet = true;
    m_scopeDescription = std::forward<ScopeDescriptionT>(value);
  }
  template <typename ScopeDescriptionT = Aws::String>
  CreateScopeRequest& WithScopeDescription(ScopeDescriptionT&& value) {
    SetScopeDescription(std::forward<ScopeDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration that defines which accounts and resources are in scope.</p>
   */
  inline const ScopeConfiguration& GetScopeConfiguration() const { return m_scopeConfiguration; }
  inline bool ScopeConfigurationHasBeenSet() const { return m_scopeConfigurationHasBeenSet; }
  template <typename ScopeConfigurationT = ScopeConfiguration>
  void SetScopeConfiguration(ScopeConfigurationT&& value) {
    m_scopeConfigurationHasBeenSet = true;
    m_scopeConfiguration = std::forward<ScopeConfigurationT>(value);
  }
  template <typename ScopeConfigurationT = ScopeConfiguration>
  CreateScopeRequest& WithScopeConfiguration(ScopeConfigurationT&& value) {
    SetScopeConfiguration(std::forward<ScopeConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to publish the resource. When <code>true</code>, the
   * resource is saved in published (<code>ACTIVE</code>) state. When
   * <code>false</code>, it is saved as a draft (<code>DRAFT</code>). Default:
   * <code>true</code>.</p>
   */
  inline bool GetIsPublished() const { return m_isPublished; }
  inline bool IsPublishedHasBeenSet() const { return m_isPublishedHasBeenSet; }
  inline void SetIsPublished(bool value) {
    m_isPublishedHasBeenSet = true;
    m_isPublished = value;
  }
  inline CreateScopeRequest& WithIsPublished(bool value) {
    SetIsPublished(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags to add to the resource when it is created.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateScopeRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateScopeRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_scopeName;

  Aws::String m_scopeDescription;

  ScopeConfiguration m_scopeConfiguration;

  bool m_isPublished{false};

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_clientTokenHasBeenSet = true;
  bool m_scopeNameHasBeenSet = false;
  bool m_scopeDescriptionHasBeenSet = false;
  bool m_scopeConfigurationHasBeenSet = false;
  bool m_isPublishedHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
