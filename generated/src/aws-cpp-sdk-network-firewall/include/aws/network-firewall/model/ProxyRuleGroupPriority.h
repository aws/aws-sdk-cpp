/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace NetworkFirewall {
namespace Model {

/**
 * <p>Proxy rule group name and new desired position. </p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/ProxyRuleGroupPriority">AWS
 * API Reference</a></p>
 */
class ProxyRuleGroupPriority {
 public:
  AWS_NETWORKFIREWALL_API ProxyRuleGroupPriority() = default;
  AWS_NETWORKFIREWALL_API ProxyRuleGroupPriority(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_NETWORKFIREWALL_API ProxyRuleGroupPriority& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_NETWORKFIREWALL_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The descriptive name of the proxy rule group. You can't change the name of a
   * proxy rule group after you create it.</p>
   */
  inline const Aws::String& GetProxyRuleGroupName() const { return m_proxyRuleGroupName; }
  inline bool ProxyRuleGroupNameHasBeenSet() const { return m_proxyRuleGroupNameHasBeenSet; }
  template <typename ProxyRuleGroupNameT = Aws::String>
  void SetProxyRuleGroupName(ProxyRuleGroupNameT&& value) {
    m_proxyRuleGroupNameHasBeenSet = true;
    m_proxyRuleGroupName = std::forward<ProxyRuleGroupNameT>(value);
  }
  template <typename ProxyRuleGroupNameT = Aws::String>
  ProxyRuleGroupPriority& WithProxyRuleGroupName(ProxyRuleGroupNameT&& value) {
    SetProxyRuleGroupName(std::forward<ProxyRuleGroupNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Where to move a proxy rule group in a proxy configuration. </p>
   */
  inline int64_t GetNewPosition() const { return m_newPosition; }
  inline bool NewPositionHasBeenSet() const { return m_newPositionHasBeenSet; }
  inline void SetNewPosition(int64_t value) {
    m_newPositionHasBeenSet = true;
    m_newPosition = value;
  }
  inline ProxyRuleGroupPriority& WithNewPosition(int64_t value) {
    SetNewPosition(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_proxyRuleGroupName;

  int64_t m_newPosition{0};
  bool m_proxyRuleGroupNameHasBeenSet = false;
  bool m_newPositionHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
