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
    AWS_WELLARCHITECTED_API PillarMetric();
    AWS_WELLARCHITECTED_API PillarMetric(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API PillarMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetPillarId() const{ return m_pillarId; }

    
    inline bool PillarIdHasBeenSet() const { return m_pillarIdHasBeenSet; }

    
    inline void SetPillarId(const Aws::String& value) { m_pillarIdHasBeenSet = true; m_pillarId = value; }

    
    inline void SetPillarId(Aws::String&& value) { m_pillarIdHasBeenSet = true; m_pillarId = std::move(value); }

    
    inline void SetPillarId(const char* value) { m_pillarIdHasBeenSet = true; m_pillarId.assign(value); }

    
    inline PillarMetric& WithPillarId(const Aws::String& value) { SetPillarId(value); return *this;}

    
    inline PillarMetric& WithPillarId(Aws::String&& value) { SetPillarId(std::move(value)); return *this;}

    
    inline PillarMetric& WithPillarId(const char* value) { SetPillarId(value); return *this;}


    
    inline const Aws::Map<Risk, int>& GetRiskCounts() const{ return m_riskCounts; }

    
    inline bool RiskCountsHasBeenSet() const { return m_riskCountsHasBeenSet; }

    
    inline void SetRiskCounts(const Aws::Map<Risk, int>& value) { m_riskCountsHasBeenSet = true; m_riskCounts = value; }

    
    inline void SetRiskCounts(Aws::Map<Risk, int>&& value) { m_riskCountsHasBeenSet = true; m_riskCounts = std::move(value); }

    
    inline PillarMetric& WithRiskCounts(const Aws::Map<Risk, int>& value) { SetRiskCounts(value); return *this;}

    
    inline PillarMetric& WithRiskCounts(Aws::Map<Risk, int>&& value) { SetRiskCounts(std::move(value)); return *this;}

    
    inline PillarMetric& AddRiskCounts(const Risk& key, int value) { m_riskCountsHasBeenSet = true; m_riskCounts.emplace(key, value); return *this; }

    
    inline PillarMetric& AddRiskCounts(Risk&& key, int value) { m_riskCountsHasBeenSet = true; m_riskCounts.emplace(std::move(key), value); return *this; }


    /**
     * <p>The questions that have been identified as risks in the pillar.</p>
     */
    inline const Aws::Vector<QuestionMetric>& GetQuestions() const{ return m_questions; }

    /**
     * <p>The questions that have been identified as risks in the pillar.</p>
     */
    inline bool QuestionsHasBeenSet() const { return m_questionsHasBeenSet; }

    /**
     * <p>The questions that have been identified as risks in the pillar.</p>
     */
    inline void SetQuestions(const Aws::Vector<QuestionMetric>& value) { m_questionsHasBeenSet = true; m_questions = value; }

    /**
     * <p>The questions that have been identified as risks in the pillar.</p>
     */
    inline void SetQuestions(Aws::Vector<QuestionMetric>&& value) { m_questionsHasBeenSet = true; m_questions = std::move(value); }

    /**
     * <p>The questions that have been identified as risks in the pillar.</p>
     */
    inline PillarMetric& WithQuestions(const Aws::Vector<QuestionMetric>& value) { SetQuestions(value); return *this;}

    /**
     * <p>The questions that have been identified as risks in the pillar.</p>
     */
    inline PillarMetric& WithQuestions(Aws::Vector<QuestionMetric>&& value) { SetQuestions(std::move(value)); return *this;}

    /**
     * <p>The questions that have been identified as risks in the pillar.</p>
     */
    inline PillarMetric& AddQuestions(const QuestionMetric& value) { m_questionsHasBeenSet = true; m_questions.push_back(value); return *this; }

    /**
     * <p>The questions that have been identified as risks in the pillar.</p>
     */
    inline PillarMetric& AddQuestions(QuestionMetric&& value) { m_questionsHasBeenSet = true; m_questions.push_back(std::move(value)); return *this; }

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
