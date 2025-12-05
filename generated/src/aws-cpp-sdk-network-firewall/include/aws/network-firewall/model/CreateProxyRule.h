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
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/CreateProxyRule">AWS
 * API Reference</a></p>
 */
class CreateProxyRule {
 public:
  AWS_NETWORKFIREWALL_API CreateProxyRule() = default;
  AWS_NETWORKFIREWALL_API CreateProxyRule(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKFIREWALL_API CreateProxyRule& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  CreateProxyRule& WithProxyRuleName(ProxyRuleNameT&& value) {
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
  CreateProxyRule& WithDescription(DescriptionT&& value) {
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
  inline CreateProxyRule& WithAction(ProxyRulePhaseAction value) {
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
  CreateProxyRule& WithConditions(ConditionsT&& value) {
    SetConditions(std::forward<ConditionsT>(value));
    return *this;
  }
  template <typename ConditionsT = ProxyRuleCondition>
  CreateProxyRule& AddConditions(ConditionsT&& value) {
    m_conditionsHasBeenSet = true;
    m_conditions.emplace_back(std::forward<ConditionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Where to insert a proxy rule in a proxy rule group. </p>
   */
  inline int GetInsertPosition() const { return m_insertPosition; }
  inline bool InsertPositionHasBeenSet() const { return m_insertPositionHasBeenSet; }
  inline void SetInsertPosition(int value) {
    m_insertPositionHasBeenSet = true;
    m_insertPosition = value;
  }
  inline CreateProxyRule& WithInsertPosition(int value) {
    SetInsertPosition(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_proxyRuleName;

  Aws::String m_description;

  ProxyRulePhaseAction m_action{ProxyRulePhaseAction::NOT_SET};

  Aws::Vector<ProxyRuleCondition> m_conditions;

  int m_insertPosition{0};
  bool m_proxyRuleNameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_actionHasBeenSet = false;
  bool m_conditionsHasBeenSet = false;
  bool m_insertPositionHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
