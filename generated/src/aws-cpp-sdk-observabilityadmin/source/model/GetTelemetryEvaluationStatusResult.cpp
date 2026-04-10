/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/observabilityadmin/model/GetTelemetryEvaluationStatusResult.h>

#include <utility>

using namespace Aws::ObservabilityAdmin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetTelemetryEvaluationStatusResult::GetTelemetryEvaluationStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

GetTelemetryEvaluationStatusResult& GetTelemetryEvaluationStatusResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("Status")) {
    m_status = StatusMapper::GetStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FailureReason")) {
    m_failureReason = jsonValue.GetString("FailureReason");
    m_failureReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("HomeRegion")) {
    m_homeRegion = jsonValue.GetString("HomeRegion");
    m_homeRegionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RegionStatuses")) {
    Aws::Utils::Array<JsonView> regionStatusesJsonList = jsonValue.GetArray("RegionStatuses");
    for (unsigned regionStatusesIndex = 0; regionStatusesIndex < regionStatusesJsonList.GetLength(); ++regionStatusesIndex) {
      m_regionStatuses.push_back(regionStatusesJsonList[regionStatusesIndex].AsObject());
    }
    m_regionStatusesHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
