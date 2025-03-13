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
    AWS_SECURITYHUB_API AwsNetworkFirewallRuleGroupDetails() = default;
    AWS_SECURITYHUB_API AwsNetworkFirewallRuleGroupDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsNetworkFirewallRuleGroupDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The maximum number of operating resources that this rule group can use.</p>
     */
    inline int GetCapacity() const { return m_capacity; }
    inline bool CapacityHasBeenSet() const { return m_capacityHasBeenSet; }
    inline void SetCapacity(int value) { m_capacityHasBeenSet = true; m_capacity = value; }
    inline AwsNetworkFirewallRuleGroupDetails& WithCapacity(int value) { SetCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the rule group.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    AwsNetworkFirewallRuleGroupDetails& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the rule group.</p>
     */
    inline const RuleGroupDetails& GetRuleGroup() const { return m_ruleGroup; }
    inline bool RuleGroupHasBeenSet() const { return m_ruleGroupHasBeenSet; }
    template<typename RuleGroupT = RuleGroupDetails>
    void SetRuleGroup(RuleGroupT&& value) { m_ruleGroupHasBeenSet = true; m_ruleGroup = std::forward<RuleGroupT>(value); }
    template<typename RuleGroupT = RuleGroupDetails>
    AwsNetworkFirewallRuleGroupDetails& WithRuleGroup(RuleGroupT&& value) { SetRuleGroup(std::forward<RuleGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the rule group.</p>
     */
    inline const Aws::String& GetRuleGroupArn() const { return m_ruleGroupArn; }
    inline bool RuleGroupArnHasBeenSet() const { return m_ruleGroupArnHasBeenSet; }
    template<typename RuleGroupArnT = Aws::String>
    void SetRuleGroupArn(RuleGroupArnT&& value) { m_ruleGroupArnHasBeenSet = true; m_ruleGroupArn = std::forward<RuleGroupArnT>(value); }
    template<typename RuleGroupArnT = Aws::String>
    AwsNetworkFirewallRuleGroupDetails& WithRuleGroupArn(RuleGroupArnT&& value) { SetRuleGroupArn(std::forward<RuleGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the rule group.</p>
     */
    inline const Aws::String& GetRuleGroupId() const { return m_ruleGroupId; }
    inline bool RuleGroupIdHasBeenSet() const { return m_ruleGroupIdHasBeenSet; }
    template<typename RuleGroupIdT = Aws::String>
    void SetRuleGroupId(RuleGroupIdT&& value) { m_ruleGroupIdHasBeenSet = true; m_ruleGroupId = std::forward<RuleGroupIdT>(value); }
    template<typename RuleGroupIdT = Aws::String>
    AwsNetworkFirewallRuleGroupDetails& WithRuleGroupId(RuleGroupIdT&& value) { SetRuleGroupId(std::forward<RuleGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The descriptive name of the rule group.</p>
     */
    inline const Aws::String& GetRuleGroupName() const { return m_ruleGroupName; }
    inline bool RuleGroupNameHasBeenSet() const { return m_ruleGroupNameHasBeenSet; }
    template<typename RuleGroupNameT = Aws::String>
    void SetRuleGroupName(RuleGroupNameT&& value) { m_ruleGroupNameHasBeenSet = true; m_ruleGroupName = std::forward<RuleGroupNameT>(value); }
    template<typename RuleGroupNameT = Aws::String>
    AwsNetworkFirewallRuleGroupDetails& WithRuleGroupName(RuleGroupNameT&& value) { SetRuleGroupName(std::forward<RuleGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of rule group. A rule group can be stateful or stateless.</p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    AwsNetworkFirewallRuleGroupDetails& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}
  private:

    int m_capacity{0};
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
