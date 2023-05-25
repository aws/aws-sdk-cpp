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
    AWS_NETWORKFIREWALL_API DescribeRuleGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeRuleGroup"; }

    AWS_NETWORKFIREWALL_API Aws::String SerializePayload() const override;

    AWS_NETWORKFIREWALL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The descriptive name of the rule group. You can't change the name of a rule
     * group after you create it.</p> <p>You must specify the ARN or the name, and you
     * can specify both. </p>
     */
    inline const Aws::String& GetRuleGroupName() const{ return m_ruleGroupName; }

    /**
     * <p>The descriptive name of the rule group. You can't change the name of a rule
     * group after you create it.</p> <p>You must specify the ARN or the name, and you
     * can specify both. </p>
     */
    inline bool RuleGroupNameHasBeenSet() const { return m_ruleGroupNameHasBeenSet; }

    /**
     * <p>The descriptive name of the rule group. You can't change the name of a rule
     * group after you create it.</p> <p>You must specify the ARN or the name, and you
     * can specify both. </p>
     */
    inline void SetRuleGroupName(const Aws::String& value) { m_ruleGroupNameHasBeenSet = true; m_ruleGroupName = value; }

    /**
     * <p>The descriptive name of the rule group. You can't change the name of a rule
     * group after you create it.</p> <p>You must specify the ARN or the name, and you
     * can specify both. </p>
     */
    inline void SetRuleGroupName(Aws::String&& value) { m_ruleGroupNameHasBeenSet = true; m_ruleGroupName = std::move(value); }

    /**
     * <p>The descriptive name of the rule group. You can't change the name of a rule
     * group after you create it.</p> <p>You must specify the ARN or the name, and you
     * can specify both. </p>
     */
    inline void SetRuleGroupName(const char* value) { m_ruleGroupNameHasBeenSet = true; m_ruleGroupName.assign(value); }

    /**
     * <p>The descriptive name of the rule group. You can't change the name of a rule
     * group after you create it.</p> <p>You must specify the ARN or the name, and you
     * can specify both. </p>
     */
    inline DescribeRuleGroupRequest& WithRuleGroupName(const Aws::String& value) { SetRuleGroupName(value); return *this;}

    /**
     * <p>The descriptive name of the rule group. You can't change the name of a rule
     * group after you create it.</p> <p>You must specify the ARN or the name, and you
     * can specify both. </p>
     */
    inline DescribeRuleGroupRequest& WithRuleGroupName(Aws::String&& value) { SetRuleGroupName(std::move(value)); return *this;}

    /**
     * <p>The descriptive name of the rule group. You can't change the name of a rule
     * group after you create it.</p> <p>You must specify the ARN or the name, and you
     * can specify both. </p>
     */
    inline DescribeRuleGroupRequest& WithRuleGroupName(const char* value) { SetRuleGroupName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the rule group.</p> <p>You must specify the
     * ARN or the name, and you can specify both. </p>
     */
    inline const Aws::String& GetRuleGroupArn() const{ return m_ruleGroupArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the rule group.</p> <p>You must specify the
     * ARN or the name, and you can specify both. </p>
     */
    inline bool RuleGroupArnHasBeenSet() const { return m_ruleGroupArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the rule group.</p> <p>You must specify the
     * ARN or the name, and you can specify both. </p>
     */
    inline void SetRuleGroupArn(const Aws::String& value) { m_ruleGroupArnHasBeenSet = true; m_ruleGroupArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the rule group.</p> <p>You must specify the
     * ARN or the name, and you can specify both. </p>
     */
    inline void SetRuleGroupArn(Aws::String&& value) { m_ruleGroupArnHasBeenSet = true; m_ruleGroupArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the rule group.</p> <p>You must specify the
     * ARN or the name, and you can specify both. </p>
     */
    inline void SetRuleGroupArn(const char* value) { m_ruleGroupArnHasBeenSet = true; m_ruleGroupArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the rule group.</p> <p>You must specify the
     * ARN or the name, and you can specify both. </p>
     */
    inline DescribeRuleGroupRequest& WithRuleGroupArn(const Aws::String& value) { SetRuleGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the rule group.</p> <p>You must specify the
     * ARN or the name, and you can specify both. </p>
     */
    inline DescribeRuleGroupRequest& WithRuleGroupArn(Aws::String&& value) { SetRuleGroupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the rule group.</p> <p>You must specify the
     * ARN or the name, and you can specify both. </p>
     */
    inline DescribeRuleGroupRequest& WithRuleGroupArn(const char* value) { SetRuleGroupArn(value); return *this;}


    /**
     * <p>Indicates whether the rule group is stateless or stateful. If the rule group
     * is stateless, it contains stateless rules. If it is stateful, it contains
     * stateful rules. </p>  <p>This setting is required for requests that do not
     * include the <code>RuleGroupARN</code>.</p> 
     */
    inline const RuleGroupType& GetType() const{ return m_type; }

    /**
     * <p>Indicates whether the rule group is stateless or stateful. If the rule group
     * is stateless, it contains stateless rules. If it is stateful, it contains
     * stateful rules. </p>  <p>This setting is required for requests that do not
     * include the <code>RuleGroupARN</code>.</p> 
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Indicates whether the rule group is stateless or stateful. If the rule group
     * is stateless, it contains stateless rules. If it is stateful, it contains
     * stateful rules. </p>  <p>This setting is required for requests that do not
     * include the <code>RuleGroupARN</code>.</p> 
     */
    inline void SetType(const RuleGroupType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Indicates whether the rule group is stateless or stateful. If the rule group
     * is stateless, it contains stateless rules. If it is stateful, it contains
     * stateful rules. </p>  <p>This setting is required for requests that do not
     * include the <code>RuleGroupARN</code>.</p> 
     */
    inline void SetType(RuleGroupType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Indicates whether the rule group is stateless or stateful. If the rule group
     * is stateless, it contains stateless rules. If it is stateful, it contains
     * stateful rules. </p>  <p>This setting is required for requests that do not
     * include the <code>RuleGroupARN</code>.</p> 
     */
    inline DescribeRuleGroupRequest& WithType(const RuleGroupType& value) { SetType(value); return *this;}

    /**
     * <p>Indicates whether the rule group is stateless or stateful. If the rule group
     * is stateless, it contains stateless rules. If it is stateful, it contains
     * stateful rules. </p>  <p>This setting is required for requests that do not
     * include the <code>RuleGroupARN</code>.</p> 
     */
    inline DescribeRuleGroupRequest& WithType(RuleGroupType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_ruleGroupName;
    bool m_ruleGroupNameHasBeenSet = false;

    Aws::String m_ruleGroupArn;
    bool m_ruleGroupArnHasBeenSet = false;

    RuleGroupType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
