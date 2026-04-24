/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace NetworkFirewall {
namespace Model {

/**
 * <p>Proxy rule name and new desired position. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/ProxyRulePriority">AWS
 * API Reference</a></p>
 */
class ProxyRulePriority {
 public:
  AWS_NETWORKFIREWALL_API ProxyRulePriority() = default;
  AWS_NETWORKFIREWALL_API ProxyRulePriority(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKFIREWALL_API ProxyRulePriority& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The descriptive name of the proxy rule. You can't change the name of a proxy
   * rule after you create it.</p>
   */
  inline const Aws::String& GetProxyRuleName() const { return m_proxyRuleName; }
  inline bool ProxyRuleNameHasBeenSet() const { return m_proxyRuleNameHasBeenSet; }
  template <typename ProxyRuleNameT = Aws::String>
  void SetProxyRuleName(ProxyRuleNameT&& value) {
    m_proxyRuleNameHasBeenSet = true;
    m_proxyRuleName = std::forward<ProxyRuleNameT>(value);
  }
  template <typename ProxyRuleNameT = Aws::String>
  ProxyRulePriority& WithProxyRuleName(ProxyRuleNameT&& value) {
    SetProxyRuleName(std::forward<ProxyRuleNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Where to move a proxy rule in a proxy rule group. </p>
   */
  inline int GetNewPosition() const { return m_newPosition; }
  inline bool NewPositionHasBeenSet() const { return m_newPositionHasBeenSet; }
  inline void SetNewPosition(int value) {
    m_newPositionHasBeenSet = true;
    m_newPosition = value;
  }
  inline ProxyRulePriority& WithNewPosition(int value) {
    SetNewPosition(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_proxyRuleName;

  int m_newPosition{0};
  bool m_proxyRuleNameHasBeenSet = false;
  bool m_newPositionHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
