/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/RuleGroupDetails.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Details about an Network Firewall rule group. Rule groups are used to inspect
   * and control network traffic. Stateless rule groups apply to individual packets.
   * Stateful rule groups apply to packets in the context of their traffic flow.</p>
   * <p>Rule groups are referenced in firewall policies. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsNetworkFirewallRuleGroupDetails">AWS
   * API Reference</a></p>
   */
  class AwsNetworkFirewallRuleGroupDetails
  {
  public:
    AWS_SECURITYHUB_API AwsNetworkFirewallRuleGroupDetails();
    AWS_SECURITYHUB_API AwsNetworkFirewallRuleGroupDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsNetworkFirewallRuleGroupDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The maximum number of operating resources that this rule group can use.</p>
     */
    inline int GetCapacity() const{ return m_capacity; }
    inline bool CapacityHasBeenSet() const { return m_capacityHasBeenSet; }
    inline void SetCapacity(int value) { m_capacityHasBeenSet = true; m_capacity = value; }
    inline AwsNetworkFirewallRuleGroupDetails& WithCapacity(int value) { SetCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the rule group.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline AwsNetworkFirewallRuleGroupDetails& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline AwsNetworkFirewallRuleGroupDetails& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline AwsNetworkFirewallRuleGroupDetails& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the rule group.</p>
     */
    inline const RuleGroupDetails& GetRuleGroup() const{ return m_ruleGroup; }
    inline bool RuleGroupHasBeenSet() const { return m_ruleGroupHasBeenSet; }
    inline void SetRuleGroup(const RuleGroupDetails& value) { m_ruleGroupHasBeenSet = true; m_ruleGroup = value; }
    inline void SetRuleGroup(RuleGroupDetails&& value) { m_ruleGroupHasBeenSet = true; m_ruleGroup = std::move(value); }
    inline AwsNetworkFirewallRuleGroupDetails& WithRuleGroup(const RuleGroupDetails& value) { SetRuleGroup(value); return *this;}
    inline AwsNetworkFirewallRuleGroupDetails& WithRuleGroup(RuleGroupDetails&& value) { SetRuleGroup(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the rule group.</p>
     */
    inline const Aws::String& GetRuleGroupArn() const{ return m_ruleGroupArn; }
    inline bool RuleGroupArnHasBeenSet() const { return m_ruleGroupArnHasBeenSet; }
    inline void SetRuleGroupArn(const Aws::String& value) { m_ruleGroupArnHasBeenSet = true; m_ruleGroupArn = value; }
    inline void SetRuleGroupArn(Aws::String&& value) { m_ruleGroupArnHasBeenSet = true; m_ruleGroupArn = std::move(value); }
    inline void SetRuleGroupArn(const char* value) { m_ruleGroupArnHasBeenSet = true; m_ruleGroupArn.assign(value); }
    inline AwsNetworkFirewallRuleGroupDetails& WithRuleGroupArn(const Aws::String& value) { SetRuleGroupArn(value); return *this;}
    inline AwsNetworkFirewallRuleGroupDetails& WithRuleGroupArn(Aws::String&& value) { SetRuleGroupArn(std::move(value)); return *this;}
    inline AwsNetworkFirewallRuleGroupDetails& WithRuleGroupArn(const char* value) { SetRuleGroupArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the rule group.</p>
     */
    inline const Aws::String& GetRuleGroupId() const{ return m_ruleGroupId; }
    inline bool RuleGroupIdHasBeenSet() const { return m_ruleGroupIdHasBeenSet; }
    inline void SetRuleGroupId(const Aws::String& value) { m_ruleGroupIdHasBeenSet = true; m_ruleGroupId = value; }
    inline void SetRuleGroupId(Aws::String&& value) { m_ruleGroupIdHasBeenSet = true; m_ruleGroupId = std::move(value); }
    inline void SetRuleGroupId(const char* value) { m_ruleGroupIdHasBeenSet = true; m_ruleGroupId.assign(value); }
    inline AwsNetworkFirewallRuleGroupDetails& WithRuleGroupId(const Aws::String& value) { SetRuleGroupId(value); return *this;}
    inline AwsNetworkFirewallRuleGroupDetails& WithRuleGroupId(Aws::String&& value) { SetRuleGroupId(std::move(value)); return *this;}
    inline AwsNetworkFirewallRuleGroupDetails& WithRuleGroupId(const char* value) { SetRuleGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The descriptive name of the rule group.</p>
     */
    inline const Aws::String& GetRuleGroupName() const{ return m_ruleGroupName; }
    inline bool RuleGroupNameHasBeenSet() const { return m_ruleGroupNameHasBeenSet; }
    inline void SetRuleGroupName(const Aws::String& value) { m_ruleGroupNameHasBeenSet = true; m_ruleGroupName = value; }
    inline void SetRuleGroupName(Aws::String&& value) { m_ruleGroupNameHasBeenSet = true; m_ruleGroupName = std::move(value); }
    inline void SetRuleGroupName(const char* value) { m_ruleGroupNameHasBeenSet = true; m_ruleGroupName.assign(value); }
    inline AwsNetworkFirewallRuleGroupDetails& WithRuleGroupName(const Aws::String& value) { SetRuleGroupName(value); return *this;}
    inline AwsNetworkFirewallRuleGroupDetails& WithRuleGroupName(Aws::String&& value) { SetRuleGroupName(std::move(value)); return *this;}
    inline AwsNetworkFirewallRuleGroupDetails& WithRuleGroupName(const char* value) { SetRuleGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of rule group. A rule group can be stateful or stateless.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline AwsNetworkFirewallRuleGroupDetails& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline AwsNetworkFirewallRuleGroupDetails& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline AwsNetworkFirewallRuleGroupDetails& WithType(const char* value) { SetType(value); return *this;}
    ///@}
  private:

    int m_capacity;
    bool m_capacityHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    RuleGroupDetails m_ruleGroup;
    bool m_ruleGroupHasBeenSet = false;

    Aws::String m_ruleGroupArn;
    bool m_ruleGroupArnHasBeenSet = false;

    Aws::String m_ruleGroupId;
    bool m_ruleGroupIdHasBeenSet = false;

    Aws::String m_ruleGroupName;
    bool m_ruleGroupNameHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
