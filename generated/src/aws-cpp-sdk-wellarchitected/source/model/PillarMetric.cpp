/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/PillarMetric.h>
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

PillarMetric::PillarMetric() : 
    m_pillarIdHasBeenSet(false),
    m_riskCountsHasBeenSet(false),
    m_questionsHasBeenSet(false)
{
}

PillarMetric::PillarMetric(JsonView jsonValue) : 
    m_pillarIdHasBeenSet(false),
    m_riskCountsHasBeenSet(false),
    m_questionsHasBeenSet(false)
{
  *this = jsonValue;
}

PillarMetric& PillarMetric::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PillarId"))
  {
    m_pillarId = jsonValue.GetString("PillarId");

    m_pillarIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RiskCounts"))
  {
    Aws::Map<Aws::String, JsonView> riskCountsJsonMap = jsonValue.GetObject("RiskCounts").GetAllObjects();
    for(auto& riskCountsItem : riskCountsJsonMap)
    {
      m_riskCounts[RiskMapper::GetRiskForName(riskCountsItem.first)] = riskCountsItem.second.AsInteger();
    }
    m_riskCountsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Questions"))
  {
    Aws::Utils::Array<JsonView> questionsJsonList = jsonValue.GetArray("Questions");
    for(unsigned questionsIndex = 0; questionsIndex < questionsJsonList.GetLength(); ++questionsIndex)
    {
      m_questions.push_back(questionsJsonList[questionsIndex].AsObject());
    }
    m_questionsHasBeenSet = true;
  }

  return *this;
}

JsonValue PillarMetric::Jsonize() const
{
  JsonValue payload;

  if(m_pillarIdHasBeenSet)
  {
   payload.WithString("PillarId", m_pillarId);

  }

  if(m_riskCountsHasBeenSet)
  {
   JsonValue riskCountsJsonMap;
   for(auto& riskCountsItem : m_riskCounts)
   {
     riskCountsJsonMap.WithInteger(RiskMapper::GetNameForRisk(riskCountsItem.first), riskCountsItem.second);
   }
   payload.WithObject("RiskCounts", std::move(riskCountsJsonMap));

  }

  if(m_questionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> questionsJsonList(m_questions.size());
   for(unsigned questionsIndex = 0; questionsIndex < questionsJsonList.GetLength(); ++questionsIndex)
   {
     questionsJsonList[questionsIndex].AsObject(m_questions[questionsIndex].Jsonize());
   }
   payload.WithArray("Questions", std::move(questionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
