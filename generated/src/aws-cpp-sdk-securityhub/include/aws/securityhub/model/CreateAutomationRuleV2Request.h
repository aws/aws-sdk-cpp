/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/RuleStatusV2.h>
#include <aws/securityhub/model/Criteria.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/securityhub/model/AutomationRulesActionV2.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class CreateAutomationRuleV2Request : public SecurityHubRequest
  {
  public:
    AWS_SECURITYHUB_API CreateAutomationRuleV2Request() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAutomationRuleV2"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the V2 automation rule.</p>
     */
    inline const Aws::String& GetRuleName() const { return m_ruleName; }
    inline bool RuleNameHasBeenSet() const { return m_ruleNameHasBeenSet; }
    template<typename RuleNameT = Aws::String>
    void SetRuleName(RuleNameT&& value) { m_ruleNameHasBeenSet = true; m_ruleName = std::forward<RuleNameT>(value); }
    template<typename RuleNameT = Aws::String>
    CreateAutomationRuleV2Request& WithRuleName(RuleNameT&& value) { SetRuleName(std::forward<RuleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the V2 automation rule.</p>
     */
    inline RuleStatusV2 GetRuleStatus() const { return m_ruleStatus; }
    inline bool RuleStatusHasBeenSet() const { return m_ruleStatusHasBeenSet; }
    inline void SetRuleStatus(RuleStatusV2 value) { m_ruleStatusHasBeenSet = true; m_ruleStatus = value; }
    inline CreateAutomationRuleV2Request& WithRuleStatus(RuleStatusV2 value) { SetRuleStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the V2 automation rule.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateAutomationRuleV2Request& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value for the rule priority.</p>
     */
    inline double GetRuleOrder() const { return m_ruleOrder; }
    inline bool RuleOrderHasBeenSet() const { return m_ruleOrderHasBeenSet; }
    inline void SetRuleOrder(double value) { m_ruleOrderHasBeenSet = true; m_ruleOrder = value; }
    inline CreateAutomationRuleV2Request& WithRuleOrder(double value) { SetRuleOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filtering type and configuration of the automation rule.</p>
     */
    inline const Criteria& GetCriteria() const { return m_criteria; }
    inline bool CriteriaHasBeenSet() const { return m_criteriaHasBeenSet; }
    template<typename CriteriaT = Criteria>
    void SetCriteria(CriteriaT&& value) { m_criteriaHasBeenSet = true; m_criteria = std::forward<CriteriaT>(value); }
    template<typename CriteriaT = Criteria>
    CreateAutomationRuleV2Request& WithCriteria(CriteriaT&& value) { SetCriteria(std::forward<CriteriaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of actions to be performed when the rule criteria is met.</p>
     */
    inline const Aws::Vector<AutomationRulesActionV2>& GetActions() const { return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    template<typename ActionsT = Aws::Vector<AutomationRulesActionV2>>
    void SetActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions = std::forward<ActionsT>(value); }
    template<typename ActionsT = Aws::Vector<AutomationRulesActionV2>>
    CreateAutomationRuleV2Request& WithActions(ActionsT&& value) { SetActions(std::forward<ActionsT>(value)); return *this;}
    template<typename ActionsT = AutomationRulesActionV2>
    CreateAutomationRuleV2Request& AddActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions.emplace_back(std::forward<ActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of key-value pairs associated with the V2 automation rule.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateAutomationRuleV2Request& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateAutomationRuleV2Request& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A unique identifier used to ensure idempotency.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateAutomationRuleV2Request& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ruleName;
    bool m_ruleNameHasBeenSet = false;

    RuleStatusV2 m_ruleStatus{RuleStatusV2::NOT_SET};
    bool m_ruleStatusHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    double m_ruleOrder{0.0};
    bool m_ruleOrderHasBeenSet = false;

    Criteria m_criteria;
    bool m_criteriaHasBeenSet = false;

    Aws::Vector<AutomationRulesActionV2> m_actions;
    bool m_actionsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
