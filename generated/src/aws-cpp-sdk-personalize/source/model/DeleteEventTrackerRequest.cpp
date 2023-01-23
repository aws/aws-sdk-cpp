/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/DeleteEventTrackerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Personalize::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteEventTrackerRequest::DeleteEventTrackerRequest() : 
    m_eventTrackerArnHasBeenSet(false)
{
}

Aws::String DeleteEventTrackerRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_eventTrackerArnHasBeenSet)
  {
   payload.WithString("eventTrackerArn", m_eventTrackerArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteEventTrackerRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonPersonalize.DeleteEventTracker"));
  return headers;

}




