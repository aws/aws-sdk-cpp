/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/AssessmentSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{

AssessmentSummary::AssessmentSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

AssessmentSummary& AssessmentSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("riskRecommendations"))
  {
    Aws::Utils::Array<JsonView> riskRecommendationsJsonList = jsonValue.GetArray("riskRecommendations");
    for(unsigned riskRecommendationsIndex = 0; riskRecommendationsIndex < riskRecommendationsJsonList.GetLength(); ++riskRecommendationsIndex)
    {
      m_riskRecommendations.push_back(riskRecommendationsJsonList[riskRecommendationsIndex].AsObject());
    }
    m_riskRecommendationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("summary"))
  {
    m_summary = jsonValue.GetString("summary");
    m_summaryHasBeenSet = true;
  }
  return *this;
}

JsonValue AssessmentSummary::Jsonize() const
{
  JsonValue payload;

  if(m_riskRecommendationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> riskRecommendationsJsonList(m_riskRecommendations.size());
   for(unsigned riskRecommendationsIndex = 0; riskRecommendationsIndex < riskRecommendationsJsonList.GetLength(); ++riskRecommendationsIndex)
   {
     riskRecommendationsJsonList[riskRecommendationsIndex].AsObject(m_riskRecommendations[riskRecommendationsIndex].Jsonize());
   }
   payload.WithArray("riskRecommendations", std::move(riskRecommendationsJsonList));

  }

  if(m_summaryHasBeenSet)
  {
   payload.WithString("summary", m_summary);

  }

  return payload;
}

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
