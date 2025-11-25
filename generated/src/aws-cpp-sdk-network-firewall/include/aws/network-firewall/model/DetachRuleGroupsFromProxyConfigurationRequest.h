/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-firewall/NetworkFirewallRequest.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>

#include <utility>

namespace Aws {
namespace NetworkFirewall {
namespace Model {

/**
 */
class DetachRuleGroupsFromProxyConfigurationRequest : public NetworkFirewallRequest {
 public:
  AWS_NETWORKFIREWALL_API DetachRuleGroupsFromProxyConfigurationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DetachRuleGroupsFromProxyConfiguration"; }

  AWS_NETWORKFIREWALL_API Aws::String SerializePayload() const override;

  AWS_NETWORKFIREWALL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The descriptive name of the proxy configuration. You can't change the name of
   * a proxy configuration after you create it.</p> <p>You must specify the ARN or
   * the name, and you can specify both. </p>
   */
  inline const Aws::String& GetProxyConfigurationName() const { return m_proxyConfigurationName; }
  inline bool ProxyConfigurationNameHasBeenSet() const { return m_proxyConfigurationNameHasBeenSet; }
  template <typename ProxyConfigurationNameT = Aws::String>
  void SetProxyConfigurationName(ProxyConfigurationNameT&& value) {
    m_proxyConfigurationNameHasBeenSet = true;
    m_proxyConfigurationName = std::forward<ProxyConfigurationNameT>(value);
  }
  template <typename ProxyConfigurationNameT = Aws::String>
  DetachRuleGroupsFromProxyConfigurationRequest& WithProxyConfigurationName(ProxyConfigurationNameT&& value) {
    SetProxyConfigurationName(std::forward<ProxyConfigurationNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of a proxy configuration.</p> <p>You must
   * specify the ARN or the name, and you can specify both. </p>
   */
  inline const Aws::String& GetProxyConfigurationArn() const { return m_proxyConfigurationArn; }
  inline bool ProxyConfigurationArnHasBeenSet() const { return m_proxyConfigurationArnHasBeenSet; }
  template <typename ProxyConfigurationArnT = Aws::String>
  void SetProxyConfigurationArn(ProxyConfigurationArnT&& value) {
    m_proxyConfigurationArnHasBeenSet = true;
    m_proxyConfigurationArn = std::forward<ProxyConfigurationArnT>(value);
  }
  template <typename ProxyConfigurationArnT = Aws::String>
  DetachRuleGroupsFromProxyConfigurationRequest& WithProxyConfigurationArn(ProxyConfigurationArnT&& value) {
    SetProxyConfigurationArn(std::forward<ProxyConfigurationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The proxy rule group names to detach from the proxy configuration</p>
   */
  inline const Aws::Vector<Aws::String>& GetRuleGroupNames() const { return m_ruleGroupNames; }
  inline bool RuleGroupNamesHasBeenSet() const { return m_ruleGroupNamesHasBeenSet; }
  template <typename RuleGroupNamesT = Aws::Vector<Aws::String>>
  void SetRuleGroupNames(RuleGroupNamesT&& value) {
    m_ruleGroupNamesHasBeenSet = true;
    m_ruleGroupNames = std::forward<RuleGroupNamesT>(value);
  }
  template <typename RuleGroupNamesT = Aws::Vector<Aws::String>>
  DetachRuleGroupsFromProxyConfigurationRequest& WithRuleGroupNames(RuleGroupNamesT&& value) {
    SetRuleGroupNames(std::forward<RuleGroupNamesT>(value));
    return *this;
  }
  template <typename RuleGroupNamesT = Aws::String>
  DetachRuleGroupsFromProxyConfigurationRequest& AddRuleGroupNames(RuleGroupNamesT&& value) {
    m_ruleGroupNamesHasBeenSet = true;
    m_ruleGroupNames.emplace_back(std::forward<RuleGroupNamesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The proxy rule group arns to detach from the proxy configuration</p>
   */
  inline const Aws::Vector<Aws::String>& GetRuleGroupArns() const { return m_ruleGroupArns; }
  inline bool RuleGroupArnsHasBeenSet() const { return m_ruleGroupArnsHasBeenSet; }
  template <typename RuleGroupArnsT = Aws::Vector<Aws::String>>
  void SetRuleGroupArns(RuleGroupArnsT&& value) {
    m_ruleGroupArnsHasBeenSet = true;
    m_ruleGroupArns = std::forward<RuleGroupArnsT>(value);
  }
  template <typename RuleGroupArnsT = Aws::Vector<Aws::String>>
  DetachRuleGroupsFromProxyConfigurationRequest& WithRuleGroupArns(RuleGroupArnsT&& value) {
    SetRuleGroupArns(std::forward<RuleGroupArnsT>(value));
    return *this;
  }
  template <typename RuleGroupArnsT = Aws::String>
  DetachRuleGroupsFromProxyConfigurationRequest& AddRuleGroupArns(RuleGroupArnsT&& value) {
    m_ruleGroupArnsHasBeenSet = true;
    m_ruleGroupArns.emplace_back(std::forward<RuleGroupArnsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A token used for optimistic locking. Network Firewall returns a token to your
   * requests that access the proxy configuration. The token marks the state of the
   * proxy configuration resource at the time of the request. </p> <p>To make changes
   * to the proxy configuration, you provide the token in your request. Network
   * Firewall uses the token to ensure that the proxy configuration hasn't changed
   * since you last retrieved it. If it has changed, the operation fails with an
   * <code>InvalidTokenException</code>. If this happens, retrieve the proxy
   * configuration again to get a current copy of it with a current token. Reapply
   * your changes as needed, then try the operation again using the new token. </p>
   */
  inline const Aws::String& GetUpdateToken() const { return m_updateToken; }
  inline bool UpdateTokenHasBeenSet() const { return m_updateTokenHasBeenSet; }
  template <typename UpdateTokenT = Aws::String>
  void SetUpdateToken(UpdateTokenT&& value) {
    m_updateTokenHasBeenSet = true;
    m_updateToken = std::forward<UpdateTokenT>(value);
  }
  template <typename UpdateTokenT = Aws::String>
  DetachRuleGroupsFromProxyConfigurationRequest& WithUpdateToken(UpdateTokenT&& value) {
    SetUpdateToken(std::forward<UpdateTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_proxyConfigurationName;
  bool m_proxyConfigurationNameHasBeenSet = false;

  Aws::String m_proxyConfigurationArn;
  bool m_proxyConfigurationArnHasBeenSet = false;

  Aws::Vector<Aws::String> m_ruleGroupNames;
  bool m_ruleGroupNamesHasBeenSet = false;

  Aws::Vector<Aws::String> m_ruleGroupArns;
  bool m_ruleGroupArnsHasBeenSet = false;

  Aws::String m_updateToken;
  bool m_updateTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
