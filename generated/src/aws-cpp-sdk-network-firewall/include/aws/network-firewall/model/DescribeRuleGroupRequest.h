/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/NetworkFirewallRequest.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/RuleGroupType.h>
#include <aws/network-firewall/model/RuleOutputFormat.h>

#include <utility>

namespace Aws {
namespace NetworkFirewall {
namespace Model {

/**
 */
class DescribeRuleGroupRequest : public NetworkFirewallRequest {
 public:
  AWS_NETWORKFIREWALL_API DescribeRuleGroupRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribeRuleGroup"; }

  AWS_NETWORKFIREWALL_API Aws::String SerializePayload() const override;

  AWS_NETWORKFIREWALL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The descriptive name of the rule group. You can't change the name of a rule
   * group after you create it.</p> <p>You must specify the ARN or the name, and you
   * can specify both. </p>
   */
  inline const Aws::String& GetRuleGroupName() const { return m_ruleGroupName; }
  inline bool RuleGroupNameHasBeenSet() const { return m_ruleGroupNameHasBeenSet; }
  template <typename RuleGroupNameT = Aws::String>
  void SetRuleGroupName(RuleGroupNameT&& value) {
    m_ruleGroupNameHasBeenSet = true;
    m_ruleGroupName = std::forward<RuleGroupNameT>(value);
  }
  template <typename RuleGroupNameT = Aws::String>
  DescribeRuleGroupRequest& WithRuleGroupName(RuleGroupNameT&& value) {
    SetRuleGroupName(std::forward<RuleGroupNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the rule group.</p> <p>You must specify the
   * ARN or the name, and you can specify both. </p>
   */
  inline const Aws::String& GetRuleGroupArn() const { return m_ruleGroupArn; }
  inline bool RuleGroupArnHasBeenSet() const { return m_ruleGroupArnHasBeenSet; }
  template <typename RuleGroupArnT = Aws::String>
  void SetRuleGroupArn(RuleGroupArnT&& value) {
    m_ruleGroupArnHasBeenSet = true;
    m_ruleGroupArn = std::forward<RuleGroupArnT>(value);
  }
  template <typename RuleGroupArnT = Aws::String>
  DescribeRuleGroupRequest& WithRuleGroupArn(RuleGroupArnT&& value) {
    SetRuleGroupArn(std::forward<RuleGroupArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates the type of the rule group. Valid values are:</p> <ul> <li> <p>
   * <code>STATELESS</code> - Stateless rules, for use in a Classic Network Firewall
   * policy.</p> </li> <li> <p> <code>STATEFUL</code> - Stateful rules, for use in a
   * Classic Network Firewall policy.</p> </li> <li> <p> <code>FIREWALL</code> -
   * Firewall engine rules, for use in a Next Generation policy.</p> </li> <li> <p>
   * <code>IPS</code> - IPS engine rules, for use in a Next Generation policy.</p>
   * </li> </ul>  <p>This setting is required for requests that do not include
   * the <code>RuleGroupARN</code>.</p>
   */
  inline RuleGroupType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(RuleGroupType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline DescribeRuleGroupRequest& WithType(RuleGroupType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether you want Network Firewall to analyze the stateless rules in
   * the rule group for rule behavior such as asymmetric routing. If set to
   * <code>TRUE</code>, Network Firewall runs the analysis.</p>
   */
  inline bool GetAnalyzeRuleGroup() const { return m_analyzeRuleGroup; }
  inline bool AnalyzeRuleGroupHasBeenSet() const { return m_analyzeRuleGroupHasBeenSet; }
  inline void SetAnalyzeRuleGroup(bool value) {
    m_analyzeRuleGroupHasBeenSet = true;
    m_analyzeRuleGroup = value;
  }
  inline DescribeRuleGroupRequest& WithAnalyzeRuleGroup(bool value) {
    SetAnalyzeRuleGroup(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>For a firewall engine rule group, the format in which to return the rules.
   * Specify one of the following values:</p> <ul> <li> <p>
   * <code>FIREWALL_RULES</code> - Returns the rules as structured
   * <code>FirewallRule</code> objects.</p> </li> <li> <p> <code>RULES_STRING</code>
   * - Returns the rules as a Suricata-compatible firewall-mode rule string.</p>
   * </li> </ul> <p>If you don't specify a format, Network Firewall returns the rules
   * in the format you provided them in. This setting applies only to
   * <code>FIREWALL</code> and <code>IPS</code> rule groups; IPS engine rule groups
   * support only <code>RULES_STRING</code>.</p>
   */
  inline RuleOutputFormat GetRuleOutputFormat() const { return m_ruleOutputFormat; }
  inline bool RuleOutputFormatHasBeenSet() const { return m_ruleOutputFormatHasBeenSet; }
  inline void SetRuleOutputFormat(RuleOutputFormat value) {
    m_ruleOutputFormatHasBeenSet = true;
    m_ruleOutputFormat = value;
  }
  inline DescribeRuleGroupRequest& WithRuleOutputFormat(RuleOutputFormat value) {
    SetRuleOutputFormat(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_ruleGroupName;

  Aws::String m_ruleGroupArn;

  RuleGroupType m_type{RuleGroupType::NOT_SET};

  bool m_analyzeRuleGroup{false};

  RuleOutputFormat m_ruleOutputFormat{RuleOutputFormat::NOT_SET};
  bool m_ruleGroupNameHasBeenSet = false;
  bool m_ruleGroupArnHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_analyzeRuleGroupHasBeenSet = false;
  bool m_ruleOutputFormatHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
