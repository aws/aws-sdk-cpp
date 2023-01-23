/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/DescribeProjectsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Rekognition::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeProjectsRequest::DescribeProjectsRequest() : 
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_projectNamesHasBeenSet(false)
{
}

Aws::String DescribeProjectsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_projectNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> projectNamesJsonList(m_projectNames.size());
   for(unsigned projectNamesIndex = 0; projectNamesIndex < projectNamesJsonList.GetLength(); ++projectNamesIndex)
   {
     projectNamesJsonList[projectNamesIndex].AsString(m_projectNames[projectNamesIndex]);
   }
   payload.WithArray("ProjectNames", std::move(projectNamesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeProjectsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "RekognitionService.DescribeProjects"));
  return headers;

}




