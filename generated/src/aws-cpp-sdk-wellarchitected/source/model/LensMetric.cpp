/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/LensMetric.h>
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

LensMetric::LensMetric() : 
    m_lensArnHasBeenSet(false),
    m_pillarsHasBeenSet(false),
    m_riskCountsHasBeenSet(false)
{
}

LensMetric::LensMetric(JsonView jsonValue) : 
    m_lensArnHasBeenSet(false),
    m_pillarsHasBeenSet(false),
    m_riskCountsHasBeenSet(false)
{
  *this = jsonValue;
}

LensMetric& LensMetric::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LensArn"))
  {
    m_lensArn = jsonValue.GetString("LensArn");

    m_lensArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Pillars"))
  {
    Aws::Utils::Array<JsonView> pillarsJsonList = jsonValue.GetArray("Pillars");
    for(unsigned pillarsIndex = 0; pillarsIndex < pillarsJsonList.GetLength(); ++pillarsIndex)
    {
      m_pillars.push_back(pillarsJsonList[pillarsIndex].AsObject());
    }
    m_pillarsHasBeenSet = true;
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

  return *this;
}

JsonValue LensMetric::Jsonize() const
{
  JsonValue payload;

  if(m_lensArnHasBeenSet)
  {
   payload.WithString("LensArn", m_lensArn);

  }

  if(m_pillarsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> pillarsJsonList(m_pillars.size());
   for(unsigned pillarsIndex = 0; pillarsIndex < pillarsJsonList.GetLength(); ++pillarsIndex)
   {
     pillarsJsonList[pillarsIndex].AsObject(m_pillars[pillarsIndex].Jsonize());
   }
   payload.WithArray("Pillars", std::move(pillarsJsonList));

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

  return payload;
}

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
