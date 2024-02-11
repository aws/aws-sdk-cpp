/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CandidateArtifactLocations.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

CandidateArtifactLocations::CandidateArtifactLocations() : 
    m_explainabilityHasBeenSet(false),
    m_modelInsightsHasBeenSet(false),
    m_backtestResultsHasBeenSet(false)
{
}

CandidateArtifactLocations::CandidateArtifactLocations(JsonView jsonValue) : 
    m_explainabilityHasBeenSet(false),
    m_modelInsightsHasBeenSet(false),
    m_backtestResultsHasBeenSet(false)
{
  *this = jsonValue;
}

CandidateArtifactLocations& CandidateArtifactLocations::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Explainability"))
  {
    m_explainability = jsonValue.GetString("Explainability");

    m_explainabilityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelInsights"))
  {
    m_modelInsights = jsonValue.GetString("ModelInsights");

    m_modelInsightsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BacktestResults"))
  {
    m_backtestResults = jsonValue.GetString("BacktestResults");

    m_backtestResultsHasBeenSet = true;
  }

  return *this;
}

JsonValue CandidateArtifactLocations::Jsonize() const
{
  JsonValue payload;

  if(m_explainabilityHasBeenSet)
  {
   payload.WithString("Explainability", m_explainability);

  }

  if(m_modelInsightsHasBeenSet)
  {
   payload.WithString("ModelInsights", m_modelInsights);

  }

  if(m_backtestResultsHasBeenSet)
  {
   payload.WithString("BacktestResults", m_backtestResults);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
