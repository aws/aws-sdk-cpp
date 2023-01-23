/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/QueryLineageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

QueryLineageRequest::QueryLineageRequest() : 
    m_startArnsHasBeenSet(false),
    m_direction(Direction::NOT_SET),
    m_directionHasBeenSet(false),
    m_includeEdges(false),
    m_includeEdgesHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_maxDepth(0),
    m_maxDepthHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String QueryLineageRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_startArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> startArnsJsonList(m_startArns.size());
   for(unsigned startArnsIndex = 0; startArnsIndex < startArnsJsonList.GetLength(); ++startArnsIndex)
   {
     startArnsJsonList[startArnsIndex].AsString(m_startArns[startArnsIndex]);
   }
   payload.WithArray("StartArns", std::move(startArnsJsonList));

  }

  if(m_directionHasBeenSet)
  {
   payload.WithString("Direction", DirectionMapper::GetNameForDirection(m_direction));
  }

  if(m_includeEdgesHasBeenSet)
  {
   payload.WithBool("IncludeEdges", m_includeEdges);

  }

  if(m_filtersHasBeenSet)
  {
   payload.WithObject("Filters", m_filters.Jsonize());

  }

  if(m_maxDepthHasBeenSet)
  {
   payload.WithInteger("MaxDepth", m_maxDepth);

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

Aws::Http::HeaderValueCollection QueryLineageRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.QueryLineage"));
  return headers;

}




