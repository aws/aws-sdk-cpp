/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/textract/model/ListAdapterVersionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Textract::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListAdapterVersionsRequest::ListAdapterVersionsRequest() : 
    m_adapterIdHasBeenSet(false),
    m_afterCreationTimeHasBeenSet(false),
    m_beforeCreationTimeHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListAdapterVersionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_adapterIdHasBeenSet)
  {
   payload.WithString("AdapterId", m_adapterId);

  }

  if(m_afterCreationTimeHasBeenSet)
  {
   payload.WithDouble("AfterCreationTime", m_afterCreationTime.SecondsWithMSPrecision());
  }

  if(m_beforeCreationTimeHasBeenSet)
  {
   payload.WithDouble("BeforeCreationTime", m_beforeCreationTime.SecondsWithMSPrecision());
  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListAdapterVersionsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Textract.ListAdapterVersions"));
  return headers;

}




