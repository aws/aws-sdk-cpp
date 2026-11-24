/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-security-manager/NetworkSecurityManager_EXPORTS.h>
#include <aws/network-security-manager/model/CoverageStatus.h>
#include <aws/network-security-manager/model/PolicyFirewallType.h>
#include <aws/network-security-manager/model/ScopeResourceType.h>
#include <aws/network-security-manager/model/ServiceResourceType.h>

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
 * <p>Describes how an AWS Network Security Manager entity covers a protected
 * resource.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/ResourceCoverageSummary">AWS
 * API Reference</a></p>
 */
class ResourceCoverageSummary {
 public:
  AWS_NETWORKSECURITYMANAGER_API ResourceCoverageSummary() = default;
  AWS_NETWORKSECURITYMANAGER_API ResourceCoverageSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API ResourceCoverageSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the protected resource.</p>
   */
  inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
  inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
  template <typename ResourceArnT = Aws::String>
  void SetResourceArn(ResourceArnT&& value) {
    m_resourceArnHasBeenSet = true;
    m_resourceArn = std::forward<ResourceArnT>(value);
  }
  template <typename ResourceArnT = Aws::String>
  ResourceCoverageSummary& WithResourceArn(ResourceArnT&& value) {
    SetResourceArn(std::forward<ResourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the entity that covers the resource, such as
   * <code>Policy</code>.</p>
   */
  inline ServiceResourceType GetEntityType() const { return m_entityType; }
  inline bool EntityTypeHasBeenSet() const { return m_entityTypeHasBeenSet; }
  inline void SetEntityType(ServiceResourceType value) {
    m_entityTypeHasBeenSet = true;
    m_entityType = value;
  }
  inline ResourceCoverageSummary& WithEntityType(ServiceResourceType value) {
    SetEntityType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the entity that covers the resource.</p>
   */
  inline const Aws::String& GetEntityArn() const { return m_entityArn; }
  inline bool EntityArnHasBeenSet() const { return m_entityArnHasBeenSet; }
  template <typename EntityArnT = Aws::String>
  void SetEntityArn(EntityArnT&& value) {
    m_entityArnHasBeenSet = true;
    m_entityArn = std::forward<EntityArnT>(value);
  }
  template <typename EntityArnT = Aws::String>
  ResourceCoverageSummary& WithEntityArn(EntityArnT&& value) {
    SetEntityArn(std::forward<EntityArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS account ID that owns the protected resource. This can differ from the
   * account that owns the entity.</p>
   */
  inline const Aws::String& GetResourceOwnerAccountId() const { return m_resourceOwnerAccountId; }
  inline bool ResourceOwnerAccountIdHasBeenSet() const { return m_resourceOwnerAccountIdHasBeenSet; }
  template <typename ResourceOwnerAccountIdT = Aws::String>
  void SetResourceOwnerAccountId(ResourceOwnerAccountIdT&& value) {
    m_resourceOwnerAccountIdHasBeenSet = true;
    m_resourceOwnerAccountId = std::forward<ResourceOwnerAccountIdT>(value);
  }
  template <typename ResourceOwnerAccountIdT = Aws::String>
  ResourceCoverageSummary& WithResourceOwnerAccountId(ResourceOwnerAccountIdT&& value) {
    SetResourceOwnerAccountId(std::forward<ResourceOwnerAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the protected resource, in AWS CloudFormation format.</p>
   */
  inline ScopeResourceType GetResourceType() const { return m_resourceType; }
  inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
  inline void SetResourceType(ScopeResourceType value) {
    m_resourceTypeHasBeenSet = true;
    m_resourceType = value;
  }
  inline ResourceCoverageSummary& WithResourceType(ScopeResourceType value) {
    SetResourceType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The firewall type of the policy that covers the resource. This is present
   * when <code>entityType</code> is <code>Policy</code>.</p>
   */
  inline PolicyFirewallType GetFirewallType() const { return m_firewallType; }
  inline bool FirewallTypeHasBeenSet() const { return m_firewallTypeHasBeenSet; }
  inline void SetFirewallType(PolicyFirewallType value) {
    m_firewallTypeHasBeenSet = true;
    m_firewallType = value;
  }
  inline ResourceCoverageSummary& WithFirewallType(PolicyFirewallType value) {
    SetFirewallType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the entity contributes to the effective configuration of
   * the resource for its firewall type. For firewall types that combine policies,
   * such as AWS WAF and AWS Shield Advanced, every policy that covers the resource
   * is <code>IN_EFFECT</code>. For firewall types that apply a single policy, only
   * the highest-priority policy is <code>IN_EFFECT</code> and the others are
   * <code>SUPERSEDED</code>.</p>
   */
  inline CoverageStatus GetCoverageStatus() const { return m_coverageStatus; }
  inline bool CoverageStatusHasBeenSet() const { return m_coverageStatusHasBeenSet; }
  inline void SetCoverageStatus(CoverageStatus value) {
    m_coverageStatusHasBeenSet = true;
    m_coverageStatus = value;
  }
  inline ResourceCoverageSummary& WithCoverageStatus(CoverageStatus value) {
    SetCoverageStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Names (ARNs) of the deployments through which the entity
   * covers the resource.</p>
   */
  inline const Aws::Vector<Aws::String>& GetDeploymentArns() const { return m_deploymentArns; }
  inline bool DeploymentArnsHasBeenSet() const { return m_deploymentArnsHasBeenSet; }
  template <typename DeploymentArnsT = Aws::Vector<Aws::String>>
  void SetDeploymentArns(DeploymentArnsT&& value) {
    m_deploymentArnsHasBeenSet = true;
    m_deploymentArns = std::forward<DeploymentArnsT>(value);
  }
  template <typename DeploymentArnsT = Aws::Vector<Aws::String>>
  ResourceCoverageSummary& WithDeploymentArns(DeploymentArnsT&& value) {
    SetDeploymentArns(std::forward<DeploymentArnsT>(value));
    return *this;
  }
  template <typename DeploymentArnsT = Aws::String>
  ResourceCoverageSummary& AddDeploymentArns(DeploymentArnsT&& value) {
    m_deploymentArnsHasBeenSet = true;
    m_deploymentArns.emplace_back(std::forward<DeploymentArnsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when AWS Network Security Manager last evaluated the coverage.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  ResourceCoverageSummary& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_resourceArn;

  ServiceResourceType m_entityType{ServiceResourceType::NOT_SET};

  Aws::String m_entityArn;

  Aws::String m_resourceOwnerAccountId;

  ScopeResourceType m_resourceType{ScopeResourceType::NOT_SET};

  PolicyFirewallType m_firewallType{PolicyFirewallType::NOT_SET};

  CoverageStatus m_coverageStatus{CoverageStatus::NOT_SET};

  Aws::Vector<Aws::String> m_deploymentArns;

  Aws::Utils::DateTime m_updatedAt{};
  bool m_resourceArnHasBeenSet = false;
  bool m_entityTypeHasBeenSet = false;
  bool m_entityArnHasBeenSet = false;
  bool m_resourceOwnerAccountIdHasBeenSet = false;
  bool m_resourceTypeHasBeenSet = false;
  bool m_firewallTypeHasBeenSet = false;
  bool m_coverageStatusHasBeenSet = false;
  bool m_deploymentArnsHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
