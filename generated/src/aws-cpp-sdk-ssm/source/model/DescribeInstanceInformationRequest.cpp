/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/DescribeInstanceInformationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeInstanceInformationRequest::DescribeInstanceInformationRequest() : 
    m_instanceInformationFilterListHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String DescribeInstanceInformationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_instanceInformationFilterListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> instanceInformationFilterListJsonList(m_instanceInformationFilterList.size());
   for(unsigned instanceInformationFilterListIndex = 0; instanceInformationFilterListIndex < instanceInformationFilterListJsonList.GetLength(); ++instanceInformationFilterListIndex)
   {
     instanceInformationFilterListJsonList[instanceInformationFilterListIndex].AsObject(m_instanceInformationFilterList[instanceInformationFilterListIndex].Jsonize());
   }
   payload.WithArray("InstanceInformationFilterList", std::move(instanceInformationFilterListJsonList));

  }

  if(m_filtersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filtersJsonList(m_filters.size());
   for(unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex)
   {
     filtersJsonList[filtersIndex].AsObject(m_filters[filtersIndex].Jsonize());
   }
   payload.WithArray("Filters", std::move(filtersJsonList));

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

Aws::Http::HeaderValueCollection DescribeInstanceInformationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.DescribeInstanceInformation"));
  return headers;

}




