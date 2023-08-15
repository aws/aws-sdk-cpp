/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pi/model/CreatePerformanceAnalysisReportRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PI::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreatePerformanceAnalysisReportRequest::CreatePerformanceAnalysisReportRequest() : 
    m_serviceType(ServiceType::NOT_SET),
    m_serviceTypeHasBeenSet(false),
    m_identifierHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreatePerformanceAnalysisReportRequest::SerializePayload() const
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

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreatePerformanceAnalysisReportRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PerformanceInsightsv20180227.CreatePerformanceAnalysisReport"));
  return headers;

}




