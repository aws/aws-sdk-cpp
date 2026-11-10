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
 * <p>Metadata for a single firewall engine rule. Use it to disable a rule without
 * removing it and to attach a description. When you describe a rule group in
 * <code>RULES_STRING</code> format, Network Firewall renders a disabled rule and
 * its description as <code>#</code> comment lines above the rule.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/RuleMetadata">AWS
 * API Reference</a></p>
 */
class RuleMetadata {
 public:
  AWS_NETWORKFIREWALL_API RuleMetadata() = default;
  AWS_NETWORKFIREWALL_API RuleMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKFIREWALL_API RuleMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies whether the rule is active. The default is <code>TRUE</code>. When
   * you set this to <code>FALSE</code>, Network Firewall keeps the rule in the rule
   * group but doesn't evaluate it against traffic and doesn't count it toward the
   * rule group's consumed capacity.</p>
   */
  inline bool GetRuleEnabled() const { return m_ruleEnabled; }
  inline bool RuleEnabledHasBeenSet() const { return m_ruleEnabledHasBeenSet; }
  inline void SetRuleEnabled(bool value) {
    m_ruleEnabledHasBeenSet = true;
    m_ruleEnabled = value;
  }
  inline RuleMetadata& WithRuleEnabled(bool value) {
    SetRuleEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the rule, up to 512 characters. The description can span
   * multiple lines. A description line can't itself look like a firewall rule; to
   * disable a rule, set <code>RuleEnabled</code> to <code>FALSE</code> instead.</p>
   */
  inline const Aws::String& GetRuleDescription() const { return m_ruleDescription; }
  inline bool RuleDescriptionHasBeenSet() const { return m_ruleDescriptionHasBeenSet; }
  template <typename RuleDescriptionT = Aws::String>
  void SetRuleDescription(RuleDescriptionT&& value) {
    m_ruleDescriptionHasBeenSet = true;
    m_ruleDescription = std::forward<RuleDescriptionT>(value);
  }
  template <typename RuleDescriptionT = Aws::String>
  RuleMetadata& WithRuleDescription(RuleDescriptionT&& value) {
    SetRuleDescription(std::forward<RuleDescriptionT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_ruleEnabled{false};

  Aws::String m_ruleDescription;
  bool m_ruleEnabledHasBeenSet = false;
  bool m_ruleDescriptionHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
