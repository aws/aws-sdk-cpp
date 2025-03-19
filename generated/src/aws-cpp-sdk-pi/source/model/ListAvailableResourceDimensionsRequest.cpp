/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pi/model/ListAvailableResourceDimensionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PI::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListAvailableResourceDimensionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_serviceTypeHasBeenSet)
  {
   payload.WithString("ServiceType", ServiceTypeMapper::GetNameForServiceType(m_serviceType));
  }

  if(m_identifierHasBeenSet)
  {
   payload.WithString("Identifier", m_identifier);

  }

  if(m_metricsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> metricsJsonList(m_metrics.size());
   for(unsigned metricsIndex = 0; metricsIndex < metricsJsonList.GetLength(); ++metricsIndex)
   {
     metricsJsonList[metricsIndex].AsString(m_metrics[metricsIndex]);
   }
   payload.WithArray("Metrics", std::move(metricsJsonList));

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_authorizedActionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> authorizedActionsJsonList(m_authorizedActions.size());
   for(unsigned authorizedActionsIndex = 0; authorizedActionsIndex < authorizedActionsJsonList.GetLength(); ++authorizedActionsIndex)
   {
     authorizedActionsJsonList[authorizedActionsIndex].AsString(FineGrainedActionMapper::GetNameForFineGrainedAction(m_authorizedActions[authorizedActionsIndex]));
   }
   payload.WithArray("AuthorizedActions", std::move(authorizedActionsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListAvailableResourceDimensionsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PerformanceInsightsv20180227.ListAvailableResourceDimensions"));
  return headers;

}




