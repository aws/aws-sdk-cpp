/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-contacts/model/StopEngagementRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSMContacts::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StopEngagementRequest::StopEngagementRequest() : 
    m_engagementIdHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
}

Aws::String StopEngagementRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_engagementIdHasBeenSet)
  {
   payload.WithString("EngagementId", m_engagementId);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("Reason", m_reason);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StopEngagementRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SSMContacts.StopEngagement"));
  return headers;

}




