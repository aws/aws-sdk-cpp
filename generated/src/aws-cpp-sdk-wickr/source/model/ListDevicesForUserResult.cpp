/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/wickr/model/ListDevicesForUserResult.h>

#include <utility>

using namespace Aws::Wickr::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDevicesForUserResult::ListDevicesForUserResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListDevicesForUserResult& ListDevicesForUserResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("nextToken")) {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("devices")) {
    Aws::Utils::Array<JsonView> devicesJsonList = jsonValue.GetArray("devices");
    for (unsigned devicesIndex = 0; devicesIndex < devicesJsonList.GetLength(); ++devicesIndex) {
      m_devices.push_back(devicesJsonList[devicesIndex].AsObject());
    }
    m_devicesHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
