/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>

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
namespace Textract
{
namespace Model
{

  /**
   * <p>The evaluation metrics (F1 score, Precision, and Recall) for an adapter
   * version.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/EvaluationMetric">AWS
   * API Reference</a></p>
   */
  class EvaluationMetric
  {
  public:
    AWS_TEXTRACT_API EvaluationMetric() = default;
    AWS_TEXTRACT_API EvaluationMetric(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API EvaluationMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The F1 score for an adapter version.</p>
     */
    inline double GetF1Score() const { return m_f1Score; }
    inline bool F1ScoreHasBeenSet() const { return m_f1ScoreHasBeenSet; }
    inline void SetF1Score(double value) { m_f1ScoreHasBeenSet = true; m_f1Score = value; }
    inline EvaluationMetric& WithF1Score(double value) { SetF1Score(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Precision score for an adapter version.</p>
     */
    inline double GetPrecision() const { return m_precision; }
    inline bool PrecisionHasBeenSet() const { return m_precisionHasBeenSet; }
    inline void SetPrecision(double value) { m_precisionHasBeenSet = true; m_precision = value; }
    inline EvaluationMetric& WithPrecision(double value) { SetPrecision(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Recall score for an adapter version.</p>
     */
    inline double GetRecall() const { return m_recall; }
    inline bool RecallHasBeenSet() const { return m_recallHasBeenSet; }
    inline void SetRecall(double value) { m_recallHasBeenSet = true; m_recall = value; }
    inline EvaluationMetric& WithRecall(double value) { SetRecall(value); return *this;}
    ///@}
  private:

    double m_f1Score{0.0};
    bool m_f1ScoreHasBeenSet = false;

    double m_precision{0.0};
    bool m_precisionHasBeenSet = false;

    double m_recall{0.0};
    bool m_recallHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
