/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
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
class UpdateScopeRequest : public NetworkSecurityManagerRequest {
 public:
  AWS_NETWORKSECURITYMANAGER_API UpdateScopeRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateScope"; }

  AWS_NETWORKSECURITYMANAGER_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The identifier of the scope. This is the scope's Amazon Resource Name
   * (ARN).</p>
   */
  inline const Aws::String& GetScopeIdentifier() const { return m_scopeIdentifier; }
  inline bool ScopeIdentifierHasBeenSet() const { return m_scopeIdentifierHasBeenSet; }
  template <typename ScopeIdentifierT = Aws::String>
  void SetScopeIdentifier(ScopeIdentifierT&& value) {
    m_scopeIdentifierHasBeenSet = true;
    m_scopeIdentifier = std::forward<ScopeIdentifierT>(value);
  }
  template <typename ScopeIdentifierT = Aws::String>
  UpdateScopeRequest& WithScopeIdentifier(ScopeIdentifierT&& value) {
    SetScopeIdentifier(std::forward<ScopeIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A token used for optimistic concurrency control. Each read and write returns
   * an <code>updateToken</code>. Provide the most recent value on your next update
   * to detect and prevent conflicting concurrent modifications.</p>
   */
  inline const Aws::String& GetUpdateToken() const { return m_updateToken; }
  inline bool UpdateTokenHasBeenSet() const { return m_updateTokenHasBeenSet; }
  template <typename UpdateTokenT = Aws::String>
  void SetUpdateToken(UpdateTokenT&& value) {
    m_updateTokenHasBeenSet = true;
    m_updateToken = std::forward<UpdateTokenT>(value);
  }
  template <typename UpdateTokenT = Aws::String>
  UpdateScopeRequest& WithUpdateToken(UpdateTokenT&& value) {
    SetUpdateToken(std::forward<UpdateTokenT>(value));
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
  UpdateScopeRequest& WithScopeDescription(ScopeDescriptionT&& value) {
    SetScopeDescription(std::forward<ScopeDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration that defines which accounts and resources are in scope. If
   * you don't include this member, the scope keeps its existing configuration.</p>
   * <p>A new configuration can change which accounts and resources are selected, but
   * it can't add or remove the account filter itself: a scope created for
   * multi-account use stays multi-account, and a scope created for single-account
   * use stays single-account.</p>
   */
  inline const ScopeConfiguration& GetScopeConfiguration() const { return m_scopeConfiguration; }
  inline bool ScopeConfigurationHasBeenSet() const { return m_scopeConfigurationHasBeenSet; }
  template <typename ScopeConfigurationT = ScopeConfiguration>
  void SetScopeConfiguration(ScopeConfigurationT&& value) {
    m_scopeConfigurationHasBeenSet = true;
    m_scopeConfiguration = std::forward<ScopeConfigurationT>(value);
  }
  template <typename ScopeConfigurationT = ScopeConfiguration>
  UpdateScopeRequest& WithScopeConfiguration(ScopeConfigurationT&& value) {
    SetScopeConfiguration(std::forward<ScopeConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to publish the resource. When <code>true</code>, the
   * resource is saved in published (<code>ACTIVE</code>) state. When
   * <code>false</code>, it is saved as a draft (<code>DRAFT</code>).</p>
   */
  inline bool GetIsPublished() const { return m_isPublished; }
  inline bool IsPublishedHasBeenSet() const { return m_isPublishedHasBeenSet; }
  inline void SetIsPublished(bool value) {
    m_isPublishedHasBeenSet = true;
    m_isPublished = value;
  }
  inline UpdateScopeRequest& WithIsPublished(bool value) {
    SetIsPublished(value);
    return *this;
  }
  ///@}

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
  UpdateScopeRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_scopeIdentifier;

  Aws::String m_updateToken;

  Aws::String m_scopeDescription;

  ScopeConfiguration m_scopeConfiguration;

  bool m_isPublished{false};

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_scopeIdentifierHasBeenSet = false;
  bool m_updateTokenHasBeenSet = false;
  bool m_scopeDescriptionHasBeenSet = false;
  bool m_scopeConfigurationHasBeenSet = false;
  bool m_isPublishedHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
