/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/odb/model/ListFlexComponentsResult.h>

#include <utility>

using namespace Aws::odb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListFlexComponentsResult::ListFlexComponentsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListFlexComponentsResult& ListFlexComponentsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("nextToken")) {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("flexComponents")) {
    Aws::Utils::Array<JsonView> flexComponentsJsonList = jsonValue.GetArray("flexComponents");
    for (unsigned flexComponentsIndex = 0; flexComponentsIndex < flexComponentsJsonList.GetLength(); ++flexComponentsIndex) {
      m_flexComponents.push_back(flexComponentsJsonList[flexComponentsIndex].AsObject());
    }
    m_flexComponentsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
