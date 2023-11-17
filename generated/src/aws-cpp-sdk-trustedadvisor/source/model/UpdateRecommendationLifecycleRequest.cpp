/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/trustedadvisor/model/UpdateRecommendationLifecycleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::TrustedAdvisor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateRecommendationLifecycleRequest::UpdateRecommendationLifecycleRequest() : 
    m_lifecycleStage(UpdateRecommendationLifecycleStage::NOT_SET),
    m_lifecycleStageHasBeenSet(false),
    m_recommendationIdentifierHasBeenSet(false),
    m_updateReasonHasBeenSet(false),
    m_updateReasonCode(UpdateRecommendationLifecycleStageReasonCode::NOT_SET),
    m_updateReasonCodeHasBeenSet(false)
{
}

Aws::String UpdateRecommendationLifecycleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_lifecycleStageHasBeenSet)
  {
   payload.WithString("lifecycleStage", UpdateRecommendationLifecycleStageMapper::GetNameForUpdateRecommendationLifecycleStage(m_lifecycleStage));
  }

  if(m_updateReasonHasBeenSet)
  {
   payload.WithString("updateReason", m_updateReason);

  }

  if(m_updateReasonCodeHasBeenSet)
  {
   payload.WithString("updateReasonCode", UpdateRecommendationLifecycleStageReasonCodeMapper::GetNameForUpdateRecommendationLifecycleStageReasonCode(m_updateReasonCode));
  }

  return payload.View().WriteReadable();
}




