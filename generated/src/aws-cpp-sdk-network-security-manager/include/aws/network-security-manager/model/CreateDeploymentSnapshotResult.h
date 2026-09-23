/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-security-manager/NetworkSecurityManager_EXPORTS.h>
#include <aws/network-security-manager/model/AssociatedPolicy.h>
#include <aws/network-security-manager/model/AssociatedScope.h>
#include <aws/network-security-manager/model/DeploymentConfiguration.h>
#include <aws/network-security-manager/model/EntityStatus.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace NetworkSecurityManager {
namespace Model {
class CreateDeploymentSnapshotResult {
 public:
  AWS_NETWORKSECURITYMANAGER_API CreateDeploymentSnapshotResult() = default;
  AWS_NETWORKSECURITYMANAGER_API CreateDeploymentSnapshotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_NETWORKSECURITYMANAGER_API CreateDeploymentSnapshotResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The service-generated id of the deployment.</p>
   */
  inline const Aws::String& GetDeploymentId() const { return m_deploymentId; }
  template <typename DeploymentIdT = Aws::String>
  void SetDeploymentId(DeploymentIdT&& value) {
    m_deploymentIdHasBeenSet = true;
    m_deploymentId = std::forward<DeploymentIdT>(value);
  }
  template <typename DeploymentIdT = Aws::String>
  CreateDeploymentSnapshotResult& WithDeploymentId(DeploymentIdT&& value) {
    SetDeploymentId(std::forward<DeploymentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the deployment.</p>
   */
  inline const Aws::String& GetDeploymentArn() const { return m_deploymentArn; }
  template <typename DeploymentArnT = Aws::String>
  void SetDeploymentArn(DeploymentArnT&& value) {
    m_deploymentArnHasBeenSet = true;
    m_deploymentArn = std::forward<DeploymentArnT>(value);
  }
  template <typename DeploymentArnT = Aws::String>
  CreateDeploymentSnapshotResult& WithDeploymentArn(DeploymentArnT&& value) {
    SetDeploymentArn(std::forward<DeploymentArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the deployment.</p>
   */
  inline const Aws::String& GetDeploymentName() const { return m_deploymentName; }
  template <typename DeploymentNameT = Aws::String>
  void SetDeploymentName(DeploymentNameT&& value) {
    m_deploymentNameHasBeenSet = true;
    m_deploymentName = std::forward<DeploymentNameT>(value);
  }
  template <typename DeploymentNameT = Aws::String>
  CreateDeploymentSnapshotResult& WithDeploymentName(DeploymentNameT&& value) {
    SetDeploymentName(std::forward<DeploymentNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the deployment.</p>
   */
  inline const Aws::String& GetDeploymentDescription() const { return m_deploymentDescription; }
  template <typename DeploymentDescriptionT = Aws::String>
  void SetDeploymentDescription(DeploymentDescriptionT&& value) {
    m_deploymentDescriptionHasBeenSet = true;
    m_deploymentDescription = std::forward<DeploymentDescriptionT>(value);
  }
  template <typename DeploymentDescriptionT = Aws::String>
  CreateDeploymentSnapshotResult& WithDeploymentDescription(DeploymentDescriptionT&& value) {
    SetDeploymentDescription(std::forward<DeploymentDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the resource: <code>DRAFT</code> (unpublished,
   * editable) or <code>ACTIVE</code> (published, in use).</p>
   */
  inline EntityStatus GetStatus() const { return m_status; }
  inline void SetStatus(EntityStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline CreateDeploymentSnapshotResult& WithStatus(EntityStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration settings for the deployment.</p>
   */
  inline const DeploymentConfiguration& GetDeploymentConfiguration() const { return m_deploymentConfiguration; }
  template <typename DeploymentConfigurationT = DeploymentConfiguration>
  void SetDeploymentConfiguration(DeploymentConfigurationT&& value) {
    m_deploymentConfigurationHasBeenSet = true;
    m_deploymentConfiguration = std::forward<DeploymentConfigurationT>(value);
  }
  template <typename DeploymentConfigurationT = DeploymentConfiguration>
  CreateDeploymentSnapshotResult& WithDeploymentConfiguration(DeploymentConfigurationT&& value) {
    SetDeploymentConfiguration(std::forward<DeploymentConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The policies associated with the deployment.</p>
   */
  inline const Aws::Vector<AssociatedPolicy>& GetAssociatedPolicyList() const { return m_associatedPolicyList; }
  template <typename AssociatedPolicyListT = Aws::Vector<AssociatedPolicy>>
  void SetAssociatedPolicyList(AssociatedPolicyListT&& value) {
    m_associatedPolicyListHasBeenSet = true;
    m_associatedPolicyList = std::forward<AssociatedPolicyListT>(value);
  }
  template <typename AssociatedPolicyListT = Aws::Vector<AssociatedPolicy>>
  CreateDeploymentSnapshotResult& WithAssociatedPolicyList(AssociatedPolicyListT&& value) {
    SetAssociatedPolicyList(std::forward<AssociatedPolicyListT>(value));
    return *this;
  }
  template <typename AssociatedPolicyListT = AssociatedPolicy>
  CreateDeploymentSnapshotResult& AddAssociatedPolicyList(AssociatedPolicyListT&& value) {
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
  inline const Aws::Vector<AssociatedScope>& GetAssociatedScopeList() const { return m_associatedScopeList; }
  template <typename AssociatedScopeListT = Aws::Vector<AssociatedScope>>
  void SetAssociatedScopeList(AssociatedScopeListT&& value) {
    m_associatedScopeListHasBeenSet = true;
    m_associatedScopeList = std::forward<AssociatedScopeListT>(value);
  }
  template <typename AssociatedScopeListT = Aws::Vector<AssociatedScope>>
  CreateDeploymentSnapshotResult& WithAssociatedScopeList(AssociatedScopeListT&& value) {
    SetAssociatedScopeList(std::forward<AssociatedScopeListT>(value));
    return *this;
  }
  template <typename AssociatedScopeListT = AssociatedScope>
  CreateDeploymentSnapshotResult& AddAssociatedScopeList(AssociatedScopeListT&& value) {
    m_associatedScopeListHasBeenSet = true;
    m_associatedScopeList.emplace_back(std::forward<AssociatedScopeListT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the resource.</p>
   */
  inline const Aws::String& GetVersion() const { return m_version; }
  template <typename VersionT = Aws::String>
  void SetVersion(VersionT&& value) {
    m_versionHasBeenSet = true;
    m_version = std::forward<VersionT>(value);
  }
  template <typename VersionT = Aws::String>
  CreateDeploymentSnapshotResult& WithVersion(VersionT&& value) {
    SetVersion(std::forward<VersionT>(value));
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
  template <typename UpdateTokenT = Aws::String>
  void SetUpdateToken(UpdateTokenT&& value) {
    m_updateTokenHasBeenSet = true;
    m_updateToken = std::forward<UpdateTokenT>(value);
  }
  template <typename UpdateTokenT = Aws::String>
  CreateDeploymentSnapshotResult& WithUpdateToken(UpdateTokenT&& value) {
    SetUpdateToken(std::forward<UpdateTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the resource is a snapshot of a published version.</p>
   */
  inline bool GetIsSnapshot() const { return m_isSnapshot; }
  inline void SetIsSnapshot(bool value) {
    m_isSnapshotHasBeenSet = true;
    m_isSnapshot = value;
  }
  inline CreateDeploymentSnapshotResult& WithIsSnapshot(bool value) {
    SetIsSnapshot(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether a published version of the resource exists.</p>
   */
  inline bool GetHasPublishedVersion() const { return m_hasPublishedVersion; }
  inline void SetHasPublishedVersion(bool value) {
    m_hasPublishedVersionHasBeenSet = true;
    m_hasPublishedVersion = value;
  }
  inline CreateDeploymentSnapshotResult& WithHasPublishedVersion(bool value) {
    SetHasPublishedVersion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the snapshot was created.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  CreateDeploymentSnapshotResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
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
  CreateDeploymentSnapshotResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_deploymentId;

  Aws::String m_deploymentArn;

  Aws::String m_deploymentName;

  Aws::String m_deploymentDescription;

  EntityStatus m_status{EntityStatus::NOT_SET};

  DeploymentConfiguration m_deploymentConfiguration;

  Aws::Vector<AssociatedPolicy> m_associatedPolicyList;

  Aws::Vector<AssociatedScope> m_associatedScopeList;

  Aws::String m_version;

  Aws::String m_updateToken;

  bool m_isSnapshot{false};

  bool m_hasPublishedVersion{false};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_deploymentIdHasBeenSet = false;
  bool m_deploymentArnHasBeenSet = false;
  bool m_deploymentNameHasBeenSet = false;
  bool m_deploymentDescriptionHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_deploymentConfigurationHasBeenSet = false;
  bool m_associatedPolicyListHasBeenSet = false;
  bool m_associatedScopeListHasBeenSet = false;
  bool m_versionHasBeenSet = false;
  bool m_updateTokenHasBeenSet = false;
  bool m_isSnapshotHasBeenSet = false;
  bool m_hasPublishedVersionHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
