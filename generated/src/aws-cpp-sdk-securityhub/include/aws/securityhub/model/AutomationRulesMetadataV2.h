/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/RuleStatusV2.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/securityhub/model/AutomationRulesActionTypeObjectV2.h>
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
   * <p>Includes essential metadata information about automation rules.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AutomationRulesMetadataV2">AWS
   * API Reference</a></p>
   */
  class AutomationRulesMetadataV2
  {
  public:
    AWS_SECURITYHUB_API AutomationRulesMetadataV2() = default;
    AWS_SECURITYHUB_API AutomationRulesMetadataV2(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AutomationRulesMetadataV2& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the automation rule.</p>
     */
    inline const Aws::String& GetRuleArn() const { return m_ruleArn; }
    inline bool RuleArnHasBeenSet() const { return m_ruleArnHasBeenSet; }
    template<typename RuleArnT = Aws::String>
    void SetRuleArn(RuleArnT&& value) { m_ruleArnHasBeenSet = true; m_ruleArn = std::forward<RuleArnT>(value); }
    template<typename RuleArnT = Aws::String>
    AutomationRulesMetadataV2& WithRuleArn(RuleArnT&& value) { SetRuleArn(std::forward<RuleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the automation rule.</p>
     */
    inline const Aws::String& GetRuleId() const { return m_ruleId; }
    inline bool RuleIdHasBeenSet() const { return m_ruleIdHasBeenSet; }
    template<typename RuleIdT = Aws::String>
    void SetRuleId(RuleIdT&& value) { m_ruleIdHasBeenSet = true; m_ruleId = std::forward<RuleIdT>(value); }
    template<typename RuleIdT = Aws::String>
    AutomationRulesMetadataV2& WithRuleId(RuleIdT&& value) { SetRuleId(std::forward<RuleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value for the rule priority.</p>
     */
    inline double GetRuleOrder() const { return m_ruleOrder; }
    inline bool RuleOrderHasBeenSet() const { return m_ruleOrderHasBeenSet; }
    inline void SetRuleOrder(double value) { m_ruleOrderHasBeenSet = true; m_ruleOrder = value; }
    inline AutomationRulesMetadataV2& WithRuleOrder(double value) { SetRuleOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the automation rule.</p>
     */
    inline const Aws::String& GetRuleName() const { return m_ruleName; }
    inline bool RuleNameHasBeenSet() const { return m_ruleNameHasBeenSet; }
    template<typename RuleNameT = Aws::String>
    void SetRuleName(RuleNameT&& value) { m_ruleNameHasBeenSet = true; m_ruleName = std::forward<RuleNameT>(value); }
    template<typename RuleNameT = Aws::String>
    AutomationRulesMetadataV2& WithRuleName(RuleNameT&& value) { SetRuleName(std::forward<RuleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the automation rule.</p>
     */
    inline RuleStatusV2 GetRuleStatus() const { return m_ruleStatus; }
    inline bool RuleStatusHasBeenSet() const { return m_ruleStatusHasBeenSet; }
    inline void SetRuleStatus(RuleStatusV2 value) { m_ruleStatusHasBeenSet = true; m_ruleStatus = value; }
    inline AutomationRulesMetadataV2& WithRuleStatus(RuleStatusV2 value) { SetRuleStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An explanation for the purpose and funcitonality of the automation rule.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    AutomationRulesMetadataV2& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of action to be performed when the rule criteria is met.</p>
     */
    inline const Aws::Vector<AutomationRulesActionTypeObjectV2>& GetActions() const { return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    template<typename ActionsT = Aws::Vector<AutomationRulesActionTypeObjectV2>>
    void SetActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions = std::forward<ActionsT>(value); }
    template<typename ActionsT = Aws::Vector<AutomationRulesActionTypeObjectV2>>
    AutomationRulesMetadataV2& WithActions(ActionsT&& value) { SetActions(std::forward<ActionsT>(value)); return *this;}
    template<typename ActionsT = AutomationRulesActionTypeObjectV2>
    AutomationRulesMetadataV2& AddActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions.emplace_back(std::forward<ActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the automation rule was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    AutomationRulesMetadataV2& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for the most recent modification to the automation rule.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    AutomationRulesMetadataV2& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
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

    Aws::Vector<AutomationRulesActionTypeObjectV2> m_actions;
    bool m_actionsHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
