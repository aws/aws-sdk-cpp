/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/NetworkFirewallRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/model/RuleGroupType.h>
#include <utility>

namespace Aws
{
namespace NetworkFirewall
{
namespace Model
{

  /**
   */
  class DescribeRuleGroupRequest : public NetworkFirewallRequest
  {
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
    template<typename RuleGroupNameT = Aws::String>
    void SetRuleGroupName(RuleGroupNameT&& value) { m_ruleGroupNameHasBeenSet = true; m_ruleGroupName = std::forward<RuleGroupNameT>(value); }
    template<typename RuleGroupNameT = Aws::String>
    DescribeRuleGroupRequest& WithRuleGroupName(RuleGroupNameT&& value) { SetRuleGroupName(std::forward<RuleGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the rule group.</p> <p>You must specify the
     * ARN or the name, and you can specify both. </p>
     */
    inline const Aws::String& GetRuleGroupArn() const { return m_ruleGroupArn; }
    inline bool RuleGroupArnHasBeenSet() const { return m_ruleGroupArnHasBeenSet; }
    template<typename RuleGroupArnT = Aws::String>
    void SetRuleGroupArn(RuleGroupArnT&& value) { m_ruleGroupArnHasBeenSet = true; m_ruleGroupArn = std::forward<RuleGroupArnT>(value); }
    template<typename RuleGroupArnT = Aws::String>
    DescribeRuleGroupRequest& WithRuleGroupArn(RuleGroupArnT&& value) { SetRuleGroupArn(std::forward<RuleGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the rule group is stateless or stateful. If the rule group
     * is stateless, it contains stateless rules. If it is stateful, it contains
     * stateful rules. </p>  <p>This setting is required for requests that do not
     * include the <code>RuleGroupARN</code>.</p> 
     */
    inline RuleGroupType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(RuleGroupType value) { m_typeHasBeenSet = true; m_type = value; }
    inline DescribeRuleGroupRequest& WithType(RuleGroupType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether you want Network Firewall to analyze the stateless rules in
     * the rule group for rule behavior such as asymmetric routing. If set to
     * <code>TRUE</code>, Network Firewall runs the analysis.</p>
     */
    inline bool GetAnalyzeRuleGroup() const { return m_analyzeRuleGroup; }
    inline bool AnalyzeRuleGroupHasBeenSet() const { return m_analyzeRuleGroupHasBeenSet; }
    inline void SetAnalyzeRuleGroup(bool value) { m_analyzeRuleGroupHasBeenSet = true; m_analyzeRuleGroup = value; }
    inline DescribeRuleGroupRequest& WithAnalyzeRuleGroup(bool value) { SetAnalyzeRuleGroup(value); return *this;}
    ///@}
  private:

    Aws::String m_ruleGroupName;
    bool m_ruleGroupNameHasBeenSet = false;

    Aws::String m_ruleGroupArn;
    bool m_ruleGroupArnHasBeenSet = false;

    RuleGroupType m_type{RuleGroupType::NOT_SET};
    bool m_typeHasBeenSet = false;

    bool m_analyzeRuleGroup{false};
    bool m_analyzeRuleGroupHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
