/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/opensearch/model/GetCapabilityResult.h>

#include <utility>

using namespace Aws::OpenSearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetCapabilityResult::GetCapabilityResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetCapabilityResult& GetCapabilityResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("capabilityName")) {
    m_capabilityName = jsonValue.GetString("capabilityName");
    m_capabilityNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("applicationId")) {
    m_applicationId = jsonValue.GetString("applicationId");
    m_applicationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = CapabilityStatusMapper::GetCapabilityStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("capabilityConfig")) {
    m_capabilityConfig = jsonValue.GetObject("capabilityConfig");
    m_capabilityConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("failures")) {
    Aws::Utils::Array<JsonView> failuresJsonList = jsonValue.GetArray("failures");
    for (unsigned failuresIndex = 0; failuresIndex < failuresJsonList.GetLength(); ++failuresIndex) {
      m_failures.push_back(failuresJsonList[failuresIndex].AsObject());
    }
    m_failuresHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
