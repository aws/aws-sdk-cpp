/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/PillarReviewSummary.h>
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

PillarReviewSummary::PillarReviewSummary() : 
    m_pillarIdHasBeenSet(false),
    m_pillarNameHasBeenSet(false),
    m_notesHasBeenSet(false),
    m_riskCountsHasBeenSet(false),
    m_prioritizedRiskCountsHasBeenSet(false)
{
}

PillarReviewSummary::PillarReviewSummary(JsonView jsonValue) : 
    m_pillarIdHasBeenSet(false),
    m_pillarNameHasBeenSet(false),
    m_notesHasBeenSet(false),
    m_riskCountsHasBeenSet(false),
    m_prioritizedRiskCountsHasBeenSet(false)
{
  *this = jsonValue;
}

PillarReviewSummary& PillarReviewSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PillarId"))
  {
    m_pillarId = jsonValue.GetString("PillarId");

    m_pillarIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PillarName"))
  {
    m_pillarName = jsonValue.GetString("PillarName");

    m_pillarNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Notes"))
  {
    m_notes = jsonValue.GetString("Notes");

    m_notesHasBeenSet = true;
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

  if(jsonValue.ValueExists("PrioritizedRiskCounts"))
  {
    Aws::Map<Aws::String, JsonView> prioritizedRiskCountsJsonMap = jsonValue.GetObject("PrioritizedRiskCounts").GetAllObjects();
    for(auto& prioritizedRiskCountsItem : prioritizedRiskCountsJsonMap)
    {
      m_prioritizedRiskCounts[RiskMapper::GetRiskForName(prioritizedRiskCountsItem.first)] = prioritizedRiskCountsItem.second.AsInteger();
    }
    m_prioritizedRiskCountsHasBeenSet = true;
  }

  return *this;
}

JsonValue PillarReviewSummary::Jsonize() const
{
  JsonValue payload;

  if(m_pillarIdHasBeenSet)
  {
   payload.WithString("PillarId", m_pillarId);

  }

  if(m_pillarNameHasBeenSet)
  {
   payload.WithString("PillarName", m_pillarName);

  }

  if(m_notesHasBeenSet)
  {
   payload.WithString("Notes", m_notes);

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

  if(m_prioritizedRiskCountsHasBeenSet)
  {
   JsonValue prioritizedRiskCountsJsonMap;
   for(auto& prioritizedRiskCountsItem : m_prioritizedRiskCounts)
   {
     prioritizedRiskCountsJsonMap.WithInteger(RiskMapper::GetNameForRisk(prioritizedRiskCountsItem.first), prioritizedRiskCountsItem.second);
   }
   payload.WithObject("PrioritizedRiskCounts", std::move(prioritizedRiskCountsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
