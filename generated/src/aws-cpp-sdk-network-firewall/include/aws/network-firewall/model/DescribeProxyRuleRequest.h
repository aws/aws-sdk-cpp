/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/NetworkFirewallRequest.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>

#include <utility>

namespace Aws {
namespace NetworkFirewall {
namespace Model {

/**
 */
class DescribeProxyRuleRequest : public NetworkFirewallRequest {
 public:
  AWS_NETWORKFIREWALL_API DescribeProxyRuleRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribeProxyRule"; }

  AWS_NETWORKFIREWALL_API Aws::String SerializePayload() const override;

  AWS_NETWORKFIREWALL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

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
  DescribeProxyRuleRequest& WithProxyRuleName(ProxyRuleNameT&& value) {
    SetProxyRuleName(std::forward<ProxyRuleNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The descriptive name of the proxy rule group. You can't change the name of a
   * proxy rule group after you create it.</p> <p>You must specify the ARN or the
   * name, and you can specify both. </p>
   */
  inline const Aws::String& GetProxyRuleGroupName() const { return m_proxyRuleGroupName; }
  inline bool ProxyRuleGroupNameHasBeenSet() const { return m_proxyRuleGroupNameHasBeenSet; }
  template <typename ProxyRuleGroupNameT = Aws::String>
  void SetProxyRuleGroupName(ProxyRuleGroupNameT&& value) {
    m_proxyRuleGroupNameHasBeenSet = true;
    m_proxyRuleGroupName = std::forward<ProxyRuleGroupNameT>(value);
  }
  template <typename ProxyRuleGroupNameT = Aws::String>
  DescribeProxyRuleRequest& WithProxyRuleGroupName(ProxyRuleGroupNameT&& value) {
    SetProxyRuleGroupName(std::forward<ProxyRuleGroupNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of a proxy rule group.</p> <p>You must specify
   * the ARN or the name, and you can specify both. </p>
   */
  inline const Aws::String& GetProxyRuleGroupArn() const { return m_proxyRuleGroupArn; }
  inline bool ProxyRuleGroupArnHasBeenSet() const { return m_proxyRuleGroupArnHasBeenSet; }
  template <typename ProxyRuleGroupArnT = Aws::String>
  void SetProxyRuleGroupArn(ProxyRuleGroupArnT&& value) {
    m_proxyRuleGroupArnHasBeenSet = true;
    m_proxyRuleGroupArn = std::forward<ProxyRuleGroupArnT>(value);
  }
  template <typename ProxyRuleGroupArnT = Aws::String>
  DescribeProxyRuleRequest& WithProxyRuleGroupArn(ProxyRuleGroupArnT&& value) {
    SetProxyRuleGroupArn(std::forward<ProxyRuleGroupArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_proxyRuleName;

  Aws::String m_proxyRuleGroupName;

  Aws::String m_proxyRuleGroupArn;
  bool m_proxyRuleNameHasBeenSet = false;
  bool m_proxyRuleGroupNameHasBeenSet = false;
  bool m_proxyRuleGroupArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
