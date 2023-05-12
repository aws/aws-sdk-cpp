/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/DeleteRecommendationTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ResilienceHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteRecommendationTemplateRequest::DeleteRecommendationTemplateRequest() : 
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_recommendationTemplateArnHasBeenSet(false)
{
}

Aws::String DeleteRecommendationTemplateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_recommendationTemplateArnHasBeenSet)
  {
   payload.WithString("recommendationTemplateArn", m_recommendationTemplateArn);

  }

  return payload.View().WriteReadable();
}




