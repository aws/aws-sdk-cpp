/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/ProxyRuleCondition.h>
#include <aws/network-firewall/model/ProxyRulePhaseAction.h>

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
 * <p>Individual rules that define match conditions and actions for
 * application-layer traffic. Rules specify what to inspect (domains, headers,
 * methods) and what action to take (allow, deny, alert). </p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/ProxyRule">AWS
 * API Reference</a></p>
 */
class ProxyRule {
 public:
  AWS_NETWORKFIREWALL_API ProxyRule() = default;
  AWS_NETWORKFIREWALL_API ProxyRule(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKFIREWALL_API ProxyRule& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  ProxyRule& WithProxyRuleName(ProxyRuleNameT&& value) {
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
  ProxyRule& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Action to take. </p>
   */
  inline ProxyRulePhaseAction GetAction() const { return m_action; }
  inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
  inline void SetAction(ProxyRulePhaseAction value) {
    m_actionHasBeenSet = true;
    m_action = value;
  }
  inline ProxyRule& WithAction(ProxyRulePhaseAction value) {
    SetAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Match criteria that specify what traffic attributes to examine. Conditions
   * include operators (StringEquals, StringLike) and values to match against. </p>
   */
  inline const Aws::Vector<ProxyRuleCondition>& GetConditions() const { return m_conditions; }
  inline bool ConditionsHasBeenSet() const { return m_conditionsHasBeenSet; }
  template <typename ConditionsT = Aws::Vector<ProxyRuleCondition>>
  void SetConditions(ConditionsT&& value) {
    m_conditionsHasBeenSet = true;
    m_conditions = std::forward<ConditionsT>(value);
  }
  template <typename ConditionsT = Aws::Vector<ProxyRuleCondition>>
  ProxyRule& WithConditions(ConditionsT&& value) {
    SetConditions(std::forward<ConditionsT>(value));
    return *this;
  }
  template <typename ConditionsT = ProxyRuleCondition>
  ProxyRule& AddConditions(ConditionsT&& value) {
    m_conditionsHasBeenSet = true;
    m_conditions.emplace_back(std::forward<ConditionsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_proxyRuleName;
  bool m_proxyRuleNameHasBeenSet = false;

  Aws::String m_description;
  bool m_descriptionHasBeenSet = false;

  ProxyRulePhaseAction m_action{ProxyRulePhaseAction::NOT_SET};
  bool m_actionHasBeenSet = false;

  Aws::Vector<ProxyRuleCondition> m_conditions;
  bool m_conditionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
