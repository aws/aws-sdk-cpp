/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/DescribeInstancePropertiesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeInstancePropertiesRequest::DescribeInstancePropertiesRequest() : 
    m_instancePropertyFilterListHasBeenSet(false),
    m_filtersWithOperatorHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String DescribeInstancePropertiesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_instancePropertyFilterListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> instancePropertyFilterListJsonList(m_instancePropertyFilterList.size());
   for(unsigned instancePropertyFilterListIndex = 0; instancePropertyFilterListIndex < instancePropertyFilterListJsonList.GetLength(); ++instancePropertyFilterListIndex)
   {
     instancePropertyFilterListJsonList[instancePropertyFilterListIndex].AsObject(m_instancePropertyFilterList[instancePropertyFilterListIndex].Jsonize());
   }
   payload.WithArray("InstancePropertyFilterList", std::move(instancePropertyFilterListJsonList));

  }

  if(m_filtersWithOperatorHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filtersWithOperatorJsonList(m_filtersWithOperator.size());
   for(unsigned filtersWithOperatorIndex = 0; filtersWithOperatorIndex < filtersWithOperatorJsonList.GetLength(); ++filtersWithOperatorIndex)
   {
     filtersWithOperatorJsonList[filtersWithOperatorIndex].AsObject(m_filtersWithOperator[filtersWithOperatorIndex].Jsonize());
   }
   payload.WithArray("FiltersWithOperator", std::move(filtersWithOperatorJsonList));

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

Aws::Http::HeaderValueCollection DescribeInstancePropertiesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.DescribeInstanceProperties"));
  return headers;

}




