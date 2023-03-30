/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/model/Risk.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wellarchitected/model/BestPractice.h>
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
   * <p>A metric for a particular question in the pillar. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/QuestionMetric">AWS
   * API Reference</a></p>
   */
  class QuestionMetric
  {
  public:
    AWS_WELLARCHITECTED_API QuestionMetric();
    AWS_WELLARCHITECTED_API QuestionMetric(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API QuestionMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetQuestionId() const{ return m_questionId; }

    
    inline bool QuestionIdHasBeenSet() const { return m_questionIdHasBeenSet; }

    
    inline void SetQuestionId(const Aws::String& value) { m_questionIdHasBeenSet = true; m_questionId = value; }

    
    inline void SetQuestionId(Aws::String&& value) { m_questionIdHasBeenSet = true; m_questionId = std::move(value); }

    
    inline void SetQuestionId(const char* value) { m_questionIdHasBeenSet = true; m_questionId.assign(value); }

    
    inline QuestionMetric& WithQuestionId(const Aws::String& value) { SetQuestionId(value); return *this;}

    
    inline QuestionMetric& WithQuestionId(Aws::String&& value) { SetQuestionId(std::move(value)); return *this;}

    
    inline QuestionMetric& WithQuestionId(const char* value) { SetQuestionId(value); return *this;}


    
    inline const Risk& GetRisk() const{ return m_risk; }

    
    inline bool RiskHasBeenSet() const { return m_riskHasBeenSet; }

    
    inline void SetRisk(const Risk& value) { m_riskHasBeenSet = true; m_risk = value; }

    
    inline void SetRisk(Risk&& value) { m_riskHasBeenSet = true; m_risk = std::move(value); }

    
    inline QuestionMetric& WithRisk(const Risk& value) { SetRisk(value); return *this;}

    
    inline QuestionMetric& WithRisk(Risk&& value) { SetRisk(std::move(value)); return *this;}


    /**
     * <p>The best practices, or choices, that have been identified as contributing to
     * risk in a question.</p>
     */
    inline const Aws::Vector<BestPractice>& GetBestPractices() const{ return m_bestPractices; }

    /**
     * <p>The best practices, or choices, that have been identified as contributing to
     * risk in a question.</p>
     */
    inline bool BestPracticesHasBeenSet() const { return m_bestPracticesHasBeenSet; }

    /**
     * <p>The best practices, or choices, that have been identified as contributing to
     * risk in a question.</p>
     */
    inline void SetBestPractices(const Aws::Vector<BestPractice>& value) { m_bestPracticesHasBeenSet = true; m_bestPractices = value; }

    /**
     * <p>The best practices, or choices, that have been identified as contributing to
     * risk in a question.</p>
     */
    inline void SetBestPractices(Aws::Vector<BestPractice>&& value) { m_bestPracticesHasBeenSet = true; m_bestPractices = std::move(value); }

    /**
     * <p>The best practices, or choices, that have been identified as contributing to
     * risk in a question.</p>
     */
    inline QuestionMetric& WithBestPractices(const Aws::Vector<BestPractice>& value) { SetBestPractices(value); return *this;}

    /**
     * <p>The best practices, or choices, that have been identified as contributing to
     * risk in a question.</p>
     */
    inline QuestionMetric& WithBestPractices(Aws::Vector<BestPractice>&& value) { SetBestPractices(std::move(value)); return *this;}

    /**
     * <p>The best practices, or choices, that have been identified as contributing to
     * risk in a question.</p>
     */
    inline QuestionMetric& AddBestPractices(const BestPractice& value) { m_bestPracticesHasBeenSet = true; m_bestPractices.push_back(value); return *this; }

    /**
     * <p>The best practices, or choices, that have been identified as contributing to
     * risk in a question.</p>
     */
    inline QuestionMetric& AddBestPractices(BestPractice&& value) { m_bestPracticesHasBeenSet = true; m_bestPractices.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_questionId;
    bool m_questionIdHasBeenSet = false;

    Risk m_risk;
    bool m_riskHasBeenSet = false;

    Aws::Vector<BestPractice> m_bestPractices;
    bool m_bestPracticesHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
