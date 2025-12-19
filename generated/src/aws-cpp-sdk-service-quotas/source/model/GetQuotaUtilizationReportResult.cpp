/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/service-quotas/model/GetQuotaUtilizationReportResult.h>

#include <utility>

using namespace Aws::ServiceQuotas::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetQuotaUtilizationReportResult::GetQuotaUtilizationReportResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetQuotaUtilizationReportResult& GetQuotaUtilizationReportResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("ReportId")) {
    m_reportId = jsonValue.GetString("ReportId");
    m_reportIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = ReportStatusMapper::GetReportStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("GeneratedAt")) {
    m_generatedAt = jsonValue.GetDouble("GeneratedAt");
    m_generatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TotalCount")) {
    m_totalCount = jsonValue.GetInteger("TotalCount");
    m_totalCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Quotas")) {
    Aws::Utils::Array<JsonView> quotasJsonList = jsonValue.GetArray("Quotas");
    for (unsigned quotasIndex = 0; quotasIndex < quotasJsonList.GetLength(); ++quotasIndex) {
      m_quotas.push_back(quotasJsonList[quotasIndex].AsObject());
    }
    m_quotasHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NextToken")) {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ErrorCode")) {
    m_errorCode = jsonValue.GetString("ErrorCode");
    m_errorCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ErrorMessage")) {
    m_errorMessage = jsonValue.GetString("ErrorMessage");
    m_errorMessageHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
