/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/RuleOrder.h>
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
   * <p>Additional options governing how Network Firewall handles the rule group. You
   * can only use these for stateful rule groups.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/StatefulRuleOptions">AWS
   * API Reference</a></p>
   */
  class StatefulRuleOptions
  {
  public:
    AWS_NETWORKFIREWALL_API StatefulRuleOptions();
    AWS_NETWORKFIREWALL_API StatefulRuleOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API StatefulRuleOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates how to manage the order of the rule evaluation for the rule group.
     * <code>DEFAULT_ACTION_ORDER</code> is the default behavior. Stateful rules are
     * provided to the rule engine as Suricata compatible strings, and Suricata
     * evaluates them based on certain settings. For more information, see <a
     * href="https://docs.aws.amazon.com/network-firewall/latest/developerguide/suricata-rule-evaluation-order.html">Evaluation
     * order for stateful rules</a> in the <i>Network Firewall Developer Guide</i>.
     * </p>
     */
    inline const RuleOrder& GetRuleOrder() const{ return m_ruleOrder; }

    /**
     * <p>Indicates how to manage the order of the rule evaluation for the rule group.
     * <code>DEFAULT_ACTION_ORDER</code> is the default behavior. Stateful rules are
     * provided to the rule engine as Suricata compatible strings, and Suricata
     * evaluates them based on certain settings. For more information, see <a
     * href="https://docs.aws.amazon.com/network-firewall/latest/developerguide/suricata-rule-evaluation-order.html">Evaluation
     * order for stateful rules</a> in the <i>Network Firewall Developer Guide</i>.
     * </p>
     */
    inline bool RuleOrderHasBeenSet() const { return m_ruleOrderHasBeenSet; }

    /**
     * <p>Indicates how to manage the order of the rule evaluation for the rule group.
     * <code>DEFAULT_ACTION_ORDER</code> is the default behavior. Stateful rules are
     * provided to the rule engine as Suricata compatible strings, and Suricata
     * evaluates them based on certain settings. For more information, see <a
     * href="https://docs.aws.amazon.com/network-firewall/latest/developerguide/suricata-rule-evaluation-order.html">Evaluation
     * order for stateful rules</a> in the <i>Network Firewall Developer Guide</i>.
     * </p>
     */
    inline void SetRuleOrder(const RuleOrder& value) { m_ruleOrderHasBeenSet = true; m_ruleOrder = value; }

    /**
     * <p>Indicates how to manage the order of the rule evaluation for the rule group.
     * <code>DEFAULT_ACTION_ORDER</code> is the default behavior. Stateful rules are
     * provided to the rule engine as Suricata compatible strings, and Suricata
     * evaluates them based on certain settings. For more information, see <a
     * href="https://docs.aws.amazon.com/network-firewall/latest/developerguide/suricata-rule-evaluation-order.html">Evaluation
     * order for stateful rules</a> in the <i>Network Firewall Developer Guide</i>.
     * </p>
     */
    inline void SetRuleOrder(RuleOrder&& value) { m_ruleOrderHasBeenSet = true; m_ruleOrder = std::move(value); }

    /**
     * <p>Indicates how to manage the order of the rule evaluation for the rule group.
     * <code>DEFAULT_ACTION_ORDER</code> is the default behavior. Stateful rules are
     * provided to the rule engine as Suricata compatible strings, and Suricata
     * evaluates them based on certain settings. For more information, see <a
     * href="https://docs.aws.amazon.com/network-firewall/latest/developerguide/suricata-rule-evaluation-order.html">Evaluation
     * order for stateful rules</a> in the <i>Network Firewall Developer Guide</i>.
     * </p>
     */
    inline StatefulRuleOptions& WithRuleOrder(const RuleOrder& value) { SetRuleOrder(value); return *this;}

    /**
     * <p>Indicates how to manage the order of the rule evaluation for the rule group.
     * <code>DEFAULT_ACTION_ORDER</code> is the default behavior. Stateful rules are
     * provided to the rule engine as Suricata compatible strings, and Suricata
     * evaluates them based on certain settings. For more information, see <a
     * href="https://docs.aws.amazon.com/network-firewall/latest/developerguide/suricata-rule-evaluation-order.html">Evaluation
     * order for stateful rules</a> in the <i>Network Firewall Developer Guide</i>.
     * </p>
     */
    inline StatefulRuleOptions& WithRuleOrder(RuleOrder&& value) { SetRuleOrder(std::move(value)); return *this;}

  private:

    RuleOrder m_ruleOrder;
    bool m_ruleOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
