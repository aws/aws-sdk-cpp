/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/QuestionMetric.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WellArchitected
{
namespace Model
{

QuestionMetric::QuestionMetric() : 
    m_questionIdHasBeenSet(false),
    m_risk(Risk::NOT_SET),
    m_riskHasBeenSet(false),
    m_bestPracticesHasBeenSet(false)
{
}

QuestionMetric::QuestionMetric(JsonView jsonValue) : 
    m_questionIdHasBeenSet(false),
    m_risk(Risk::NOT_SET),
    m_riskHasBeenSet(false),
    m_bestPracticesHasBeenSet(false)
{
  *this = jsonValue;
}

QuestionMetric& QuestionMetric::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("QuestionId"))
  {
    m_questionId = jsonValue.GetString("QuestionId");

    m_questionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Risk"))
  {
    m_risk = RiskMapper::GetRiskForName(jsonValue.GetString("Risk"));

    m_riskHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BestPractices"))
  {
    Aws::Utils::Array<JsonView> bestPracticesJsonList = jsonValue.GetArray("BestPractices");
    for(unsigned bestPracticesIndex = 0; bestPracticesIndex < bestPracticesJsonList.GetLength(); ++bestPracticesIndex)
    {
      m_bestPractices.push_back(bestPracticesJsonList[bestPracticesIndex].AsObject());
    }
    m_bestPracticesHasBeenSet = true;
  }

  return *this;
}

JsonValue QuestionMetric::Jsonize() const
{
  JsonValue payload;

  if(m_questionIdHasBeenSet)
  {
   payload.WithString("QuestionId", m_questionId);

  }

  if(m_riskHasBeenSet)
  {
   payload.WithString("Risk", RiskMapper::GetNameForRisk(m_risk));
  }

  if(m_bestPracticesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> bestPracticesJsonList(m_bestPractices.size());
   for(unsigned bestPracticesIndex = 0; bestPracticesIndex < bestPracticesJsonList.GetLength(); ++bestPracticesIndex)
   {
     bestPracticesJsonList[bestPracticesIndex].AsObject(m_bestPractices[bestPracticesIndex].Jsonize());
   }
   payload.WithArray("BestPractices", std::move(bestPracticesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
