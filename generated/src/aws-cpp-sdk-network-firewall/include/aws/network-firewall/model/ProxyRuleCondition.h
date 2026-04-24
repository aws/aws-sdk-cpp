/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
 * <p>Match criteria that specify what traffic attributes to examine.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/ProxyRuleCondition">AWS
 * API Reference</a></p>
 */
class ProxyRuleCondition {
 public:
  AWS_NETWORKFIREWALL_API ProxyRuleCondition() = default;
  AWS_NETWORKFIREWALL_API ProxyRuleCondition(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKFIREWALL_API ProxyRuleCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Defines how to perform a match.</p>
   */
  inline const Aws::String& GetConditionOperator() const { return m_conditionOperator; }
  inline bool ConditionOperatorHasBeenSet() const { return m_conditionOperatorHasBeenSet; }
  template <typename ConditionOperatorT = Aws::String>
  void SetConditionOperator(ConditionOperatorT&& value) {
    m_conditionOperatorHasBeenSet = true;
    m_conditionOperator = std::forward<ConditionOperatorT>(value);
  }
  template <typename ConditionOperatorT = Aws::String>
  ProxyRuleCondition& WithConditionOperator(ConditionOperatorT&& value) {
    SetConditionOperator(std::forward<ConditionOperatorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Defines what is to be matched.</p>
   */
  inline const Aws::String& GetConditionKey() const { return m_conditionKey; }
  inline bool ConditionKeyHasBeenSet() const { return m_conditionKeyHasBeenSet; }
  template <typename ConditionKeyT = Aws::String>
  void SetConditionKey(ConditionKeyT&& value) {
    m_conditionKeyHasBeenSet = true;
    m_conditionKey = std::forward<ConditionKeyT>(value);
  }
  template <typename ConditionKeyT = Aws::String>
  ProxyRuleCondition& WithConditionKey(ConditionKeyT&& value) {
    SetConditionKey(std::forward<ConditionKeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifes the exact value that needs to be matched against.</p>
   */
  inline const Aws::Vector<Aws::String>& GetConditionValues() const { return m_conditionValues; }
  inline bool ConditionValuesHasBeenSet() const { return m_conditionValuesHasBeenSet; }
  template <typename ConditionValuesT = Aws::Vector<Aws::String>>
  void SetConditionValues(ConditionValuesT&& value) {
    m_conditionValuesHasBeenSet = true;
    m_conditionValues = std::forward<ConditionValuesT>(value);
  }
  template <typename ConditionValuesT = Aws::Vector<Aws::String>>
  ProxyRuleCondition& WithConditionValues(ConditionValuesT&& value) {
    SetConditionValues(std::forward<ConditionValuesT>(value));
    return *this;
  }
  template <typename ConditionValuesT = Aws::String>
  ProxyRuleCondition& AddConditionValues(ConditionValuesT&& value) {
    m_conditionValuesHasBeenSet = true;
    m_conditionValues.emplace_back(std::forward<ConditionValuesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_conditionOperator;

  Aws::String m_conditionKey;

  Aws::Vector<Aws::String> m_conditionValues;
  bool m_conditionOperatorHasBeenSet = false;
  bool m_conditionKeyHasBeenSet = false;
  bool m_conditionValuesHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
