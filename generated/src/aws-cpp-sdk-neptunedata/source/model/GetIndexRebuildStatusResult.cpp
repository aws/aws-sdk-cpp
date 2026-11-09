/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/neptunedata/model/GetIndexRebuildStatusResult.h>

#include <utility>

using namespace Aws::neptunedata::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetIndexRebuildStatusResult::GetIndexRebuildStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetIndexRebuildStatusResult& GetIndexRebuildStatusResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("status")) {
    m_status = RebuildStatusMapper::GetRebuildStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scope")) {
    m_scope = ScopeMapper::GetScopeForName(jsonValue.GetString("scope"));
    m_scopeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("concurrency")) {
    m_concurrency = jsonValue.GetInteger("concurrency");
    m_concurrencyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("writeBufferSize")) {
    m_writeBufferSize = WriteBufferSizeMapper::GetWriteBufferSizeForName(jsonValue.GetString("writeBufferSize"));
    m_writeBufferSizeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("startTime")) {
    m_startTime = jsonValue.GetString("startTime");
    m_startTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("progressPercentage")) {
    m_progressPercentage = jsonValue.GetInteger("progressPercentage");
    m_progressPercentageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("estimatedEndTime")) {
    m_estimatedEndTime = jsonValue.GetString("estimatedEndTime");
    m_estimatedEndTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endTime")) {
    m_endTime = jsonValue.GetString("endTime");
    m_endTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("failureReason")) {
    m_failureReason = jsonValue.GetString("failureReason");
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
