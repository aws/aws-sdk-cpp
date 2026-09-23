/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-security-manager/NetworkSecurityManager_EXPORTS.h>
#include <aws/network-security-manager/model/InvalidFirewallReasons.h>

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
 * <code>missingFirewall</code> or <code>invalidFirewall</code> is
 * set.</p><p><h3>See Also:</h3>   <a
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
 private:
  Aws::String m_missingFirewall;

  InvalidFirewallReasons m_invalidFirewall;
  bool m_missingFirewallHasBeenSet = false;
  bool m_invalidFirewallHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
