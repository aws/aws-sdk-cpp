/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/RuleGroupSourceStatelessRuleDefinition.h>
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
   * <p>A stateless rule in the rule group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/RuleGroupSourceStatelessRulesDetails">AWS
   * API Reference</a></p>
   */
  class RuleGroupSourceStatelessRulesDetails
  {
  public:
    AWS_SECURITYHUB_API RuleGroupSourceStatelessRulesDetails() = default;
    AWS_SECURITYHUB_API RuleGroupSourceStatelessRulesDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API RuleGroupSourceStatelessRulesDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates the order in which to run this rule relative to all of the rules in
     * the stateless rule group.</p>
     */
    inline int GetPriority() const { return m_priority; }
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }
    inline RuleGroupSourceStatelessRulesDetails& WithPriority(int value) { SetPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the definition of the stateless rule.</p>
     */
    inline const RuleGroupSourceStatelessRuleDefinition& GetRuleDefinition() const { return m_ruleDefinition; }
    inline bool RuleDefinitionHasBeenSet() const { return m_ruleDefinitionHasBeenSet; }
    template<typename RuleDefinitionT = RuleGroupSourceStatelessRuleDefinition>
    void SetRuleDefinition(RuleDefinitionT&& value) { m_ruleDefinitionHasBeenSet = true; m_ruleDefinition = std::forward<RuleDefinitionT>(value); }
    template<typename RuleDefinitionT = RuleGroupSourceStatelessRuleDefinition>
    RuleGroupSourceStatelessRulesDetails& WithRuleDefinition(RuleDefinitionT&& value) { SetRuleDefinition(std::forward<RuleDefinitionT>(value)); return *this;}
    ///@}
  private:

    int m_priority{0};
    bool m_priorityHasBeenSet = false;

    RuleGroupSourceStatelessRuleDefinition m_ruleDefinition;
    bool m_ruleDefinitionHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
