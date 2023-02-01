/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resource-explorer-2/model/SearchRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ResourceExplorer2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SearchRequest::SearchRequest() : 
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_queryStringHasBeenSet(false),
    m_viewArnHasBeenSet(false)
{
}

Aws::String SearchRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_queryStringHasBeenSet)
  {
   payload.WithString("QueryString", m_queryString);

  }

  if(m_viewArnHasBeenSet)
  {
   payload.WithString("ViewArn", m_viewArn);

  }

  return payload.View().WriteReadable();
}




