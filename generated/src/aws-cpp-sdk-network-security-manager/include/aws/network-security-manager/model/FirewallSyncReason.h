/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-security-manager/NetworkSecurityManager_EXPORTS.h>
#include <aws/network-security-manager/model/InvalidFirewallReasons.h>
#include <aws/network-security-manager/model/InvalidResourceIssue.h>
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
 * <p>Describes why a firewall is out of sync. Exactly one of
 * <code>missingFirewall</code>, <code>invalidFirewall</code>, or
 * <code>invalidResource</code> contains a value.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/FirewallSyncReason">AWS
 * API Reference</a></p>
 */
class FirewallSyncReason {
 public:
  AWS_NETWORKSECURITYMANAGER_API FirewallSyncReason() = default;
  AWS_NETWORKSECURITYMANAGER_API FirewallSyncReason(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API FirewallSyncReason& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Indicates that an expected firewall is missing. The value describes the
   * missing firewall.</p>
   */
  inline const Aws::String& GetMissingFirewall() const { return m_missingFirewall; }
  inline bool MissingFirewallHasBeenSet() const { return m_missingFirewallHasBeenSet; }
  template <typename MissingFirewallT = Aws::String>
  void SetMissingFirewall(MissingFirewallT&& value) {
    m_missingFirewallHasBeenSet = true;
    m_missingFirewall = std::forward<MissingFirewallT>(value);
  }
  template <typename MissingFirewallT = Aws::String>
  FirewallSyncReason& WithMissingFirewall(MissingFirewallT&& value) {
    SetMissingFirewall(std::forward<MissingFirewallT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details about a firewall whose configuration does not match the intended
   * configuration.</p>
   */
  inline const InvalidFirewallReasons& GetInvalidFirewall() const { return m_invalidFirewall; }
  inline bool InvalidFirewallHasBeenSet() const { return m_invalidFirewallHasBeenSet; }
  template <typename InvalidFirewallT = InvalidFirewallReasons>
  void SetInvalidFirewall(InvalidFirewallT&& value) {
    m_invalidFirewallHasBeenSet = true;
    m_invalidFirewall = std::forward<InvalidFirewallT>(value);
  }
  template <typename InvalidFirewallT = InvalidFirewallReasons>
  FirewallSyncReason& WithInvalidFirewall(InvalidFirewallT&& value) {
    SetInvalidFirewall(std::forward<InvalidFirewallT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of related resources whose configuration does not match the intended
   * configuration, grouped by resource type. Each entry lists the resources of that
   * type that are out of sync. For example, subnets whose connectivity type differs
   * from the connectivity type that the policy specifies.</p>
   */
  inline const Aws::Map<ScopeResourceType, Aws::Vector<InvalidResourceIssue>>& GetInvalidResource() const { return m_invalidResource; }
  inline bool InvalidResourceHasBeenSet() const { return m_invalidResourceHasBeenSet; }
  template <typename InvalidResourceT = Aws::Map<ScopeResourceType, Aws::Vector<InvalidResourceIssue>>>
  void SetInvalidResource(InvalidResourceT&& value) {
    m_invalidResourceHasBeenSet = true;
    m_invalidResource = std::forward<InvalidResourceT>(value);
  }
  template <typename InvalidResourceT = Aws::Map<ScopeResourceType, Aws::Vector<InvalidResourceIssue>>>
  FirewallSyncReason& WithInvalidResource(InvalidResourceT&& value) {
    SetInvalidResource(std::forward<InvalidResourceT>(value));
    return *this;
  }
  inline FirewallSyncReason& AddInvalidResource(ScopeResourceType key, Aws::Vector<InvalidResourceIssue> value) {
    m_invalidResourceHasBeenSet = true;
    m_invalidResource.emplace(key, value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_missingFirewall;

  InvalidFirewallReasons m_invalidFirewall;

  Aws::Map<ScopeResourceType, Aws::Vector<InvalidResourceIssue>> m_invalidResource;
  bool m_missingFirewallHasBeenSet = false;
  bool m_invalidFirewallHasBeenSet = false;
  bool m_invalidResourceHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
