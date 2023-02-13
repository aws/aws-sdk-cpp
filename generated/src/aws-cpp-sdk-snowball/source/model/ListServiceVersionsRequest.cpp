/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snowball/model/ListServiceVersionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Snowball::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListServiceVersionsRequest::ListServiceVersionsRequest() : 
    m_serviceName(ServiceName::NOT_SET),
    m_serviceNameHasBeenSet(false),
    m_dependentServicesHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListServiceVersionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_serviceNameHasBeenSet)
  {
   payload.WithString("ServiceName", ServiceNameMapper::GetNameForServiceName(m_serviceName));
  }

  if(m_dependentServicesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dependentServicesJsonList(m_dependentServices.size());
   for(unsigned dependentServicesIndex = 0; dependentServicesIndex < dependentServicesJsonList.GetLength(); ++dependentServicesIndex)
   {
     dependentServicesJsonList[dependentServicesIndex].AsObject(m_dependentServices[dependentServicesIndex].Jsonize());
   }
   payload.WithArray("DependentServices", std::move(dependentServicesJsonList));

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

Aws::Http::HeaderValueCollection ListServiceVersionsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSIESnowballJobManagementService.ListServiceVersions"));
  return headers;

}




