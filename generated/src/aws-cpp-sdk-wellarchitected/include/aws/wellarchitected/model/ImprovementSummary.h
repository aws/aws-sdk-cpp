/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/model/Risk.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wellarchitected/model/JiraConfiguration.h>
#include <aws/wellarchitected/model/ChoiceImprovementPlan.h>
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
namespace WellArchitected
{
namespace Model
{

  /**
   * <p>An improvement summary of a lens review in a workload.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ImprovementSummary">AWS
   * API Reference</a></p>
   */
  class ImprovementSummary
  {
  public:
    AWS_WELLARCHITECTED_API ImprovementSummary() = default;
    AWS_WELLARCHITECTED_API ImprovementSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API ImprovementSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetQuestionId() const { return m_questionId; }
    inline bool QuestionIdHasBeenSet() const { return m_questionIdHasBeenSet; }
    template<typename QuestionIdT = Aws::String>
    void SetQuestionId(QuestionIdT&& value) { m_questionIdHasBeenSet = true; m_questionId = std::forward<QuestionIdT>(value); }
    template<typename QuestionIdT = Aws::String>
    ImprovementSummary& WithQuestionId(QuestionIdT&& value) { SetQuestionId(std::forward<QuestionIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetPillarId() const { return m_pillarId; }
    inline bool PillarIdHasBeenSet() const { return m_pillarIdHasBeenSet; }
    template<typename PillarIdT = Aws::String>
    void SetPillarId(PillarIdT&& value) { m_pillarIdHasBeenSet = true; m_pillarId = std::forward<PillarIdT>(value); }
    template<typename PillarIdT = Aws::String>
    ImprovementSummary& WithPillarId(PillarIdT&& value) { SetPillarId(std::forward<PillarIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetQuestionTitle() const { return m_questionTitle; }
    inline bool QuestionTitleHasBeenSet() const { return m_questionTitleHasBeenSet; }
    template<typename QuestionTitleT = Aws::String>
    void SetQuestionTitle(QuestionTitleT&& value) { m_questionTitleHasBeenSet = true; m_questionTitle = std::forward<QuestionTitleT>(value); }
    template<typename QuestionTitleT = Aws::String>
    ImprovementSummary& WithQuestionTitle(QuestionTitleT&& value) { SetQuestionTitle(std::forward<QuestionTitleT>(value)); return *this;}
    ///@}

    ///@{
    
    inline Risk GetRisk() const { return m_risk; }
    inline bool RiskHasBeenSet() const { return m_riskHasBeenSet; }
    inline void SetRisk(Risk value) { m_riskHasBeenSet = true; m_risk = value; }
    inline ImprovementSummary& WithRisk(Risk value) { SetRisk(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetImprovementPlanUrl() const { return m_improvementPlanUrl; }
    inline bool ImprovementPlanUrlHasBeenSet() const { return m_improvementPlanUrlHasBeenSet; }
    template<typename ImprovementPlanUrlT = Aws::String>
    void SetImprovementPlanUrl(ImprovementPlanUrlT&& value) { m_improvementPlanUrlHasBeenSet = true; m_improvementPlanUrl = std::forward<ImprovementPlanUrlT>(value); }
    template<typename ImprovementPlanUrlT = Aws::String>
    ImprovementSummary& WithImprovementPlanUrl(ImprovementPlanUrlT&& value) { SetImprovementPlanUrl(std::forward<ImprovementPlanUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The improvement plan details.</p>
     */
    inline const Aws::Vector<ChoiceImprovementPlan>& GetImprovementPlans() const { return m_improvementPlans; }
    inline bool ImprovementPlansHasBeenSet() const { return m_improvementPlansHasBeenSet; }
    template<typename ImprovementPlansT = Aws::Vector<ChoiceImprovementPlan>>
    void SetImprovementPlans(ImprovementPlansT&& value) { m_improvementPlansHasBeenSet = true; m_improvementPlans = std::forward<ImprovementPlansT>(value); }
    template<typename ImprovementPlansT = Aws::Vector<ChoiceImprovementPlan>>
    ImprovementSummary& WithImprovementPlans(ImprovementPlansT&& value) { SetImprovementPlans(std::forward<ImprovementPlansT>(value)); return *this;}
    template<typename ImprovementPlansT = ChoiceImprovementPlan>
    ImprovementSummary& AddImprovementPlans(ImprovementPlansT&& value) { m_improvementPlansHasBeenSet = true; m_improvementPlans.emplace_back(std::forward<ImprovementPlansT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Configuration of the Jira integration.</p>
     */
    inline const JiraConfiguration& GetJiraConfiguration() const { return m_jiraConfiguration; }
    inline bool JiraConfigurationHasBeenSet() const { return m_jiraConfigurationHasBeenSet; }
    template<typename JiraConfigurationT = JiraConfiguration>
    void SetJiraConfiguration(JiraConfigurationT&& value) { m_jiraConfigurationHasBeenSet = true; m_jiraConfiguration = std::forward<JiraConfigurationT>(value); }
    template<typename JiraConfigurationT = JiraConfiguration>
    ImprovementSummary& WithJiraConfiguration(JiraConfigurationT&& value) { SetJiraConfiguration(std::forward<JiraConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_questionId;
    bool m_questionIdHasBeenSet = false;

    Aws::String m_pillarId;
    bool m_pillarIdHasBeenSet = false;

    Aws::String m_questionTitle;
    bool m_questionTitleHasBeenSet = false;

    Risk m_risk{Risk::NOT_SET};
    bool m_riskHasBeenSet = false;

    Aws::String m_improvementPlanUrl;
    bool m_improvementPlanUrlHasBeenSet = false;

    Aws::Vector<ChoiceImprovementPlan> m_improvementPlans;
    bool m_improvementPlansHasBeenSet = false;

    JiraConfiguration m_jiraConfiguration;
    bool m_jiraConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
