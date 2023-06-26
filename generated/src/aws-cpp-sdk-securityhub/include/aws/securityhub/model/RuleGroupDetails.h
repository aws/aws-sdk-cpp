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
    AWS_SECURITYHUB_API RuleGroupDetails();
    AWS_SECURITYHUB_API RuleGroupDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API RuleGroupDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Additional settings to use in the specified rules.</p>
     */
    inline const RuleGroupVariables& GetRuleVariables() const{ return m_ruleVariables; }

    /**
     * <p>Additional settings to use in the specified rules.</p>
     */
    inline bool RuleVariablesHasBeenSet() const { return m_ruleVariablesHasBeenSet; }

    /**
     * <p>Additional settings to use in the specified rules.</p>
     */
    inline void SetRuleVariables(const RuleGroupVariables& value) { m_ruleVariablesHasBeenSet = true; m_ruleVariables = value; }

    /**
     * <p>Additional settings to use in the specified rules.</p>
     */
    inline void SetRuleVariables(RuleGroupVariables&& value) { m_ruleVariablesHasBeenSet = true; m_ruleVariables = std::move(value); }

    /**
     * <p>Additional settings to use in the specified rules.</p>
     */
    inline RuleGroupDetails& WithRuleVariables(const RuleGroupVariables& value) { SetRuleVariables(value); return *this;}

    /**
     * <p>Additional settings to use in the specified rules.</p>
     */
    inline RuleGroupDetails& WithRuleVariables(RuleGroupVariables&& value) { SetRuleVariables(std::move(value)); return *this;}


    /**
     * <p>The rules and actions for the rule group.</p> <p>For stateful rule groups,
     * can contain <code>RulesString</code>, <code>RulesSourceList</code>, or
     * <code>StatefulRules</code>.</p> <p>For stateless rule groups, contains
     * <code>StatelessRulesAndCustomActions</code>.</p>
     */
    inline const RuleGroupSource& GetRulesSource() const{ return m_rulesSource; }

    /**
     * <p>The rules and actions for the rule group.</p> <p>For stateful rule groups,
     * can contain <code>RulesString</code>, <code>RulesSourceList</code>, or
     * <code>StatefulRules</code>.</p> <p>For stateless rule groups, contains
     * <code>StatelessRulesAndCustomActions</code>.</p>
     */
    inline bool RulesSourceHasBeenSet() const { return m_rulesSourceHasBeenSet; }

    /**
     * <p>The rules and actions for the rule group.</p> <p>For stateful rule groups,
     * can contain <code>RulesString</code>, <code>RulesSourceList</code>, or
     * <code>StatefulRules</code>.</p> <p>For stateless rule groups, contains
     * <code>StatelessRulesAndCustomActions</code>.</p>
     */
    inline void SetRulesSource(const RuleGroupSource& value) { m_rulesSourceHasBeenSet = true; m_rulesSource = value; }

    /**
     * <p>The rules and actions for the rule group.</p> <p>For stateful rule groups,
     * can contain <code>RulesString</code>, <code>RulesSourceList</code>, or
     * <code>StatefulRules</code>.</p> <p>For stateless rule groups, contains
     * <code>StatelessRulesAndCustomActions</code>.</p>
     */
    inline void SetRulesSource(RuleGroupSource&& value) { m_rulesSourceHasBeenSet = true; m_rulesSource = std::move(value); }

    /**
     * <p>The rules and actions for the rule group.</p> <p>For stateful rule groups,
     * can contain <code>RulesString</code>, <code>RulesSourceList</code>, or
     * <code>StatefulRules</code>.</p> <p>For stateless rule groups, contains
     * <code>StatelessRulesAndCustomActions</code>.</p>
     */
    inline RuleGroupDetails& WithRulesSource(const RuleGroupSource& value) { SetRulesSource(value); return *this;}

    /**
     * <p>The rules and actions for the rule group.</p> <p>For stateful rule groups,
     * can contain <code>RulesString</code>, <code>RulesSourceList</code>, or
     * <code>StatefulRules</code>.</p> <p>For stateless rule groups, contains
     * <code>StatelessRulesAndCustomActions</code>.</p>
     */
    inline RuleGroupDetails& WithRulesSource(RuleGroupSource&& value) { SetRulesSource(std::move(value)); return *this;}

  private:

    RuleGroupVariables m_ruleVariables;
    bool m_ruleVariablesHasBeenSet = false;

    RuleGroupSource m_rulesSource;
    bool m_rulesSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
