﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/RuleOrder.h>
#include <aws/network-firewall/model/StreamExceptionPolicy.h>
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
   * <p>Configuration settings for the handling of the stateful rule groups in a
   * firewall policy. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/StatefulEngineOptions">AWS
   * API Reference</a></p>
   */
  class StatefulEngineOptions
  {
  public:
    AWS_NETWORKFIREWALL_API StatefulEngineOptions();
    AWS_NETWORKFIREWALL_API StatefulEngineOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API StatefulEngineOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates how to manage the order of stateful rule evaluation for the policy.
     * <code>STRICT_ORDER</code> is the default and recommended option. With
     * <code>STRICT_ORDER</code>, provide your rules in the order that you want them to
     * be evaluated. You can then choose one or more default actions for packets that
     * don't match any rules. Choose <code>STRICT_ORDER</code> to have the stateful
     * rules engine determine the evaluation order of your rules. The default action
     * for this rule order is <code>PASS</code>, followed by <code>DROP</code>,
     * <code>REJECT</code>, and <code>ALERT</code> actions. Stateful rules are provided
     * to the rule engine as Suricata compatible strings, and Suricata evaluates them
     * based on your settings. For more information, see <a
     * href="https://docs.aws.amazon.com/network-firewall/latest/developerguide/suricata-rule-evaluation-order.html">Evaluation
     * order for stateful rules</a> in the <i>Network Firewall Developer Guide</i>.
     * </p>
     */
    inline const RuleOrder& GetRuleOrder() const{ return m_ruleOrder; }
    inline bool RuleOrderHasBeenSet() const { return m_ruleOrderHasBeenSet; }
    inline void SetRuleOrder(const RuleOrder& value) { m_ruleOrderHasBeenSet = true; m_ruleOrder = value; }
    inline void SetRuleOrder(RuleOrder&& value) { m_ruleOrderHasBeenSet = true; m_ruleOrder = std::move(value); }
    inline StatefulEngineOptions& WithRuleOrder(const RuleOrder& value) { SetRuleOrder(value); return *this;}
    inline StatefulEngineOptions& WithRuleOrder(RuleOrder&& value) { SetRuleOrder(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configures how Network Firewall processes traffic when a network connection
     * breaks midstream. Network connections can break due to disruptions in external
     * networks or within the firewall itself.</p> <ul> <li> <p> <code>DROP</code> -
     * Network Firewall fails closed and drops all subsequent traffic going to the
     * firewall. This is the default behavior.</p> </li> <li> <p> <code>CONTINUE</code>
     * - Network Firewall continues to apply rules to the subsequent traffic without
     * context from traffic before the break. This impacts the behavior of rules that
     * depend on this context. For example, if you have a stateful rule to <code>drop
     * http</code> traffic, Network Firewall won't match the traffic for this rule
     * because the service won't have the context from session initialization defining
     * the application layer protocol as HTTP. However, this behavior is rule
     * dependent—a TCP-layer rule using a <code>flow:stateless</code> rule would still
     * match, as would the <code>aws:drop_strict</code> default action.</p> </li> <li>
     * <p> <code>REJECT</code> - Network Firewall fails closed and drops all subsequent
     * traffic going to the firewall. Network Firewall also sends a TCP reject packet
     * back to your client so that the client can immediately establish a new session.
     * Network Firewall will have context about the new session and will apply rules to
     * the subsequent traffic.</p> </li> </ul>
     */
    inline const StreamExceptionPolicy& GetStreamExceptionPolicy() const{ return m_streamExceptionPolicy; }
    inline bool StreamExceptionPolicyHasBeenSet() const { return m_streamExceptionPolicyHasBeenSet; }
    inline void SetStreamExceptionPolicy(const StreamExceptionPolicy& value) { m_streamExceptionPolicyHasBeenSet = true; m_streamExceptionPolicy = value; }
    inline void SetStreamExceptionPolicy(StreamExceptionPolicy&& value) { m_streamExceptionPolicyHasBeenSet = true; m_streamExceptionPolicy = std::move(value); }
    inline StatefulEngineOptions& WithStreamExceptionPolicy(const StreamExceptionPolicy& value) { SetStreamExceptionPolicy(value); return *this;}
    inline StatefulEngineOptions& WithStreamExceptionPolicy(StreamExceptionPolicy&& value) { SetStreamExceptionPolicy(std::move(value)); return *this;}
    ///@}
  private:

    RuleOrder m_ruleOrder;
    bool m_ruleOrderHasBeenSet = false;

    StreamExceptionPolicy m_streamExceptionPolicy;
    bool m_streamExceptionPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
