/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-selling/model/GetOpportunityBulkJobReportUrlRequest.h>

#include <utility>

using namespace Aws::PartnerCentralSelling::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetOpportunityBulkJobReportUrlRequest::SerializePayload() const {
  JsonValue payload;

  if (m_catalogHasBeenSet) {
    payload.WithString("Catalog", m_catalog);
  }

  if (m_jobIdHasBeenSet) {
    payload.WithString("JobId", m_jobId);
  }

  if (m_reportFormatHasBeenSet) {
    payload.WithString("ReportFormat", BulkFileFormatMapper::GetNameForBulkFileFormat(m_reportFormat));
  }

  if (m_reportTypeHasBeenSet) {
    payload.WithString("ReportType", BulkReportTypeMapper::GetNameForBulkReportType(m_reportType));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetOpportunityBulkJobReportUrlRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSPartnerCentralSelling.GetOpportunityBulkJobReportUrl"));
  return headers;
}
