/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/textract/model/EvaluationMetric.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Textract
{
namespace Model
{

EvaluationMetric::EvaluationMetric() : 
    m_f1Score(0.0),
    m_f1ScoreHasBeenSet(false),
    m_precision(0.0),
    m_precisionHasBeenSet(false),
    m_recall(0.0),
    m_recallHasBeenSet(false)
{
}

EvaluationMetric::EvaluationMetric(JsonView jsonValue) : 
    m_f1Score(0.0),
    m_f1ScoreHasBeenSet(false),
    m_precision(0.0),
    m_precisionHasBeenSet(false),
    m_recall(0.0),
    m_recallHasBeenSet(false)
{
  *this = jsonValue;
}

EvaluationMetric& EvaluationMetric::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("F1Score"))
  {
    m_f1Score = jsonValue.GetDouble("F1Score");

    m_f1ScoreHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Precision"))
  {
    m_precision = jsonValue.GetDouble("Precision");

    m_precisionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Recall"))
  {
    m_recall = jsonValue.GetDouble("Recall");

    m_recallHasBeenSet = true;
  }

  return *this;
}

JsonValue EvaluationMetric::Jsonize() const
{
  JsonValue payload;

  if(m_f1ScoreHasBeenSet)
  {
   payload.WithDouble("F1Score", m_f1Score);

  }

  if(m_precisionHasBeenSet)
  {
   payload.WithDouble("Precision", m_precision);

  }

  if(m_recallHasBeenSet)
  {
   payload.WithDouble("Recall", m_recall);

  }

  return payload;
}

} // namespace Model
} // namespace Textract
} // namespace Aws
