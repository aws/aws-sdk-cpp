/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pi/model/GetPerformanceAnalysisReportRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PI::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetPerformanceAnalysisReportRequest::GetPerformanceAnalysisReportRequest() : 
    m_serviceType(ServiceType::NOT_SET),
    m_serviceTypeHasBeenSet(false),
    m_identifierHasBeenSet(false),
    m_analysisReportIdHasBeenSet(false),
    m_textFormat(TextFormat::NOT_SET),
    m_textFormatHasBeenSet(false),
    m_acceptLanguage(AcceptLanguage::NOT_SET),
    m_acceptLanguageHasBeenSet(false)
{
}

Aws::String GetPerformanceAnalysisReportRequest::SerializePayload() const
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

  if(m_textFormatHasBeenSet)
  {
   payload.WithString("TextFormat", TextFormatMapper::GetNameForTextFormat(m_textFormat));
  }

  if(m_acceptLanguageHasBeenSet)
  {
   payload.WithString("AcceptLanguage", AcceptLanguageMapper::GetNameForAcceptLanguage(m_acceptLanguage));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetPerformanceAnalysisReportRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PerformanceInsightsv20180227.GetPerformanceAnalysisReport"));
  return headers;

}




