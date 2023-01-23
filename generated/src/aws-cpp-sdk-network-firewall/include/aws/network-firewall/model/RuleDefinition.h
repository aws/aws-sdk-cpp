/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/MatchAttributes.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The inspection criteria and action for a single stateless rule. Network
   * Firewall inspects each packet for the specified matching criteria. When a packet
   * matches the criteria, Network Firewall performs the rule's actions on the
   * packet.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/RuleDefinition">AWS
   * API Reference</a></p>
   */
  class RuleDefinition
  {
  public:
    AWS_NETWORKFIREWALL_API RuleDefinition();
    AWS_NETWORKFIREWALL_API RuleDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API RuleDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Criteria for Network Firewall to use to inspect an individual packet in
     * stateless rule inspection. Each match attributes set can include one or more
     * items such as IP address, CIDR range, port number, protocol, and TCP flags. </p>
     */
    inline const MatchAttributes& GetMatchAttributes() const{ return m_matchAttributes; }

    /**
     * <p>Criteria for Network Firewall to use to inspect an individual packet in
     * stateless rule inspection. Each match attributes set can include one or more
     * items such as IP address, CIDR range, port number, protocol, and TCP flags. </p>
     */
    inline bool MatchAttributesHasBeenSet() const { return m_matchAttributesHasBeenSet; }

    /**
     * <p>Criteria for Network Firewall to use to inspect an individual packet in
     * stateless rule inspection. Each match attributes set can include one or more
     * items such as IP address, CIDR range, port number, protocol, and TCP flags. </p>
     */
    inline void SetMatchAttributes(const MatchAttributes& value) { m_matchAttributesHasBeenSet = true; m_matchAttributes = value; }

    /**
     * <p>Criteria for Network Firewall to use to inspect an individual packet in
     * stateless rule inspection. Each match attributes set can include one or more
     * items such as IP address, CIDR range, port number, protocol, and TCP flags. </p>
     */
    inline void SetMatchAttributes(MatchAttributes&& value) { m_matchAttributesHasBeenSet = true; m_matchAttributes = std::move(value); }

    /**
     * <p>Criteria for Network Firewall to use to inspect an individual packet in
     * stateless rule inspection. Each match attributes set can include one or more
     * items such as IP address, CIDR range, port number, protocol, and TCP flags. </p>
     */
    inline RuleDefinition& WithMatchAttributes(const MatchAttributes& value) { SetMatchAttributes(value); return *this;}

    /**
     * <p>Criteria for Network Firewall to use to inspect an individual packet in
     * stateless rule inspection. Each match attributes set can include one or more
     * items such as IP address, CIDR range, port number, protocol, and TCP flags. </p>
     */
    inline RuleDefinition& WithMatchAttributes(MatchAttributes&& value) { SetMatchAttributes(std::move(value)); return *this;}


    /**
     * <p>The actions to take on a packet that matches one of the stateless rule
     * definition's match attributes. You must specify a standard action and you can
     * add custom actions. </p>  <p>Network Firewall only forwards a packet for
     * stateful rule inspection if you specify <code>aws:forward_to_sfe</code> for a
     * rule that the packet matches, or if the packet doesn't match any stateless rule
     * and you specify <code>aws:forward_to_sfe</code> for the
     * <code>StatelessDefaultActions</code> setting for the <a>FirewallPolicy</a>.</p>
     *  <p>For every rule, you must specify exactly one of the following
     * standard actions. </p> <ul> <li> <p> <b>aws:pass</b> - Discontinues all
     * inspection of the packet and permits it to go to its intended destination.</p>
     * </li> <li> <p> <b>aws:drop</b> - Discontinues all inspection of the packet and
     * blocks it from going to its intended destination.</p> </li> <li> <p>
     * <b>aws:forward_to_sfe</b> - Discontinues stateless inspection of the packet and
     * forwards it to the stateful rule engine for inspection. </p> </li> </ul>
     * <p>Additionally, you can specify a custom action. To do this, you define a
     * custom action by name and type, then provide the name you've assigned to the
     * action in this <code>Actions</code> setting. For information about the options,
     * see <a>CustomAction</a>. </p> <p>To provide more than one action in this
     * setting, separate the settings with a comma. For example, if you have a custom
     * <code>PublishMetrics</code> action that you've named
     * <code>MyMetricsAction</code>, then you could specify the standard action
     * <code>aws:pass</code> and the custom action with <code>[“aws:pass”,
     * “MyMetricsAction”]</code>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetActions() const{ return m_actions; }

    /**
     * <p>The actions to take on a packet that matches one of the stateless rule
     * definition's match attributes. You must specify a standard action and you can
     * add custom actions. </p>  <p>Network Firewall only forwards a packet for
     * stateful rule inspection if you specify <code>aws:forward_to_sfe</code> for a
     * rule that the packet matches, or if the packet doesn't match any stateless rule
     * and you specify <code>aws:forward_to_sfe</code> for the
     * <code>StatelessDefaultActions</code> setting for the <a>FirewallPolicy</a>.</p>
     *  <p>For every rule, you must specify exactly one of the following
     * standard actions. </p> <ul> <li> <p> <b>aws:pass</b> - Discontinues all
     * inspection of the packet and permits it to go to its intended destination.</p>
     * </li> <li> <p> <b>aws:drop</b> - Discontinues all inspection of the packet and
     * blocks it from going to its intended destination.</p> </li> <li> <p>
     * <b>aws:forward_to_sfe</b> - Discontinues stateless inspection of the packet and
     * forwards it to the stateful rule engine for inspection. </p> </li> </ul>
     * <p>Additionally, you can specify a custom action. To do this, you define a
     * custom action by name and type, then provide the name you've assigned to the
     * action in this <code>Actions</code> setting. For information about the options,
     * see <a>CustomAction</a>. </p> <p>To provide more than one action in this
     * setting, separate the settings with a comma. For example, if you have a custom
     * <code>PublishMetrics</code> action that you've named
     * <code>MyMetricsAction</code>, then you could specify the standard action
     * <code>aws:pass</code> and the custom action with <code>[“aws:pass”,
     * “MyMetricsAction”]</code>. </p>
     */
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }

    /**
     * <p>The actions to take on a packet that matches one of the stateless rule
     * definition's match attributes. You must specify a standard action and you can
     * add custom actions. </p>  <p>Network Firewall only forwards a packet for
     * stateful rule inspection if you specify <code>aws:forward_to_sfe</code> for a
     * rule that the packet matches, or if the packet doesn't match any stateless rule
     * and you specify <code>aws:forward_to_sfe</code> for the
     * <code>StatelessDefaultActions</code> setting for the <a>FirewallPolicy</a>.</p>
     *  <p>For every rule, you must specify exactly one of the following
     * standard actions. </p> <ul> <li> <p> <b>aws:pass</b> - Discontinues all
     * inspection of the packet and permits it to go to its intended destination.</p>
     * </li> <li> <p> <b>aws:drop</b> - Discontinues all inspection of the packet and
     * blocks it from going to its intended destination.</p> </li> <li> <p>
     * <b>aws:forward_to_sfe</b> - Discontinues stateless inspection of the packet and
     * forwards it to the stateful rule engine for inspection. </p> </li> </ul>
     * <p>Additionally, you can specify a custom action. To do this, you define a
     * custom action by name and type, then provide the name you've assigned to the
     * action in this <code>Actions</code> setting. For information about the options,
     * see <a>CustomAction</a>. </p> <p>To provide more than one action in this
     * setting, separate the settings with a comma. For example, if you have a custom
     * <code>PublishMetrics</code> action that you've named
     * <code>MyMetricsAction</code>, then you could specify the standard action
     * <code>aws:pass</code> and the custom action with <code>[“aws:pass”,
     * “MyMetricsAction”]</code>. </p>
     */
    inline void SetActions(const Aws::Vector<Aws::String>& value) { m_actionsHasBeenSet = true; m_actions = value; }

    /**
     * <p>The actions to take on a packet that matches one of the stateless rule
     * definition's match attributes. You must specify a standard action and you can
     * add custom actions. </p>  <p>Network Firewall only forwards a packet for
     * stateful rule inspection if you specify <code>aws:forward_to_sfe</code> for a
     * rule that the packet matches, or if the packet doesn't match any stateless rule
     * and you specify <code>aws:forward_to_sfe</code> for the
     * <code>StatelessDefaultActions</code> setting for the <a>FirewallPolicy</a>.</p>
     *  <p>For every rule, you must specify exactly one of the following
     * standard actions. </p> <ul> <li> <p> <b>aws:pass</b> - Discontinues all
     * inspection of the packet and permits it to go to its intended destination.</p>
     * </li> <li> <p> <b>aws:drop</b> - Discontinues all inspection of the packet and
     * blocks it from going to its intended destination.</p> </li> <li> <p>
     * <b>aws:forward_to_sfe</b> - Discontinues stateless inspection of the packet and
     * forwards it to the stateful rule engine for inspection. </p> </li> </ul>
     * <p>Additionally, you can specify a custom action. To do this, you define a
     * custom action by name and type, then provide the name you've assigned to the
     * action in this <code>Actions</code> setting. For information about the options,
     * see <a>CustomAction</a>. </p> <p>To provide more than one action in this
     * setting, separate the settings with a comma. For example, if you have a custom
     * <code>PublishMetrics</code> action that you've named
     * <code>MyMetricsAction</code>, then you could specify the standard action
     * <code>aws:pass</code> and the custom action with <code>[“aws:pass”,
     * “MyMetricsAction”]</code>. </p>
     */
    inline void SetActions(Aws::Vector<Aws::String>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }

    /**
     * <p>The actions to take on a packet that matches one of the stateless rule
     * definition's match attributes. You must specify a standard action and you can
     * add custom actions. </p>  <p>Network Firewall only forwards a packet for
     * stateful rule inspection if you specify <code>aws:forward_to_sfe</code> for a
     * rule that the packet matches, or if the packet doesn't match any stateless rule
     * and you specify <code>aws:forward_to_sfe</code> for the
     * <code>StatelessDefaultActions</code> setting for the <a>FirewallPolicy</a>.</p>
     *  <p>For every rule, you must specify exactly one of the following
     * standard actions. </p> <ul> <li> <p> <b>aws:pass</b> - Discontinues all
     * inspection of the packet and permits it to go to its intended destination.</p>
     * </li> <li> <p> <b>aws:drop</b> - Discontinues all inspection of the packet and
     * blocks it from going to its intended destination.</p> </li> <li> <p>
     * <b>aws:forward_to_sfe</b> - Discontinues stateless inspection of the packet and
     * forwards it to the stateful rule engine for inspection. </p> </li> </ul>
     * <p>Additionally, you can specify a custom action. To do this, you define a
     * custom action by name and type, then provide the name you've assigned to the
     * action in this <code>Actions</code> setting. For information about the options,
     * see <a>CustomAction</a>. </p> <p>To provide more than one action in this
     * setting, separate the settings with a comma. For example, if you have a custom
     * <code>PublishMetrics</code> action that you've named
     * <code>MyMetricsAction</code>, then you could specify the standard action
     * <code>aws:pass</code> and the custom action with <code>[“aws:pass”,
     * “MyMetricsAction”]</code>. </p>
     */
    inline RuleDefinition& WithActions(const Aws::Vector<Aws::String>& value) { SetActions(value); return *this;}

    /**
     * <p>The actions to take on a packet that matches one of the stateless rule
     * definition's match attributes. You must specify a standard action and you can
     * add custom actions. </p>  <p>Network Firewall only forwards a packet for
     * stateful rule inspection if you specify <code>aws:forward_to_sfe</code> for a
     * rule that the packet matches, or if the packet doesn't match any stateless rule
     * and you specify <code>aws:forward_to_sfe</code> for the
     * <code>StatelessDefaultActions</code> setting for the <a>FirewallPolicy</a>.</p>
     *  <p>For every rule, you must specify exactly one of the following
     * standard actions. </p> <ul> <li> <p> <b>aws:pass</b> - Discontinues all
     * inspection of the packet and permits it to go to its intended destination.</p>
     * </li> <li> <p> <b>aws:drop</b> - Discontinues all inspection of the packet and
     * blocks it from going to its intended destination.</p> </li> <li> <p>
     * <b>aws:forward_to_sfe</b> - Discontinues stateless inspection of the packet and
     * forwards it to the stateful rule engine for inspection. </p> </li> </ul>
     * <p>Additionally, you can specify a custom action. To do this, you define a
     * custom action by name and type, then provide the name you've assigned to the
     * action in this <code>Actions</code> setting. For information about the options,
     * see <a>CustomAction</a>. </p> <p>To provide more than one action in this
     * setting, separate the settings with a comma. For example, if you have a custom
     * <code>PublishMetrics</code> action that you've named
     * <code>MyMetricsAction</code>, then you could specify the standard action
     * <code>aws:pass</code> and the custom action with <code>[“aws:pass”,
     * “MyMetricsAction”]</code>. </p>
     */
    inline RuleDefinition& WithActions(Aws::Vector<Aws::String>&& value) { SetActions(std::move(value)); return *this;}

    /**
     * <p>The actions to take on a packet that matches one of the stateless rule
     * definition's match attributes. You must specify a standard action and you can
     * add custom actions. </p>  <p>Network Firewall only forwards a packet for
     * stateful rule inspection if you specify <code>aws:forward_to_sfe</code> for a
     * rule that the packet matches, or if the packet doesn't match any stateless rule
     * and you specify <code>aws:forward_to_sfe</code> for the
     * <code>StatelessDefaultActions</code> setting for the <a>FirewallPolicy</a>.</p>
     *  <p>For every rule, you must specify exactly one of the following
     * standard actions. </p> <ul> <li> <p> <b>aws:pass</b> - Discontinues all
     * inspection of the packet and permits it to go to its intended destination.</p>
     * </li> <li> <p> <b>aws:drop</b> - Discontinues all inspection of the packet and
     * blocks it from going to its intended destination.</p> </li> <li> <p>
     * <b>aws:forward_to_sfe</b> - Discontinues stateless inspection of the packet and
     * forwards it to the stateful rule engine for inspection. </p> </li> </ul>
     * <p>Additionally, you can specify a custom action. To do this, you define a
     * custom action by name and type, then provide the name you've assigned to the
     * action in this <code>Actions</code> setting. For information about the options,
     * see <a>CustomAction</a>. </p> <p>To provide more than one action in this
     * setting, separate the settings with a comma. For example, if you have a custom
     * <code>PublishMetrics</code> action that you've named
     * <code>MyMetricsAction</code>, then you could specify the standard action
     * <code>aws:pass</code> and the custom action with <code>[“aws:pass”,
     * “MyMetricsAction”]</code>. </p>
     */
    inline RuleDefinition& AddActions(const Aws::String& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }

    /**
     * <p>The actions to take on a packet that matches one of the stateless rule
     * definition's match attributes. You must specify a standard action and you can
     * add custom actions. </p>  <p>Network Firewall only forwards a packet for
     * stateful rule inspection if you specify <code>aws:forward_to_sfe</code> for a
     * rule that the packet matches, or if the packet doesn't match any stateless rule
     * and you specify <code>aws:forward_to_sfe</code> for the
     * <code>StatelessDefaultActions</code> setting for the <a>FirewallPolicy</a>.</p>
     *  <p>For every rule, you must specify exactly one of the following
     * standard actions. </p> <ul> <li> <p> <b>aws:pass</b> - Discontinues all
     * inspection of the packet and permits it to go to its intended destination.</p>
     * </li> <li> <p> <b>aws:drop</b> - Discontinues all inspection of the packet and
     * blocks it from going to its intended destination.</p> </li> <li> <p>
     * <b>aws:forward_to_sfe</b> - Discontinues stateless inspection of the packet and
     * forwards it to the stateful rule engine for inspection. </p> </li> </ul>
     * <p>Additionally, you can specify a custom action. To do this, you define a
     * custom action by name and type, then provide the name you've assigned to the
     * action in this <code>Actions</code> setting. For information about the options,
     * see <a>CustomAction</a>. </p> <p>To provide more than one action in this
     * setting, separate the settings with a comma. For example, if you have a custom
     * <code>PublishMetrics</code> action that you've named
     * <code>MyMetricsAction</code>, then you could specify the standard action
     * <code>aws:pass</code> and the custom action with <code>[“aws:pass”,
     * “MyMetricsAction”]</code>. </p>
     */
    inline RuleDefinition& AddActions(Aws::String&& value) { m_actionsHasBeenSet = true; m_actions.push_back(std::move(value)); return *this; }

    /**
     * <p>The actions to take on a packet that matches one of the stateless rule
     * definition's match attributes. You must specify a standard action and you can
     * add custom actions. </p>  <p>Network Firewall only forwards a packet for
     * stateful rule inspection if you specify <code>aws:forward_to_sfe</code> for a
     * rule that the packet matches, or if the packet doesn't match any stateless rule
     * and you specify <code>aws:forward_to_sfe</code> for the
     * <code>StatelessDefaultActions</code> setting for the <a>FirewallPolicy</a>.</p>
     *  <p>For every rule, you must specify exactly one of the following
     * standard actions. </p> <ul> <li> <p> <b>aws:pass</b> - Discontinues all
     * inspection of the packet and permits it to go to its intended destination.</p>
     * </li> <li> <p> <b>aws:drop</b> - Discontinues all inspection of the packet and
     * blocks it from going to its intended destination.</p> </li> <li> <p>
     * <b>aws:forward_to_sfe</b> - Discontinues stateless inspection of the packet and
     * forwards it to the stateful rule engine for inspection. </p> </li> </ul>
     * <p>Additionally, you can specify a custom action. To do this, you define a
     * custom action by name and type, then provide the name you've assigned to the
     * action in this <code>Actions</code> setting. For information about the options,
     * see <a>CustomAction</a>. </p> <p>To provide more than one action in this
     * setting, separate the settings with a comma. For example, if you have a custom
     * <code>PublishMetrics</code> action that you've named
     * <code>MyMetricsAction</code>, then you could specify the standard action
     * <code>aws:pass</code> and the custom action with <code>[“aws:pass”,
     * “MyMetricsAction”]</code>. </p>
     */
    inline RuleDefinition& AddActions(const char* value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }

  private:

    MatchAttributes m_matchAttributes;
    bool m_matchAttributesHasBeenSet = false;

    Aws::Vector<Aws::String> m_actions;
    bool m_actionsHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
