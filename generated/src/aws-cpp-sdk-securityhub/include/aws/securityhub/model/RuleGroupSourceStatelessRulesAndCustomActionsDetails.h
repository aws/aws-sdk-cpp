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
    AWS_SECURITYHUB_API RuleGroupSourceStatelessRulesAndCustomActionsDetails();
    AWS_SECURITYHUB_API RuleGroupSourceStatelessRulesAndCustomActionsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API RuleGroupSourceStatelessRulesAndCustomActionsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Custom actions for the rule group.</p>
     */
    inline const Aws::Vector<RuleGroupSourceCustomActionsDetails>& GetCustomActions() const{ return m_customActions; }
    inline bool CustomActionsHasBeenSet() const { return m_customActionsHasBeenSet; }
    inline void SetCustomActions(const Aws::Vector<RuleGroupSourceCustomActionsDetails>& value) { m_customActionsHasBeenSet = true; m_customActions = value; }
    inline void SetCustomActions(Aws::Vector<RuleGroupSourceCustomActionsDetails>&& value) { m_customActionsHasBeenSet = true; m_customActions = std::move(value); }
    inline RuleGroupSourceStatelessRulesAndCustomActionsDetails& WithCustomActions(const Aws::Vector<RuleGroupSourceCustomActionsDetails>& value) { SetCustomActions(value); return *this;}
    inline RuleGroupSourceStatelessRulesAndCustomActionsDetails& WithCustomActions(Aws::Vector<RuleGroupSourceCustomActionsDetails>&& value) { SetCustomActions(std::move(value)); return *this;}
    inline RuleGroupSourceStatelessRulesAndCustomActionsDetails& AddCustomActions(const RuleGroupSourceCustomActionsDetails& value) { m_customActionsHasBeenSet = true; m_customActions.push_back(value); return *this; }
    inline RuleGroupSourceStatelessRulesAndCustomActionsDetails& AddCustomActions(RuleGroupSourceCustomActionsDetails&& value) { m_customActionsHasBeenSet = true; m_customActions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Stateless rules for the rule group.</p>
     */
    inline const Aws::Vector<RuleGroupSourceStatelessRulesDetails>& GetStatelessRules() const{ return m_statelessRules; }
    inline bool StatelessRulesHasBeenSet() const { return m_statelessRulesHasBeenSet; }
    inline void SetStatelessRules(const Aws::Vector<RuleGroupSourceStatelessRulesDetails>& value) { m_statelessRulesHasBeenSet = true; m_statelessRules = value; }
    inline void SetStatelessRules(Aws::Vector<RuleGroupSourceStatelessRulesDetails>&& value) { m_statelessRulesHasBeenSet = true; m_statelessRules = std::move(value); }
    inline RuleGroupSourceStatelessRulesAndCustomActionsDetails& WithStatelessRules(const Aws::Vector<RuleGroupSourceStatelessRulesDetails>& value) { SetStatelessRules(value); return *this;}
    inline RuleGroupSourceStatelessRulesAndCustomActionsDetails& WithStatelessRules(Aws::Vector<RuleGroupSourceStatelessRulesDetails>&& value) { SetStatelessRules(std::move(value)); return *this;}
    inline RuleGroupSourceStatelessRulesAndCustomActionsDetails& AddStatelessRules(const RuleGroupSourceStatelessRulesDetails& value) { m_statelessRulesHasBeenSet = true; m_statelessRules.push_back(value); return *this; }
    inline RuleGroupSourceStatelessRulesAndCustomActionsDetails& AddStatelessRules(RuleGroupSourceStatelessRulesDetails&& value) { m_statelessRulesHasBeenSet = true; m_statelessRules.push_back(std::move(value)); return *this; }
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
