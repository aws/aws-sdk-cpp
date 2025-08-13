/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/LifeCycle.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PartnerCentralSelling
{
namespace Model
{

LifeCycle::LifeCycle(JsonView jsonValue)
{
  *this = jsonValue;
}

LifeCycle& LifeCycle::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Stage"))
  {
    m_stage = StageMapper::GetStageForName(jsonValue.GetString("Stage"));
    m_stageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ClosedLostReason"))
  {
    m_closedLostReason = ClosedLostReasonMapper::GetClosedLostReasonForName(jsonValue.GetString("ClosedLostReason"));
    m_closedLostReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextSteps"))
  {
    m_nextSteps = jsonValue.GetString("NextSteps");
    m_nextStepsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TargetCloseDate"))
  {
    m_targetCloseDate = jsonValue.GetString("TargetCloseDate");
    m_targetCloseDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ReviewStatus"))
  {
    m_reviewStatus = ReviewStatusMapper::GetReviewStatusForName(jsonValue.GetString("ReviewStatus"));
    m_reviewStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ReviewComments"))
  {
    m_reviewComments = jsonValue.GetString("ReviewComments");
    m_reviewCommentsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ReviewStatusReason"))
  {
    m_reviewStatusReason = jsonValue.GetString("ReviewStatusReason");
    m_reviewStatusReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextStepsHistory"))
  {
    Aws::Utils::Array<JsonView> nextStepsHistoryJsonList = jsonValue.GetArray("NextStepsHistory");
    for(unsigned nextStepsHistoryIndex = 0; nextStepsHistoryIndex < nextStepsHistoryJsonList.GetLength(); ++nextStepsHistoryIndex)
    {
      m_nextStepsHistory.push_back(nextStepsHistoryJsonList[nextStepsHistoryIndex].AsObject());
    }
    m_nextStepsHistoryHasBeenSet = true;
  }
  return *this;
}

JsonValue LifeCycle::Jsonize() const
{
  JsonValue payload;

  if(m_stageHasBeenSet)
  {
   payload.WithString("Stage", StageMapper::GetNameForStage(m_stage));
  }

  if(m_closedLostReasonHasBeenSet)
  {
   payload.WithString("ClosedLostReason", ClosedLostReasonMapper::GetNameForClosedLostReason(m_closedLostReason));
  }

  if(m_nextStepsHasBeenSet)
  {
   payload.WithString("NextSteps", m_nextSteps);

  }

  if(m_targetCloseDateHasBeenSet)
  {
   payload.WithString("TargetCloseDate", m_targetCloseDate);

  }

  if(m_reviewStatusHasBeenSet)
  {
   payload.WithString("ReviewStatus", ReviewStatusMapper::GetNameForReviewStatus(m_reviewStatus));
  }

  if(m_reviewCommentsHasBeenSet)
  {
   payload.WithString("ReviewComments", m_reviewComments);

  }

  if(m_reviewStatusReasonHasBeenSet)
  {
   payload.WithString("ReviewStatusReason", m_reviewStatusReason);

  }

  if(m_nextStepsHistoryHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> nextStepsHistoryJsonList(m_nextStepsHistory.size());
   for(unsigned nextStepsHistoryIndex = 0; nextStepsHistoryIndex < nextStepsHistoryJsonList.GetLength(); ++nextStepsHistoryIndex)
   {
     nextStepsHistoryJsonList[nextStepsHistoryIndex].AsObject(m_nextStepsHistory[nextStepsHistoryIndex].Jsonize());
   }
   payload.WithArray("NextStepsHistory", std::move(nextStepsHistoryJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
