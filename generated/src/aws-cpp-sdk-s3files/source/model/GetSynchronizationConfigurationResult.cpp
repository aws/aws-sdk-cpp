/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/s3files/model/GetSynchronizationConfigurationResult.h>

#include <utility>

using namespace Aws::S3Files::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetSynchronizationConfigurationResult::GetSynchronizationConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

GetSynchronizationConfigurationResult& GetSynchronizationConfigurationResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("latestVersionNumber")) {
    m_latestVersionNumber = jsonValue.GetInteger("latestVersionNumber");
    m_latestVersionNumberHasBeenSet = true;
  }
  if (jsonValue.ValueExists("importDataRules")) {
    Aws::Utils::Array<JsonView> importDataRulesJsonList = jsonValue.GetArray("importDataRules");
    for (unsigned importDataRulesIndex = 0; importDataRulesIndex < importDataRulesJsonList.GetLength(); ++importDataRulesIndex) {
      m_importDataRules.push_back(importDataRulesJsonList[importDataRulesIndex].AsObject());
    }
    m_importDataRulesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("expirationDataRules")) {
    Aws::Utils::Array<JsonView> expirationDataRulesJsonList = jsonValue.GetArray("expirationDataRules");
    for (unsigned expirationDataRulesIndex = 0; expirationDataRulesIndex < expirationDataRulesJsonList.GetLength();
         ++expirationDataRulesIndex) {
      m_expirationDataRules.push_back(expirationDataRulesJsonList[expirationDataRulesIndex].AsObject());
    }
    m_expirationDataRulesHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
