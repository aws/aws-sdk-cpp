/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/LifeCycleForView.h>
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

LifeCycleForView::LifeCycleForView(JsonView jsonValue)
{
  *this = jsonValue;
}

LifeCycleForView& LifeCycleForView::operator =(JsonView jsonValue)
{
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
  if(jsonValue.ValueExists("Stage"))
  {
    m_stage = StageMapper::GetStageForName(jsonValue.GetString("Stage"));
    m_stageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextSteps"))
  {
    m_nextSteps = jsonValue.GetString("NextSteps");
    m_nextStepsHasBeenSet = true;
  }
  return *this;
}

JsonValue LifeCycleForView::Jsonize() const
{
  JsonValue payload;

  if(m_targetCloseDateHasBeenSet)
  {
   payload.WithString("TargetCloseDate", m_targetCloseDate);

  }

  if(m_reviewStatusHasBeenSet)
  {
   payload.WithString("ReviewStatus", ReviewStatusMapper::GetNameForReviewStatus(m_reviewStatus));
  }

  if(m_stageHasBeenSet)
  {
   payload.WithString("Stage", StageMapper::GetNameForStage(m_stage));
  }

  if(m_nextStepsHasBeenSet)
  {
   payload.WithString("NextSteps", m_nextSteps);

  }

  return payload;
}

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
