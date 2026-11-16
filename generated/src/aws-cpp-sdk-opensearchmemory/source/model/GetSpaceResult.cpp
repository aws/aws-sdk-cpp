/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/opensearchmemory/model/GetSpaceResult.h>

#include <utility>

using namespace Aws::OpenSearchMemory::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetSpaceResult::GetSpaceResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetSpaceResult& GetSpaceResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("spaceId")) {
    m_spaceId = jsonValue.GetString("spaceId");
    m_spaceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = SpaceStatusMapper::GetSpaceStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusReason")) {
    m_statusReason = jsonValue.GetString("statusReason");
    m_statusReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("memoryStrategies")) {
    Aws::Utils::Array<JsonView> memoryStrategiesJsonList = jsonValue.GetArray("memoryStrategies");
    for (unsigned memoryStrategiesIndex = 0; memoryStrategiesIndex < memoryStrategiesJsonList.GetLength(); ++memoryStrategiesIndex) {
      m_memoryStrategies.push_back(memoryStrategiesJsonList[memoryStrategiesIndex].AsObject());
    }
    m_memoryStrategiesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("eventExpiryDays")) {
    m_eventExpiryDays = jsonValue.GetInteger("eventExpiryDays");
    m_eventExpiryDaysHasBeenSet = true;
  }
  if (jsonValue.ValueExists("memoryExpiryDays")) {
    m_memoryExpiryDays = jsonValue.GetInteger("memoryExpiryDays");
    m_memoryExpiryDaysHasBeenSet = true;
  }
  if (jsonValue.ValueExists("extractionModelId")) {
    m_extractionModelId = jsonValue.GetString("extractionModelId");
    m_extractionModelIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("encryptionConfiguration")) {
    m_encryptionConfiguration = jsonValue.GetObject("encryptionConfiguration");
    m_encryptionConfigurationHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
