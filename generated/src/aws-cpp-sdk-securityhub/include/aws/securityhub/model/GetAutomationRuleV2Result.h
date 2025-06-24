/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/RuleStatusV2.h>
#include <aws/securityhub/model/Criteria.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/securityhub/model/AutomationRulesActionV2.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{
  class GetAutomationRuleV2Result
  {
  public:
    AWS_SECURITYHUB_API GetAutomationRuleV2Result() = default;
    AWS_SECURITYHUB_API GetAutomationRuleV2Result(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API GetAutomationRuleV2Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the V2 automation rule.</p>
     */
    inline const Aws::String& GetRuleArn() const { return m_ruleArn; }
    template<typename RuleArnT = Aws::String>
    void SetRuleArn(RuleArnT&& value) { m_ruleArnHasBeenSet = true; m_ruleArn = std::forward<RuleArnT>(value); }
    template<typename RuleArnT = Aws::String>
    GetAutomationRuleV2Result& WithRuleArn(RuleArnT&& value) { SetRuleArn(std::forward<RuleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the V2 automation rule.</p>
     */
    inline const Aws::String& GetRuleId() const { return m_ruleId; }
    template<typename RuleIdT = Aws::String>
    void SetRuleId(RuleIdT&& value) { m_ruleIdHasBeenSet = true; m_ruleId = std::forward<RuleIdT>(value); }
    template<typename RuleIdT = Aws::String>
    GetAutomationRuleV2Result& WithRuleId(RuleIdT&& value) { SetRuleId(std::forward<RuleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value for the rule priority.</p>
     */
    inline double GetRuleOrder() const { return m_ruleOrder; }
    inline void SetRuleOrder(double value) { m_ruleOrderHasBeenSet = true; m_ruleOrder = value; }
    inline GetAutomationRuleV2Result& WithRuleOrder(double value) { SetRuleOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the V2 automation rule.</p>
     */
    inline const Aws::String& GetRuleName() const { return m_ruleName; }
    template<typename RuleNameT = Aws::String>
    void SetRuleName(RuleNameT&& value) { m_ruleNameHasBeenSet = true; m_ruleName = std::forward<RuleNameT>(value); }
    template<typename RuleNameT = Aws::String>
    GetAutomationRuleV2Result& WithRuleName(RuleNameT&& value) { SetRuleName(std::forward<RuleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the V2 automation automation rule.</p>
     */
    inline RuleStatusV2 GetRuleStatus() const { return m_ruleStatus; }
    inline void SetRuleStatus(RuleStatusV2 value) { m_ruleStatusHasBeenSet = true; m_ruleStatus = value; }
    inline GetAutomationRuleV2Result& WithRuleStatus(RuleStatusV2 value) { SetRuleStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the automation rule.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetAutomationRuleV2Result& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filtering type and configuration of the V2 automation rule.</p>
     */
    inline const Criteria& GetCriteria() const { return m_criteria; }
    template<typename CriteriaT = Criteria>
    void SetCriteria(CriteriaT&& value) { m_criteriaHasBeenSet = true; m_criteria = std::forward<CriteriaT>(value); }
    template<typename CriteriaT = Criteria>
    GetAutomationRuleV2Result& WithCriteria(CriteriaT&& value) { SetCriteria(std::forward<CriteriaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of actions performed when the rule criteria is met.</p>
     */
    inline const Aws::Vector<AutomationRulesActionV2>& GetActions() const { return m_actions; }
    template<typename ActionsT = Aws::Vector<AutomationRulesActionV2>>
    void SetActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions = std::forward<ActionsT>(value); }
    template<typename ActionsT = Aws::Vector<AutomationRulesActionV2>>
    GetAutomationRuleV2Result& WithActions(ActionsT&& value) { SetActions(std::forward<ActionsT>(value)); return *this;}
    template<typename ActionsT = AutomationRulesActionV2>
    GetAutomationRuleV2Result& AddActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions.emplace_back(std::forward<ActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The timestamp when the V2 automation rule was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetAutomationRuleV2Result& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the V2 automation rule was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    GetAutomationRuleV2Result& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAutomationRuleV2Result& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ruleArn;
    bool m_ruleArnHasBeenSet = false;

    Aws::String m_ruleId;
    bool m_ruleIdHasBeenSet = false;

    double m_ruleOrder{0.0};
    bool m_ruleOrderHasBeenSet = false;

    Aws::String m_ruleName;
    bool m_ruleNameHasBeenSet = false;

    RuleStatusV2 m_ruleStatus{RuleStatusV2::NOT_SET};
    bool m_ruleStatusHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Criteria m_criteria;
    bool m_criteriaHasBeenSet = false;

    Aws::Vector<AutomationRulesActionV2> m_actions;
    bool m_actionsHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
