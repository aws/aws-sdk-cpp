/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-firewall/model/StatefulEngineOptions.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/model/PolicyVariables.h>
#include <aws/network-firewall/model/StatelessRuleGroupReference.h>
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
    AWS_NETWORKFIREWALL_API FirewallPolicy() = default;
    AWS_NETWORKFIREWALL_API FirewallPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API FirewallPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>References to the stateless rule groups that are used in the policy. These
     * define the matching criteria in stateless rules. </p>
     */
    inline const Aws::Vector<StatelessRuleGroupReference>& GetStatelessRuleGroupReferences() const { return m_statelessRuleGroupReferences; }
    inline bool StatelessRuleGroupReferencesHasBeenSet() const { return m_statelessRuleGroupReferencesHasBeenSet; }
    template<typename StatelessRuleGroupReferencesT = Aws::Vector<StatelessRuleGroupReference>>
    void SetStatelessRuleGroupReferences(StatelessRuleGroupReferencesT&& value) { m_statelessRuleGroupReferencesHasBeenSet = true; m_statelessRuleGroupReferences = std::forward<StatelessRuleGroupReferencesT>(value); }
    template<typename StatelessRuleGroupReferencesT = Aws::Vector<StatelessRuleGroupReference>>
    FirewallPolicy& WithStatelessRuleGroupReferences(StatelessRuleGroupReferencesT&& value) { SetStatelessRuleGroupReferences(std::forward<StatelessRuleGroupReferencesT>(value)); return *this;}
    template<typename StatelessRuleGroupReferencesT = StatelessRuleGroupReference>
    FirewallPolicy& AddStatelessRuleGroupReferences(StatelessRuleGroupReferencesT&& value) { m_statelessRuleGroupReferencesHasBeenSet = true; m_statelessRuleGroupReferences.emplace_back(std::forward<StatelessRuleGroupReferencesT>(value)); return *this; }
    ///@}

    ///@{
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
    inline const Aws::Vector<Aws::String>& GetStatelessDefaultActions() const { return m_statelessDefaultActions; }
    inline bool StatelessDefaultActionsHasBeenSet() const { return m_statelessDefaultActionsHasBeenSet; }
    template<typename StatelessDefaultActionsT = Aws::Vector<Aws::String>>
    void SetStatelessDefaultActions(StatelessDefaultActionsT&& value) { m_statelessDefaultActionsHasBeenSet = true; m_statelessDefaultActions = std::forward<StatelessDefaultActionsT>(value); }
    template<typename StatelessDefaultActionsT = Aws::Vector<Aws::String>>
    FirewallPolicy& WithStatelessDefaultActions(StatelessDefaultActionsT&& value) { SetStatelessDefaultActions(std::forward<StatelessDefaultActionsT>(value)); return *this;}
    template<typename StatelessDefaultActionsT = Aws::String>
    FirewallPolicy& AddStatelessDefaultActions(StatelessDefaultActionsT&& value) { m_statelessDefaultActionsHasBeenSet = true; m_statelessDefaultActions.emplace_back(std::forward<StatelessDefaultActionsT>(value)); return *this; }
    ///@}

    ///@{
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
    inline const Aws::Vector<Aws::String>& GetStatelessFragmentDefaultActions() const { return m_statelessFragmentDefaultActions; }
    inline bool StatelessFragmentDefaultActionsHasBeenSet() const { return m_statelessFragmentDefaultActionsHasBeenSet; }
    template<typename StatelessFragmentDefaultActionsT = Aws::Vector<Aws::String>>
    void SetStatelessFragmentDefaultActions(StatelessFragmentDefaultActionsT&& value) { m_statelessFragmentDefaultActionsHasBeenSet = true; m_statelessFragmentDefaultActions = std::forward<StatelessFragmentDefaultActionsT>(value); }
    template<typename StatelessFragmentDefaultActionsT = Aws::Vector<Aws::String>>
    FirewallPolicy& WithStatelessFragmentDefaultActions(StatelessFragmentDefaultActionsT&& value) { SetStatelessFragmentDefaultActions(std::forward<StatelessFragmentDefaultActionsT>(value)); return *this;}
    template<typename StatelessFragmentDefaultActionsT = Aws::String>
    FirewallPolicy& AddStatelessFragmentDefaultActions(StatelessFragmentDefaultActionsT&& value) { m_statelessFragmentDefaultActionsHasBeenSet = true; m_statelessFragmentDefaultActions.emplace_back(std::forward<StatelessFragmentDefaultActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The custom action definitions that are available for use in the firewall
     * policy's <code>StatelessDefaultActions</code> setting. You name each custom
     * action that you define, and then you can use it by name in your default actions
     * specifications.</p>
     */
    inline const Aws::Vector<CustomAction>& GetStatelessCustomActions() const { return m_statelessCustomActions; }
    inline bool StatelessCustomActionsHasBeenSet() const { return m_statelessCustomActionsHasBeenSet; }
    template<typename StatelessCustomActionsT = Aws::Vector<CustomAction>>
    void SetStatelessCustomActions(StatelessCustomActionsT&& value) { m_statelessCustomActionsHasBeenSet = true; m_statelessCustomActions = std::forward<StatelessCustomActionsT>(value); }
    template<typename StatelessCustomActionsT = Aws::Vector<CustomAction>>
    FirewallPolicy& WithStatelessCustomActions(StatelessCustomActionsT&& value) { SetStatelessCustomActions(std::forward<StatelessCustomActionsT>(value)); return *this;}
    template<typename StatelessCustomActionsT = CustomAction>
    FirewallPolicy& AddStatelessCustomActions(StatelessCustomActionsT&& value) { m_statelessCustomActionsHasBeenSet = true; m_statelessCustomActions.emplace_back(std::forward<StatelessCustomActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>References to the stateful rule groups that are used in the policy. These
     * define the inspection criteria in stateful rules. </p>
     */
    inline const Aws::Vector<StatefulRuleGroupReference>& GetStatefulRuleGroupReferences() const { return m_statefulRuleGroupReferences; }
    inline bool StatefulRuleGroupReferencesHasBeenSet() const { return m_statefulRuleGroupReferencesHasBeenSet; }
    template<typename StatefulRuleGroupReferencesT = Aws::Vector<StatefulRuleGroupReference>>
    void SetStatefulRuleGroupReferences(StatefulRuleGroupReferencesT&& value) { m_statefulRuleGroupReferencesHasBeenSet = true; m_statefulRuleGroupReferences = std::forward<StatefulRuleGroupReferencesT>(value); }
    template<typename StatefulRuleGroupReferencesT = Aws::Vector<StatefulRuleGroupReference>>
    FirewallPolicy& WithStatefulRuleGroupReferences(StatefulRuleGroupReferencesT&& value) { SetStatefulRuleGroupReferences(std::forward<StatefulRuleGroupReferencesT>(value)); return *this;}
    template<typename StatefulRuleGroupReferencesT = StatefulRuleGroupReference>
    FirewallPolicy& AddStatefulRuleGroupReferences(StatefulRuleGroupReferencesT&& value) { m_statefulRuleGroupReferencesHasBeenSet = true; m_statefulRuleGroupReferences.emplace_back(std::forward<StatefulRuleGroupReferencesT>(value)); return *this; }
    ///@}

    ///@{
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
    inline const Aws::Vector<Aws::String>& GetStatefulDefaultActions() const { return m_statefulDefaultActions; }
    inline bool StatefulDefaultActionsHasBeenSet() const { return m_statefulDefaultActionsHasBeenSet; }
    template<typename StatefulDefaultActionsT = Aws::Vector<Aws::String>>
    void SetStatefulDefaultActions(StatefulDefaultActionsT&& value) { m_statefulDefaultActionsHasBeenSet = true; m_statefulDefaultActions = std::forward<StatefulDefaultActionsT>(value); }
    template<typename StatefulDefaultActionsT = Aws::Vector<Aws::String>>
    FirewallPolicy& WithStatefulDefaultActions(StatefulDefaultActionsT&& value) { SetStatefulDefaultActions(std::forward<StatefulDefaultActionsT>(value)); return *this;}
    template<typename StatefulDefaultActionsT = Aws::String>
    FirewallPolicy& AddStatefulDefaultActions(StatefulDefaultActionsT&& value) { m_statefulDefaultActionsHasBeenSet = true; m_statefulDefaultActions.emplace_back(std::forward<StatefulDefaultActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Additional options governing how Network Firewall handles stateful rules. The
     * stateful rule groups that you use in your policy must have stateful rule options
     * settings that are compatible with these settings.</p>
     */
    inline const StatefulEngineOptions& GetStatefulEngineOptions() const { return m_statefulEngineOptions; }
    inline bool StatefulEngineOptionsHasBeenSet() const { return m_statefulEngineOptionsHasBeenSet; }
    template<typename StatefulEngineOptionsT = StatefulEngineOptions>
    void SetStatefulEngineOptions(StatefulEngineOptionsT&& value) { m_statefulEngineOptionsHasBeenSet = true; m_statefulEngineOptions = std::forward<StatefulEngineOptionsT>(value); }
    template<typename StatefulEngineOptionsT = StatefulEngineOptions>
    FirewallPolicy& WithStatefulEngineOptions(StatefulEngineOptionsT&& value) { SetStatefulEngineOptions(std::forward<StatefulEngineOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the TLS inspection configuration.</p>
     */
    inline const Aws::String& GetTLSInspectionConfigurationArn() const { return m_tLSInspectionConfigurationArn; }
    inline bool TLSInspectionConfigurationArnHasBeenSet() const { return m_tLSInspectionConfigurationArnHasBeenSet; }
    template<typename TLSInspectionConfigurationArnT = Aws::String>
    void SetTLSInspectionConfigurationArn(TLSInspectionConfigurationArnT&& value) { m_tLSInspectionConfigurationArnHasBeenSet = true; m_tLSInspectionConfigurationArn = std::forward<TLSInspectionConfigurationArnT>(value); }
    template<typename TLSInspectionConfigurationArnT = Aws::String>
    FirewallPolicy& WithTLSInspectionConfigurationArn(TLSInspectionConfigurationArnT&& value) { SetTLSInspectionConfigurationArn(std::forward<TLSInspectionConfigurationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains variables that you can use to override default Suricata settings in
     * your firewall policy.</p>
     */
    inline const PolicyVariables& GetPolicyVariables() const { return m_policyVariables; }
    inline bool PolicyVariablesHasBeenSet() const { return m_policyVariablesHasBeenSet; }
    template<typename PolicyVariablesT = PolicyVariables>
    void SetPolicyVariables(PolicyVariablesT&& value) { m_policyVariablesHasBeenSet = true; m_policyVariables = std::forward<PolicyVariablesT>(value); }
    template<typename PolicyVariablesT = PolicyVariables>
    FirewallPolicy& WithPolicyVariables(PolicyVariablesT&& value) { SetPolicyVariables(std::forward<PolicyVariablesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When true, prevents TCP and TLS packets from reaching destination servers
     * until TLS Inspection has evaluated Server Name Indication (SNI) rules. Requires
     * an associated TLS Inspection configuration.</p>
     */
    inline bool GetEnableTLSSessionHolding() const { return m_enableTLSSessionHolding; }
    inline bool EnableTLSSessionHoldingHasBeenSet() const { return m_enableTLSSessionHoldingHasBeenSet; }
    inline void SetEnableTLSSessionHolding(bool value) { m_enableTLSSessionHoldingHasBeenSet = true; m_enableTLSSessionHolding = value; }
    inline FirewallPolicy& WithEnableTLSSessionHolding(bool value) { SetEnableTLSSessionHolding(value); return *this;}
    ///@}
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

    Aws::String m_tLSInspectionConfigurationArn;
    bool m_tLSInspectionConfigurationArnHasBeenSet = false;

    PolicyVariables m_policyVariables;
    bool m_policyVariablesHasBeenSet = false;

    bool m_enableTLSSessionHolding{false};
    bool m_enableTLSSessionHoldingHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
