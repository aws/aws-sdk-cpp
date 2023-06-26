/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-contacts/model/DescribeEngagementRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSMContacts::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeEngagementRequest::DescribeEngagementRequest() : 
    m_engagementIdHasBeenSet(false)
{
}

Aws::String DescribeEngagementRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_engagementIdHasBeenSet)
  {
   payload.WithString("EngagementId", m_engagementId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeEngagementRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SSMContacts.DescribeEngagement"));
  return headers;

}




