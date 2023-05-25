/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/PutAccountSuppressionAttributesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutAccountSuppressionAttributesRequest::PutAccountSuppressionAttributesRequest() : 
    m_suppressedReasonsHasBeenSet(false)
{
}

Aws::String PutAccountSuppressionAttributesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_suppressedReasonsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> suppressedReasonsJsonList(m_suppressedReasons.size());
   for(unsigned suppressedReasonsIndex = 0; suppressedReasonsIndex < suppressedReasonsJsonList.GetLength(); ++suppressedReasonsIndex)
   {
     suppressedReasonsJsonList[suppressedReasonsIndex].AsString(SuppressionListReasonMapper::GetNameForSuppressionListReason(m_suppressedReasons[suppressedReasonsIndex]));
   }
   payload.WithArray("SuppressedReasons", std::move(suppressedReasonsJsonList));

  }

  return payload.View().WriteReadable();
}




