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
  class DescribeRuleGroupSummaryRequest : public NetworkFirewallRequest
  {
  public:
    AWS_NETWORKFIREWALL_API DescribeRuleGroupSummaryRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeRuleGroupSummary"; }

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
    DescribeRuleGroupSummaryRequest& WithRuleGroupName(RuleGroupNameT&& value) { SetRuleGroupName(std::forward<RuleGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Required. The Amazon Resource Name (ARN) of the rule group.</p> <p>You must
     * specify the ARN or the name, and you can specify both. </p>
     */
    inline const Aws::String& GetRuleGroupArn() const { return m_ruleGroupArn; }
    inline bool RuleGroupArnHasBeenSet() const { return m_ruleGroupArnHasBeenSet; }
    template<typename RuleGroupArnT = Aws::String>
    void SetRuleGroupArn(RuleGroupArnT&& value) { m_ruleGroupArnHasBeenSet = true; m_ruleGroupArn = std::forward<RuleGroupArnT>(value); }
    template<typename RuleGroupArnT = Aws::String>
    DescribeRuleGroupSummaryRequest& WithRuleGroupArn(RuleGroupArnT&& value) { SetRuleGroupArn(std::forward<RuleGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of rule group you want a summary for. This is a required field.</p>
     * <p>Valid value: <code>STATEFUL</code> </p> <p>Note that <code>STATELESS</code>
     * exists but is not currently supported. If you provide <code>STATELESS</code>, an
     * exception is returned.</p>
     */
    inline RuleGroupType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(RuleGroupType value) { m_typeHasBeenSet = true; m_type = value; }
    inline DescribeRuleGroupSummaryRequest& WithType(RuleGroupType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_ruleGroupName;
    bool m_ruleGroupNameHasBeenSet = false;

    Aws::String m_ruleGroupArn;
    bool m_ruleGroupArnHasBeenSet = false;

    RuleGroupType m_type{RuleGroupType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
