/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-firewall/model/StatefulEngineOptions.h>
#include <aws/network-firewall/model/StatelessRuleGroupReference.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/model/CustomAction.h>
#include <aws/network-firewall/model/StatefulRuleGroupReference.h>
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
   * <p>The firewall policy defines the behavior of a firewall using a collection of
   * stateless and stateful rule groups and other settings. You can use one firewall
   * policy for multiple firewalls. </p> <p>This, along with
   * <a>FirewallPolicyResponse</a>, define the policy. You can retrieve all objects
   * for a firewall policy by calling <a>DescribeFirewallPolicy</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/FirewallPolicy">AWS
   * API Reference</a></p>
   */
  class FirewallPolicy
  {
  public:
    AWS_NETWORKFIREWALL_API FirewallPolicy();
    AWS_NETWORKFIREWALL_API FirewallPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API FirewallPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>References to the stateless rule groups that are used in the policy. These
     * define the matching criteria in stateless rules. </p>
     */
    inline const Aws::Vector<StatelessRuleGroupReference>& GetStatelessRuleGroupReferences() const{ return m_statelessRuleGroupReferences; }

    /**
     * <p>References to the stateless rule groups that are used in the policy. These
     * define the matching criteria in stateless rules. </p>
     */
    inline bool StatelessRuleGroupReferencesHasBeenSet() const { return m_statelessRuleGroupReferencesHasBeenSet; }

    /**
     * <p>References to the stateless rule groups that are used in the policy. These
     * define the matching criteria in stateless rules. </p>
     */
    inline void SetStatelessRuleGroupReferences(const Aws::Vector<StatelessRuleGroupReference>& value) { m_statelessRuleGroupReferencesHasBeenSet = true; m_statelessRuleGroupReferences = value; }

    /**
     * <p>References to the stateless rule groups that are used in the policy. These
     * define the matching criteria in stateless rules. </p>
     */
    inline void SetStatelessRuleGroupReferences(Aws::Vector<StatelessRuleGroupReference>&& value) { m_statelessRuleGroupReferencesHasBeenSet = true; m_statelessRuleGroupReferences = std::move(value); }

    /**
     * <p>References to the stateless rule groups that are used in the policy. These
     * define the matching criteria in stateless rules. </p>
     */
    inline FirewallPolicy& WithStatelessRuleGroupReferences(const Aws::Vector<StatelessRuleGroupReference>& value) { SetStatelessRuleGroupReferences(value); return *this;}

    /**
     * <p>References to the stateless rule groups that are used in the policy. These
     * define the matching criteria in stateless rules. </p>
     */
    inline FirewallPolicy& WithStatelessRuleGroupReferences(Aws::Vector<StatelessRuleGroupReference>&& value) { SetStatelessRuleGroupReferences(std::move(value)); return *this;}

    /**
     * <p>References to the stateless rule groups that are used in the policy. These
     * define the matching criteria in stateless rules. </p>
     */
    inline FirewallPolicy& AddStatelessRuleGroupReferences(const StatelessRuleGroupReference& value) { m_statelessRuleGroupReferencesHasBeenSet = true; m_statelessRuleGroupReferences.push_back(value); return *this; }

    /**
     * <p>References to the stateless rule groups that are used in the policy. These
     * define the matching criteria in stateless rules. </p>
     */
    inline FirewallPolicy& AddStatelessRuleGroupReferences(StatelessRuleGroupReference&& value) { m_statelessRuleGroupReferencesHasBeenSet = true; m_statelessRuleGroupReferences.push_back(std::move(value)); return *this; }


    /**
     * <p>The actions to take on a packet if it doesn't match any of the stateless
     * rules in the policy. If you want non-matching packets to be forwarded for
     * stateful inspection, specify <code>aws:forward_to_sfe</code>. </p> <p>You must
     * specify one of the standard actions: <code>aws:pass</code>,
     * <code>aws:drop</code>, or <code>aws:forward_to_sfe</code>. In addition, you can
     * specify custom actions that are compatible with your standard section
     * choice.</p> <p>For example, you could specify <code>["aws:pass"]</code> or you
     * could specify <code>["aws:pass", “customActionName”]</code>. For information
     * about compatibility, see the custom action descriptions under
     * <a>CustomAction</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStatelessDefaultActions() const{ return m_statelessDefaultActions; }

    /**
     * <p>The actions to take on a packet if it doesn't match any of the stateless
     * rules in the policy. If you want non-matching packets to be forwarded for
     * stateful inspection, specify <code>aws:forward_to_sfe</code>. </p> <p>You must
     * specify one of the standard actions: <code>aws:pass</code>,
     * <code>aws:drop</code>, or <code>aws:forward_to_sfe</code>. In addition, you can
     * specify custom actions that are compatible with your standard section
     * choice.</p> <p>For example, you could specify <code>["aws:pass"]</code> or you
     * could specify <code>["aws:pass", “customActionName”]</code>. For information
     * about compatibility, see the custom action descriptions under
     * <a>CustomAction</a>.</p>
     */
    inline bool StatelessDefaultActionsHasBeenSet() const { return m_statelessDefaultActionsHasBeenSet; }

    /**
     * <p>The actions to take on a packet if it doesn't match any of the stateless
     * rules in the policy. If you want non-matching packets to be forwarded for
     * stateful inspection, specify <code>aws:forward_to_sfe</code>. </p> <p>You must
     * specify one of the standard actions: <code>aws:pass</code>,
     * <code>aws:drop</code>, or <code>aws:forward_to_sfe</code>. In addition, you can
     * specify custom actions that are compatible with your standard section
     * choice.</p> <p>For example, you could specify <code>["aws:pass"]</code> or you
     * could specify <code>["aws:pass", “customActionName”]</code>. For information
     * about compatibility, see the custom action descriptions under
     * <a>CustomAction</a>.</p>
     */
    inline void SetStatelessDefaultActions(const Aws::Vector<Aws::String>& value) { m_statelessDefaultActionsHasBeenSet = true; m_statelessDefaultActions = value; }

    /**
     * <p>The actions to take on a packet if it doesn't match any of the stateless
     * rules in the policy. If you want non-matching packets to be forwarded for
     * stateful inspection, specify <code>aws:forward_to_sfe</code>. </p> <p>You must
     * specify one of the standard actions: <code>aws:pass</code>,
     * <code>aws:drop</code>, or <code>aws:forward_to_sfe</code>. In addition, you can
     * specify custom actions that are compatible with your standard section
     * choice.</p> <p>For example, you could specify <code>["aws:pass"]</code> or you
     * could specify <code>["aws:pass", “customActionName”]</code>. For information
     * about compatibility, see the custom action descriptions under
     * <a>CustomAction</a>.</p>
     */
    inline void SetStatelessDefaultActions(Aws::Vector<Aws::String>&& value) { m_statelessDefaultActionsHasBeenSet = true; m_statelessDefaultActions = std::move(value); }

    /**
     * <p>The actions to take on a packet if it doesn't match any of the stateless
     * rules in the policy. If you want non-matching packets to be forwarded for
     * stateful inspection, specify <code>aws:forward_to_sfe</code>. </p> <p>You must
     * specify one of the standard actions: <code>aws:pass</code>,
     * <code>aws:drop</code>, or <code>aws:forward_to_sfe</code>. In addition, you can
     * specify custom actions that are compatible with your standard section
     * choice.</p> <p>For example, you could specify <code>["aws:pass"]</code> or you
     * could specify <code>["aws:pass", “customActionName”]</code>. For information
     * about compatibility, see the custom action descriptions under
     * <a>CustomAction</a>.</p>
     */
    inline FirewallPolicy& WithStatelessDefaultActions(const Aws::Vector<Aws::String>& value) { SetStatelessDefaultActions(value); return *this;}

    /**
     * <p>The actions to take on a packet if it doesn't match any of the stateless
     * rules in the policy. If you want non-matching packets to be forwarded for
     * stateful inspection, specify <code>aws:forward_to_sfe</code>. </p> <p>You must
     * specify one of the standard actions: <code>aws:pass</code>,
     * <code>aws:drop</code>, or <code>aws:forward_to_sfe</code>. In addition, you can
     * specify custom actions that are compatible with your standard section
     * choice.</p> <p>For example, you could specify <code>["aws:pass"]</code> or you
     * could specify <code>["aws:pass", “customActionName”]</code>. For information
     * about compatibility, see the custom action descriptions under
     * <a>CustomAction</a>.</p>
     */
    inline FirewallPolicy& WithStatelessDefaultActions(Aws::Vector<Aws::String>&& value) { SetStatelessDefaultActions(std::move(value)); return *this;}

    /**
     * <p>The actions to take on a packet if it doesn't match any of the stateless
     * rules in the policy. If you want non-matching packets to be forwarded for
     * stateful inspection, specify <code>aws:forward_to_sfe</code>. </p> <p>You must
     * specify one of the standard actions: <code>aws:pass</code>,
     * <code>aws:drop</code>, or <code>aws:forward_to_sfe</code>. In addition, you can
     * specify custom actions that are compatible with your standard section
     * choice.</p> <p>For example, you could specify <code>["aws:pass"]</code> or you
     * could specify <code>["aws:pass", “customActionName”]</code>. For information
     * about compatibility, see the custom action descriptions under
     * <a>CustomAction</a>.</p>
     */
    inline FirewallPolicy& AddStatelessDefaultActions(const Aws::String& value) { m_statelessDefaultActionsHasBeenSet = true; m_statelessDefaultActions.push_back(value); return *this; }

    /**
     * <p>The actions to take on a packet if it doesn't match any of the stateless
     * rules in the policy. If you want non-matching packets to be forwarded for
     * stateful inspection, specify <code>aws:forward_to_sfe</code>. </p> <p>You must
     * specify one of the standard actions: <code>aws:pass</code>,
     * <code>aws:drop</code>, or <code>aws:forward_to_sfe</code>. In addition, you can
     * specify custom actions that are compatible with your standard section
     * choice.</p> <p>For example, you could specify <code>["aws:pass"]</code> or you
     * could specify <code>["aws:pass", “customActionName”]</code>. For information
     * about compatibility, see the custom action descriptions under
     * <a>CustomAction</a>.</p>
     */
    inline FirewallPolicy& AddStatelessDefaultActions(Aws::String&& value) { m_statelessDefaultActionsHasBeenSet = true; m_statelessDefaultActions.push_back(std::move(value)); return *this; }

    /**
     * <p>The actions to take on a packet if it doesn't match any of the stateless
     * rules in the policy. If you want non-matching packets to be forwarded for
     * stateful inspection, specify <code>aws:forward_to_sfe</code>. </p> <p>You must
     * specify one of the standard actions: <code>aws:pass</code>,
     * <code>aws:drop</code>, or <code>aws:forward_to_sfe</code>. In addition, you can
     * specify custom actions that are compatible with your standard section
     * choice.</p> <p>For example, you could specify <code>["aws:pass"]</code> or you
     * could specify <code>["aws:pass", “customActionName”]</code>. For information
     * about compatibility, see the custom action descriptions under
     * <a>CustomAction</a>.</p>
     */
    inline FirewallPolicy& AddStatelessDefaultActions(const char* value) { m_statelessDefaultActionsHasBeenSet = true; m_statelessDefaultActions.push_back(value); return *this; }


    /**
     * <p>The actions to take on a fragmented UDP packet if it doesn't match any of the
     * stateless rules in the policy. Network Firewall only manages UDP packet
     * fragments and silently drops packet fragments for other protocols. If you want
     * non-matching fragmented UDP packets to be forwarded for stateful inspection,
     * specify <code>aws:forward_to_sfe</code>. </p> <p>You must specify one of the
     * standard actions: <code>aws:pass</code>, <code>aws:drop</code>, or
     * <code>aws:forward_to_sfe</code>. In addition, you can specify custom actions
     * that are compatible with your standard section choice.</p> <p>For example, you
     * could specify <code>["aws:pass"]</code> or you could specify <code>["aws:pass",
     * “customActionName”]</code>. For information about compatibility, see the custom
     * action descriptions under <a>CustomAction</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStatelessFragmentDefaultActions() const{ return m_statelessFragmentDefaultActions; }

    /**
     * <p>The actions to take on a fragmented UDP packet if it doesn't match any of the
     * stateless rules in the policy. Network Firewall only manages UDP packet
     * fragments and silently drops packet fragments for other protocols. If you want
     * non-matching fragmented UDP packets to be forwarded for stateful inspection,
     * specify <code>aws:forward_to_sfe</code>. </p> <p>You must specify one of the
     * standard actions: <code>aws:pass</code>, <code>aws:drop</code>, or
     * <code>aws:forward_to_sfe</code>. In addition, you can specify custom actions
     * that are compatible with your standard section choice.</p> <p>For example, you
     * could specify <code>["aws:pass"]</code> or you could specify <code>["aws:pass",
     * “customActionName”]</code>. For information about compatibility, see the custom
     * action descriptions under <a>CustomAction</a>.</p>
     */
    inline bool StatelessFragmentDefaultActionsHasBeenSet() const { return m_statelessFragmentDefaultActionsHasBeenSet; }

    /**
     * <p>The actions to take on a fragmented UDP packet if it doesn't match any of the
     * stateless rules in the policy. Network Firewall only manages UDP packet
     * fragments and silently drops packet fragments for other protocols. If you want
     * non-matching fragmented UDP packets to be forwarded for stateful inspection,
     * specify <code>aws:forward_to_sfe</code>. </p> <p>You must specify one of the
     * standard actions: <code>aws:pass</code>, <code>aws:drop</code>, or
     * <code>aws:forward_to_sfe</code>. In addition, you can specify custom actions
     * that are compatible with your standard section choice.</p> <p>For example, you
     * could specify <code>["aws:pass"]</code> or you could specify <code>["aws:pass",
     * “customActionName”]</code>. For information about compatibility, see the custom
     * action descriptions under <a>CustomAction</a>.</p>
     */
    inline void SetStatelessFragmentDefaultActions(const Aws::Vector<Aws::String>& value) { m_statelessFragmentDefaultActionsHasBeenSet = true; m_statelessFragmentDefaultActions = value; }

    /**
     * <p>The actions to take on a fragmented UDP packet if it doesn't match any of the
     * stateless rules in the policy. Network Firewall only manages UDP packet
     * fragments and silently drops packet fragments for other protocols. If you want
     * non-matching fragmented UDP packets to be forwarded for stateful inspection,
     * specify <code>aws:forward_to_sfe</code>. </p> <p>You must specify one of the
     * standard actions: <code>aws:pass</code>, <code>aws:drop</code>, or
     * <code>aws:forward_to_sfe</code>. In addition, you can specify custom actions
     * that are compatible with your standard section choice.</p> <p>For example, you
     * could specify <code>["aws:pass"]</code> or you could specify <code>["aws:pass",
     * “customActionName”]</code>. For information about compatibility, see the custom
     * action descriptions under <a>CustomAction</a>.</p>
     */
    inline void SetStatelessFragmentDefaultActions(Aws::Vector<Aws::String>&& value) { m_statelessFragmentDefaultActionsHasBeenSet = true; m_statelessFragmentDefaultActions = std::move(value); }

    /**
     * <p>The actions to take on a fragmented UDP packet if it doesn't match any of the
     * stateless rules in the policy. Network Firewall only manages UDP packet
     * fragments and silently drops packet fragments for other protocols. If you want
     * non-matching fragmented UDP packets to be forwarded for stateful inspection,
     * specify <code>aws:forward_to_sfe</code>. </p> <p>You must specify one of the
     * standard actions: <code>aws:pass</code>, <code>aws:drop</code>, or
     * <code>aws:forward_to_sfe</code>. In addition, you can specify custom actions
     * that are compatible with your standard section choice.</p> <p>For example, you
     * could specify <code>["aws:pass"]</code> or you could specify <code>["aws:pass",
     * “customActionName”]</code>. For information about compatibility, see the custom
     * action descriptions under <a>CustomAction</a>.</p>
     */
    inline FirewallPolicy& WithStatelessFragmentDefaultActions(const Aws::Vector<Aws::String>& value) { SetStatelessFragmentDefaultActions(value); return *this;}

    /**
     * <p>The actions to take on a fragmented UDP packet if it doesn't match any of the
     * stateless rules in the policy. Network Firewall only manages UDP packet
     * fragments and silently drops packet fragments for other protocols. If you want
     * non-matching fragmented UDP packets to be forwarded for stateful inspection,
     * specify <code>aws:forward_to_sfe</code>. </p> <p>You must specify one of the
     * standard actions: <code>aws:pass</code>, <code>aws:drop</code>, or
     * <code>aws:forward_to_sfe</code>. In addition, you can specify custom actions
     * that are compatible with your standard section choice.</p> <p>For example, you
     * could specify <code>["aws:pass"]</code> or you could specify <code>["aws:pass",
     * “customActionName”]</code>. For information about compatibility, see the custom
     * action descriptions under <a>CustomAction</a>.</p>
     */
    inline FirewallPolicy& WithStatelessFragmentDefaultActions(Aws::Vector<Aws::String>&& value) { SetStatelessFragmentDefaultActions(std::move(value)); return *this;}

    /**
     * <p>The actions to take on a fragmented UDP packet if it doesn't match any of the
     * stateless rules in the policy. Network Firewall only manages UDP packet
     * fragments and silently drops packet fragments for other protocols. If you want
     * non-matching fragmented UDP packets to be forwarded for stateful inspection,
     * specify <code>aws:forward_to_sfe</code>. </p> <p>You must specify one of the
     * standard actions: <code>aws:pass</code>, <code>aws:drop</code>, or
     * <code>aws:forward_to_sfe</code>. In addition, you can specify custom actions
     * that are compatible with your standard section choice.</p> <p>For example, you
     * could specify <code>["aws:pass"]</code> or you could specify <code>["aws:pass",
     * “customActionName”]</code>. For information about compatibility, see the custom
     * action descriptions under <a>CustomAction</a>.</p>
     */
    inline FirewallPolicy& AddStatelessFragmentDefaultActions(const Aws::String& value) { m_statelessFragmentDefaultActionsHasBeenSet = true; m_statelessFragmentDefaultActions.push_back(value); return *this; }

    /**
     * <p>The actions to take on a fragmented UDP packet if it doesn't match any of the
     * stateless rules in the policy. Network Firewall only manages UDP packet
     * fragments and silently drops packet fragments for other protocols. If you want
     * non-matching fragmented UDP packets to be forwarded for stateful inspection,
     * specify <code>aws:forward_to_sfe</code>. </p> <p>You must specify one of the
     * standard actions: <code>aws:pass</code>, <code>aws:drop</code>, or
     * <code>aws:forward_to_sfe</code>. In addition, you can specify custom actions
     * that are compatible with your standard section choice.</p> <p>For example, you
     * could specify <code>["aws:pass"]</code> or you could specify <code>["aws:pass",
     * “customActionName”]</code>. For information about compatibility, see the custom
     * action descriptions under <a>CustomAction</a>.</p>
     */
    inline FirewallPolicy& AddStatelessFragmentDefaultActions(Aws::String&& value) { m_statelessFragmentDefaultActionsHasBeenSet = true; m_statelessFragmentDefaultActions.push_back(std::move(value)); return *this; }

    /**
     * <p>The actions to take on a fragmented UDP packet if it doesn't match any of the
     * stateless rules in the policy. Network Firewall only manages UDP packet
     * fragments and silently drops packet fragments for other protocols. If you want
     * non-matching fragmented UDP packets to be forwarded for stateful inspection,
     * specify <code>aws:forward_to_sfe</code>. </p> <p>You must specify one of the
     * standard actions: <code>aws:pass</code>, <code>aws:drop</code>, or
     * <code>aws:forward_to_sfe</code>. In addition, you can specify custom actions
     * that are compatible with your standard section choice.</p> <p>For example, you
     * could specify <code>["aws:pass"]</code> or you could specify <code>["aws:pass",
     * “customActionName”]</code>. For information about compatibility, see the custom
     * action descriptions under <a>CustomAction</a>.</p>
     */
    inline FirewallPolicy& AddStatelessFragmentDefaultActions(const char* value) { m_statelessFragmentDefaultActionsHasBeenSet = true; m_statelessFragmentDefaultActions.push_back(value); return *this; }


    /**
     * <p>The custom action definitions that are available for use in the firewall
     * policy's <code>StatelessDefaultActions</code> setting. You name each custom
     * action that you define, and then you can use it by name in your default actions
     * specifications.</p>
     */
    inline const Aws::Vector<CustomAction>& GetStatelessCustomActions() const{ return m_statelessCustomActions; }

    /**
     * <p>The custom action definitions that are available for use in the firewall
     * policy's <code>StatelessDefaultActions</code> setting. You name each custom
     * action that you define, and then you can use it by name in your default actions
     * specifications.</p>
     */
    inline bool StatelessCustomActionsHasBeenSet() const { return m_statelessCustomActionsHasBeenSet; }

    /**
     * <p>The custom action definitions that are available for use in the firewall
     * policy's <code>StatelessDefaultActions</code> setting. You name each custom
     * action that you define, and then you can use it by name in your default actions
     * specifications.</p>
     */
    inline void SetStatelessCustomActions(const Aws::Vector<CustomAction>& value) { m_statelessCustomActionsHasBeenSet = true; m_statelessCustomActions = value; }

    /**
     * <p>The custom action definitions that are available for use in the firewall
     * policy's <code>StatelessDefaultActions</code> setting. You name each custom
     * action that you define, and then you can use it by name in your default actions
     * specifications.</p>
     */
    inline void SetStatelessCustomActions(Aws::Vector<CustomAction>&& value) { m_statelessCustomActionsHasBeenSet = true; m_statelessCustomActions = std::move(value); }

    /**
     * <p>The custom action definitions that are available for use in the firewall
     * policy's <code>StatelessDefaultActions</code> setting. You name each custom
     * action that you define, and then you can use it by name in your default actions
     * specifications.</p>
     */
    inline FirewallPolicy& WithStatelessCustomActions(const Aws::Vector<CustomAction>& value) { SetStatelessCustomActions(value); return *this;}

    /**
     * <p>The custom action definitions that are available for use in the firewall
     * policy's <code>StatelessDefaultActions</code> setting. You name each custom
     * action that you define, and then you can use it by name in your default actions
     * specifications.</p>
     */
    inline FirewallPolicy& WithStatelessCustomActions(Aws::Vector<CustomAction>&& value) { SetStatelessCustomActions(std::move(value)); return *this;}

    /**
     * <p>The custom action definitions that are available for use in the firewall
     * policy's <code>StatelessDefaultActions</code> setting. You name each custom
     * action that you define, and then you can use it by name in your default actions
     * specifications.</p>
     */
    inline FirewallPolicy& AddStatelessCustomActions(const CustomAction& value) { m_statelessCustomActionsHasBeenSet = true; m_statelessCustomActions.push_back(value); return *this; }

    /**
     * <p>The custom action definitions that are available for use in the firewall
     * policy's <code>StatelessDefaultActions</code> setting. You name each custom
     * action that you define, and then you can use it by name in your default actions
     * specifications.</p>
     */
    inline FirewallPolicy& AddStatelessCustomActions(CustomAction&& value) { m_statelessCustomActionsHasBeenSet = true; m_statelessCustomActions.push_back(std::move(value)); return *this; }


    /**
     * <p>References to the stateful rule groups that are used in the policy. These
     * define the inspection criteria in stateful rules. </p>
     */
    inline const Aws::Vector<StatefulRuleGroupReference>& GetStatefulRuleGroupReferences() const{ return m_statefulRuleGroupReferences; }

    /**
     * <p>References to the stateful rule groups that are used in the policy. These
     * define the inspection criteria in stateful rules. </p>
     */
    inline bool StatefulRuleGroupReferencesHasBeenSet() const { return m_statefulRuleGroupReferencesHasBeenSet; }

    /**
     * <p>References to the stateful rule groups that are used in the policy. These
     * define the inspection criteria in stateful rules. </p>
     */
    inline void SetStatefulRuleGroupReferences(const Aws::Vector<StatefulRuleGroupReference>& value) { m_statefulRuleGroupReferencesHasBeenSet = true; m_statefulRuleGroupReferences = value; }

    /**
     * <p>References to the stateful rule groups that are used in the policy. These
     * define the inspection criteria in stateful rules. </p>
     */
    inline void SetStatefulRuleGroupReferences(Aws::Vector<StatefulRuleGroupReference>&& value) { m_statefulRuleGroupReferencesHasBeenSet = true; m_statefulRuleGroupReferences = std::move(value); }

    /**
     * <p>References to the stateful rule groups that are used in the policy. These
     * define the inspection criteria in stateful rules. </p>
     */
    inline FirewallPolicy& WithStatefulRuleGroupReferences(const Aws::Vector<StatefulRuleGroupReference>& value) { SetStatefulRuleGroupReferences(value); return *this;}

    /**
     * <p>References to the stateful rule groups that are used in the policy. These
     * define the inspection criteria in stateful rules. </p>
     */
    inline FirewallPolicy& WithStatefulRuleGroupReferences(Aws::Vector<StatefulRuleGroupReference>&& value) { SetStatefulRuleGroupReferences(std::move(value)); return *this;}

    /**
     * <p>References to the stateful rule groups that are used in the policy. These
     * define the inspection criteria in stateful rules. </p>
     */
    inline FirewallPolicy& AddStatefulRuleGroupReferences(const StatefulRuleGroupReference& value) { m_statefulRuleGroupReferencesHasBeenSet = true; m_statefulRuleGroupReferences.push_back(value); return *this; }

    /**
     * <p>References to the stateful rule groups that are used in the policy. These
     * define the inspection criteria in stateful rules. </p>
     */
    inline FirewallPolicy& AddStatefulRuleGroupReferences(StatefulRuleGroupReference&& value) { m_statefulRuleGroupReferencesHasBeenSet = true; m_statefulRuleGroupReferences.push_back(std::move(value)); return *this; }


    /**
     * <p>The default actions to take on a packet that doesn't match any stateful
     * rules. The stateful default action is optional, and is only valid when using the
     * strict rule order.</p> <p>Valid values of the stateful default action:</p> <ul>
     * <li> <p>aws:drop_strict</p> </li> <li> <p>aws:drop_established</p> </li> <li>
     * <p>aws:alert_strict</p> </li> <li> <p>aws:alert_established</p> </li> </ul>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/network-firewall/latest/developerguide/suricata-rule-evaluation-order.html#suricata-strict-rule-evaluation-order.html">Strict
     * evaluation order</a> in the <i>Network Firewall Developer Guide</i>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetStatefulDefaultActions() const{ return m_statefulDefaultActions; }

    /**
     * <p>The default actions to take on a packet that doesn't match any stateful
     * rules. The stateful default action is optional, and is only valid when using the
     * strict rule order.</p> <p>Valid values of the stateful default action:</p> <ul>
     * <li> <p>aws:drop_strict</p> </li> <li> <p>aws:drop_established</p> </li> <li>
     * <p>aws:alert_strict</p> </li> <li> <p>aws:alert_established</p> </li> </ul>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/network-firewall/latest/developerguide/suricata-rule-evaluation-order.html#suricata-strict-rule-evaluation-order.html">Strict
     * evaluation order</a> in the <i>Network Firewall Developer Guide</i>. </p>
     */
    inline bool StatefulDefaultActionsHasBeenSet() const { return m_statefulDefaultActionsHasBeenSet; }

    /**
     * <p>The default actions to take on a packet that doesn't match any stateful
     * rules. The stateful default action is optional, and is only valid when using the
     * strict rule order.</p> <p>Valid values of the stateful default action:</p> <ul>
     * <li> <p>aws:drop_strict</p> </li> <li> <p>aws:drop_established</p> </li> <li>
     * <p>aws:alert_strict</p> </li> <li> <p>aws:alert_established</p> </li> </ul>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/network-firewall/latest/developerguide/suricata-rule-evaluation-order.html#suricata-strict-rule-evaluation-order.html">Strict
     * evaluation order</a> in the <i>Network Firewall Developer Guide</i>. </p>
     */
    inline void SetStatefulDefaultActions(const Aws::Vector<Aws::String>& value) { m_statefulDefaultActionsHasBeenSet = true; m_statefulDefaultActions = value; }

    /**
     * <p>The default actions to take on a packet that doesn't match any stateful
     * rules. The stateful default action is optional, and is only valid when using the
     * strict rule order.</p> <p>Valid values of the stateful default action:</p> <ul>
     * <li> <p>aws:drop_strict</p> </li> <li> <p>aws:drop_established</p> </li> <li>
     * <p>aws:alert_strict</p> </li> <li> <p>aws:alert_established</p> </li> </ul>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/network-firewall/latest/developerguide/suricata-rule-evaluation-order.html#suricata-strict-rule-evaluation-order.html">Strict
     * evaluation order</a> in the <i>Network Firewall Developer Guide</i>. </p>
     */
    inline void SetStatefulDefaultActions(Aws::Vector<Aws::String>&& value) { m_statefulDefaultActionsHasBeenSet = true; m_statefulDefaultActions = std::move(value); }

    /**
     * <p>The default actions to take on a packet that doesn't match any stateful
     * rules. The stateful default action is optional, and is only valid when using the
     * strict rule order.</p> <p>Valid values of the stateful default action:</p> <ul>
     * <li> <p>aws:drop_strict</p> </li> <li> <p>aws:drop_established</p> </li> <li>
     * <p>aws:alert_strict</p> </li> <li> <p>aws:alert_established</p> </li> </ul>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/network-firewall/latest/developerguide/suricata-rule-evaluation-order.html#suricata-strict-rule-evaluation-order.html">Strict
     * evaluation order</a> in the <i>Network Firewall Developer Guide</i>. </p>
     */
    inline FirewallPolicy& WithStatefulDefaultActions(const Aws::Vector<Aws::String>& value) { SetStatefulDefaultActions(value); return *this;}

    /**
     * <p>The default actions to take on a packet that doesn't match any stateful
     * rules. The stateful default action is optional, and is only valid when using the
     * strict rule order.</p> <p>Valid values of the stateful default action:</p> <ul>
     * <li> <p>aws:drop_strict</p> </li> <li> <p>aws:drop_established</p> </li> <li>
     * <p>aws:alert_strict</p> </li> <li> <p>aws:alert_established</p> </li> </ul>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/network-firewall/latest/developerguide/suricata-rule-evaluation-order.html#suricata-strict-rule-evaluation-order.html">Strict
     * evaluation order</a> in the <i>Network Firewall Developer Guide</i>. </p>
     */
    inline FirewallPolicy& WithStatefulDefaultActions(Aws::Vector<Aws::String>&& value) { SetStatefulDefaultActions(std::move(value)); return *this;}

    /**
     * <p>The default actions to take on a packet that doesn't match any stateful
     * rules. The stateful default action is optional, and is only valid when using the
     * strict rule order.</p> <p>Valid values of the stateful default action:</p> <ul>
     * <li> <p>aws:drop_strict</p> </li> <li> <p>aws:drop_established</p> </li> <li>
     * <p>aws:alert_strict</p> </li> <li> <p>aws:alert_established</p> </li> </ul>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/network-firewall/latest/developerguide/suricata-rule-evaluation-order.html#suricata-strict-rule-evaluation-order.html">Strict
     * evaluation order</a> in the <i>Network Firewall Developer Guide</i>. </p>
     */
    inline FirewallPolicy& AddStatefulDefaultActions(const Aws::String& value) { m_statefulDefaultActionsHasBeenSet = true; m_statefulDefaultActions.push_back(value); return *this; }

    /**
     * <p>The default actions to take on a packet that doesn't match any stateful
     * rules. The stateful default action is optional, and is only valid when using the
     * strict rule order.</p> <p>Valid values of the stateful default action:</p> <ul>
     * <li> <p>aws:drop_strict</p> </li> <li> <p>aws:drop_established</p> </li> <li>
     * <p>aws:alert_strict</p> </li> <li> <p>aws:alert_established</p> </li> </ul>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/network-firewall/latest/developerguide/suricata-rule-evaluation-order.html#suricata-strict-rule-evaluation-order.html">Strict
     * evaluation order</a> in the <i>Network Firewall Developer Guide</i>. </p>
     */
    inline FirewallPolicy& AddStatefulDefaultActions(Aws::String&& value) { m_statefulDefaultActionsHasBeenSet = true; m_statefulDefaultActions.push_back(std::move(value)); return *this; }

    /**
     * <p>The default actions to take on a packet that doesn't match any stateful
     * rules. The stateful default action is optional, and is only valid when using the
     * strict rule order.</p> <p>Valid values of the stateful default action:</p> <ul>
     * <li> <p>aws:drop_strict</p> </li> <li> <p>aws:drop_established</p> </li> <li>
     * <p>aws:alert_strict</p> </li> <li> <p>aws:alert_established</p> </li> </ul>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/network-firewall/latest/developerguide/suricata-rule-evaluation-order.html#suricata-strict-rule-evaluation-order.html">Strict
     * evaluation order</a> in the <i>Network Firewall Developer Guide</i>. </p>
     */
    inline FirewallPolicy& AddStatefulDefaultActions(const char* value) { m_statefulDefaultActionsHasBeenSet = true; m_statefulDefaultActions.push_back(value); return *this; }


    /**
     * <p>Additional options governing how Network Firewall handles stateful rules. The
     * stateful rule groups that you use in your policy must have stateful rule options
     * settings that are compatible with these settings.</p>
     */
    inline const StatefulEngineOptions& GetStatefulEngineOptions() const{ return m_statefulEngineOptions; }

    /**
     * <p>Additional options governing how Network Firewall handles stateful rules. The
     * stateful rule groups that you use in your policy must have stateful rule options
     * settings that are compatible with these settings.</p>
     */
    inline bool StatefulEngineOptionsHasBeenSet() const { return m_statefulEngineOptionsHasBeenSet; }

    /**
     * <p>Additional options governing how Network Firewall handles stateful rules. The
     * stateful rule groups that you use in your policy must have stateful rule options
     * settings that are compatible with these settings.</p>
     */
    inline void SetStatefulEngineOptions(const StatefulEngineOptions& value) { m_statefulEngineOptionsHasBeenSet = true; m_statefulEngineOptions = value; }

    /**
     * <p>Additional options governing how Network Firewall handles stateful rules. The
     * stateful rule groups that you use in your policy must have stateful rule options
     * settings that are compatible with these settings.</p>
     */
    inline void SetStatefulEngineOptions(StatefulEngineOptions&& value) { m_statefulEngineOptionsHasBeenSet = true; m_statefulEngineOptions = std::move(value); }

    /**
     * <p>Additional options governing how Network Firewall handles stateful rules. The
     * stateful rule groups that you use in your policy must have stateful rule options
     * settings that are compatible with these settings.</p>
     */
    inline FirewallPolicy& WithStatefulEngineOptions(const StatefulEngineOptions& value) { SetStatefulEngineOptions(value); return *this;}

    /**
     * <p>Additional options governing how Network Firewall handles stateful rules. The
     * stateful rule groups that you use in your policy must have stateful rule options
     * settings that are compatible with these settings.</p>
     */
    inline FirewallPolicy& WithStatefulEngineOptions(StatefulEngineOptions&& value) { SetStatefulEngineOptions(std::move(value)); return *this;}

  private:

    Aws::Vector<StatelessRuleGroupReference> m_statelessRuleGroupReferences;
    bool m_statelessRuleGroupReferencesHasBeenSet = false;

    Aws::Vector<Aws::String> m_statelessDefaultActions;
    bool m_statelessDefaultActionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_statelessFragmentDefaultActions;
    bool m_statelessFragmentDefaultActionsHasBeenSet = false;

    Aws::Vector<CustomAction> m_statelessCustomActions;
    bool m_statelessCustomActionsHasBeenSet = false;

    Aws::Vector<StatefulRuleGroupReference> m_statefulRuleGroupReferences;
    bool m_statefulRuleGroupReferencesHasBeenSet = false;

    Aws::Vector<Aws::String> m_statefulDefaultActions;
    bool m_statefulDefaultActionsHasBeenSet = false;

    StatefulEngineOptions m_statefulEngineOptions;
    bool m_statefulEngineOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
