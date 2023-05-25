/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/RuleGroupSourceStatelessRuleMatchAttributes.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>The definition of the stateless rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/RuleGroupSourceStatelessRuleDefinition">AWS
   * API Reference</a></p>
   */
  class RuleGroupSourceStatelessRuleDefinition
  {
  public:
    AWS_SECURITYHUB_API RuleGroupSourceStatelessRuleDefinition();
    AWS_SECURITYHUB_API RuleGroupSourceStatelessRuleDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API RuleGroupSourceStatelessRuleDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The actions to take on a packet that matches one of the stateless rule
     * definition's match attributes. You must specify a standard action
     * (<code>aws:pass</code>, <code>aws:drop</code>, or
     * <code>aws:forward_to_sfe</code>). You can then add custom actions.</p>
     */
    inline const Aws::Vector<Aws::String>& GetActions() const{ return m_actions; }

    /**
     * <p>The actions to take on a packet that matches one of the stateless rule
     * definition's match attributes. You must specify a standard action
     * (<code>aws:pass</code>, <code>aws:drop</code>, or
     * <code>aws:forward_to_sfe</code>). You can then add custom actions.</p>
     */
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }

    /**
     * <p>The actions to take on a packet that matches one of the stateless rule
     * definition's match attributes. You must specify a standard action
     * (<code>aws:pass</code>, <code>aws:drop</code>, or
     * <code>aws:forward_to_sfe</code>). You can then add custom actions.</p>
     */
    inline void SetActions(const Aws::Vector<Aws::String>& value) { m_actionsHasBeenSet = true; m_actions = value; }

    /**
     * <p>The actions to take on a packet that matches one of the stateless rule
     * definition's match attributes. You must specify a standard action
     * (<code>aws:pass</code>, <code>aws:drop</code>, or
     * <code>aws:forward_to_sfe</code>). You can then add custom actions.</p>
     */
    inline void SetActions(Aws::Vector<Aws::String>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }

    /**
     * <p>The actions to take on a packet that matches one of the stateless rule
     * definition's match attributes. You must specify a standard action
     * (<code>aws:pass</code>, <code>aws:drop</code>, or
     * <code>aws:forward_to_sfe</code>). You can then add custom actions.</p>
     */
    inline RuleGroupSourceStatelessRuleDefinition& WithActions(const Aws::Vector<Aws::String>& value) { SetActions(value); return *this;}

    /**
     * <p>The actions to take on a packet that matches one of the stateless rule
     * definition's match attributes. You must specify a standard action
     * (<code>aws:pass</code>, <code>aws:drop</code>, or
     * <code>aws:forward_to_sfe</code>). You can then add custom actions.</p>
     */
    inline RuleGroupSourceStatelessRuleDefinition& WithActions(Aws::Vector<Aws::String>&& value) { SetActions(std::move(value)); return *this;}

    /**
     * <p>The actions to take on a packet that matches one of the stateless rule
     * definition's match attributes. You must specify a standard action
     * (<code>aws:pass</code>, <code>aws:drop</code>, or
     * <code>aws:forward_to_sfe</code>). You can then add custom actions.</p>
     */
    inline RuleGroupSourceStatelessRuleDefinition& AddActions(const Aws::String& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }

    /**
     * <p>The actions to take on a packet that matches one of the stateless rule
     * definition's match attributes. You must specify a standard action
     * (<code>aws:pass</code>, <code>aws:drop</code>, or
     * <code>aws:forward_to_sfe</code>). You can then add custom actions.</p>
     */
    inline RuleGroupSourceStatelessRuleDefinition& AddActions(Aws::String&& value) { m_actionsHasBeenSet = true; m_actions.push_back(std::move(value)); return *this; }

    /**
     * <p>The actions to take on a packet that matches one of the stateless rule
     * definition's match attributes. You must specify a standard action
     * (<code>aws:pass</code>, <code>aws:drop</code>, or
     * <code>aws:forward_to_sfe</code>). You can then add custom actions.</p>
     */
    inline RuleGroupSourceStatelessRuleDefinition& AddActions(const char* value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }


    /**
     * <p>The criteria for Network Firewall to use to inspect an individual packet in a
     * stateless rule inspection.</p>
     */
    inline const RuleGroupSourceStatelessRuleMatchAttributes& GetMatchAttributes() const{ return m_matchAttributes; }

    /**
     * <p>The criteria for Network Firewall to use to inspect an individual packet in a
     * stateless rule inspection.</p>
     */
    inline bool MatchAttributesHasBeenSet() const { return m_matchAttributesHasBeenSet; }

    /**
     * <p>The criteria for Network Firewall to use to inspect an individual packet in a
     * stateless rule inspection.</p>
     */
    inline void SetMatchAttributes(const RuleGroupSourceStatelessRuleMatchAttributes& value) { m_matchAttributesHasBeenSet = true; m_matchAttributes = value; }

    /**
     * <p>The criteria for Network Firewall to use to inspect an individual packet in a
     * stateless rule inspection.</p>
     */
    inline void SetMatchAttributes(RuleGroupSourceStatelessRuleMatchAttributes&& value) { m_matchAttributesHasBeenSet = true; m_matchAttributes = std::move(value); }

    /**
     * <p>The criteria for Network Firewall to use to inspect an individual packet in a
     * stateless rule inspection.</p>
     */
    inline RuleGroupSourceStatelessRuleDefinition& WithMatchAttributes(const RuleGroupSourceStatelessRuleMatchAttributes& value) { SetMatchAttributes(value); return *this;}

    /**
     * <p>The criteria for Network Firewall to use to inspect an individual packet in a
     * stateless rule inspection.</p>
     */
    inline RuleGroupSourceStatelessRuleDefinition& WithMatchAttributes(RuleGroupSourceStatelessRuleMatchAttributes&& value) { SetMatchAttributes(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_actions;
    bool m_actionsHasBeenSet = false;

    RuleGroupSourceStatelessRuleMatchAttributes m_matchAttributes;
    bool m_matchAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
