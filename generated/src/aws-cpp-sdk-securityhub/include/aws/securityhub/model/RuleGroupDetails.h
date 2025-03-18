/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/RuleGroupVariables.h>
#include <aws/securityhub/model/RuleGroupSource.h>
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
   * <p>Details about the rule group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/RuleGroupDetails">AWS
   * API Reference</a></p>
   */
  class RuleGroupDetails
  {
  public:
    AWS_SECURITYHUB_API RuleGroupDetails() = default;
    AWS_SECURITYHUB_API RuleGroupDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API RuleGroupDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Additional settings to use in the specified rules.</p>
     */
    inline const RuleGroupVariables& GetRuleVariables() const { return m_ruleVariables; }
    inline bool RuleVariablesHasBeenSet() const { return m_ruleVariablesHasBeenSet; }
    template<typename RuleVariablesT = RuleGroupVariables>
    void SetRuleVariables(RuleVariablesT&& value) { m_ruleVariablesHasBeenSet = true; m_ruleVariables = std::forward<RuleVariablesT>(value); }
    template<typename RuleVariablesT = RuleGroupVariables>
    RuleGroupDetails& WithRuleVariables(RuleVariablesT&& value) { SetRuleVariables(std::forward<RuleVariablesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rules and actions for the rule group.</p> <p>For stateful rule groups,
     * can contain <code>RulesString</code>, <code>RulesSourceList</code>, or
     * <code>StatefulRules</code>.</p> <p>For stateless rule groups, contains
     * <code>StatelessRulesAndCustomActions</code>.</p>
     */
    inline const RuleGroupSource& GetRulesSource() const { return m_rulesSource; }
    inline bool RulesSourceHasBeenSet() const { return m_rulesSourceHasBeenSet; }
    template<typename RulesSourceT = RuleGroupSource>
    void SetRulesSource(RulesSourceT&& value) { m_rulesSourceHasBeenSet = true; m_rulesSource = std::forward<RulesSourceT>(value); }
    template<typename RulesSourceT = RuleGroupSource>
    RuleGroupDetails& WithRulesSource(RulesSourceT&& value) { SetRulesSource(std::forward<RulesSourceT>(value)); return *this;}
    ///@}
  private:

    RuleGroupVariables m_ruleVariables;
    bool m_ruleVariablesHasBeenSet = false;

    RuleGroupSource m_rulesSource;
    bool m_rulesSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
