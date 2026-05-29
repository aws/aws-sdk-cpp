/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Route53Resolver {
namespace Model {

/**
 * <p>The definition of an available rule type that can be used in DNS Firewall
 * rules. This is returned by <a>ListFirewallRuleTypes</a>.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/FirewallRuleTypeDefinition">AWS
 * API Reference</a></p>
 */
class FirewallRuleTypeDefinition {
 public:
  AWS_ROUTE53RESOLVER_API FirewallRuleTypeDefinition() = default;
  AWS_ROUTE53RESOLVER_API FirewallRuleTypeDefinition(Aws::Utils::Json::JsonView jsonValue);
  AWS_ROUTE53RESOLVER_API FirewallRuleTypeDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ROUTE53RESOLVER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The category or class of the rule type, such as
   * <code>FirewallAdvancedContentCategory</code> or
   * <code>FirewallAdvancedThreatCategory</code>.</p>
   */
  inline const Aws::String& GetRuleType() const { return m_ruleType; }
  inline bool RuleTypeHasBeenSet() const { return m_ruleTypeHasBeenSet; }
  template <typename RuleTypeT = Aws::String>
  void SetRuleType(RuleTypeT&& value) {
    m_ruleTypeHasBeenSet = true;
    m_ruleType = std::forward<RuleTypeT>(value);
  }
  template <typename RuleTypeT = Aws::String>
  FirewallRuleTypeDefinition& WithRuleType(RuleTypeT&& value) {
    SetRuleType(std::forward<RuleTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The specific identifier within the rule type category, such as
   * <code>VIOLENCE_AND_HATE_SPEECH</code> or <code>PHISHING</code>.</p>
   */
  inline const Aws::String& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = Aws::String>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = Aws::String>
  FirewallRuleTypeDefinition& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display name of the rule type.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  FirewallRuleTypeDefinition& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the rule type.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  FirewallRuleTypeDefinition& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_ruleType;

  Aws::String m_value;

  Aws::String m_displayName;

  Aws::String m_description;
  bool m_ruleTypeHasBeenSet = false;
  bool m_valueHasBeenSet = false;
  bool m_displayNameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53Resolver
}  // namespace Aws
