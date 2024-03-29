﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pi/model/DeletePerformanceAnalysisReportRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PI::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeletePerformanceAnalysisReportRequest::DeletePerformanceAnalysisReportRequest() : 
    m_serviceType(ServiceType::NOT_SET),
    m_serviceTypeHasBeenSet(false),
    m_identifierHasBeenSet(false),
    m_analysisReportIdHasBeenSet(false)
{
}

Aws::String DeletePerformanceAnalysisReportRequest::SerializePayload() const
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

  if(m_analysisReportIdHasBeenSet)
  {
   payload.WithString("AnalysisReportId", m_analysisReportId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeletePerformanceAnalysisReportRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PerformanceInsightsv20180227.DeletePerformanceAnalysisReport"));
  return headers;

}




