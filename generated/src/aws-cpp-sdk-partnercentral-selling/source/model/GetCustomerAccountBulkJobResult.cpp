/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/partnercentral-selling/model/GetCustomerAccountBulkJobResult.h>

#include <utility>

using namespace Aws::PartnerCentralSelling::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetCustomerAccountBulkJobResult::GetCustomerAccountBulkJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetCustomerAccountBulkJobResult& GetCustomerAccountBulkJobResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("Arn")) {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Id")) {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = BulkJobStatusMapper::GetBulkJobStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FileName")) {
    m_fileName = jsonValue.GetString("FileName");
    m_fileNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TotalRecords")) {
    m_totalRecords = jsonValue.GetInteger("TotalRecords");
    m_totalRecordsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ProcessedRecords")) {
    m_processedRecords = jsonValue.GetInteger("ProcessedRecords");
    m_processedRecordsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SuccessCount")) {
    m_successCount = jsonValue.GetInteger("SuccessCount");
    m_successCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FailureCount")) {
    m_failureCount = jsonValue.GetInteger("FailureCount");
    m_failureCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DeletedCount")) {
    m_deletedCount = jsonValue.GetInteger("DeletedCount");
    m_deletedCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FailureReason")) {
    m_failureReason = jsonValue.GetString("FailureReason");
    m_failureReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedAt")) {
    m_createdAt = jsonValue.GetString("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CompletedAt")) {
    m_completedAt = jsonValue.GetString("CompletedAt");
    m_completedAtHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
