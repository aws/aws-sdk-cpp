/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/support/model/DescribeCommunicationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Support::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeCommunicationsRequest::DescribeCommunicationsRequest() : 
    m_caseIdHasBeenSet(false),
    m_beforeTimeHasBeenSet(false),
    m_afterTimeHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String DescribeCommunicationsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_caseIdHasBeenSet)
  {
   payload.WithString("caseId", m_caseId);

  }

  if(m_beforeTimeHasBeenSet)
  {
   payload.WithString("beforeTime", m_beforeTime);

  }

  if(m_afterTimeHasBeenSet)
  {
   payload.WithString("afterTime", m_afterTime);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeCommunicationsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSSupport_20130415.DescribeCommunications"));
  return headers;

}




