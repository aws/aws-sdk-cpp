/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/network-security-manager/NetworkSecurityManager_EXPORTS.h>
#include <aws/network-security-manager/model/FirewallSyncReason.h>
#include <aws/network-security-manager/model/NotVisibleMarker.h>
#include <aws/network-security-manager/model/PolicyFirewallType.h>

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
 * <p>The out-of-sync reasons for a resource, or a marker indicating that the
 * details are not visible. Exactly one member is set.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/OutOfSyncReasonsView">AWS
 * API Reference</a></p>
 */
class OutOfSyncReasonsView {
 public:
  AWS_NETWORKSECURITYMANAGER_API OutOfSyncReasonsView() = default;
  AWS_NETWORKSECURITYMANAGER_API OutOfSyncReasonsView(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API OutOfSyncReasonsView& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The out-of-sync reasons, keyed by firewall type.</p>
   */
  inline const Aws::Map<PolicyFirewallType, FirewallSyncReason>& GetReasons() const { return m_reasons; }
  inline bool ReasonsHasBeenSet() const { return m_reasonsHasBeenSet; }
  template <typename ReasonsT = Aws::Map<PolicyFirewallType, FirewallSyncReason>>
  void SetReasons(ReasonsT&& value) {
    m_reasonsHasBeenSet = true;
    m_reasons = std::forward<ReasonsT>(value);
  }
  template <typename ReasonsT = Aws::Map<PolicyFirewallType, FirewallSyncReason>>
  OutOfSyncReasonsView& WithReasons(ReasonsT&& value) {
    SetReasons(std::forward<ReasonsT>(value));
    return *this;
  }
  inline OutOfSyncReasonsView& AddReasons(PolicyFirewallType key, FirewallSyncReason value) {
    m_reasonsHasBeenSet = true;
    m_reasons.emplace(key, value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates that the details are not visible because of cross-account
   * restrictions.</p>
   */
  inline const NotVisibleMarker& GetNotVisible() const { return m_notVisible; }
  inline bool NotVisibleHasBeenSet() const { return m_notVisibleHasBeenSet; }
  template <typename NotVisibleT = NotVisibleMarker>
  void SetNotVisible(NotVisibleT&& value) {
    m_notVisibleHasBeenSet = true;
    m_notVisible = std::forward<NotVisibleT>(value);
  }
  template <typename NotVisibleT = NotVisibleMarker>
  OutOfSyncReasonsView& WithNotVisible(NotVisibleT&& value) {
    SetNotVisible(std::forward<NotVisibleT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Map<PolicyFirewallType, FirewallSyncReason> m_reasons;

  NotVisibleMarker m_notVisible;
  bool m_reasonsHasBeenSet = false;
  bool m_notVisibleHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
