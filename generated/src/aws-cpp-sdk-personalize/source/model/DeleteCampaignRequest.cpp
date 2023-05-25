/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/DeleteCampaignRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Personalize::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteCampaignRequest::DeleteCampaignRequest() : 
    m_campaignArnHasBeenSet(false)
{
}

Aws::String DeleteCampaignRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_campaignArnHasBeenSet)
  {
   payload.WithString("campaignArn", m_campaignArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteCampaignRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonPersonalize.DeleteCampaign"));
  return headers;

}




