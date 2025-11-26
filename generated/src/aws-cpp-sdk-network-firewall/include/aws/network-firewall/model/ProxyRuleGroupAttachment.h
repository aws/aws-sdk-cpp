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
 * <p>The proxy rule group(s) to attach to the proxy configuration</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/ProxyRuleGroupAttachment">AWS
 * API Reference</a></p>
 */
class ProxyRuleGroupAttachment {
 public:
  AWS_NETWORKFIREWALL_API ProxyRuleGroupAttachment() = default;
  AWS_NETWORKFIREWALL_API ProxyRuleGroupAttachment(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKFIREWALL_API ProxyRuleGroupAttachment& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;

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
  ProxyRuleGroupAttachment& WithProxyRuleGroupName(ProxyRuleGroupNameT&& value) {
    SetProxyRuleGroupName(std::forward<ProxyRuleGroupNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Where to insert a proxy rule group in a proxy configuration. </p>
   */
  inline int GetInsertPosition() const { return m_insertPosition; }
  inline bool InsertPositionHasBeenSet() const { return m_insertPositionHasBeenSet; }
  inline void SetInsertPosition(int value) {
    m_insertPositionHasBeenSet = true;
    m_insertPosition = value;
  }
  inline ProxyRuleGroupAttachment& WithInsertPosition(int value) {
    SetInsertPosition(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_proxyRuleGroupName;
  bool m_proxyRuleGroupNameHasBeenSet = false;

  int m_insertPosition{0};
  bool m_insertPositionHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
