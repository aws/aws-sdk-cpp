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
    AWS_SECURITYHUB_API RuleGroupSourceStatelessRuleDefinition() = default;
    AWS_SECURITYHUB_API RuleGroupSourceStatelessRuleDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API RuleGroupSourceStatelessRuleDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The actions to take on a packet that matches one of the stateless rule
     * definition's match attributes. You must specify a standard action
     * (<code>aws:pass</code>, <code>aws:drop</code>, or
     * <code>aws:forward_to_sfe</code>). You can then add custom actions.</p>
     */
    inline const Aws::Vector<Aws::String>& GetActions() const { return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    template<typename ActionsT = Aws::Vector<Aws::String>>
    void SetActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions = std::forward<ActionsT>(value); }
    template<typename ActionsT = Aws::Vector<Aws::String>>
    RuleGroupSourceStatelessRuleDefinition& WithActions(ActionsT&& value) { SetActions(std::forward<ActionsT>(value)); return *this;}
    template<typename ActionsT = Aws::String>
    RuleGroupSourceStatelessRuleDefinition& AddActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions.emplace_back(std::forward<ActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The criteria for Network Firewall to use to inspect an individual packet in a
     * stateless rule inspection.</p>
     */
    inline const RuleGroupSourceStatelessRuleMatchAttributes& GetMatchAttributes() const { return m_matchAttributes; }
    inline bool MatchAttributesHasBeenSet() const { return m_matchAttributesHasBeenSet; }
    template<typename MatchAttributesT = RuleGroupSourceStatelessRuleMatchAttributes>
    void SetMatchAttributes(MatchAttributesT&& value) { m_matchAttributesHasBeenSet = true; m_matchAttributes = std::forward<MatchAttributesT>(value); }
    template<typename MatchAttributesT = RuleGroupSourceStatelessRuleMatchAttributes>
    RuleGroupSourceStatelessRuleDefinition& WithMatchAttributes(MatchAttributesT&& value) { SetMatchAttributes(std::forward<MatchAttributesT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_actions;
    bool m_actionsHasBeenSet = false;

    RuleGroupSourceStatelessRuleMatchAttributes m_matchAttributes;
    bool m_matchAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
