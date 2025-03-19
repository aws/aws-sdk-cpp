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
    AWS_WELLARCHITECTED_API QuestionMetric() = default;
    AWS_WELLARCHITECTED_API QuestionMetric(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API QuestionMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetQuestionId() const { return m_questionId; }
    inline bool QuestionIdHasBeenSet() const { return m_questionIdHasBeenSet; }
    template<typename QuestionIdT = Aws::String>
    void SetQuestionId(QuestionIdT&& value) { m_questionIdHasBeenSet = true; m_questionId = std::forward<QuestionIdT>(value); }
    template<typename QuestionIdT = Aws::String>
    QuestionMetric& WithQuestionId(QuestionIdT&& value) { SetQuestionId(std::forward<QuestionIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline Risk GetRisk() const { return m_risk; }
    inline bool RiskHasBeenSet() const { return m_riskHasBeenSet; }
    inline void SetRisk(Risk value) { m_riskHasBeenSet = true; m_risk = value; }
    inline QuestionMetric& WithRisk(Risk value) { SetRisk(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The best practices, or choices, that have been identified as contributing to
     * risk in a question.</p>
     */
    inline const Aws::Vector<BestPractice>& GetBestPractices() const { return m_bestPractices; }
    inline bool BestPracticesHasBeenSet() const { return m_bestPracticesHasBeenSet; }
    template<typename BestPracticesT = Aws::Vector<BestPractice>>
    void SetBestPractices(BestPracticesT&& value) { m_bestPracticesHasBeenSet = true; m_bestPractices = std::forward<BestPracticesT>(value); }
    template<typename BestPracticesT = Aws::Vector<BestPractice>>
    QuestionMetric& WithBestPractices(BestPracticesT&& value) { SetBestPractices(std::forward<BestPracticesT>(value)); return *this;}
    template<typename BestPracticesT = BestPractice>
    QuestionMetric& AddBestPractices(BestPracticesT&& value) { m_bestPracticesHasBeenSet = true; m_bestPractices.emplace_back(std::forward<BestPracticesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_questionId;
    bool m_questionIdHasBeenSet = false;

    Risk m_risk{Risk::NOT_SET};
    bool m_riskHasBeenSet = false;

    Aws::Vector<BestPractice> m_bestPractices;
    bool m_bestPracticesHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
