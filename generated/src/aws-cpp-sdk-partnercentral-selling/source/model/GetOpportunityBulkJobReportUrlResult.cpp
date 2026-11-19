/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/partnercentral-selling/model/GetOpportunityBulkJobReportUrlResult.h>

#include <utility>

using namespace Aws::PartnerCentralSelling::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetOpportunityBulkJobReportUrlResult::GetOpportunityBulkJobReportUrlResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

GetOpportunityBulkJobReportUrlResult& GetOpportunityBulkJobReportUrlResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("ReportStatus")) {
    m_reportStatus = BulkReportStatusMapper::GetBulkReportStatusForName(jsonValue.GetString("ReportStatus"));
    m_reportStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ReportType")) {
    m_reportType = BulkReportTypeMapper::GetBulkReportTypeForName(jsonValue.GetString("ReportType"));
    m_reportTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ReportFormat")) {
    m_reportFormat = BulkFileFormatMapper::GetBulkFileFormatForName(jsonValue.GetString("ReportFormat"));
    m_reportFormatHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Url")) {
    m_url = jsonValue.GetString("Url");
    m_urlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExpiresAt")) {
    m_expiresAt = jsonValue.GetString("ExpiresAt");
    m_expiresAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FailureReason")) {
    m_failureReason = jsonValue.GetString("FailureReason");
    m_failureReasonHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
