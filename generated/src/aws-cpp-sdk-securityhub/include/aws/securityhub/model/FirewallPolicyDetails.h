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
    AWS_SECURITYHUB_API FirewallPolicyDetails();
    AWS_SECURITYHUB_API FirewallPolicyDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API FirewallPolicyDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The stateful rule groups that are used in the firewall policy.</p>
     */
    inline const Aws::Vector<FirewallPolicyStatefulRuleGroupReferencesDetails>& GetStatefulRuleGroupReferences() const{ return m_statefulRuleGroupReferences; }
    inline bool StatefulRuleGroupReferencesHasBeenSet() const { return m_statefulRuleGroupReferencesHasBeenSet; }
    inline void SetStatefulRuleGroupReferences(const Aws::Vector<FirewallPolicyStatefulRuleGroupReferencesDetails>& value) { m_statefulRuleGroupReferencesHasBeenSet = true; m_statefulRuleGroupReferences = value; }
    inline void SetStatefulRuleGroupReferences(Aws::Vector<FirewallPolicyStatefulRuleGroupReferencesDetails>&& value) { m_statefulRuleGroupReferencesHasBeenSet = true; m_statefulRuleGroupReferences = std::move(value); }
    inline FirewallPolicyDetails& WithStatefulRuleGroupReferences(const Aws::Vector<FirewallPolicyStatefulRuleGroupReferencesDetails>& value) { SetStatefulRuleGroupReferences(value); return *this;}
    inline FirewallPolicyDetails& WithStatefulRuleGroupReferences(Aws::Vector<FirewallPolicyStatefulRuleGroupReferencesDetails>&& value) { SetStatefulRuleGroupReferences(std::move(value)); return *this;}
    inline FirewallPolicyDetails& AddStatefulRuleGroupReferences(const FirewallPolicyStatefulRuleGroupReferencesDetails& value) { m_statefulRuleGroupReferencesHasBeenSet = true; m_statefulRuleGroupReferences.push_back(value); return *this; }
    inline FirewallPolicyDetails& AddStatefulRuleGroupReferences(FirewallPolicyStatefulRuleGroupReferencesDetails&& value) { m_statefulRuleGroupReferencesHasBeenSet = true; m_statefulRuleGroupReferences.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The custom action definitions that are available to use in the firewall
     * policy's <code>StatelessDefaultActions</code> setting.</p>
     */
    inline const Aws::Vector<FirewallPolicyStatelessCustomActionsDetails>& GetStatelessCustomActions() const{ return m_statelessCustomActions; }
    inline bool StatelessCustomActionsHasBeenSet() const { return m_statelessCustomActionsHasBeenSet; }
    inline void SetStatelessCustomActions(const Aws::Vector<FirewallPolicyStatelessCustomActionsDetails>& value) { m_statelessCustomActionsHasBeenSet = true; m_statelessCustomActions = value; }
    inline void SetStatelessCustomActions(Aws::Vector<FirewallPolicyStatelessCustomActionsDetails>&& value) { m_statelessCustomActionsHasBeenSet = true; m_statelessCustomActions = std::move(value); }
    inline FirewallPolicyDetails& WithStatelessCustomActions(const Aws::Vector<FirewallPolicyStatelessCustomActionsDetails>& value) { SetStatelessCustomActions(value); return *this;}
    inline FirewallPolicyDetails& WithStatelessCustomActions(Aws::Vector<FirewallPolicyStatelessCustomActionsDetails>&& value) { SetStatelessCustomActions(std::move(value)); return *this;}
    inline FirewallPolicyDetails& AddStatelessCustomActions(const FirewallPolicyStatelessCustomActionsDetails& value) { m_statelessCustomActionsHasBeenSet = true; m_statelessCustomActions.push_back(value); return *this; }
    inline FirewallPolicyDetails& AddStatelessCustomActions(FirewallPolicyStatelessCustomActionsDetails&& value) { m_statelessCustomActionsHasBeenSet = true; m_statelessCustomActions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The actions to take on a packet if it doesn't match any of the stateless
     * rules in the policy.</p> <p>You must specify a standard action
     * (<code>aws:pass</code>, <code>aws:drop</code>, <code>aws:forward_to_sfe</code>),
     * and can optionally include a custom action from
     * <code>StatelessCustomActions</code>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetStatelessDefaultActions() const{ return m_statelessDefaultActions; }
    inline bool StatelessDefaultActionsHasBeenSet() const { return m_statelessDefaultActionsHasBeenSet; }
    inline void SetStatelessDefaultActions(const Aws::Vector<Aws::String>& value) { m_statelessDefaultActionsHasBeenSet = true; m_statelessDefaultActions = value; }
    inline void SetStatelessDefaultActions(Aws::Vector<Aws::String>&& value) { m_statelessDefaultActionsHasBeenSet = true; m_statelessDefaultActions = std::move(value); }
    inline FirewallPolicyDetails& WithStatelessDefaultActions(const Aws::Vector<Aws::String>& value) { SetStatelessDefaultActions(value); return *this;}
    inline FirewallPolicyDetails& WithStatelessDefaultActions(Aws::Vector<Aws::String>&& value) { SetStatelessDefaultActions(std::move(value)); return *this;}
    inline FirewallPolicyDetails& AddStatelessDefaultActions(const Aws::String& value) { m_statelessDefaultActionsHasBeenSet = true; m_statelessDefaultActions.push_back(value); return *this; }
    inline FirewallPolicyDetails& AddStatelessDefaultActions(Aws::String&& value) { m_statelessDefaultActionsHasBeenSet = true; m_statelessDefaultActions.push_back(std::move(value)); return *this; }
    inline FirewallPolicyDetails& AddStatelessDefaultActions(const char* value) { m_statelessDefaultActionsHasBeenSet = true; m_statelessDefaultActions.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The actions to take on a fragmented UDP packet if it doesn't match any of the
     * stateless rules in the policy.</p> <p>You must specify a standard action
     * (<code>aws:pass</code>, <code>aws:drop</code>, <code>aws:forward_to_sfe</code>),
     * and can optionally include a custom action from
     * <code>StatelessCustomActions</code>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetStatelessFragmentDefaultActions() const{ return m_statelessFragmentDefaultActions; }
    inline bool StatelessFragmentDefaultActionsHasBeenSet() const { return m_statelessFragmentDefaultActionsHasBeenSet; }
    inline void SetStatelessFragmentDefaultActions(const Aws::Vector<Aws::String>& value) { m_statelessFragmentDefaultActionsHasBeenSet = true; m_statelessFragmentDefaultActions = value; }
    inline void SetStatelessFragmentDefaultActions(Aws::Vector<Aws::String>&& value) { m_statelessFragmentDefaultActionsHasBeenSet = true; m_statelessFragmentDefaultActions = std::move(value); }
    inline FirewallPolicyDetails& WithStatelessFragmentDefaultActions(const Aws::Vector<Aws::String>& value) { SetStatelessFragmentDefaultActions(value); return *this;}
    inline FirewallPolicyDetails& WithStatelessFragmentDefaultActions(Aws::Vector<Aws::String>&& value) { SetStatelessFragmentDefaultActions(std::move(value)); return *this;}
    inline FirewallPolicyDetails& AddStatelessFragmentDefaultActions(const Aws::String& value) { m_statelessFragmentDefaultActionsHasBeenSet = true; m_statelessFragmentDefaultActions.push_back(value); return *this; }
    inline FirewallPolicyDetails& AddStatelessFragmentDefaultActions(Aws::String&& value) { m_statelessFragmentDefaultActionsHasBeenSet = true; m_statelessFragmentDefaultActions.push_back(std::move(value)); return *this; }
    inline FirewallPolicyDetails& AddStatelessFragmentDefaultActions(const char* value) { m_statelessFragmentDefaultActionsHasBeenSet = true; m_statelessFragmentDefaultActions.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The stateless rule groups that are used in the firewall policy.</p>
     */
    inline const Aws::Vector<FirewallPolicyStatelessRuleGroupReferencesDetails>& GetStatelessRuleGroupReferences() const{ return m_statelessRuleGroupReferences; }
    inline bool StatelessRuleGroupReferencesHasBeenSet() const { return m_statelessRuleGroupReferencesHasBeenSet; }
    inline void SetStatelessRuleGroupReferences(const Aws::Vector<FirewallPolicyStatelessRuleGroupReferencesDetails>& value) { m_statelessRuleGroupReferencesHasBeenSet = true; m_statelessRuleGroupReferences = value; }
    inline void SetStatelessRuleGroupReferences(Aws::Vector<FirewallPolicyStatelessRuleGroupReferencesDetails>&& value) { m_statelessRuleGroupReferencesHasBeenSet = true; m_statelessRuleGroupReferences = std::move(value); }
    inline FirewallPolicyDetails& WithStatelessRuleGroupReferences(const Aws::Vector<FirewallPolicyStatelessRuleGroupReferencesDetails>& value) { SetStatelessRuleGroupReferences(value); return *this;}
    inline FirewallPolicyDetails& WithStatelessRuleGroupReferences(Aws::Vector<FirewallPolicyStatelessRuleGroupReferencesDetails>&& value) { SetStatelessRuleGroupReferences(std::move(value)); return *this;}
    inline FirewallPolicyDetails& AddStatelessRuleGroupReferences(const FirewallPolicyStatelessRuleGroupReferencesDetails& value) { m_statelessRuleGroupReferencesHasBeenSet = true; m_statelessRuleGroupReferences.push_back(value); return *this; }
    inline FirewallPolicyDetails& AddStatelessRuleGroupReferences(FirewallPolicyStatelessRuleGroupReferencesDetails&& value) { m_statelessRuleGroupReferencesHasBeenSet = true; m_statelessRuleGroupReferences.push_back(std::move(value)); return *this; }
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
