/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/quicksight/model/UpdateAccessControlApplicationSecretResult.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateAccessControlApplicationSecretResult::UpdateAccessControlApplicationSecretResult(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

UpdateAccessControlApplicationSecretResult& UpdateAccessControlApplicationSecretResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("ClientSecretId")) {
    m_clientSecretId = jsonValue.GetString("ClientSecretId");
    m_clientSecretIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UpdatedAt")) {
    m_updatedAt = jsonValue.GetDouble("UpdatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RegionalSecretManagerArns")) {
    Aws::Map<Aws::String, JsonView> regionalSecretManagerArnsJsonMap = jsonValue.GetObject("RegionalSecretManagerArns").GetAllObjects();
    for (auto& regionalSecretManagerArnsItem : regionalSecretManagerArnsJsonMap) {
      m_regionalSecretManagerArns[regionalSecretManagerArnsItem.first] = regionalSecretManagerArnsItem.second.AsString();
    }
    m_regionalSecretManagerArnsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  m_status = static_cast<int>(result.GetResponseCode());
  m_statusHasBeenSet = true;
  return *this;
}
