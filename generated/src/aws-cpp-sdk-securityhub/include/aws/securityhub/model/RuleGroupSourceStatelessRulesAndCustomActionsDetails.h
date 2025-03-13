/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/RuleGroupSourceCustomActionsDetails.h>
#include <aws/securityhub/model/RuleGroupSourceStatelessRulesDetails.h>
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
   * <p>Stateless rules and custom actions for a stateless rule group.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/RuleGroupSourceStatelessRulesAndCustomActionsDetails">AWS
   * API Reference</a></p>
   */
  class RuleGroupSourceStatelessRulesAndCustomActionsDetails
  {
  public:
    AWS_SECURITYHUB_API RuleGroupSourceStatelessRulesAndCustomActionsDetails() = default;
    AWS_SECURITYHUB_API RuleGroupSourceStatelessRulesAndCustomActionsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API RuleGroupSourceStatelessRulesAndCustomActionsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Custom actions for the rule group.</p>
     */
    inline const Aws::Vector<RuleGroupSourceCustomActionsDetails>& GetCustomActions() const { return m_customActions; }
    inline bool CustomActionsHasBeenSet() const { return m_customActionsHasBeenSet; }
    template<typename CustomActionsT = Aws::Vector<RuleGroupSourceCustomActionsDetails>>
    void SetCustomActions(CustomActionsT&& value) { m_customActionsHasBeenSet = true; m_customActions = std::forward<CustomActionsT>(value); }
    template<typename CustomActionsT = Aws::Vector<RuleGroupSourceCustomActionsDetails>>
    RuleGroupSourceStatelessRulesAndCustomActionsDetails& WithCustomActions(CustomActionsT&& value) { SetCustomActions(std::forward<CustomActionsT>(value)); return *this;}
    template<typename CustomActionsT = RuleGroupSourceCustomActionsDetails>
    RuleGroupSourceStatelessRulesAndCustomActionsDetails& AddCustomActions(CustomActionsT&& value) { m_customActionsHasBeenSet = true; m_customActions.emplace_back(std::forward<CustomActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Stateless rules for the rule group.</p>
     */
    inline const Aws::Vector<RuleGroupSourceStatelessRulesDetails>& GetStatelessRules() const { return m_statelessRules; }
    inline bool StatelessRulesHasBeenSet() const { return m_statelessRulesHasBeenSet; }
    template<typename StatelessRulesT = Aws::Vector<RuleGroupSourceStatelessRulesDetails>>
    void SetStatelessRules(StatelessRulesT&& value) { m_statelessRulesHasBeenSet = true; m_statelessRules = std::forward<StatelessRulesT>(value); }
    template<typename StatelessRulesT = Aws::Vector<RuleGroupSourceStatelessRulesDetails>>
    RuleGroupSourceStatelessRulesAndCustomActionsDetails& WithStatelessRules(StatelessRulesT&& value) { SetStatelessRules(std::forward<StatelessRulesT>(value)); return *this;}
    template<typename StatelessRulesT = RuleGroupSourceStatelessRulesDetails>
    RuleGroupSourceStatelessRulesAndCustomActionsDetails& AddStatelessRules(StatelessRulesT&& value) { m_statelessRulesHasBeenSet = true; m_statelessRules.emplace_back(std::forward<StatelessRulesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<RuleGroupSourceCustomActionsDetails> m_customActions;
    bool m_customActionsHasBeenSet = false;

    Aws::Vector<RuleGroupSourceStatelessRulesDetails> m_statelessRules;
    bool m_statelessRulesHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
