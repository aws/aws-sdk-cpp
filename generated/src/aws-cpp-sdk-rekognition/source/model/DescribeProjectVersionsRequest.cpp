/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/DescribeProjectVersionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Rekognition::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeProjectVersionsRequest::DescribeProjectVersionsRequest() : 
    m_projectArnHasBeenSet(false),
    m_versionNamesHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String DescribeProjectVersionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_projectArnHasBeenSet)
  {
   payload.WithString("ProjectArn", m_projectArn);

  }

  if(m_versionNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> versionNamesJsonList(m_versionNames.size());
   for(unsigned versionNamesIndex = 0; versionNamesIndex < versionNamesJsonList.GetLength(); ++versionNamesIndex)
   {
     versionNamesJsonList[versionNamesIndex].AsString(m_versionNames[versionNamesIndex]);
   }
   payload.WithArray("VersionNames", std::move(versionNamesJsonList));

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeProjectVersionsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "RekognitionService.DescribeProjectVersions"));
  return headers;

}




