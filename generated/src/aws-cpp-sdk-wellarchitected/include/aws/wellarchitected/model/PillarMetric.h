/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wellarchitected/model/Risk.h>
#include <aws/wellarchitected/model/QuestionMetric.h>
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
   * <p>A metric for a particular pillar in a lens.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/PillarMetric">AWS
   * API Reference</a></p>
   */
  class PillarMetric
  {
  public:
    AWS_WELLARCHITECTED_API PillarMetric() = default;
    AWS_WELLARCHITECTED_API PillarMetric(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API PillarMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetPillarId() const { return m_pillarId; }
    inline bool PillarIdHasBeenSet() const { return m_pillarIdHasBeenSet; }
    template<typename PillarIdT = Aws::String>
    void SetPillarId(PillarIdT&& value) { m_pillarIdHasBeenSet = true; m_pillarId = std::forward<PillarIdT>(value); }
    template<typename PillarIdT = Aws::String>
    PillarMetric& WithPillarId(PillarIdT&& value) { SetPillarId(std::forward<PillarIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Risk, int>& GetRiskCounts() const { return m_riskCounts; }
    inline bool RiskCountsHasBeenSet() const { return m_riskCountsHasBeenSet; }
    template<typename RiskCountsT = Aws::Map<Risk, int>>
    void SetRiskCounts(RiskCountsT&& value) { m_riskCountsHasBeenSet = true; m_riskCounts = std::forward<RiskCountsT>(value); }
    template<typename RiskCountsT = Aws::Map<Risk, int>>
    PillarMetric& WithRiskCounts(RiskCountsT&& value) { SetRiskCounts(std::forward<RiskCountsT>(value)); return *this;}
    inline PillarMetric& AddRiskCounts(Risk key, int value) {
      m_riskCountsHasBeenSet = true; m_riskCounts.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The questions that have been identified as risks in the pillar.</p>
     */
    inline const Aws::Vector<QuestionMetric>& GetQuestions() const { return m_questions; }
    inline bool QuestionsHasBeenSet() const { return m_questionsHasBeenSet; }
    template<typename QuestionsT = Aws::Vector<QuestionMetric>>
    void SetQuestions(QuestionsT&& value) { m_questionsHasBeenSet = true; m_questions = std::forward<QuestionsT>(value); }
    template<typename QuestionsT = Aws::Vector<QuestionMetric>>
    PillarMetric& WithQuestions(QuestionsT&& value) { SetQuestions(std::forward<QuestionsT>(value)); return *this;}
    template<typename QuestionsT = QuestionMetric>
    PillarMetric& AddQuestions(QuestionsT&& value) { m_questionsHasBeenSet = true; m_questions.emplace_back(std::forward<QuestionsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_pillarId;
    bool m_pillarIdHasBeenSet = false;

    Aws::Map<Risk, int> m_riskCounts;
    bool m_riskCountsHasBeenSet = false;

    Aws::Vector<QuestionMetric> m_questions;
    bool m_questionsHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
