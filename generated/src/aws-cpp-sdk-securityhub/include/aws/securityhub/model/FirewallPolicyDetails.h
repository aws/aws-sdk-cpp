/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/FirewallPolicyStatefulRuleGroupReferencesDetails.h>
#include <aws/securityhub/model/FirewallPolicyStatelessCustomActionsDetails.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/FirewallPolicyStatelessRuleGroupReferencesDetails.h>
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
   * <p>Defines the behavior of the firewall.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/FirewallPolicyDetails">AWS
   * API Reference</a></p>
   */
  class FirewallPolicyDetails
  {
  public:
    AWS_SECURITYHUB_API FirewallPolicyDetails() = default;
    AWS_SECURITYHUB_API FirewallPolicyDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API FirewallPolicyDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The stateful rule groups that are used in the firewall policy.</p>
     */
    inline const Aws::Vector<FirewallPolicyStatefulRuleGroupReferencesDetails>& GetStatefulRuleGroupReferences() const { return m_statefulRuleGroupReferences; }
    inline bool StatefulRuleGroupReferencesHasBeenSet() const { return m_statefulRuleGroupReferencesHasBeenSet; }
    template<typename StatefulRuleGroupReferencesT = Aws::Vector<FirewallPolicyStatefulRuleGroupReferencesDetails>>
    void SetStatefulRuleGroupReferences(StatefulRuleGroupReferencesT&& value) { m_statefulRuleGroupReferencesHasBeenSet = true; m_statefulRuleGroupReferences = std::forward<StatefulRuleGroupReferencesT>(value); }
    template<typename StatefulRuleGroupReferencesT = Aws::Vector<FirewallPolicyStatefulRuleGroupReferencesDetails>>
    FirewallPolicyDetails& WithStatefulRuleGroupReferences(StatefulRuleGroupReferencesT&& value) { SetStatefulRuleGroupReferences(std::forward<StatefulRuleGroupReferencesT>(value)); return *this;}
    template<typename StatefulRuleGroupReferencesT = FirewallPolicyStatefulRuleGroupReferencesDetails>
    FirewallPolicyDetails& AddStatefulRuleGroupReferences(StatefulRuleGroupReferencesT&& value) { m_statefulRuleGroupReferencesHasBeenSet = true; m_statefulRuleGroupReferences.emplace_back(std::forward<StatefulRuleGroupReferencesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The custom action definitions that are available to use in the firewall
     * policy's <code>StatelessDefaultActions</code> setting.</p>
     */
    inline const Aws::Vector<FirewallPolicyStatelessCustomActionsDetails>& GetStatelessCustomActions() const { return m_statelessCustomActions; }
    inline bool StatelessCustomActionsHasBeenSet() const { return m_statelessCustomActionsHasBeenSet; }
    template<typename StatelessCustomActionsT = Aws::Vector<FirewallPolicyStatelessCustomActionsDetails>>
    void SetStatelessCustomActions(StatelessCustomActionsT&& value) { m_statelessCustomActionsHasBeenSet = true; m_statelessCustomActions = std::forward<StatelessCustomActionsT>(value); }
    template<typename StatelessCustomActionsT = Aws::Vector<FirewallPolicyStatelessCustomActionsDetails>>
    FirewallPolicyDetails& WithStatelessCustomActions(StatelessCustomActionsT&& value) { SetStatelessCustomActions(std::forward<StatelessCustomActionsT>(value)); return *this;}
    template<typename StatelessCustomActionsT = FirewallPolicyStatelessCustomActionsDetails>
    FirewallPolicyDetails& AddStatelessCustomActions(StatelessCustomActionsT&& value) { m_statelessCustomActionsHasBeenSet = true; m_statelessCustomActions.emplace_back(std::forward<StatelessCustomActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The actions to take on a packet if it doesn't match any of the stateless
     * rules in the policy.</p> <p>You must specify a standard action
     * (<code>aws:pass</code>, <code>aws:drop</code>, <code>aws:forward_to_sfe</code>),
     * and can optionally include a custom action from
     * <code>StatelessCustomActions</code>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetStatelessDefaultActions() const { return m_statelessDefaultActions; }
    inline bool StatelessDefaultActionsHasBeenSet() const { return m_statelessDefaultActionsHasBeenSet; }
    template<typename StatelessDefaultActionsT = Aws::Vector<Aws::String>>
    void SetStatelessDefaultActions(StatelessDefaultActionsT&& value) { m_statelessDefaultActionsHasBeenSet = true; m_statelessDefaultActions = std::forward<StatelessDefaultActionsT>(value); }
    template<typename StatelessDefaultActionsT = Aws::Vector<Aws::String>>
    FirewallPolicyDetails& WithStatelessDefaultActions(StatelessDefaultActionsT&& value) { SetStatelessDefaultActions(std::forward<StatelessDefaultActionsT>(value)); return *this;}
    template<typename StatelessDefaultActionsT = Aws::String>
    FirewallPolicyDetails& AddStatelessDefaultActions(StatelessDefaultActionsT&& value) { m_statelessDefaultActionsHasBeenSet = true; m_statelessDefaultActions.emplace_back(std::forward<StatelessDefaultActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The actions to take on a fragmented UDP packet if it doesn't match any of the
     * stateless rules in the policy.</p> <p>You must specify a standard action
     * (<code>aws:pass</code>, <code>aws:drop</code>, <code>aws:forward_to_sfe</code>),
     * and can optionally include a custom action from
     * <code>StatelessCustomActions</code>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetStatelessFragmentDefaultActions() const { return m_statelessFragmentDefaultActions; }
    inline bool StatelessFragmentDefaultActionsHasBeenSet() const { return m_statelessFragmentDefaultActionsHasBeenSet; }
    template<typename StatelessFragmentDefaultActionsT = Aws::Vector<Aws::String>>
    void SetStatelessFragmentDefaultActions(StatelessFragmentDefaultActionsT&& value) { m_statelessFragmentDefaultActionsHasBeenSet = true; m_statelessFragmentDefaultActions = std::forward<StatelessFragmentDefaultActionsT>(value); }
    template<typename StatelessFragmentDefaultActionsT = Aws::Vector<Aws::String>>
    FirewallPolicyDetails& WithStatelessFragmentDefaultActions(StatelessFragmentDefaultActionsT&& value) { SetStatelessFragmentDefaultActions(std::forward<StatelessFragmentDefaultActionsT>(value)); return *this;}
    template<typename StatelessFragmentDefaultActionsT = Aws::String>
    FirewallPolicyDetails& AddStatelessFragmentDefaultActions(StatelessFragmentDefaultActionsT&& value) { m_statelessFragmentDefaultActionsHasBeenSet = true; m_statelessFragmentDefaultActions.emplace_back(std::forward<StatelessFragmentDefaultActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The stateless rule groups that are used in the firewall policy.</p>
     */
    inline const Aws::Vector<FirewallPolicyStatelessRuleGroupReferencesDetails>& GetStatelessRuleGroupReferences() const { return m_statelessRuleGroupReferences; }
    inline bool StatelessRuleGroupReferencesHasBeenSet() const { return m_statelessRuleGroupReferencesHasBeenSet; }
    template<typename StatelessRuleGroupReferencesT = Aws::Vector<FirewallPolicyStatelessRuleGroupReferencesDetails>>
    void SetStatelessRuleGroupReferences(StatelessRuleGroupReferencesT&& value) { m_statelessRuleGroupReferencesHasBeenSet = true; m_statelessRuleGroupReferences = std::forward<StatelessRuleGroupReferencesT>(value); }
    template<typename StatelessRuleGroupReferencesT = Aws::Vector<FirewallPolicyStatelessRuleGroupReferencesDetails>>
    FirewallPolicyDetails& WithStatelessRuleGroupReferences(StatelessRuleGroupReferencesT&& value) { SetStatelessRuleGroupReferences(std::forward<StatelessRuleGroupReferencesT>(value)); return *this;}
    template<typename StatelessRuleGroupReferencesT = FirewallPolicyStatelessRuleGroupReferencesDetails>
    FirewallPolicyDetails& AddStatelessRuleGroupReferences(StatelessRuleGroupReferencesT&& value) { m_statelessRuleGroupReferencesHasBeenSet = true; m_statelessRuleGroupReferences.emplace_back(std::forward<StatelessRuleGroupReferencesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<FirewallPolicyStatefulRuleGroupReferencesDetails> m_statefulRuleGroupReferences;
    bool m_statefulRuleGroupReferencesHasBeenSet = false;

    Aws::Vector<FirewallPolicyStatelessCustomActionsDetails> m_statelessCustomActions;
    bool m_statelessCustomActionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_statelessDefaultActions;
    bool m_statelessDefaultActionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_statelessFragmentDefaultActions;
    bool m_statelessFragmentDefaultActionsHasBeenSet = false;

    Aws::Vector<FirewallPolicyStatelessRuleGroupReferencesDetails> m_statelessRuleGroupReferences;
    bool m_statelessRuleGroupReferencesHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
