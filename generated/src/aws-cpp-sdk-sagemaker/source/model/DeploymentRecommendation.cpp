/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DeploymentRecommendation.h>
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

DeploymentRecommendation::DeploymentRecommendation() : 
    m_recommendationStatus(RecommendationStatus::NOT_SET),
    m_recommendationStatusHasBeenSet(false),
    m_realTimeInferenceRecommendationsHasBeenSet(false)
{
}

DeploymentRecommendation::DeploymentRecommendation(JsonView jsonValue) : 
    m_recommendationStatus(RecommendationStatus::NOT_SET),
    m_recommendationStatusHasBeenSet(false),
    m_realTimeInferenceRecommendationsHasBeenSet(false)
{
  *this = jsonValue;
}

DeploymentRecommendation& DeploymentRecommendation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RecommendationStatus"))
  {
    m_recommendationStatus = RecommendationStatusMapper::GetRecommendationStatusForName(jsonValue.GetString("RecommendationStatus"));

    m_recommendationStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RealTimeInferenceRecommendations"))
  {
    Aws::Utils::Array<JsonView> realTimeInferenceRecommendationsJsonList = jsonValue.GetArray("RealTimeInferenceRecommendations");
    for(unsigned realTimeInferenceRecommendationsIndex = 0; realTimeInferenceRecommendationsIndex < realTimeInferenceRecommendationsJsonList.GetLength(); ++realTimeInferenceRecommendationsIndex)
    {
      m_realTimeInferenceRecommendations.push_back(realTimeInferenceRecommendationsJsonList[realTimeInferenceRecommendationsIndex].AsObject());
    }
    m_realTimeInferenceRecommendationsHasBeenSet = true;
  }

  return *this;
}

JsonValue DeploymentRecommendation::Jsonize() const
{
  JsonValue payload;

  if(m_recommendationStatusHasBeenSet)
  {
   payload.WithString("RecommendationStatus", RecommendationStatusMapper::GetNameForRecommendationStatus(m_recommendationStatus));
  }

  if(m_realTimeInferenceRecommendationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> realTimeInferenceRecommendationsJsonList(m_realTimeInferenceRecommendations.size());
   for(unsigned realTimeInferenceRecommendationsIndex = 0; realTimeInferenceRecommendationsIndex < realTimeInferenceRecommendationsJsonList.GetLength(); ++realTimeInferenceRecommendationsIndex)
   {
     realTimeInferenceRecommendationsJsonList[realTimeInferenceRecommendationsIndex].AsObject(m_realTimeInferenceRecommendations[realTimeInferenceRecommendationsIndex].Jsonize());
   }
   payload.WithArray("RealTimeInferenceRecommendations", std::move(realTimeInferenceRecommendationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
