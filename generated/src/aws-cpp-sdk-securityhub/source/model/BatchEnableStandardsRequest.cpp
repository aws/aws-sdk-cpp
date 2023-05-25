/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/BatchEnableStandardsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchEnableStandardsRequest::BatchEnableStandardsRequest() : 
    m_standardsSubscriptionRequestsHasBeenSet(false)
{
}

Aws::String BatchEnableStandardsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_standardsSubscriptionRequestsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> standardsSubscriptionRequestsJsonList(m_standardsSubscriptionRequests.size());
   for(unsigned standardsSubscriptionRequestsIndex = 0; standardsSubscriptionRequestsIndex < standardsSubscriptionRequestsJsonList.GetLength(); ++standardsSubscriptionRequestsIndex)
   {
     standardsSubscriptionRequestsJsonList[standardsSubscriptionRequestsIndex].AsObject(m_standardsSubscriptionRequests[standardsSubscriptionRequestsIndex].Jsonize());
   }
   payload.WithArray("StandardsSubscriptionRequests", std::move(standardsSubscriptionRequestsJsonList));

  }

  return payload.View().WriteReadable();
}




