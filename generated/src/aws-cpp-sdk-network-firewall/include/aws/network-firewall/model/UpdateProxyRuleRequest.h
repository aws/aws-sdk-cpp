/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-firewall/NetworkFirewallRequest.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/ProxyRuleCondition.h>
#include <aws/network-firewall/model/ProxyRulePhaseAction.h>

#include <utility>

namespace Aws {
namespace NetworkFirewall {
namespace Model {

/**
 */
class UpdateProxyRuleRequest : public NetworkFirewallRequest {
 public:
  AWS_NETWORKFIREWALL_API UpdateProxyRuleRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateProxyRule"; }

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
  UpdateProxyRuleRequest& WithProxyRuleGroupName(ProxyRuleGroupNameT&& value) {
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
  UpdateProxyRuleRequest& WithProxyRuleGroupArn(ProxyRuleGroupArnT&& value) {
    SetProxyRuleGroupArn(std::forward<ProxyRuleGroupArnT>(value));
    return *this;
  }
  ///@}

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
  UpdateProxyRuleRequest& WithProxyRuleName(ProxyRuleNameT&& value) {
    SetProxyRuleName(std::forward<ProxyRuleNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the proxy rule. </p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdateProxyRuleRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Depending on the match action, the proxy either stops the evaluation (if the
   * action is terminal - allow or deny), or continues it (if the action is alert)
   * until it matches a rule with a terminal action. </p>
   */
  inline ProxyRulePhaseAction GetAction() const { return m_action; }
  inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
  inline void SetAction(ProxyRulePhaseAction value) {
    m_actionHasBeenSet = true;
    m_action = value;
  }
  inline UpdateProxyRuleRequest& WithAction(ProxyRulePhaseAction value) {
    SetAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Proxy rule conditions to add. Match criteria that specify what traffic
   * attributes to examine. Conditions include operators (StringEquals, StringLike)
   * and values to match against. </p>
   */
  inline const Aws::Vector<ProxyRuleCondition>& GetAddConditions() const { return m_addConditions; }
  inline bool AddConditionsHasBeenSet() const { return m_addConditionsHasBeenSet; }
  template <typename AddConditionsT = Aws::Vector<ProxyRuleCondition>>
  void SetAddConditions(AddConditionsT&& value) {
    m_addConditionsHasBeenSet = true;
    m_addConditions = std::forward<AddConditionsT>(value);
  }
  template <typename AddConditionsT = Aws::Vector<ProxyRuleCondition>>
  UpdateProxyRuleRequest& WithAddConditions(AddConditionsT&& value) {
    SetAddConditions(std::forward<AddConditionsT>(value));
    return *this;
  }
  template <typename AddConditionsT = ProxyRuleCondition>
  UpdateProxyRuleRequest& AddAddConditions(AddConditionsT&& value) {
    m_addConditionsHasBeenSet = true;
    m_addConditions.emplace_back(std::forward<AddConditionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Proxy rule conditions to remove. Match criteria that specify what traffic
   * attributes to examine. Conditions include operators (StringEquals, StringLike)
   * and values to match against. </p>
   */
  inline const Aws::Vector<ProxyRuleCondition>& GetRemoveConditions() const { return m_removeConditions; }
  inline bool RemoveConditionsHasBeenSet() const { return m_removeConditionsHasBeenSet; }
  template <typename RemoveConditionsT = Aws::Vector<ProxyRuleCondition>>
  void SetRemoveConditions(RemoveConditionsT&& value) {
    m_removeConditionsHasBeenSet = true;
    m_removeConditions = std::forward<RemoveConditionsT>(value);
  }
  template <typename RemoveConditionsT = Aws::Vector<ProxyRuleCondition>>
  UpdateProxyRuleRequest& WithRemoveConditions(RemoveConditionsT&& value) {
    SetRemoveConditions(std::forward<RemoveConditionsT>(value));
    return *this;
  }
  template <typename RemoveConditionsT = ProxyRuleCondition>
  UpdateProxyRuleRequest& AddRemoveConditions(RemoveConditionsT&& value) {
    m_removeConditionsHasBeenSet = true;
    m_removeConditions.emplace_back(std::forward<RemoveConditionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A token used for optimistic locking. Network Firewall returns a token to your
   * requests that access the proxy rule. The token marks the state of the proxy rule
   * resource at the time of the request. </p> <p>To make changes to the proxy rule,
   * you provide the token in your request. Network Firewall uses the token to ensure
   * that the proxy rule hasn't changed since you last retrieved it. If it has
   * changed, the operation fails with an <code>InvalidTokenException</code>. If this
   * happens, retrieve the proxy rule again to get a current copy of it with a
   * current token. Reapply your changes as needed, then try the operation again
   * using the new token. </p>
   */
  inline const Aws::String& GetUpdateToken() const { return m_updateToken; }
  inline bool UpdateTokenHasBeenSet() const { return m_updateTokenHasBeenSet; }
  template <typename UpdateTokenT = Aws::String>
  void SetUpdateToken(UpdateTokenT&& value) {
    m_updateTokenHasBeenSet = true;
    m_updateToken = std::forward<UpdateTokenT>(value);
  }
  template <typename UpdateTokenT = Aws::String>
  UpdateProxyRuleRequest& WithUpdateToken(UpdateTokenT&& value) {
    SetUpdateToken(std::forward<UpdateTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_proxyRuleGroupName;
  bool m_proxyRuleGroupNameHasBeenSet = false;

  Aws::String m_proxyRuleGroupArn;
  bool m_proxyRuleGroupArnHasBeenSet = false;

  Aws::String m_proxyRuleName;
  bool m_proxyRuleNameHasBeenSet = false;

  Aws::String m_description;
  bool m_descriptionHasBeenSet = false;

  ProxyRulePhaseAction m_action{ProxyRulePhaseAction::NOT_SET};
  bool m_actionHasBeenSet = false;

  Aws::Vector<ProxyRuleCondition> m_addConditions;
  bool m_addConditionsHasBeenSet = false;

  Aws::Vector<ProxyRuleCondition> m_removeConditions;
  bool m_removeConditionsHasBeenSet = false;

  Aws::String m_updateToken;
  bool m_updateTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
