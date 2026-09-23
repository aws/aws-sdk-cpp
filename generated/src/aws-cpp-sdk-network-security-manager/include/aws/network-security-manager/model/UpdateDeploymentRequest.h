/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-security-manager/NetworkSecurityManagerRequest.h>
#include <aws/network-security-manager/NetworkSecurityManager_EXPORTS.h>
#include <aws/network-security-manager/model/DeploymentConfiguration.h>
#include <aws/network-security-manager/model/PolicyReference.h>
#include <aws/network-security-manager/model/ScopeReference.h>

#include <utility>

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {

/**
 */
class UpdateDeploymentRequest : public NetworkSecurityManagerRequest {
 public:
  AWS_NETWORKSECURITYMANAGER_API UpdateDeploymentRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateDeployment"; }

  AWS_NETWORKSECURITYMANAGER_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The identifier of the deployment. This is the deployment's Amazon Resource
   * Name (ARN).</p>
   */
  inline const Aws::String& GetDeploymentIdentifier() const { return m_deploymentIdentifier; }
  inline bool DeploymentIdentifierHasBeenSet() const { return m_deploymentIdentifierHasBeenSet; }
  template <typename DeploymentIdentifierT = Aws::String>
  void SetDeploymentIdentifier(DeploymentIdentifierT&& value) {
    m_deploymentIdentifierHasBeenSet = true;
    m_deploymentIdentifier = std::forward<DeploymentIdentifierT>(value);
  }
  template <typename DeploymentIdentifierT = Aws::String>
  UpdateDeploymentRequest& WithDeploymentIdentifier(DeploymentIdentifierT&& value) {
    SetDeploymentIdentifier(std::forward<DeploymentIdentifierT>(value));
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
  UpdateDeploymentRequest& WithUpdateToken(UpdateTokenT&& value) {
    SetUpdateToken(std::forward<UpdateTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the deployment.</p>
   */
  inline const Aws::String& GetDeploymentDescription() const { return m_deploymentDescription; }
  inline bool DeploymentDescriptionHasBeenSet() const { return m_deploymentDescriptionHasBeenSet; }
  template <typename DeploymentDescriptionT = Aws::String>
  void SetDeploymentDescription(DeploymentDescriptionT&& value) {
    m_deploymentDescriptionHasBeenSet = true;
    m_deploymentDescription = std::forward<DeploymentDescriptionT>(value);
  }
  template <typename DeploymentDescriptionT = Aws::String>
  UpdateDeploymentRequest& WithDeploymentDescription(DeploymentDescriptionT&& value) {
    SetDeploymentDescription(std::forward<DeploymentDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration settings for the deployment.</p>
   */
  inline const DeploymentConfiguration& GetDeploymentConfiguration() const { return m_deploymentConfiguration; }
  inline bool DeploymentConfigurationHasBeenSet() const { return m_deploymentConfigurationHasBeenSet; }
  template <typename DeploymentConfigurationT = DeploymentConfiguration>
  void SetDeploymentConfiguration(DeploymentConfigurationT&& value) {
    m_deploymentConfigurationHasBeenSet = true;
    m_deploymentConfiguration = std::forward<DeploymentConfigurationT>(value);
  }
  template <typename DeploymentConfigurationT = DeploymentConfiguration>
  UpdateDeploymentRequest& WithDeploymentConfiguration(DeploymentConfigurationT&& value) {
    SetDeploymentConfiguration(std::forward<DeploymentConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The policies associated with the deployment.</p>
   */
  inline const Aws::Vector<PolicyReference>& GetAssociatedPolicyList() const { return m_associatedPolicyList; }
  inline bool AssociatedPolicyListHasBeenSet() const { return m_associatedPolicyListHasBeenSet; }
  template <typename AssociatedPolicyListT = Aws::Vector<PolicyReference>>
  void SetAssociatedPolicyList(AssociatedPolicyListT&& value) {
    m_associatedPolicyListHasBeenSet = true;
    m_associatedPolicyList = std::forward<AssociatedPolicyListT>(value);
  }
  template <typename AssociatedPolicyListT = Aws::Vector<PolicyReference>>
  UpdateDeploymentRequest& WithAssociatedPolicyList(AssociatedPolicyListT&& value) {
    SetAssociatedPolicyList(std::forward<AssociatedPolicyListT>(value));
    return *this;
  }
  template <typename AssociatedPolicyListT = PolicyReference>
  UpdateDeploymentRequest& AddAssociatedPolicyList(AssociatedPolicyListT&& value) {
    m_associatedPolicyListHasBeenSet = true;
    m_associatedPolicyList.emplace_back(std::forward<AssociatedPolicyListT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scope associated with the deployment. A deployment has exactly one
   * scope.</p>
   */
  inline const Aws::Vector<ScopeReference>& GetAssociatedScopeList() const { return m_associatedScopeList; }
  inline bool AssociatedScopeListHasBeenSet() const { return m_associatedScopeListHasBeenSet; }
  template <typename AssociatedScopeListT = Aws::Vector<ScopeReference>>
  void SetAssociatedScopeList(AssociatedScopeListT&& value) {
    m_associatedScopeListHasBeenSet = true;
    m_associatedScopeList = std::forward<AssociatedScopeListT>(value);
  }
  template <typename AssociatedScopeListT = Aws::Vector<ScopeReference>>
  UpdateDeploymentRequest& WithAssociatedScopeList(AssociatedScopeListT&& value) {
    SetAssociatedScopeList(std::forward<AssociatedScopeListT>(value));
    return *this;
  }
  template <typename AssociatedScopeListT = ScopeReference>
  UpdateDeploymentRequest& AddAssociatedScopeList(AssociatedScopeListT&& value) {
    m_associatedScopeListHasBeenSet = true;
    m_associatedScopeList.emplace_back(std::forward<AssociatedScopeListT>(value));
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
  inline UpdateDeploymentRequest& WithIsPublished(bool value) {
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
  UpdateDeploymentRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_deploymentIdentifier;

  Aws::String m_updateToken;

  Aws::String m_deploymentDescription;

  DeploymentConfiguration m_deploymentConfiguration;

  Aws::Vector<PolicyReference> m_associatedPolicyList;

  Aws::Vector<ScopeReference> m_associatedScopeList;

  bool m_isPublished{false};

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_deploymentIdentifierHasBeenSet = false;
  bool m_updateTokenHasBeenSet = false;
  bool m_deploymentDescriptionHasBeenSet = false;
  bool m_deploymentConfigurationHasBeenSet = false;
  bool m_associatedPolicyListHasBeenSet = false;
  bool m_associatedScopeListHasBeenSet = false;
  bool m_isPublishedHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
