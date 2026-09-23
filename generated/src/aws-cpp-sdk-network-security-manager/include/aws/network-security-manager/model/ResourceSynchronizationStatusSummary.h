/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-security-manager/NetworkSecurityManager_EXPORTS.h>
#include <aws/network-security-manager/model/OutOfSyncReasonsView.h>
#include <aws/network-security-manager/model/RemediationIssuesView.h>
#include <aws/network-security-manager/model/ResourceType.h>
#include <aws/network-security-manager/model/SynchronizationStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace NetworkSecurityManager {
namespace Model {

/**
 * <p>The synchronization status of a resource covered by a
 * deployment.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/ResourceSynchronizationStatusSummary">AWS
 * API Reference</a></p>
 */
class ResourceSynchronizationStatusSummary {
 public:
  AWS_NETWORKSECURITYMANAGER_API ResourceSynchronizationStatusSummary() = default;
  AWS_NETWORKSECURITYMANAGER_API ResourceSynchronizationStatusSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API ResourceSynchronizationStatusSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The synchronization status of the resource, such as <code>IN_SYNC</code> or
   * <code>OUT_OF_SYNC</code>.</p>
   */
  inline SynchronizationStatus GetSynchronizationStatus() const { return m_synchronizationStatus; }
  inline bool SynchronizationStatusHasBeenSet() const { return m_synchronizationStatusHasBeenSet; }
  inline void SetSynchronizationStatus(SynchronizationStatus value) {
    m_synchronizationStatusHasBeenSet = true;
    m_synchronizationStatus = value;
  }
  inline ResourceSynchronizationStatusSummary& WithSynchronizationStatus(SynchronizationStatus value) {
    SetSynchronizationStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS account ID that owns the resource.</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  ResourceSynchronizationStatusSummary& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the resource whose synchronization status is reported.</p>
   */
  inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
  inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
  template <typename ResourceArnT = Aws::String>
  void SetResourceArn(ResourceArnT&& value) {
    m_resourceArnHasBeenSet = true;
    m_resourceArn = std::forward<ResourceArnT>(value);
  }
  template <typename ResourceArnT = Aws::String>
  ResourceSynchronizationStatusSummary& WithResourceArn(ResourceArnT&& value) {
    SetResourceArn(std::forward<ResourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the deployment that the synchronization status is associated with.
   * This is absent for aggregate (cross-deployment) statuses.</p>
   */
  inline const Aws::String& GetDeploymentArn() const { return m_deploymentArn; }
  inline bool DeploymentArnHasBeenSet() const { return m_deploymentArnHasBeenSet; }
  template <typename DeploymentArnT = Aws::String>
  void SetDeploymentArn(DeploymentArnT&& value) {
    m_deploymentArnHasBeenSet = true;
    m_deploymentArn = std::forward<DeploymentArnT>(value);
  }
  template <typename DeploymentArnT = Aws::String>
  ResourceSynchronizationStatusSummary& WithDeploymentArn(DeploymentArnT&& value) {
    SetDeploymentArn(std::forward<DeploymentArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the resource, in AWS CloudFormation format.</p>
   */
  inline ResourceType GetResourceType() const { return m_resourceType; }
  inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
  inline void SetResourceType(ResourceType value) {
    m_resourceTypeHasBeenSet = true;
    m_resourceType = value;
  }
  inline ResourceSynchronizationStatusSummary& WithResourceType(ResourceType value) {
    SetResourceType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the resource was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  ResourceSynchronizationStatusSummary& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reasons the resource is out of sync, keyed by firewall type. This is null
   * when the resource is in sync.</p>
   */
  inline const OutOfSyncReasonsView& GetOutOfSyncReasons() const { return m_outOfSyncReasons; }
  inline bool OutOfSyncReasonsHasBeenSet() const { return m_outOfSyncReasonsHasBeenSet; }
  template <typename OutOfSyncReasonsT = OutOfSyncReasonsView>
  void SetOutOfSyncReasons(OutOfSyncReasonsT&& value) {
    m_outOfSyncReasonsHasBeenSet = true;
    m_outOfSyncReasons = std::forward<OutOfSyncReasonsT>(value);
  }
  template <typename OutOfSyncReasonsT = OutOfSyncReasonsView>
  ResourceSynchronizationStatusSummary& WithOutOfSyncReasons(OutOfSyncReasonsT&& value) {
    SetOutOfSyncReasons(std::forward<OutOfSyncReasonsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details about remediation issues, keyed by firewall type. This is null when
   * there are no remediation issues.</p>
   */
  inline const RemediationIssuesView& GetRemediationIssues() const { return m_remediationIssues; }
  inline bool RemediationIssuesHasBeenSet() const { return m_remediationIssuesHasBeenSet; }
  template <typename RemediationIssuesT = RemediationIssuesView>
  void SetRemediationIssues(RemediationIssuesT&& value) {
    m_remediationIssuesHasBeenSet = true;
    m_remediationIssues = std::forward<RemediationIssuesT>(value);
  }
  template <typename RemediationIssuesT = RemediationIssuesView>
  ResourceSynchronizationStatusSummary& WithRemediationIssues(RemediationIssuesT&& value) {
    SetRemediationIssues(std::forward<RemediationIssuesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the synchronization status was last evaluated.</p>
   */
  inline const Aws::Utils::DateTime& GetEvaluatedAt() const { return m_evaluatedAt; }
  inline bool EvaluatedAtHasBeenSet() const { return m_evaluatedAtHasBeenSet; }
  template <typename EvaluatedAtT = Aws::Utils::DateTime>
  void SetEvaluatedAt(EvaluatedAtT&& value) {
    m_evaluatedAtHasBeenSet = true;
    m_evaluatedAt = std::forward<EvaluatedAtT>(value);
  }
  template <typename EvaluatedAtT = Aws::Utils::DateTime>
  ResourceSynchronizationStatusSummary& WithEvaluatedAt(EvaluatedAtT&& value) {
    SetEvaluatedAt(std::forward<EvaluatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  SynchronizationStatus m_synchronizationStatus{SynchronizationStatus::NOT_SET};

  Aws::String m_accountId;

  Aws::String m_resourceArn;

  Aws::String m_deploymentArn;

  ResourceType m_resourceType{ResourceType::NOT_SET};

  Aws::Utils::DateTime m_updatedAt{};

  OutOfSyncReasonsView m_outOfSyncReasons;

  RemediationIssuesView m_remediationIssues;

  Aws::Utils::DateTime m_evaluatedAt{};
  bool m_synchronizationStatusHasBeenSet = false;
  bool m_accountIdHasBeenSet = false;
  bool m_resourceArnHasBeenSet = false;
  bool m_deploymentArnHasBeenSet = false;
  bool m_resourceTypeHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_outOfSyncReasonsHasBeenSet = false;
  bool m_remediationIssuesHasBeenSet = false;
  bool m_evaluatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
