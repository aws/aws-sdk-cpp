/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-security-manager/NetworkSecurityManager_EXPORTS.h>
#include <aws/network-security-manager/model/PolicyFirewallType.h>
#include <aws/network-security-manager/model/ScopeResourceType.h>

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
 * <p>Coverage information for one firewall type within a deployment. It lists the
 * deployment's policies that have this firewall type. It also lists the resource
 * types in the deployment's scope that the firewall type protects.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/DeploymentCoverageEntry">AWS
 * API Reference</a></p>
 */
class DeploymentCoverageEntry {
 public:
  AWS_NETWORKSECURITYMANAGER_API DeploymentCoverageEntry() = default;
  AWS_NETWORKSECURITYMANAGER_API DeploymentCoverageEntry(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API DeploymentCoverageEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The firewall type that the policies in this entry share.</p>
   */
  inline PolicyFirewallType GetFirewallType() const { return m_firewallType; }
  inline bool FirewallTypeHasBeenSet() const { return m_firewallTypeHasBeenSet; }
  inline void SetFirewallType(PolicyFirewallType value) {
    m_firewallTypeHasBeenSet = true;
    m_firewallType = value;
  }
  inline DeploymentCoverageEntry& WithFirewallType(PolicyFirewallType value) {
    SetFirewallType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Names (ARNs) of the deployment's policies that have this
   * firewall type.</p>
   */
  inline const Aws::Vector<Aws::String>& GetPolicyArns() const { return m_policyArns; }
  inline bool PolicyArnsHasBeenSet() const { return m_policyArnsHasBeenSet; }
  template <typename PolicyArnsT = Aws::Vector<Aws::String>>
  void SetPolicyArns(PolicyArnsT&& value) {
    m_policyArnsHasBeenSet = true;
    m_policyArns = std::forward<PolicyArnsT>(value);
  }
  template <typename PolicyArnsT = Aws::Vector<Aws::String>>
  DeploymentCoverageEntry& WithPolicyArns(PolicyArnsT&& value) {
    SetPolicyArns(std::forward<PolicyArnsT>(value));
    return *this;
  }
  template <typename PolicyArnsT = Aws::String>
  DeploymentCoverageEntry& AddPolicyArns(PolicyArnsT&& value) {
    m_policyArnsHasBeenSet = true;
    m_policyArns.emplace_back(std::forward<PolicyArnsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The resource types in the deployment's scope that this firewall type
   * protects. This list is empty if the scope does not select any resource types
   * that the firewall type protects.</p>
   */
  inline const Aws::Vector<ScopeResourceType>& GetInScopeResourceTypes() const { return m_inScopeResourceTypes; }
  inline bool InScopeResourceTypesHasBeenSet() const { return m_inScopeResourceTypesHasBeenSet; }
  template <typename InScopeResourceTypesT = Aws::Vector<ScopeResourceType>>
  void SetInScopeResourceTypes(InScopeResourceTypesT&& value) {
    m_inScopeResourceTypesHasBeenSet = true;
    m_inScopeResourceTypes = std::forward<InScopeResourceTypesT>(value);
  }
  template <typename InScopeResourceTypesT = Aws::Vector<ScopeResourceType>>
  DeploymentCoverageEntry& WithInScopeResourceTypes(InScopeResourceTypesT&& value) {
    SetInScopeResourceTypes(std::forward<InScopeResourceTypesT>(value));
    return *this;
  }
  inline DeploymentCoverageEntry& AddInScopeResourceTypes(ScopeResourceType value) {
    m_inScopeResourceTypesHasBeenSet = true;
    m_inScopeResourceTypes.push_back(value);
    return *this;
  }
  ///@}
 private:
  PolicyFirewallType m_firewallType{PolicyFirewallType::NOT_SET};

  Aws::Vector<Aws::String> m_policyArns;

  Aws::Vector<ScopeResourceType> m_inScopeResourceTypes;
  bool m_firewallTypeHasBeenSet = false;
  bool m_policyArnsHasBeenSet = false;
  bool m_inScopeResourceTypesHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
