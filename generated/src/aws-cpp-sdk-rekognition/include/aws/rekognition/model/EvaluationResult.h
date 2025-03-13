/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/Summary.h>
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
namespace Rekognition
{
namespace Model
{

  /**
   * <p>The evaluation results for the training of a model.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/EvaluationResult">AWS
   * API Reference</a></p>
   */
  class EvaluationResult
  {
  public:
    AWS_REKOGNITION_API EvaluationResult() = default;
    AWS_REKOGNITION_API EvaluationResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API EvaluationResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The F1 score for the evaluation of all labels. The F1 score metric evaluates
     * the overall precision and recall performance of the model as a single value. A
     * higher value indicates better precision and recall performance. A lower score
     * indicates that precision, recall, or both are performing poorly. </p>
     */
    inline double GetF1Score() const { return m_f1Score; }
    inline bool F1ScoreHasBeenSet() const { return m_f1ScoreHasBeenSet; }
    inline void SetF1Score(double value) { m_f1ScoreHasBeenSet = true; m_f1Score = value; }
    inline EvaluationResult& WithF1Score(double value) { SetF1Score(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 bucket that contains the training summary.</p>
     */
    inline const Summary& GetSummary() const { return m_summary; }
    inline bool SummaryHasBeenSet() const { return m_summaryHasBeenSet; }
    template<typename SummaryT = Summary>
    void SetSummary(SummaryT&& value) { m_summaryHasBeenSet = true; m_summary = std::forward<SummaryT>(value); }
    template<typename SummaryT = Summary>
    EvaluationResult& WithSummary(SummaryT&& value) { SetSummary(std::forward<SummaryT>(value)); return *this;}
    ///@}
  private:

    double m_f1Score{0.0};
    bool m_f1ScoreHasBeenSet = false;

    Summary m_summary;
    bool m_summaryHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
