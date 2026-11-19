/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-selling/model/OpportunitySearchLifeCycle.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

OpportunitySearchLifeCycle::OpportunitySearchLifeCycle(JsonView jsonValue) { *this = jsonValue; }

OpportunitySearchLifeCycle& OpportunitySearchLifeCycle::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ReviewStatus")) {
    m_reviewStatus = ReviewStatusMapper::GetReviewStatusForName(jsonValue.GetString("ReviewStatus"));
    m_reviewStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Stage")) {
    m_stage = StageMapper::GetStageForName(jsonValue.GetString("Stage"));
    m_stageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NextSteps")) {
    m_nextSteps = jsonValue.GetString("NextSteps");
    m_nextStepsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TargetCloseDate")) {
    m_targetCloseDate = jsonValue.GetString("TargetCloseDate");
    m_targetCloseDateHasBeenSet = true;
  }
  return *this;
}

JsonValue OpportunitySearchLifeCycle::Jsonize() const {
  JsonValue payload;

  if (m_reviewStatusHasBeenSet) {
    payload.WithString("ReviewStatus", ReviewStatusMapper::GetNameForReviewStatus(m_reviewStatus));
  }

  if (m_stageHasBeenSet) {
    payload.WithString("Stage", StageMapper::GetNameForStage(m_stage));
  }

  if (m_nextStepsHasBeenSet) {
    payload.WithString("NextSteps", m_nextSteps);
  }

  if (m_targetCloseDateHasBeenSet) {
    payload.WithString("TargetCloseDate", m_targetCloseDate);
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
