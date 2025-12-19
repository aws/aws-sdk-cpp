/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/wickr/model/GetNetworkSettingsResult.h>

#include <utility>

using namespace Aws::Wickr::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetNetworkSettingsResult::GetNetworkSettingsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetNetworkSettingsResult& GetNetworkSettingsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("settings")) {
    Aws::Utils::Array<JsonView> settingsJsonList = jsonValue.GetArray("settings");
    for (unsigned settingsIndex = 0; settingsIndex < settingsJsonList.GetLength(); ++settingsIndex) {
      m_settings.push_back(settingsJsonList[settingsIndex].AsObject());
    }
    m_settingsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
