/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/trustedadvisor/model/AccountRecommendationLifecycleSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TrustedAdvisor
{
namespace Model
{

AccountRecommendationLifecycleSummary::AccountRecommendationLifecycleSummary() : 
    m_accountIdHasBeenSet(false),
    m_accountRecommendationArnHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_lifecycleStage(RecommendationLifecycleStage::NOT_SET),
    m_lifecycleStageHasBeenSet(false),
    m_updateReasonHasBeenSet(false),
    m_updateReasonCode(UpdateRecommendationLifecycleStageReasonCode::NOT_SET),
    m_updateReasonCodeHasBeenSet(false),
    m_updatedOnBehalfOfHasBeenSet(false),
    m_updatedOnBehalfOfJobTitleHasBeenSet(false)
{
}

AccountRecommendationLifecycleSummary::AccountRecommendationLifecycleSummary(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_accountRecommendationArnHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_lifecycleStage(RecommendationLifecycleStage::NOT_SET),
    m_lifecycleStageHasBeenSet(false),
    m_updateReasonHasBeenSet(false),
    m_updateReasonCode(UpdateRecommendationLifecycleStageReasonCode::NOT_SET),
    m_updateReasonCodeHasBeenSet(false),
    m_updatedOnBehalfOfHasBeenSet(false),
    m_updatedOnBehalfOfJobTitleHasBeenSet(false)
{
  *this = jsonValue;
}

AccountRecommendationLifecycleSummary& AccountRecommendationLifecycleSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("accountRecommendationArn"))
  {
    m_accountRecommendationArn = jsonValue.GetString("accountRecommendationArn");

    m_accountRecommendationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetString("lastUpdatedAt");

    m_lastUpdatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lifecycleStage"))
  {
    m_lifecycleStage = RecommendationLifecycleStageMapper::GetRecommendationLifecycleStageForName(jsonValue.GetString("lifecycleStage"));

    m_lifecycleStageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updateReason"))
  {
    m_updateReason = jsonValue.GetString("updateReason");

    m_updateReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updateReasonCode"))
  {
    m_updateReasonCode = UpdateRecommendationLifecycleStageReasonCodeMapper::GetUpdateRecommendationLifecycleStageReasonCodeForName(jsonValue.GetString("updateReasonCode"));

    m_updateReasonCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedOnBehalfOf"))
  {
    m_updatedOnBehalfOf = jsonValue.GetString("updatedOnBehalfOf");

    m_updatedOnBehalfOfHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedOnBehalfOfJobTitle"))
  {
    m_updatedOnBehalfOfJobTitle = jsonValue.GetString("updatedOnBehalfOfJobTitle");

    m_updatedOnBehalfOfJobTitleHasBeenSet = true;
  }

  return *this;
}

JsonValue AccountRecommendationLifecycleSummary::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_accountRecommendationArnHasBeenSet)
  {
   payload.WithString("accountRecommendationArn", m_accountRecommendationArn);

  }

  if(m_lastUpdatedAtHasBeenSet)
  {
   payload.WithString("lastUpdatedAt", m_lastUpdatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_lifecycleStageHasBeenSet)
  {
   payload.WithString("lifecycleStage", RecommendationLifecycleStageMapper::GetNameForRecommendationLifecycleStage(m_lifecycleStage));
  }

  if(m_updateReasonHasBeenSet)
  {
   payload.WithString("updateReason", m_updateReason);

  }

  if(m_updateReasonCodeHasBeenSet)
  {
   payload.WithString("updateReasonCode", UpdateRecommendationLifecycleStageReasonCodeMapper::GetNameForUpdateRecommendationLifecycleStageReasonCode(m_updateReasonCode));
  }

  if(m_updatedOnBehalfOfHasBeenSet)
  {
   payload.WithString("updatedOnBehalfOf", m_updatedOnBehalfOf);

  }

  if(m_updatedOnBehalfOfJobTitleHasBeenSet)
  {
   payload.WithString("updatedOnBehalfOfJobTitle", m_updatedOnBehalfOfJobTitle);

  }

  return payload;
}

} // namespace Model
} // namespace TrustedAdvisor
} // namespace Aws
