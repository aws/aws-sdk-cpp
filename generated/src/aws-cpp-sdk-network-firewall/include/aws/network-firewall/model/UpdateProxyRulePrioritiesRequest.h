/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-firewall/NetworkFirewallRequest.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/ProxyRulePriority.h>
#include <aws/network-firewall/model/RuleGroupRequestPhase.h>

#include <utility>

namespace Aws {
namespace NetworkFirewall {
namespace Model {

/**
 */
class UpdateProxyRulePrioritiesRequest : public NetworkFirewallRequest {
 public:
  AWS_NETWORKFIREWALL_API UpdateProxyRulePrioritiesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateProxyRulePriorities"; }

  AWS_NETWORKFIREWALL_API Aws::String SerializePayload() const override;

  AWS_NETWORKFIREWALL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

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
  UpdateProxyRulePrioritiesRequest& WithProxyRuleGroupName(ProxyRuleGroupNameT&& value) {
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
  UpdateProxyRulePrioritiesRequest& WithProxyRuleGroupArn(ProxyRuleGroupArnT&& value) {
    SetProxyRuleGroupArn(std::forward<ProxyRuleGroupArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Evaluation points in the traffic flow where rules are applied. There are
   * three phases in a traffic where the rule match is applied. </p>
   */
  inline RuleGroupRequestPhase GetRuleGroupRequestPhase() const { return m_ruleGroupRequestPhase; }
  inline bool RuleGroupRequestPhaseHasBeenSet() const { return m_ruleGroupRequestPhaseHasBeenSet; }
  inline void SetRuleGroupRequestPhase(RuleGroupRequestPhase value) {
    m_ruleGroupRequestPhaseHasBeenSet = true;
    m_ruleGroupRequestPhase = value;
  }
  inline UpdateProxyRulePrioritiesRequest& WithRuleGroupRequestPhase(RuleGroupRequestPhase value) {
    SetRuleGroupRequestPhase(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>proxy rule resources to update to new positions. </p>
   */
  inline const Aws::Vector<ProxyRulePriority>& GetRules() const { return m_rules; }
  inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }
  template <typename RulesT = Aws::Vector<ProxyRulePriority>>
  void SetRules(RulesT&& value) {
    m_rulesHasBeenSet = true;
    m_rules = std::forward<RulesT>(value);
  }
  template <typename RulesT = Aws::Vector<ProxyRulePriority>>
  UpdateProxyRulePrioritiesRequest& WithRules(RulesT&& value) {
    SetRules(std::forward<RulesT>(value));
    return *this;
  }
  template <typename RulesT = ProxyRulePriority>
  UpdateProxyRulePrioritiesRequest& AddRules(RulesT&& value) {
    m_rulesHasBeenSet = true;
    m_rules.emplace_back(std::forward<RulesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A token used for optimistic locking. Network Firewall returns a token to your
   * requests that access the proxy rule group. The token marks the state of the
   * proxy rule group resource at the time of the request. </p> <p>To make changes to
   * the proxy rule group, you provide the token in your request. Network Firewall
   * uses the token to ensure that the proxy rule group hasn't changed since you last
   * retrieved it. If it has changed, the operation fails with an
   * <code>InvalidTokenException</code>. If this happens, retrieve the proxy rule
   * group again to get a current copy of it with a current token. Reapply your
   * changes as needed, then try the operation again using the new token. </p>
   */
  inline const Aws::String& GetUpdateToken() const { return m_updateToken; }
  inline bool UpdateTokenHasBeenSet() const { return m_updateTokenHasBeenSet; }
  template <typename UpdateTokenT = Aws::String>
  void SetUpdateToken(UpdateTokenT&& value) {
    m_updateTokenHasBeenSet = true;
    m_updateToken = std::forward<UpdateTokenT>(value);
  }
  template <typename UpdateTokenT = Aws::String>
  UpdateProxyRulePrioritiesRequest& WithUpdateToken(UpdateTokenT&& value) {
    SetUpdateToken(std::forward<UpdateTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_proxyRuleGroupName;
  bool m_proxyRuleGroupNameHasBeenSet = false;

  Aws::String m_proxyRuleGroupArn;
  bool m_proxyRuleGroupArnHasBeenSet = false;

  RuleGroupRequestPhase m_ruleGroupRequestPhase{RuleGroupRequestPhase::NOT_SET};
  bool m_ruleGroupRequestPhaseHasBeenSet = false;

  Aws::Vector<ProxyRulePriority> m_rules;
  bool m_rulesHasBeenSet = false;

  Aws::String m_updateToken;
  bool m_updateTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
