/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/AssessmentRiskRecommendation.h>
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

AssessmentRiskRecommendation::AssessmentRiskRecommendation(JsonView jsonValue)
{
  *this = jsonValue;
}

AssessmentRiskRecommendation& AssessmentRiskRecommendation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("appComponents"))
  {
    Aws::Utils::Array<JsonView> appComponentsJsonList = jsonValue.GetArray("appComponents");
    for(unsigned appComponentsIndex = 0; appComponentsIndex < appComponentsJsonList.GetLength(); ++appComponentsIndex)
    {
      m_appComponents.push_back(appComponentsJsonList[appComponentsIndex].AsString());
    }
    m_appComponentsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("recommendation"))
  {
    m_recommendation = jsonValue.GetString("recommendation");
    m_recommendationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("risk"))
  {
    m_risk = jsonValue.GetString("risk");
    m_riskHasBeenSet = true;
  }
  return *this;
}

JsonValue AssessmentRiskRecommendation::Jsonize() const
{
  JsonValue payload;

  if(m_appComponentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> appComponentsJsonList(m_appComponents.size());
   for(unsigned appComponentsIndex = 0; appComponentsIndex < appComponentsJsonList.GetLength(); ++appComponentsIndex)
   {
     appComponentsJsonList[appComponentsIndex].AsString(m_appComponents[appComponentsIndex]);
   }
   payload.WithArray("appComponents", std::move(appComponentsJsonList));

  }

  if(m_recommendationHasBeenSet)
  {
   payload.WithString("recommendation", m_recommendation);

  }

  if(m_riskHasBeenSet)
  {
   payload.WithString("risk", m_risk);

  }

  return payload;
}

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
