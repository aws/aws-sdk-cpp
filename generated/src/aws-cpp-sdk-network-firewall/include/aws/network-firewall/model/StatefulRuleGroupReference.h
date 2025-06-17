/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/model/StatefulRuleGroupOverride.h>
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
namespace NetworkFirewall
{
namespace Model
{

  /**
   * <p>Identifier for a single stateful rule group, used in a firewall policy to
   * refer to a rule group. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/StatefulRuleGroupReference">AWS
   * API Reference</a></p>
   */
  class StatefulRuleGroupReference
  {
  public:
    AWS_NETWORKFIREWALL_API StatefulRuleGroupReference() = default;
    AWS_NETWORKFIREWALL_API StatefulRuleGroupReference(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API StatefulRuleGroupReference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the stateful rule group.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    StatefulRuleGroupReference& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An integer setting that indicates the order in which to run the stateful rule
     * groups in a single <a>FirewallPolicy</a>. This setting only applies to firewall
     * policies that specify the <code>STRICT_ORDER</code> rule order in the stateful
     * engine options settings.</p> <p>Network Firewall evalutes each stateful rule
     * group against a packet starting with the group that has the lowest priority
     * setting. You must ensure that the priority settings are unique within each
     * policy.</p> <p>You can change the priority settings of your rule groups at any
     * time. To make it easier to insert rule groups later, number them so there's a
     * wide range in between, for example use 100, 200, and so on. </p>
     */
    inline int GetPriority() const { return m_priority; }
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }
    inline StatefulRuleGroupReference& WithPriority(int value) { SetPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action that allows the policy owner to override the behavior of the rule
     * group within a policy.</p>
     */
    inline const StatefulRuleGroupOverride& GetOverride() const { return m_override; }
    inline bool OverrideHasBeenSet() const { return m_overrideHasBeenSet; }
    template<typename OverrideT = StatefulRuleGroupOverride>
    void SetOverride(OverrideT&& value) { m_overrideHasBeenSet = true; m_override = std::forward<OverrideT>(value); }
    template<typename OverrideT = StatefulRuleGroupOverride>
    StatefulRuleGroupReference& WithOverride(OverrideT&& value) { SetOverride(std::forward<OverrideT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Network Firewall plans to augment the active threat defense managed rule
     * group with an additional deep threat inspection capability. When this capability
     * is released, Amazon Web Services will analyze service logs of network traffic
     * processed by these rule groups to identify threat indicators across customers.
     * Amazon Web Services will use these threat indicators to improve the active
     * threat defense managed rule groups and protect the security of Amazon Web
     * Services customers and services.</p>  <p>Customers can opt-out of deep
     * threat inspection at any time through the Network Firewall console or API. When
     * customers opt out, Network Firewall will not use the network traffic processed
     * by those customers' active threat defense rule groups for rule group
     * improvement.</p> 
     */
    inline bool GetDeepThreatInspection() const { return m_deepThreatInspection; }
    inline bool DeepThreatInspectionHasBeenSet() const { return m_deepThreatInspectionHasBeenSet; }
    inline void SetDeepThreatInspection(bool value) { m_deepThreatInspectionHasBeenSet = true; m_deepThreatInspection = value; }
    inline StatefulRuleGroupReference& WithDeepThreatInspection(bool value) { SetDeepThreatInspection(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    int m_priority{0};
    bool m_priorityHasBeenSet = false;

    StatefulRuleGroupOverride m_override;
    bool m_overrideHasBeenSet = false;

    bool m_deepThreatInspection{false};
    bool m_deepThreatInspectionHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
